#ifndef __CUDAERROR_H__
#define __CUDAERROR_H__

#include <stdlib.h>
#include <stdio.h>
#include "error.h"

/*
 * Function: ecudaMalloc
 * --------------------------------------------------------
 * Like cudaMalloc, but exit the program with an error message on
 * failure.
 *
 * @args devptr : pointer to data at device
 *       size : size_t
 *
 * @return
 */
void ecudaMalloc(void** devptr, size_t size);

/*
 * Function: ecudaMemcpy
 * --------------------------------------------------------
 * Like cudaMemcpy, but exit the program with an error message on
 * failure.
 *
 * @args dst : destination pointer
 *       src : source pointer
 *       count : size of the memory to be copyed
 *       kind : type of operation
 *
 * @return
 */
void ecudaMemcpy(void* dst, const void* src, size_t count, enum cudaMemcpyKind kind);

/*
 * Function: ecudaFree
 * --------------------------------------------------------
 * Like cudaFree, but exit the program with an error message on
 * failure.
 *
 * @args devptr : pointer to data at device
 *
 * @return
 */
void ecudaFree(void* devptr);

#endif
