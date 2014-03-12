#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define NUM_THREADS 8
#define PER_THREAD 2000000

unsigned long int sum = 0;
pthread_mutex_t lock;

#define USE_PTHREAD_LOCK 0

void *func(void *argp)
{
  unsigned long int j;
  int start = *( (int *) argp);
  for (j = start * PER_THREAD + 1; j <= (start+1) * PER_THREAD; j++) {
#if USE_PTHREAD_LOCK
    pthread_mutex_lock(&lock);  // locks this region
    sum += j;
    pthread_mutex_unlock(&lock);  // unlocks this region
#else
    __sync_add_and_fetch(&sum, j); // atomic add
#endif
  }
  pthread_exit(NULL);
}

int main(void) {
  int i;
  pthread_t tid;
  int *args = malloc(NUM_THREADS * sizeof(int));
  pthread_t *threads = malloc(NUM_THREADS * sizeof(pthread_t));

  pthread_mutex_init(&lock, NULL);

  for(i = 0; i < NUM_THREADS; i++)
  {
    args[i] = i;
    pthread_create(&threads[i], NULL, func, (void *) &args[i]);
  }

  for(i = 0; i < NUM_THREADS; i++)
    pthread_join(threads[i], NULL);

  unsigned long int n = PER_THREAD * NUM_THREADS;
  printf("sum=%lu vs %lu\n", sum, n * (n+1)  / 2);
  return 0;
}
