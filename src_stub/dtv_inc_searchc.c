/*
 @ Copyright (C) 2010-2013, Shaomin Zhang. All rights reserved.
 
 @ File: dtv_inc_searchc.c
 
 @ Summary: This file is part of High-Level-APIs, which contain all
         possible high level interfaces of DTV/DVB and its similar
         neighbor application services.
 
 @ Revision:
  1.0          Shaomin (Samuel) Zhang       2013-11-21
 
 */
#include "dtv_inc_pubh.h"
#include "dtv_inc_searchc.h"

/*
 @ set deliver frequency, unit as KHz.
 */
void dtv__dvbc_set_deliver_frequency( int frequencyKHz )
{
}

/*
 @ set deliver symbrate, unit as KHz.
 */
void dtv__dvbc_set_deliver_symbrate( int symbrateKHz )
{
}

/*
 @ set deliver modulation, 16=QAM16, 64=QAM64, .etc
 */
void dtv__dvbc_set_deliver_modulation( int modulation )
{
}

/*
 @ select search mode, enable network search or not.
 */
void dtv__dvbc_set_searchmode_network( bool bNetwork )
{
}

/*
 @ get deliver frequency, unit as KHz.
 */
int dtv__dvbc_get_deliver_frequency(void)
{
	return 6;
}

/*
 @ get deliver bandwidth, unit as MHz.
 */
int dtv__dvbc_get_deliver_bandwidth(void)
{
	return 7;
}

/*
 @ get user selected search mode, network is enabled or not.
 */
bool dtv__dvbc_get_searchmode_network(void)
{
	return false;
}

/*
 @ start search.
 */
void dtv__dvbc_start_search(void)
{
}

/*
 @ start auto search, which is not based on the user-input delivers.
 */
void dtv__dvbc_start_auto_search(void)
{
}

/*
 @ stop search.
 */
void dtv__dvbc_stop_search(void)
{
}

/*
 @ get current searching deliver frequency, unit as KHz.
 */
int dtv__dvbc_get_searching_deliver_frequency(void)
{
	return 110;
}

/*
 @ get current searching deliver symbrate, unit as KHz.
 */
int dtv__dvbc_get_searching_deliver_symbrate(void)
{
	return 7;
}

/*
 @ get current searching deliver modulation, 16=QAM16, 64=QAM64, .etc
 */
int dtv__dvbc_get_searching_deliver_modulation(void)
{
	return 64;
}

/*
 @ get search progress.
 */
int dtv__dvbc_get_search_progress(void)
{
	return 8;
}

/*
 @ get searched tv channel count.
 */
int dtv__dvbc_get_searched_tv_channel_count(void)
{
	return 105;
}

/*
 @ get searched radio channel count.
 */
int dtv__dvbc_get_searched_radio_channel_count(void)
{
	return 80;
}

/*
 @ get searched all channel count.
 */
int dtv__dvbc_get_searched_channel_count(void)
{
	return 70;
}

/*
 @ get searched channel's name.
 */
void dtv__dvbc_get_searched_channel( char *channel_name, int channel_name_bufsize, int channel_index )
{
	if( channel_name != NULL && channel_name_bufsize >= 20 )
	{
		strncpy( channel_name, "CCTV-8", channel_name_bufsize );
	}
}

/*
 @ get signal strength.
 */
int dtv__dvbc_get_signal_strength(void)
{
	return 60;
}

/*
 @ get signal quality.
 */
int dtv__dvbc_get_signal_quality(void)
{
	return 50;
}

