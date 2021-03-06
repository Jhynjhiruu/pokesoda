/*
 *	@(#)malloc.h	1.1
 */

/**************************************************************************
**                                                                        *
**  FILE        :  malloc.h                                               *
**                                                                        *
**  DESCRIPTION :  Include file with prototypes of functions for          *
**                 memory allocation.                                     *
**                                                                        *
**  COPYRIGHT   :  1996 Tasking Software B.V., Amersfoort                 *
**                                                                        *
**************************************************************************/

#ifndef _MALLOC_H
#define _MALLOC_H

#ifndef _STDLIB_H

#ifndef _SIZE_T_DEF
typedef unsigned int	size_t;
#define _SIZE_T_DEF
#endif

#define NULL	0

void *	calloc	( size_t, size_t );
void *	malloc	( size_t );
void *	realloc	( void *, size_t );

#endif	/* _STDLIB_H */

#endif	/* _MALLOC_H */
