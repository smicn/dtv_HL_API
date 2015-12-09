/*
 @ Copyright (C) 2010-2013, Shaomin Zhang. All rights reserved.
 
 @ File: dtv_inc_epgh.c
 
 @ Summary: This file is part of High-Level-APIs, which contain all
         possible high level interfaces of DTV/DVB and its similar
         neighbor application services.
 
 @ Revision:
  1.0          Shaomin (Samuel) Zhang       2013-11-21
 
 */

#include "dtv_inc_pubh.h"
#include "dtv_inc_epgh.h"

/*
 @ get channel count in epgh.
 */
int dtv__epgh_get_channel_count(void)
{
	dtv_dbg( "%s(): sorry, not supported!\n", __FUNCTION__ );
	return 0;
}

/*
 @ get channel name by its index.
 */
void dtv__epgh_get_channel( char *channel_name, int channel_name_bufsize, int channel_index )
{
	dtv_dbg( "%s(): sorry, not supported!\n", __FUNCTION__ );
}

/*
 @ get channel number by its index.
 */
int dtv__epgh_get_channel_number( int channel_index )
{
	dtv_dbg( "%s(): sorry, not supported!\n", __FUNCTION__ );
	return 1;
}

/*
 @ select a channel (without play).
 */
void dtv__epgh_select_channel( int channel_index )
{
	dtv_dbg( "%s(): sorry, not supported!\n", __FUNCTION__ );
}

/*
 @ select a channel (with play).
 */
void dtv__epgh_select_channel_to_play( int channel_index )
{
	dtv_dbg( "%s(): sorry, not supported!\n", __FUNCTION__ );
}

/*
 @ get playing channel index.
 */
int dtv__epgh_get_playing_channel_index(void)
{
	dtv_dbg( "%s(): sorry, not supported!\n", __FUNCTION__ );
	return 0;
}

/*
 @ get time point count around the current position of timeline.
 */
int dtv__epgh_get_timepoint_count(void)
{
	dtv_dbg( "%s(): sorry, not supported!\n", __FUNCTION__ );
	return 0;
}

/*
 @ get time point, "hh:mm".
 */
void dtv__epgh_get_timepoint_time( char *time_hhmm, int time_buflen, int timepoint_index )
{
	dtv_dbg( "%s(): sorry, not supported!\n", __FUNCTION__ );
}

/*
 @ let timeline go forward, that's, each timepoint++.
 */
void dtv__epgh_timeline_go_forward(void)
{
	dtv_dbg( "%s(): sorry, not supported!\n", __FUNCTION__ );
}

/*
 @ let timeline go backward, that's, each timepoint--.
 */
void dtv__epgh_timeline_go_backward(void)
{
	dtv_dbg( "%s(): sorry, not supported!\n", __FUNCTION__ );
}

/*
 @ get the date around the current position of timeline.
 */
void dtv__epgh_get_timeline_date( char *date, int date_buflen )
{
	dtv_dbg( "%s(): sorry, not supported!\n", __FUNCTION__ );
}

/*
 @ get program count of given channel, around the current position of timeline.
 */
int dtv__epgh_get_program_count( int channel_index )
{
	dtv_dbg( "%s(): sorry, not supported!\n", __FUNCTION__ );
	return 0;
}

/*
 @ get given program's timespan, using percent[0, 100] to describe the x-coordinate.
 */
void dtv__epgh_get_program_timespan( int *start_percent, int *width_percent, int channel_index, int program_index )
{
	dtv_dbg( "%s(): sorry, not supported!\n", __FUNCTION__ );
}

/*
 @ get program by its index.
 */
void dtv__epgh_get_program( char *start_time_hhmm, int start_time_bufsize,
	                        char *end_time_hhmm, int end_time_bufsize,
	                        char *program_name, int program_name_bufsize,
	                        int channel_index, int program_index )
{
	dtv_dbg( "%s(): sorry, not supported!\n", __FUNCTION__ );
}

/*
 @ check whether a program is booked for liveplay.
 */
bool dtv__epgh_is_program_booked_for_liveplay( int channel_index, int program_index )
{
	dtv_dbg( "%s(): sorry, not supported!\n", __FUNCTION__ );
	return false;
}

/*
 @ check whether a program is booked for recording.
 */
bool dtv__epgh_is_program_booked_for_recording( int channel_index, int program_index )
{
	dtv_dbg( "%s(): sorry, not supported!\n", __FUNCTION__ );
	return false;
}

/*
 @ get program description.
 */
void dtv__epgh_get_program_description( char *program_des, int program_des_bufsize, int channel_index, int program_index )
{
	dtv_dbg( "%s(): sorry, not supported!\n", __FUNCTION__ );	
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
const char *dtv__epgh_add_program_booked_for_liveplay( int channel_index, int program_index )
{
	dtv_dbg( "%s(): sorry, not supported!\n", __FUNCTION__ );
	return "faild";
}

/*
 @ book a program for recording.
 */
const char *dtv__epgh_add_program_booked_for_recording( int channel_index, int program_index )
{
	dtv_dbg( "%s(): sorry, not supported!\n", __FUNCTION__ );
	return "faild";
}

/*
 @ cancel booking a program for live-play.
 */
void dtv__epgh_delete_program_booked_for_liveplay( int channel_index, int program_index )
{
	dtv_dbg( "%s(): sorry, not supported!\n", __FUNCTION__ );
}

/*
 @ cancel booking a program for recording.
 */
void dtv__epgh_delete_program_booked_for_recording( int channel_index, int program_index )
{
	dtv_dbg( "%s(): sorry, not supported!\n", __FUNCTION__ );
}

