/*
 *	Version : @(#)sprintf.c	1.2	
 */

/**************************************************************************
**                                                                        *
**  FILE        :  sprintf.c                                              *
**                                                                        *
**  DESCRIPTION :  Source file for sprintf() routine                      *
**                                                                        *
**  COPYRIGHT   :  1996 Tasking Software B.V.                             *
**                                                                        *
**************************************************************************/

#include <stdarg.h>
#include <stdio.h>
#include <limits.h>

extern int	_doprint( const char *, va_list, FILE * );

int
sprintf( char *s, const char *format, ... )
{
	va_list		ap;
	register int	chars;
	struct _iobuf	_strbuf;

	va_start( ap, format );
	_strbuf._flag = _IOWRT|_IOSTRG;
	_strbuf._ptr = s;
	_strbuf._cnt = INT_MAX;
	chars = _doprint( format, ap, &_strbuf );
	va_end( ap );
	fputc('\0', &_strbuf);	/* terminate string with a NULL byte */

	return( chars );	/* return number of characters written */
}
