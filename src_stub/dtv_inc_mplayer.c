/*
 @ Copyright (C) 2010-2013, Shaomin Zhang. All rights reserved.
 
 @ File: dtv_inc_mplayer.c
 
 @ Summary: This file is part of High-Level-APIs, which contain all
         possible high level interfaces of DTV/DVB and its similar
         neighbor application services.
 
 @ Revision:
  1.0          Shaomin (Samuel) Zhang       2013-11-21
 
 */

#include "dtv_inc_pubh.h"
#include "dtv_inc_mplayer.h"

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
const char *dtv__mediaplay_get_status(void)
{
	return "playing";
}

/*
 @ stop playback.
 */
void dtv__mediaplay_stop(void)
{
}

/*
 @ pause playback.
 */
void dtv__mediaplay_pause(void)
{
}

/*
 @ resume playback.
 */
void dtv__mediaplay_resume(void)
{
}

/*
 @ speed forward: "x1 ->x2 ->x4 ->x8 ->x1/2 ->x1.."
 */
void dtv__mediaplay_speed_forward(void)
{
}

/*
 @ speed backward: "x1 ->x2 ->x4 ->x8 ->x1/2 ->x1.."
 */
void dtv__mediaplay_speed_backward(void)
{
}

/*
 @ play the next file.
 */
void dtv__mediaplay_goto_next_file(void)
{
}

/*
 @ play the prev file.
 */
void dtv__mediaplay_goto_prev_file(void)
{
}

/*
 @ get playable file count.
 */
int dtv__mediaplay_get_playable_file_count(void)
{
	return 10;
}

/*
 @ get current playing file index, according to playable file count.
 */
int dtv__mediaplay_get_playing_file_index(void)
{
	return 2;
}

/*
 @ get the current playing file's name.
 */
void dtv__mediaplay_get_current_file( char *file_name, int file_name_bufsize )
{
	if( file_name != NULL && file_name_bufsize >= 32 )
	{
		strncpy( file_name, "someone like you", file_name_bufsize );
	}
}

/*
 @ get the current playing file's full path.
 */
void dtv__mediaplay_get_current_file_path( char *path, int path_bufsize )
{
	if( path != NULL && path_bufsize >= 32 )
	{
		strncpy( path, "/mnt/sda/music", path_bufsize );
	}
}

/*
 @ get the current playing file's duration, formatted as "hh:mm:ss".
 */
void dtv__mediaplay_get_duration( char *time_hhmmss, int time_bufsize )
{
	if( time_hhmmss != NULL && time_bufsize >= 32 )
	{
		strncpy( time_hhmmss, "00:05:24", time_bufsize );
	}
}

/*
 @ get the current playing file's position, formatted as "hh:mm:ss".
 */
void dtv__mediaplay_get_position( char *time_hhmmss, int time_bufsize )
{
	if( time_hhmmss != NULL && time_bufsize >= 32 )
	{
		strncpy( time_hhmmss, "00:03:20", time_bufsize );
	}
}

/*
 @ seek to given position by "hh:mm:ss".
 */
void dtv__mediaplay_seek_positoin( const char *time_hhmmss )
{
}

/*
 @ get the current position percent.
 */
int dtv__mediaplay_get_positoin_percent(void)
{
	return 60;
}

/*
 @ seek to position percent.
 */
void dtv__mediaplay_seek_position_percent( int position_percent )
{
}

/*
 @ play goto next forward step position.
 */
void dtv__mediaplay_step_forward(void)
{
}

/*
 @ play goto prev backward step position.
 */
void dtv__mediaplay_step_backward(void)
{
}

/*
 @ check whether it's media playing now.
 */
bool dtv__mediaplay_is_working(void)
{
	return true;
}

/*
 @ set repeat mode for media player: 0=no-repeat, 1=repeat-single, 2=repeat-all.
 */
void dtv__mediaplay_set_repeat_mode( int repeat_mode )
{
}

/*
 @ get current setting repeat mode for media player: 0=no-repeat, 1=repeat-single, 2=repeat-all.
 */
int dtv__mediaplay_get_repeat_mode(void)
{
	return 0;
}

/*
 @ set bookmark on/off.
 */
void dtv__mediaplay_set_bookmark_on( bool bON )
{
}

/*
 @ check whether bookmark is on.
 */
bool dtv__mediaplay_is_bookmark_on(void)
{
	return true;
}

/*
 @ image zoom in.
 */
void dtv__mediaplay_image_zoom_in(void)
{
}

/*
 @ image zoom out.
 */
void dtv__mediaplay_image_zoom_out(void)
{
}

/*
 @ image zoom back to normal.
 */
void dtv__mediaplay_image_zoom_normal(void)
{
}

/*
 @ image rotate by given angle: -90, 0, 90, 180.
 */
void dtv__mediaplay_image_rotate_angle( int angle )
{
}

/*
 @ image rotate back to original normal angle.
 */
void dtv__mediaplay_image_rotate_normal(void)
{
}

/*
 @ set image slide show interval by second.
 */
void dtv__mediaplay_image_set_slide_interval( int time_second )
{
}

