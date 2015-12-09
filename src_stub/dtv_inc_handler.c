/*
 @ Copyright (C) 2010-2013, Shaomin Zhang. All rights reserved.
 
 @ File: dtv_inc_handler.c
 
 @ Summary: This file is part of High-Level-APIs, which contain all
         possible high level interfaces of DTV/DVB and its similar
         neighbor application services.
 
 @ Revision:
  1.0          Shaomin (Samuel) Zhang       2013-11-21
 
 */

#include "dtv_inc_pubh.h"
#include "dtv_inc_handler.h"

/*
 @ user unlock current channel, if the channel is user-locked.
 */
void dtv__user_unlock_current_channel(void)
{
}

/*
 @ parent unlock current channel, if the channel is pg-locked.
 */
void dtv__parent_unlock_current_channel(void)
{
}

/*
 @ check whether book-alarm exists.
 */
bool dtv__is_bookalarm_channel_available(void)
{
	return false;
}

/*
 @ get the intent of give book-alarm, if it exists. return like:
 @ "record", "play", "on", "off", "null".
 */
const char *dtv__get_bookalarm_channel_intent(void)
{
	return "null";
}

/*
 @ get the channel name of current book-alarm.
 */
void dtv__get_bookalarm_channel( char *channel_name, int channel_name_bufsize )
{
}

/*
 @ get the program name of current book-alarm.
 */
void dtv__get_bookalarm_program( char *program_name, int program_name_bufsize )
{
}

/*
 @ get the start time of current book-alarm.
 */
void dtv__get_bookalarm_start_time( char *start_time_hhmm, int start_time_bufsize )
{
}

/*
 @ get the end time of current book-alarm.
 */
void dtv__get_bookalarm_end_time( char *end_time_hhmm, int end_time_bufsize )
{
}

/*
 @ get the duration of current book-alarm.
 */
void dtv__get_bookalarm_duration( char *duration_hhmm, int duration_bufsize )
{
}

/*
 @ start to record on the booked alarming channel, if book-alarm exists.
 */
void dtv__record_bookalarm_channel(void)
{
}

/*
 @ play the booked alarming channel, if book-alarm exists.
 */
void dtv__play_bookalarm_channel(void)
{
}

/*
 @ cancel the booked alarming channel, means not to play, if book-alarm exists.
 */
void dtv__cancel_bookalarm_channel(void)
{
}

/*
 @ check whether it's booled recording now.
 */
bool dtv__is_booked_record_working(void)
{
}

/*
 @ get time duration of booked recording, format as "hh:mm:ss".
 */
void dtv__get_booked_record_duration( char *time_hhmmss, int time_bufsize )
{
}

