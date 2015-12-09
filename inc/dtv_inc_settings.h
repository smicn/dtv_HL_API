/*
 @ Copyright (C) 2010-2013, Shaomin Zhang. All rights reserved.
 
 @ File: dtv_inc_settings.h
 
 @ Summary: This file is part of High-Level-APIs, which contain all
         possible high level interfaces of DTV/DVB and its similar
         neighbor application services.
 
 @ Revision:
  1.0          Shaomin (Samuel) Zhang       2013-11-21
 
 */
#ifndef DTV_INC_SETTINGS_H
#define DTV_INC_SETTINGS_H

#ifdef __cplusplus
extern "C" {
#endif

/*
 @ restore default.
 !
 @ NOTICE: after this function returns back, all the channel data, program data
 @         will be removed and all the settings will be the default values.
 */
void dtv__settings_restore_default(void);

/*
 @ enter standby.
 */
void dtv__settings_enter_standby(void);

//void dtv__settings_enter_standby_passive(void);
//void dtv__settings_enter_standby_active(void);
//void dtv__settings_is_now_active_standby(void);
//void dtv__settings_wake_from_active_standby(void);

/*
 @ set the password, like "123456", "0000"
 */
void dtv__settings_set_password( const char *password );

/*
 @ get the password.
 */
void dtv__settings_get_password( char *password, int password_buflen );

/*
 @ set osd language, format as iso639-2: "eng", "chi", "fre"
 */
void dtv__settings_set_osd_language( const char *lan_iso639_2 );

/*
 @ get osd language.
 */
const char *dtv__settings_get_osd_language(void);

/*
 @ set osd transparency, [0, 100].
 */
void dtv__settings_set_osd_transparency( int percent );

/*
 @ get osd transparency.
 */
int dtv__settings_get_osd_transparency(void);

/*
 @ set default audio track: "left", "right", "steore"
 */
void dtv__settings_set_audio_track( const char *audio_track );

/*
 @ get default audio track.
 */
const char *dtv__settings_get_audio_track(void);

/*
 @ set video chrome, [0, 100].
 */
void dtv__settings_set_video_chrome( int percent );

/*
 @ get video chrome.
 */
int dtv__settings_get_video_chrome(void);

/*
 @ set video brightness, [0, 100].
 */
void dtv__settings_set_video_brightness( int percent );

/*
 @ get video brightness.
 */
int dtv__settings_get_video_brightness(void);

/*
 @ set video contrast, [0, 100].
 */
void dtv__settings_set_video_contrast( int percent );

/*
 @ get video contrast.
 */
int dtv__settings_get_video_contrast(void);

/*
 @ set video resolution: "480i", "720p", "1080i" .etc.
 */
void dtv__settings_set_video_resolution( const char *resolution );

/*
 @ get video resolution.
 */
const char *dtv__settings_get_video_resolution(void);

/*
 @ set video aspectratio: "4:3", "16:9", "full".
 */
void dtv__settings_set_video_aspectratio( const char *ar );

/*
 @ get video aspectratio.
 */
const char *dtv__settings_get_video_aspectratio(void);

/*
 @ set subtitle switch: ON/OFF.
 */
void dtv__settings_set_subtitle_on( bool bON );

/*
 @ get subtitle switch: ON/OFF.
 */
bool dtv__settings_is_subtitle_on(void);

/*
 @ set teletext switch: ON/OFF.
 */
void dtv__settings_set_teletext_on( bool bON );

/*
 @ get teletext switch: ON/OFF.
 */
bool dtv__settings_is_teletext_on(void);

/*
 @ set time-sync switch; ON/OFF.
 */
void dtv__settings_set_tstimesync_on( bool bON );

/*
 @ get time-sync switch: ON/OFF.
 */
bool dtv__settings_is_tstimesync_on(void);

/*
 @ set tieshift length limit, unit as "hh:mm".
 */
void dtv__settings_set_timeshift_length( const char *hhmm );

/*
 @ get the timeshift length limit setting.
 */
void dtv__settings_get_timeshift_length( char *hhmm, int hhmm_buflen );

/*
 @ set timezone offset.
 */
void dtv__settings_set_timezone_offset( const char *hhmm );

/*
 @ set timezone offset.
 */
void dtv__settings_get_timezone_offset( char *hhmm, int hhmm_buflen );

/*
 @ - storage device will be managed by android java code -
 !
void dtv__settings_get_storage_device_count(void);
void dtv__settings_get_storage_device( char *device, int device_bufsize, int device_index );
int dtv__settings_get_storage_device_space_mb( int device_index );
int dtv__settings_get_storage_device_free_space_mb( int device_index );
int dtv__settings_get_selected_pvr_device(void);
void dtv__settings_select_pvr_device( int device_index );
 !
 @ - so the above interfaces will not be implemented -
 */

/*
 @ set current pvr device directory, like "/mnt/sda1"
 */
void dtv__settings_select_pvr_device( const char *dev );

/*
 @ get current pvr device directory, like "/mnt/sda1"
 */
const char *dtv__settings_get_selected_pvr_device(void);

/*
 @ change pvr work dir. ---will be deprecated.
 */
void dtv__settings_set_pvr_workdir( const char *dir );

/*
 @ set timer available or not. timer={ "ON", "OFF" }.
 */
void dtv__settings_switch_timer_set_available( const char *timer, bool bON );

/*
 @ set time. timer={ "ON", "OFF" }.
 */
void dtv__settings_switch_timer_set_time( const char *timer, const char *hhmm );

/*
 @ set date. timer={ "ON", "OFF" }.
 */
void dtv__settings_switch_timer_set_date( const char *timer, const char *yyyymmdd );

/*
 @ set repeat mode. timer={ "ON", "OFF" }, repeat_mode={ "None", "Daily" }.
 */
void dtv__settings_switch_timer_set_repeat_mode( const char *timer, const char *repeat_mode );

/*
 @ check given timer is available or not. timer={ "ON", "OFF" }.
 */
bool dtv__settings_is_switch_timer_available( const char *timer );

/*
 @ get time. timer={ "ON", "OFF" }.
 */
void dtv__settings_switch_timer_get_time( const char *timer, char *hhmm, int hhmm_buflen );

/*
 @ get date. timer={ "ON", "OFF" }.
 */
void dtv__settings_switch_timer_get_date( const char *timer, char *yyyymmdd, int date_buflen );

/*
 @ get repeat mode. timer={ "ON", "OFF" }, return={ "None", "Daily" }.
 */
const char * dtv__settings_switch_timer_get_repeat_mode( const char *timer );

/*
 @ check whether there's software image for upgrade, bOTA==false means via USB.
 */
bool dtv__settings_is_software_upgrade_available( bool bOTA );



/*
 @ set parental guide rating, age such as 0, 15, 17, 18, 100 .etc.
 */
void dtv__settings_set_parental_rating_age( int rating_age );

/*
 @ get parental guide rating age.
 */
int dtv__settings_get_parental_rating_age(void);

/*
 @ set parental guide rating by standard. for instance, austrilia{"M", "R", "MA15", "AV15" }
 */
void dtv__settings_set_parental_rating( const char *rating_standard );

/*
 @ get parental guide rating standard.
 */
const char *dtv__settings_get_parental_rating(void);

/*
 @ set parental guide password.
 */
void dtv__settings_set_parental_password( const char *password );

/*
 @ get parental guide password.
 */
void dtv__settings_get_parental_password( char *password, int password_buflen );

/*
 @ select country, by code defined in iso3611-1.
 */
void dtv__settings_set_country( const char *country );

/*
 @ get selected country code, iso3611-1.
 */
const char *dtv__settings_get_country(void);

/*
 @ select region.
 */
void dtv__settings_set_region( const char *region );

/*
 @ get selected region.
 */
void dtv__settings_get_region( char *region, int region_buflen );

/*
 @ enable LCN or not.
 */
void dtv__settings_set_lcn_on( bool bON );

/*
 @ check whether LCN is enabled or not.
 */
bool dtv__settings_get_lcn_on(void);

/*
 @ enable antenna power compensation (for DVB-T) or not.
 */
void dtv__settings_set_antenna_power_compensation( bool bON );

/*
 @ check whether antenna power compensation (for DVB-T) is enabled or not.
 */
bool dtv__settings_get_antenna_power_compensation(void);

/*
 @ enable DST (daylight saving time) or not.
 */
void dtv__settings_set_dst_on( bool bON );

/*
 @ check whether DST (daylight saving time) is enabled or not.
 */
bool dtv__settings_is_dst_on(void);

/*
 @ get option count for channel sort mode.
 */
int dtv__settings_get_channel_sort_mode_option_count(void);

/*
 @ get option meaning of given channel sort mode.
 */
const char *dtv__settings_get_channel_sort_mode_option( int option_index );

/*
 @ set channel sort mode, by option.
 */
void dtv__settings_set_channel_sort_mode( int option_index );

/*
 @ get channel sort mode, by option.
 */
int dtv__settings_get_channel_sort_mode(void);

#ifdef __cplusplus
}
#endif

#endif
