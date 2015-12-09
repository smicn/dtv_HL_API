/*
 @ Copyright (C) 2010-2013, Shaomin Zhang. All rights reserved.
 
 @ File: dtv_inc_chedit.h
 
 @ Summary: This file is part of High-Level-APIs, which contain all
         possible high level interfaces of DTV/DVB and its similar
         neighbor application services.
 
 @ Revision:
  1.0          Shaomin (Samuel) Zhang       2013-11-21
 
 */
#ifndef DTV_INC_CHANNEL_EDIT_H
#define DTV_INC_CHANNEL_EDIT_H

#ifdef __cplusplus
extern "C" {
#endif

/*
 @ enter channel editor.
 */
void dtv__channel_editor_enter(void);

/*
 @ get channel count.
 */
int dtv__channel_editor_get_count(void);

/*
 @ get channel name by index.
 */
void dtv__channel_editor_get_channel( char *channel_name, int channel_name_bufsize, int channel_index );

/*
 @ check channel's LOCK state.
 */
bool dtv__channel_editor_is_lock( int channel_index );

/*
 @ check channel's FAV state.
 */
bool dtv__channel_editor_is_fav( int channel_index );

/*
 @ check channel's SKIP state.
 */
bool dtv__channel_editor_is_skip( int channel_index );

/*
 @ check channel's DELETE state.
 */
bool dtv__channel_editor_is_delete( int channel_index );

/*
 @ reset a channel's LOCK state to its opposite.
 */
void dtv__channel_editor_set_lock( int channel_index );

/*
 @ reset a chennel's FAV state to its opposite.
 */
void dtv__channel_editor_set_fav( int channel_index );

/*
 @ reset a chennel's SKIP state to its opposite.
 */
void dtv__channel_editor_set_skip( int channel_index );

/*
 @ reset a chennel's DELETE state to its opposite.
 */
void dtv__channel_editor_set_delete( int channel_index );

/*
 @ move a channel to its neighbour position.
 */
void dtv__channel_editor_move_neighbour( int channel_index, bool bToPrev );

/*
 @ check whether data is changed in editor.
 */
bool dtv__channel_editor_is_data_changed(void);

/*
 @ exit channel editor, choose to save changes or not.
 */
void dtv__channel_editor_exit( bool bSave );

#ifdef __cplusplus
}
#endif

#endif
