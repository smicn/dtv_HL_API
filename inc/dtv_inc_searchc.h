/*
 @ Copyright (C) 2010-2013, Shaomin Zhang. All rights reserved.
 
 @ File: dtv_inc_searchc.h
 
 @ Summary: This file is part of High-Level-APIs, which contain all
         possible high level interfaces of DTV/DVB and its similar
         neighbor application services.
 
 @ Revision:
  1.0          Shaomin (Samuel) Zhang       2013-11-21
 
 */
#ifndef DTV_INC_SEARCHC_H
#define DTV_INC_SEARCHC_H

#ifdef __cplusplus
extern "C" {
#endif

/*
 @ set deliver frequency, unit as KHz.
 */
void dtv__dvbc_set_deliver_frequency( int frequencyKHz );

/*
 @ set deliver symbrate, unit as KHz.
 */
void dtv__dvbc_set_deliver_symbrate( int symbrateKHz );

/*
 @ set deliver modulation, 16=QAM16, 64=QAM64, .etc
 */
void dtv__dvbc_set_deliver_modulation( int modulation );

/*
 @ select search mode, enable network search or not.
 */
void dtv__dvbc_set_searchmode_network( bool bNetwork );

/*
 @ get deliver frequency, unit as KHz.
 */
int dtv__dvbc_get_deliver_frequency(void);

/*
 @ get deliver bandwidth, unit as MHz.
 */
int dtv__dvbc_get_deliver_bandwidth(void);

/*
 @ get user selected search mode, network is enabled or not.
 */
bool dtv__dvbc_get_searchmode_network(void);

/*
 @ start search.
 */
void dtv__dvbc_start_search(void);

/*
 @ start auto search, which is not based on the user-input delivers.
 */
void dtv__dvbc_start_auto_search(void);

/*
 @ stop search.
 */
void dtv__dvbc_stop_search(void);

/*
 @ get current searching deliver frequency, unit as KHz.
 */
int dtv__dvbc_get_searching_deliver_frequency(void);

/*
 @ get current searching deliver symbrate, unit as KHz.
 */
int dtv__dvbc_get_searching_deliver_symbrate(void);

/*
 @ get current searching deliver modulation, 16=QAM16, 64=QAM64, .etc
 */
int dtv__dvbc_get_searching_deliver_modulation(void);

/*
 @ get search progress.
 */
int dtv__dvbc_get_search_progress(void);

/*
 @ get searched tv channel count.
 */
int dtv__dvbc_get_searched_tv_channel_count(void);

/*
 @ get searched radio channel count.
 */
int dtv__dvbc_get_searched_radio_channel_count(void);

/*
 @ get searched all channel count.
 */
int dtv__dvbc_get_searched_channel_count(void);

/*
 @ get searched channel's name.
 */
void dtv__dvbc_get_searched_channel( char *channel_name, int channel_name_bufsize, int channel_index );

/*
 @ get signal strength.
 */
int dtv__dvbc_get_signal_strength(void);

/*
 @ get signal quality.
 */
int dtv__dvbc_get_signal_quality(void);

#ifdef __cplusplus
}
#endif

#endif
