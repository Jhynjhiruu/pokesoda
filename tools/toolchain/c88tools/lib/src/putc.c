/*
 *	Version : @(#)putc.c	1.2	
 */

/**************************************************************************
**                                                                        *
**  FILE        :  putc.c                                                 *
**                                                                        *
**  DESCRIPTION :  Source file for putc() routine                         *
**                 Writes one character to output.                        *
**                                                                        *
**  COPYRIGHT   :  1996 Tasking Software B.V.                             *
**                                                                        *
**************************************************************************/
#include <stdio.h>

#undef putc

int
putc( int c, FILE * stream )
{
	if( --(stream)->_cnt >= 0 )
	{
		*stream->_ptr++ = (char)c;
		return( c & 0xFF );
	}
	else
	{
		return( _flsbuf( (unsigned char)c, stream ) );
	}
}
