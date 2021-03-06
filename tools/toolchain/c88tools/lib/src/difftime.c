/*
 *	@(#)difftime.c	1.2
 */

/**************************************************************************
**                                                                        *
**  FILE        :  difftime.c                                             *
**                                                                        *
**  DESCRIPTION :  The difftime function compute the difference between   *
**		   two calendar times.                                    *
**                                                                        *
**  COPYRIGHT   :  1996 Tasking Software B.V.                             *
**                                                                        *
**************************************************************************/
#include <time.h>

double difftime(  time_t time1, time_t time0 )
{
	signed long  dftime = time1 - time0;

	return( (double)dftime );
}
