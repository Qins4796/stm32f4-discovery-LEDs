#ifndef __SEMAPHORE_H
#define __SEMAPHORE_H

#include <stdint.h>
#include "LinkedList.h"

typedef struct {
	uint32_t		counter;
	uint32_t		size;
	LinkedList		blockedTcb;
}Semaphore;

void SemaphoreInit(Semaphore *semaphore, uint32_t initCount);
void SemaphoreUp(Semaphore *semaphore);
void SemaphoreDown(Semaphore *semaphore);

#endif /* __SEMAPHORE_H */



