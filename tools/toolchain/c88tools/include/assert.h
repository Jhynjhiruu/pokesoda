/*
 *	@(#)assert.h	1.1
 */

/**************************************************************************
**                                                                        *
**  FILE        :  assert.h                                               *
**                                                                        *
**  DESCRIPTION :  Include file with prototypes and macros to add         *
**                 diagnostics to programs                                *
**                                                                        *
**  COPYRIGHT   :  1996 Tasking Software B.V., Amersfoort                 *
**                                                                        *
**************************************************************************/

#undef assert

#include <stdio.h>	/* prototype for 'printf' */
#include <stdlib.h>	/* prototype for 'exit' */

#ifndef NDEBUG

#define assert( _expr )								\
	( (void)( !(_expr) ?							\
	  printf( "Assertion failed: (" #_expr ") file %s, line %d\n",		\
		__FILE__, __LINE__ ),exit( 1 ) : (void)0			\
	))

#else

#define	assert( _expr )		((void)0)

#endif	/* NDEBUG */
