/*
 @ Copyright (C) 2010-2013, Shaomin Zhang. All rights reserved.
 
 @ File: dtv_inc_epgv.c
 
 @ Summary: This file is part of High-Level-APIs, which contain all
         possible high level interfaces of DTV/DVB and its similar
         neighbor application services.
 
 @ Revision:
  1.0          Shaomin (Samuel) Zhang       2013-11-21
 
 */

#include "dtv_inc_pubh.h"
#include "dtv_inc_epgv.h"

/*
 @ get channel count in epgv.
 */
int dtv__epgv_get_channel_count(void)
{
	return 10;
}

/*
 @ get channel name by its index.
 */
void dtv__epgv_get_channel( char *channel_name, int channel_name_bufsize, int channel_index )
{
	if( channel_name != NULL && channel_name_bufsize >= 12 )
	{
		snprintf( channel_name, channel_name_bufsize, "Channel_%d", channel_index + 1);
	}
}

/*
 @ get channel number by its index.
 */
int dtv__epgv_get_channel_number( int channel_index )
{
	return ( 1 + channel_index );
}

/*
 @ select a channel (without play).
 */
void dtv__epgv_select_channel( int channel_index )
{
}

/*
 @ select a channel (with play).
 */
void dtv__epgv_select_channel_to_play( int channel_index )
{
}

/*
 @ get playing channel index.
 */
int dtv__epgv_get_playing_channel_index(void)
{
	return 3;
}

/*
 @ get EPG day count of this channel.
 */
int dtv__epgv_get_day_count(void)
{
	return 5;
}

/*
 @ get data, format as "Dec/9th Fri" or somelike else.
 */
void dtv__epgv_get_date( char *date_formatted, int date_bufsize, int day_index )
{
	if( date_formatted != NULL && date_bufsize >= 16 )
	{
		strncpy( date_formatted, "Nov 25th Mon", date_bufsize );
	}
}

/*
 @ select a day to show EPG.
 */
void dtv__epgv_select_day( int day_index )
{
}

/*
 @ get program count on the selected day.
 */
int dtv__epgv_get_program_count(void)
{
	return 5;
}

/*
 @ get program by its index.
 */
void dtv__epgv_get_program( char *start_time_hhmm, int start_time_bufsize,
	                        char *end_time_hhmm, int end_time_bufsize,
	                        char *program_name, int program_name_bufsize,
	                        int program_index )
{
	if( start_time_hhmm != NULL && start_time_bufsize >= 8 )
	{
		strncpy( start_time_hhmm, "11:30", start_time_bufsize );
	}
	if( end_time_hhmm != NULL && end_time_bufsize >= 8 )
	{
		strncpy( end_time_hhmm, "13:00", end_time_bufsize );
	}
	if( program_name != NULL && program_name_bufsize >= 12 )
	{
		snprintf( program_name, program_name_bufsize, "Program_%d", program_index + 1 );
	}
}

/*
 @ check whether a program is booked for liveplay.
 */
bool dtv__epgv_is_program_booked_for_liveplay( int program_index )
{
	return true;
}

/*
 @ check whether a program is booked for recording.
 */
bool dtv__epgv_is_program_booked_for_recording( int program_index )
{
	return true;
}

/*
 @ get program description.
 */
void dtv__epgv_get_program_description( char *program_des, int program_des_bufsize, int program_index )
{
	if( program_des != NULL && program_des_bufsize >= 128 )
	{
		snprintf( program_des, program_des_bufsize, "the program %d is desribed about history", program_index );
	}
}

/*
 @ book a program for live-play, return as following:
	"success",
	"conflict",
	"overtime",
	"maxlimit",
	"overlap",
	"unknown",
 */
const char *dtv__epgv_add_program_booked_for_liveplay( int program_index )
{
	return "successs";
}

/*
 @ book a program for recording.
 */
const char *dtv__epgv_add_program_booked_for_recording( int program_index )
{
	return "success";
}

/*
 @ cancel booking a program for live-play.
 */
void dtv__epgv_delete_program_booked_for_liveplay( int program_index )
{
}

/*
 @ cancel booking a program for recording.
 */
void dtv__epgv_delete_program_booked_for_recording( int program_index )
{
}

