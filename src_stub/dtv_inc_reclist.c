/*
 @ Copyright (C) 2010-2013, Shaomin Zhang. All rights reserved.
 
 @ File: dtv_inc_reclist.c
 
 @ Summary: This file is part of High-Level-APIs, which contain all
         possible high level interfaces of DTV/DVB and its similar
         neighbor application services.
 
 @ Revision:
  1.0          Shaomin (Samuel) Zhang       2013-11-21
 
 */
#include "dtv_inc_pubh.h"
#include "dtv_inc_reclist.h"

/*
 @ load record file list.
 */
void dtv__pvr_reclist_load(void)
{
}

/*
 @ get pvr file count.
 */
int dtv__pvr_reclist_get_count(void)
{
	return 40;
}

/*
 @ get pvr file's name.
 */
void dtv__pvr_reclist_get_file_name( char *file_name, int file_name_bufsize, int file_index )
{
	if( file_name != NULL && file_name_bufsize >= 20 )
	{
		strncpy( file_name, "CCTV-9", file_name_bufsize );
	}
}

/*
 @ get pvr file's last-written-time.
 */
void dtv__pvr_reclist_get_file_accesstime( char *access_time, int time_bufsize, int file_index )
{
	if( access_time != NULL && time_bufsize >= 8 )
	{
		strncpy( access_time, "14:45", time_bufsize );
	}
}

/*
 @ get pvr file's size.
 */
int dtv__pvr_reclist_get_file_size_mb( int file_index )
{
	return 13;
}

/*
 @ get pvr file's play duration, format as "hh:mm:ss".
 */
void dtv__pvr_reclist_get_file_play_duration( char *time_hhmmss, int time_bufsize, int file_index )
{
	if( time_hhmmss != NULL && time_bufsize >= 12 )
	{
		strncpy( time_hhmmss, "14:45:23", time_bufsize );
	}
}

/*
 @ delete pvr file.
 */
void dtv__pvr_reclist_delete_file( int file_index )
{
}

/*
 @ delete all pvr files.
 */
void dtv__pvr_reclist_delete_all_files(void)
{
}

/*
 @ select pvr file to play.
 */
void dtv__pvr_reclist_select_to_playback( int file_index )
{
}

