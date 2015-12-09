/*
 @ Copyright (C) 2010-2013, Shaomin Zhang. All rights reserved.
 
 @ File: dtv_inc_chedit2.c
 
 @ Summary: This file is part of High-Level-APIs, which contain all
         possible high level interfaces of DTV/DVB and its similar
         neighbor application services.
 
 @ Revision:
  1.0          Shaomin (Samuel) Zhang       2013-11-21
 
 */
#include "dtv_inc_pubh.h"
#include "dtv_inc_chedit2.h"

/*
 @ enter channel editor.
 */
void dtv__channel_editor2_enter(void)
{
	dtv_dbg( "%s();\n", __FUNCTION__ );
}

/*
 @ get max fav count that is supportted by this module.
 */
int dtv__channel_editor2_get_max_fav_count(void)
{
	return 3;
}

/*
 @ get channel count.
 */
int dtv__channel_editor2_get_count(void)
{
	return 10;
}

/*
 @ get channel name by index.
 */
void dtv__channel_editor2_get_channel( char *channel_name, int channel_name_bufsize, int channel_index )
{
	if( channel_name != NULL && channel_name_bufsize >= 12 )
	{
		snprintf( channel_name, channel_name_bufsize, "Channel_%d", channel_index );
	}
}

/*
 @ check channel's LOCK state.
 */
bool dtv__channel_editor2_is_lock( int channel_index )
{
	return true;
}

/*
 @ check whether a channel belongs to any FAV.
 */
bool dtv__channel_editor2_is_fav_any( int channel_index )
{
	return true;
}

/*
 @ check whether a channel belongs to given FAV.
 */
bool dtv__channel_editor2_is_fav( int channel_index, int fav_no )
{
	return true;
}

/*
 @ check channel's DELETE state.
 */
bool dtv__channel_editor2_is_delete( int channel_index )
{
	return true;
}

/*
 @ reset a channel's LOCK state to its opposite.
 */
void dtv__channel_editor2_set_lock( int channel_index )
{
}

/*
 @ reset a channel's FAV state to its opposite.
 */
void dtv__channel_editor2_set_fav( int channel_index, int fav_no )
{
}

/*
 @ reset a channel's DELETE state to its opposite.
 */
void dtv__channel_editor2_set_delete( int channel_index )
{
}

/*
 @ move a channel to its neighbour position.
 */
void dtv__channel_editor2_move_neighbour( int channel_index, bool bToPrev )
{
}

/*
 @ move a channel to the pointed position.
 */
void dtv__channel_editor2_move_insert( int channel_index, int destpos_index )
{
}

/*
 @ check whether data is changed in editor.
 */
bool dtv__channel_editor2_is_data_changed(void)
{
	return true;
}

/*
 @ exit channel editor, choose to save changes or not.
 */
void dtv__channel_editor2_exit( bool bSave )
{
	dtv_dbg( "%s();\n", __FUNCTION__ );
}

