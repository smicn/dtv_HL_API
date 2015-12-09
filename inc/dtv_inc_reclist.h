/*
 @ Copyright (C) 2010-2013, Shaomin Zhang. All rights reserved.
 
 @ File: dtv_inc_reclist.h
 
 @ Summary: This file is part of High-Level-APIs, which contain all
         possible high level interfaces of DTV/DVB and its similar
         neighbor application services.
 
 @ Revision:
  1.0          Shaomin (Samuel) Zhang       2013-11-21
 
 */
#ifndef DTV_INC_RECLIST_H
#define DTV_INC_RECLIST_H

#ifdef __cplusplus
extern "C" {
#endif

/*
 @ load record file list.
 */
void dtv__pvr_reclist_load(void);

/*
 @ get pvr file count.
 */
int dtv__pvr_reclist_get_count(void);

/*
 @ get pvr file's name.
 */
void dtv__pvr_reclist_get_file_name( char *file_name, int file_name_bufsize, int file_index );

/*
 @ get pvr file's last-written-time.
 */
void dtv__pvr_reclist_get_file_accesstime( char *access_time, int time_bufsize, int file_index );

/*
 @ get pvr file's size.
 */
int dtv__pvr_reclist_get_file_size_mb( int file_index );

/*
 @ get pvr file's play duration, format as "hh:mm:ss".
 */
void dtv__pvr_reclist_get_file_play_duration( char *time_hhmmss, int time_bufsize, int file_index );

/*
 @ delete pvr file.
 */
void dtv__pvr_reclist_delete_file( int file_index );

/*
 @ delete all pvr files.
 */
void dtv__pvr_reclist_delete_all_files(void);

/*
 @ select pvr file to play.
 */
void dtv__pvr_reclist_select_to_playback( int file_index );

#ifdef __cplusplus
}
#endif

#endif
