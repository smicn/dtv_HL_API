/*
 @ Copyright (C) 2010-2013, Shaomin Zhang. All rights reserved.
 
 @ File: dtv_inc_searcht.c
 
 @ Summary: This file is part of High-Level-APIs, which contain all
         possible high level interfaces of DTV/DVB and its similar
         neighbor application services.
 
 @ Revision:
  1.0          Shaomin (Samuel) Zhang       2013-11-21
 
 */
#include "dtv_inc_pubh.h"
#include "dtv_inc_searcht.h"

/*
 @ set deliver frequency, unit as KHz.
 */
void dtv__dvbt_set_deliver_frequency( int frequencyKHz )
{
}

/*
 @ set deliver bandwidth, unit as MHz.
 */
void dtv__dvbt_set_deliver_bandwidth( int bandwidthMHz )
{
}

/*
 @ select search mode, enable network search or not.
 */
void dtv__dvbt_set_searchmode_network( bool bNetwork )
{
}

/*
 @ get selectable deliver count (if deliver data is prepared).
 */
int dtv__dvbt_get_selectable_deliver_count(void)
{
	return 50;
}

/*
 @ get current selected deliver index.
 */
int dtv__dvbt_get_selected_deliver_index(void)
{
	return 3;
}

/*
 @ get current selected deliver number (sometimes called 
 @ as "CH NO" or "Channel Number"), displayed as "9", "9A", "10" etc.
 */
const char *dtv__dvbt_get_selected_deliver_number(void)
{
	return "9A";
}

/*
 @ select deliver (for tuner.lock).
 */
void dtv__dvbt_select_deliver( int deliver_index )
{
}

/*
 @ get deliver frequency, unit as KHz.
 */
int dtv__dvbt_get_deliver_frequency(void)
{
	return 474000;
}

/*
 @ get deliver bandwidth, unit as MHz.
 */
int dtv__dvbt_get_deliver_bandwidth(void)
{
	return 8;
}

/*
 @ get user selected search mode, network is enabled or not.
 */
bool dtv__dvbt_get_searchmode_network(void)
{
	return false;
}

/*
 @ start search.
 */
void dtv__dvbt_start_search(void)
{
}

/*
 @ start auto search, which is not based on the user-input delivers.
 */
void dtv__dvbt_start_auto_search(void)
{
}

/*
 @ stop search.
 */
void dtv__dvbt_stop_search(void)
{
}

/*
 @ get current searching deliver frequency, unit as KHz.
 */
int dtv__dvbt_get_searching_deliver_frequency(void)
{
	return 474000;
}

/*
 @ get current searching deliver bandwidth, unit as MHz.
 */
int dtv__dvbt_get_searching_deliver_bandwidth(void)
{
	return 8;
}

/*
 @ get search progress.
 */
int dtv__dvbt_get_search_progress(void)
{
	return 52;
}

/*
 @ get searched tv channel count.
 */
int dtv__dvbt_get_searched_tv_channel_count(void)
{
	return 100;
}

/*
 @ get searched tv channel's name.
 */
void dtv__dvbt_get_searched_tv_channel( char *channel_name, int channel_name_bufsize, int channel_index )
{
	if( channel_name != NULL && channel_name_bufsize >= 20 )
	{
		strncpy( channel_name, "CCTV-7", channel_name_bufsize );
	}
}

/*
 @ get searched radio channel count.
 */
int dtv__dvbt_get_searched_radio_channel_count(void)
{
	return 80;
}

/*
 @ get searched radio channel's name.
 */
void dtv__dvbt_get_searched_radio_channel( char *channel_name, int channel_name_bufsize, int channel_index )
{
	if( channel_name != NULL && channel_name_bufsize >= 20 )
	{
		strncpy( channel_name, "CCTV-6", channel_name_bufsize );
	}
}

/*
 @ get searched all channel count.
 */
int dtv__dvbt_get_searched_channel_count(void)
{
	return 80;
}

/*
 @ get searched channel's name.
 */
void dtv__dvbt_get_searched_channel( char *channel_name, int channel_name_bufsize, int channel_index )
{
	if( channel_name != NULL && channel_name_bufsize >= 20 )
	{
		strncpy( channel_name, "CCTV-5", channel_name_bufsize );
	}
}

/*
 @ get signal strength.
 */
int dtv__dvbt_get_signal_strength(void)
{
	return 78;
}

/*
 @ get signal quality.
 */
int dtv__dvbt_get_signal_quality(void)
{
	return 55;
}

