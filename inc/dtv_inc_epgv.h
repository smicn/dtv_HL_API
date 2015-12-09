/*
 @ Copyright (C) 2010-2013, Shaomin Zhang. All rights reserved.
 
 @ File: dtv_inc_epgv.h
 
 @ Summary: This file is part of High-Level-APIs, which contain all
         possible high level interfaces of DTV/DVB and its similar
         neighbor application services.
 
 @ Revision:
  1.0          Shaomin (Samuel) Zhang       2013-11-21
 
 */

#ifndef DTV_INC_EPGV_H
#define DTV_INC_EPGV_H

#ifdef __cplusplus
extern "C" {
#endif

/*
 @ get channel count in epgv.
 */
int dtv__epgv_get_channel_count(void);

/*
 @ get channel name by its index.
 */
void dtv__epgv_get_channel( char *channel_name, int channel_name_bufsize, int channel_index );

/*
 @ get channel number by its index.
 */
int dtv__epgv_get_channel_number( int channel_index );

/*
 @ select a channel (without play).
 */
void dtv__epgv_select_channel( int channel_index );

/*
 @ select a channel (with play).
 */
void dtv__epgv_select_channel_to_play( int channel_index );

/*
 @ get playing channel index.
 */
int dtv__epgv_get_playing_channel_index(void);

/*
 @ get EPG day count of this channel.
 */
int dtv__epgv_get_day_count(void);

/*
 @ get data, format as "Dec/9th Fri" or somelike else.
 */
void dtv__epgv_get_date( char *date_formatted, int date_bufsize, int day_index );

/*
 @ select a day to show EPG.
 */
void dtv__epgv_select_day( int day_index );

/*
 @ get program count on the selected day.
 */
int dtv__epgv_get_program_count(void);

/*
 @ get program by its index.
 */
void dtv__epgv_get_program( char *start_time_hhmm, int start_time_bufsize,
	                        char *end_time_hhmm, int end_time_bufsize,
	                        char *program_name, int program_name_bufsize,
	                        int program_index );

/*
 @ check whether a program is booked for liveplay.
 */
bool dtv__epgv_is_program_booked_for_liveplay( int program_index );

/*
 @ check whether a program is booked for recording.
 */
bool dtv__epgv_is_program_booked_for_recording( int program_index );
  
/*
 @ get program description.
 */
void dtv__epgv_get_program_description( char *program_des, int program_des_bufsize, int program_index );

/*
 @ book a program for live-play, return as following:
	"success",
	"conflict",
	"overtime",
	"maxlimit",
	"overlap",
	"unknown",
 */
const char *dtv__epgv_add_program_booked_for_liveplay( int program_index );

/*
 @ book a program for recording.
 */
const char *dtv__epgv_add_program_booked_for_recording( int program_index );

/*
 @ cancel booking a program for live-play.
 */
void dtv__epgv_delete_program_booked_for_liveplay( int program_index );

/*
 @ cancel booking a program for recording.
 */
void dtv__epgv_delete_program_booked_for_recording( int program_index );

#ifdef __cplusplus
}
#endif

#endif
