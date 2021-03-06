/*
 @ Copyright (C) 2010-2013, Shaomin Zhang. All rights reserved.
 
 @ File: dtv_inc_searchs.c
 
 @ Summary: This file is part of High-Level-APIs, which contain all
         possible high level interfaces of DTV/DVB and its similar
         neighbor application services.
 
 @ Revision:
  1.0          Shaomin (Samuel) Zhang       2013-11-21
 
 */
#include "dtv_inc_pubh.h"
#include "dtv_inc_searchs.h"

/*
 @ select dvbs search mode, enable network search or not.
 */
void dtv__dvbs_set_searchmode_network( bool bNetwork )
{
}

/*
 @ get user selected search mode, network is enabled or not.
 */
bool dtv__dvbs_is_searchmode_network(void)
{
	return false;
}

/*
 @ enable search filter by .scrambled attribute.
 */
void dtv__dvbs_set_searchfilter_fta( bool bFTAOnly )
{
}

/*
 @ check whether search filter by .scrambled attr is enabled or not.
 */
bool dtv__dvbs_is_searchfilter_fta_only(void)
{
	return false;
}

/*
 @ enable search filter by service type.
 */
void dtv__dvbs_set_searchfilter_tv( bool bTVOnly )
{
}

/*
 @ check whether search filter by service type is enabled or not.
 */
bool dtv__dvbs_is_searchfilter_tv_only(void)
{
	return false;
}

/*
 @ start dvbs search.
 */
void dtv__dvbs_start_search(void)
{
}

/*
 @ start dvbs blind scan.
 */
void dtv__dvbs_start_blind_scan(void)
{
}

/*
 @ stop dvbs search, including blind scan.
 */
void dtv__dvbs_stop_search(void)
{
}

/*
 @ get current searching satellite's name.
 */
const char* dtv__dvbs_get_searching_satellite_name(void)
{
	return "AsianSat";
}

/*
 @ get current searching satellite's longitude.
 */
int dtv__dvbs_get_searching_satellite_longitude(void)
{
	return 4;
}

/*
 @ get current searching satellite's band type.
 */
bool dtv__dvbs_is_searching_satellite_band_c(void)
{
	return false;
}

/*
 @ get current searching transponder frequency, unit as MHz.
 */
int dtv__dvbs_get_searching_transponder_frequency(void)
{
	return 11000;
}

/*
 @ get current searching transponder bandwidth, unit as KS/s.
 */
int dtv__dvbs_get_searching_transponder_symbrate(void)
{
	return 275000;
}

/*
 @ get current searching transponder polarity, H or V.
 */
bool dtv__dvbs_is_searching_transponder_polarity_h(void)
{
	return false;
}

/*
 @ get dvbs search progress.
 */
int dtv__dvbs_get_search_progress(void)
{
	return 50;
}

/*
 @ get dvbs searched tv channel count.
 */
int dtv__dvbs_get_searched_tv_channel_count(void)
{
	return 5;
}

/*
 @ get dvbs searched radio channel count.
 */
int dtv__dvbs_get_searched_radio_channel_count(void)
{
	return 2;
}

/*
 @ get dvbs searched all channel count.
 */
int dtv__dvbs_get_searched_channel_count(void)
{
	return 7;
}

/*
 @ get dvbs signal strength.
 */
int dtv__dvbs_get_signal_strength(void)
{
	return 50;
}

/*
 @ get dvbs signal quality.
 */
int dtv__dvbs_get_signal_quality(void)
{
	return 90;
}

