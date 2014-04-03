/** 
 * @file	my_string.c
 * @brief	A source file for my string library
 *
 * 
 * Copyright 2014 by mnxoid,
 * 
 * This software is the confidential and proprietary information
 * of mnxoid ("Confidential Information").  You
 * shall not disclose such Confidential Information and shall use
 * it only in accordance with the terms of the license agreement
 * you entered into with mnxoid.
 **/
char * Strcpy( char * destination, const char * source )
 {
    memcpy( destination, source, sizeof( source ) );
    return destination;
 }
