/*
 @ Copyright (C) 2010-2013, Shaomin Zhang. All rights reserved.
 
 @ File: dtv_inc_channels.c
 
 @ Summary: This file is part of High-Level-APIs, which contain all
         possible high level interfaces of DTV/DVB and its similar
         neighbor application services.
 
 @ Revision:
  1.0          Shaomin (Samuel) Zhang       2013-11-21
 
 */
#include "dtv_inc_pubh.h"
#include "dtv_inc_channels.h"

/*
 @ get channel group count.
 */
int dtv__get_channel_group_count(void)
{
	return 3;
}

/*
 @ get channel group's description, like "TV", "RADIO", "FAV".
 */
const char *dtv__get_channel_group_des( int channel_group_index )
{
	switch( channel_group_index )
	{
	case 1:
		return "RADIO";
	case 2:
		return "FAV";
	case 0:
	default:
		return "TV";
	}
}

/*
 @ get current selected group index.
 */
int dtv__get_selected_channel_group( bool bPlaySelected )
{
	return 0;
}

/*
 @ select a channel group for display.
 */
void dtv__select_channel_group( int channel_group_index )
{
}

/*
 @ get channel count in the selected channel group.
 */
int dtv__get_channel_count(void)
{
	return 20;
}

/*
 @ get channel name.
 */
void dtv__get_channel( char *channel_name, int channel_name_bufsize, int channel_index )
{
	if( channel_name != NULL && channel_name_bufsize >= 12 )
	{
		snprintf( channel_name, channel_name_bufsize, "Channel_%d", channel_index + 1 );
	}
}

/*
 @ get channel number (maybe LCN, maybe not).
 */
int dtv__get_channel_number( int channel_index )
{
	return ( 1 + channel_index );
}

/*
 @ check channel's CA encrypted or not.
 */
bool dtv__is_channel_ca_encrypted( int channel_index )
{
	return true;
}

/*
 @ check channel's LOCK or not.
 */
bool dtv__is_channel_lock( int channel_index )
{
	return true;
}

/*
 @ check channel's FAV or not.
 */
bool dtv__is_channel_fav( int channel_index )
{
	return true;
}

/*
 @ check channel's HD or not.
 */
bool dtv__is_channel_hd( int channel_index )
{
	return true;
}

/*
 @ select a channel.
 */
void dtv__select_channel_only( int channel_index )
{
}

/*
 @ get selected channel's index.
 */
int dtv__get_selected_channel_index( bool bPlaySelected )
{
	return 1;
}

/*
 @ select a channel to play.
 */
void dtv__select_channel_to_play( int channel_index )
{
}

