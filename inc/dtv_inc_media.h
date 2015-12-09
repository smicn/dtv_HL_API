/*
 @ Copyright (C) 2010-2013, Shaomin Zhang. All rights reserved.
 
 @ File: dtv_inc_media.h
 
 @ Summary: This file is part of High-Level-APIs, which contain all
         possible high level interfaces of DTV/DVB and its similar
         neighbor application services.
 
 @ Revision:
  1.0          Shaomin (Samuel) Zhang       2013-11-21
 
 */

#ifndef DTV_INC_MEDIA_H
#define DTV_INC_MEDIA_H

#ifdef __cplusplus
extern "C" {
#endif

/*
 @ check whether (usb)disk is available for media scan and play.
 */
bool dtv__media_is_disk_available(void);

/*
 @ load media files for scanning. mine= "video", "audio", "image" or "all".
 */
void dtv__media_open_file_list( const char *mine );

/*
 @ during media scan process, get current directory.
 */
void dtv__media_get_current_directory( char *dir, int dir_buflen );

/*
 @ get file count under current directory.
 */
int dtv__media_get_file_count(void);

/*
 @ get file name.
 */
void dtv__media_get_file_name( char *file_name, int file_name_buflen, int file_index );

/*
 @ check whether given file is actually directory.
 */
bool dtv__media_is_file_directory( int file_index );

/*
 @ get the mine type of given file, return "video", "audio", "image" or "other"/"none".
 */
const char *dtv__media_get_file_mine( int file_index );

/*
 @ get the suffix like ".jpg"/".rmvb" of given file.
 */
const char *dtv__media_get_file_suffix( int file_index );

/*
 @ get file size, unit as MB.
 */
int dtv__media_get_file_size_mb( int file_index );

/*
 @ get file size, unit as KB, special for image files.
 */
int dtv__media_get_file_size_kb( int file_index );

/*
 @ get playable duration of given file.
 */
void dtv__media_get_file_playable_duration( char *hhmmss, int file_index );

/*
 @ select given directory and expand it for media scan, if it is a directory.
 */
void dtv__media_select_directory( int file_index );

/*
 @ back to parent directory
 */
void dtv__media_back_parent_dir(void);

/*
 @ select given file for media playing, if it is a media file.
 */
void dtv__media_select_file_to_play( int file_index );

/*
 @ get current playing file name.
 */
void dtv__media_get_current_file_name( char *file_name, int file_name_buflen );

/*
 @ get current playing file's full path.
 */
void dtv__media_get_current_file_full_path( char *path, int path_buflen );

/*
 @ rename a file or directory.
 */
void dtv__media_rename_file( const char *file_name, int file_index );

/*
 @ try delete a file or directory.
 */
void dtv__media_delete_file( int file_index );

/*
 @ stop media scanning, quit media.
 */
void dtv__media_close_file_list(void);

#ifdef __cplusplus
}
#endif

#endif