/*
 @ Copyright (C) 2010-2013, Shaomin Zhang. All rights reserved.
 
 @ File: dtv_inc_chedit2.h
 
 @ Summary: This file is part of High-Level-APIs, which contain all
         possible high level interfaces of DTV/DVB and its similar
         neighbor application services.
 
 @ Revision:
  1.0          Shaomin (Samuel) Zhang       2013-11-21
 
 */
#ifndef DTV_INC_CHANNEL_EDIT_2_H
#define DTV_INC_CHANNEL_EDIT_2_H

#ifdef __cplusplus
extern "C" {
#endif

/*
 @ enter channel editor.
 */
void dtv__channel_editor2_enter(void);

/*
 @ get max fav count that is supportted by this module.
 */
int dtv__channel_editor2_get_max_fav_count(void);

/*
 @ get channel count.
 */
int dtv__channel_editor2_get_count(void);

/*
 @ get channel name by index.
 */
void dtv__channel_editor2_get_channel( char *channel_name, int channel_name_bufsize, int channel_index );

/*
 @ check channel's LOCK state.
 */
bool dtv__channel_editor2_is_lock( int channel_index );

/*
 @ check whether a channel belongs to any FAV.
 */
bool dtv__channel_editor2_is_fav_any( int channel_index );

/*
 @ check whether a channel belongs to given FAV.
 */
bool dtv__channel_editor2_is_fav( int channel_index, int fav_no );

/*
 @ check channel's DELETE state.
 */
bool dtv__channel_editor2_is_delete( int channel_index );

/*
 @ reset a channel's LOCK state to its opposite.
 */
void dtv__channel_editor2_set_lock( int channel_index );

/*
 @ reset a channel's FAV state to its opposite.
 */
void dtv__channel_editor2_set_fav( int channel_index, int fav_no );

/*
 @ reset a channel's DELETE state to its opposite.
 */
void dtv__channel_editor2_set_delete( int channel_index );

/*
 @ move a channel to its neighbour position.
 */
void dtv__channel_editor2_move_neighbour( int channel_index, bool bToPrev );

/*
 @ move a channel to the pointed position.
 */
void dtv__channel_editor2_move_insert( int channel_index, int destpos_index );

/*
 @ check whether data is changed in editor.
 */
bool dtv__channel_editor2_is_data_changed(void);

/*
 @ exit channel editor, choose to save changes or not.
 */
void dtv__channel_editor2_exit( bool bSave );

#ifdef __cplusplus
}
#endif

#endif
