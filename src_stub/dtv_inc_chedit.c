/*
 @ Copyright (C) 2010-2013, Shaomin Zhang. All rights reserved.
 
 @ File: dtv_inc_chedit.c
 
 @ Summary: This file is part of High-Level-APIs, which contain all
         possible high level interfaces of DTV/DVB and its similar
         neighbor application services.
 
 @ Revision:
  1.0          Shaomin (Samuel) Zhang       2013-11-21
 
 */
#include "dtv_inc_pubh.h"
#include "dtv_inc_chedit.h"

/*
 @ enter channel editor.
 */
void dtv__channel_editor_enter(void)
{
	dtv_dbg( "%s();\n", __FUNCTION__ );
}

/*
 @ get channel count.
 */
int dtv__channel_editor_get_count(void)
{
	return 10;
}

/*
 @ get channel name by index.
 */
void dtv__channel_editor_get_channel( char *channel_name, int channel_name_bufsize, int channel_index )
{
	if( channel_name != NULL && channel_name_bufsize >= 12)
	{
		snprintf( channel_name, channel_name_bufsize, "Channel_%d", channel_index + 1 );
	}
}

/*
 @ check channel's LOCK state.
 */
bool dtv__channel_editor_is_lock( int channel_index )
{
	return true;
}

/*
 @ check channel's FAV state.
 */
bool dtv__channel_editor_is_fav( int channel_index )
{
	return true;
}

/*
 @ check channel's SKIP state.
 */
bool dtv__channel_editor_is_skip( int channel_index )
{
	return true;
}

/*
 @ check channel's DELETE state.
 */
bool dtv__channel_editor_is_delete( int channel_index )
{
	return true;
}

/*
 @ reset a channel's LOCK state to its opposite.
 */
void dtv__channel_editor_set_lock( int channel_index )
{
}

/*
 @ reset a channel's FAV state to its opposite.
 */
void dtv__channel_editor_set_fav( int channel_index )
{
}

/*
 @ reset a channel's SKIP state to its opposite.
 */
void dtv__channel_editor_set_skip( int channel_index )
{
}

/*
 @ reset a channel's DELETE state to its opposite.
 */
void dtv__channel_editor_set_delete( int channel_index )
{
}

/*
 @ move a channel to its neighbour position.
 */
void dtv__channel_editor_move_neighbour( int channel_index, bool bToPrev )
{
}

/*
 @ check whether data is changed in editor.
 */
bool dtv__channel_editor_is_data_changed(void)
{
	return true;
}

/*
 @ exit channel editor, choose to save changes or not.
 */
void dtv__channel_editor_exit( bool bSave )
{
	dtv_dbg( "%s();\n", __FUNCTION__ );
}

