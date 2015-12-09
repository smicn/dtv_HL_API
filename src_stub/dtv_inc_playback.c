/*
 @ Copyright (C) 2010-2013, Shaomin Zhang. All rights reserved.
 
 @ File: dtv_inc_playback.c
 
 @ Summary: This file is part of High-Level-APIs, which contain all
         possible high level interfaces of DTV/DVB and its similar
         neighbor application services.
 
 @ Revision:
  1.0          Shaomin (Samuel) Zhang       2013-11-21
 
 */
#include "dtv_inc_pubh.h"
#include "dtv_inc_playback.h"

/*
 @ get current status of playback. return as following:
 
 	"playing",
	"paused",
	"forward_x2",
	"forward_x4",
	"forward_x8",
	"forward_x1/2",
	"backward_x2",
	"backward_x4",
	"backward_x8",
	"backward_x1/2",
 */
const char *dtv__pvr_playback_get_status(void)
{
	return "paused";
}

/*
 @ stop playback.
 */
void dtv__pvr_playback_stop(void)
{
}

/*
 @ pause playback.
 */
void dtv__pvr_playback_pause(void)
{
}

/*
 @ resume playback.
 */
void dtv__pvr_playback_resume(void)
{
}

/*
 @ speed forward: "x1 ->x2 ->x4 ->x8 ->x1/2 ->x1.."
 */
void dtv__pvr_playback_speed_forward(void)
{
}

/*
 @ speed backward: "x1 ->x2 ->x4 ->x8 ->x1/2 ->x1.."
 */
void dtv__pvr_playback_speed_backward(void)
{
}

/*
 @ play the next file.
 */
void dtv__pvr_playback_play_next_file(void)
{
}

/*
 @ play the prev file.
 */
void dtv__pvr_playback_play_prev_file(void)
{
}

/*
 @ get the current playing file's name.
 */
void dtv__pvr_playback_get_current_file( char *file_name, int file_name_bufsize )
{
	if( file_name != NULL && file_name_bufsize >= 12 )
	{
		strncpy( file_name, "17354.mp3", file_name_bufsize );
	}
}

/*
 @ get the current playing file's duration, formatted as "hh:mm:ss".
 */
void dtv__pvr_playback_get_duration( char *time_hhmmss, int time_bufsize )
{
	if( time_hhmmss != NULL && time_bufsize >= 12 )
	{
		strncpy( time_hhmmss, "1:49:32", time_bufsize );
	}
}

/*
 @ get the current playing file's position, formatted as "hh:mm:ss".
 */
void dtv__pvr_playback_get_position( char *time_hhmmss, int time_bufsize )
{
	if( time_hhmmss != NULL && time_bufsize >= 12 )
	{
		strncpy( time_hhmmss, "1:49:32", time_bufsize );
	}
}

/*
 @ get the current position percent.
 */
int dtv__pvr_playback_get_positoin_percent(void)
{
	return 25;
}

/*
 @ seek to position percent.
 */
void dtv__pvr_playback_seek_position_percent( int position_percent )
{
}

/*
 @ check whether it's playbacking now.
 */
bool dtv__pvr_playback_is_working(void)
{
	return false;
}

