/*
 @ Copyright (C) 2010-2013, Shaomin Zhang. All rights reserved.
 
 @ File: dtv_inc_settings.c
 
 @ Summary: This file is part of High-Level-APIs, which contain all
         possible high level interfaces of DTV/DVB and its similar
         neighbor application services.
 
 @ Revision:
  1.0          Shaomin (Samuel) Zhang       2013-11-21
 
 */
#include "dtv_inc_pubh.h"
#include "dtv_inc_settings.h"

/*
 @ restore default.
 !
 @ NOTICE: after this function returns back, all the channel data, program data
 @         will be removed and all the settings will be the default values.
 */
void dtv__settings_restore_default(void)
{
}

/*
 @ enter standby.
 */
void dtv__settings_enter_standby(void)
{
}

//void dtv__settings_enter_standby_passive(void);
//void dtv__settings_enter_standby_active(void);
//void dtv__settings_is_now_active_standby(void);
//void dtv__settings_wake_from_active_standby(void);

/*
 @ set the password, like "123456", "0000"
 */
void dtv__settings_set_password( const char *password )
{
}

/*
 @ get the password.
 */
void dtv__settings_get_password( char *password, int password_buflen )
{
	if( password != NULL && password_buflen >= 8)
	{
		strncpy( password, "888888", password_buflen );
	}
}

/*
 @ set osd language, format as iso639-2: "eng", "chi", "fre"
 */
void dtv__settings_set_osd_language( const char *lan_iso639_2 )
{
}

/*
 @ get osd language.
 */
const char *dtv__settings_get_osd_language(void)
{
	return "eng";
}

/*
 @ set osd transparency, [0, 100].
 */
void dtv__settings_set_osd_transparency( int percent )
{
}

/*
 @ get osd transparency.
 */
int dtv__settings_get_osd_transparency(void)
{
	return 26;
}

/*
 @ set default audio track: "left", "right", "steore"
 */
void dtv__settings_set_audio_track( const char *audio_track )
{
}

/*
 @ get default audio track.
 */
const char *dtv__settings_get_audio_track(void)
{
	return "right";
}

/*
 @ set video chrome, [0, 100].
 */
void dtv__settings_set_video_chrome( int percent )
{
}

/*
 @ get video chrome.
 */
int dtv__settings_get_video_chrome(void)
{
	return 23;
}

/*
 @ set video brightness, [0, 100].
 */
void dtv__settings_set_video_brightness( int percent )
{
}

/*
 @ get video brightness.
 */
int dtv__settings_get_video_brightness(void)
{
	return 25;
}

/*
 @ set video contrast, [0, 100].
 */
void dtv__settings_set_video_contrast( int percent )
{
}

/*
 @ get video contrast.
 */
int dtv__settings_get_video_contrast(void)
{
	return 10;
}

/*
 @ set video resolution: "480i", "720p", "1080i" .etc.
 */
void dtv__settings_set_video_resolution( const char *resolution )
{
}

/*
 @ get video resolution.
 */
const char *dtv__settings_get_video_resolution(void)
{
	return "720p";
}

/*
 @ set video aspectratio: "4:3", "16:9", "full".
 */
void dtv__settings_set_video_aspectratio( const char *ar )
{
}

/*
 @ get video aspectratio.
 */
const char *dtv__settings_get_video_aspectratio(void)
{
	return "16:9";
}

/*
 @ set subtitle switch: ON/OFF.
 */
void dtv__settings_set_subtitle_on( bool bON )
{
}

/*
 @ get subtitle switch: ON/OFF.
 */
bool dtv__settings_is_subtitle_on(void)
{
	return false;
}

/*
 @ set teletext switch: ON/OFF.
 */
void dtv__settings_set_teletext_on( bool bON )
{
}

/*
 @ get teletext switch: ON/OFF.
 */
bool dtv__settings_is_teletext_on(void)
{
	return false;
}

/*
 @ set time-sync switch; ON/OFF.
 */
void dtv__settings_set_tstimesync_on( bool bON )
{
}

/*
 @ get time-sync switch: ON/OFF.
 */
bool dtv__settings_is_tstimesync_on(void)
{
	return false;
}

/*
 @ set tieshift length limit, unit as "hh:mm".
 */
void dtv__settings_set_timeshift_length( const char *hhmm )
{
}

/*
 @ get the timeshift length limit setting.
 */
void dtv__settings_get_timeshift_length( char *hhmm, int hhmm_buflen )
{
	if( hhmm != NULL && hhmm_buflen >= 8)
		{
		strncpy( hhmm, "14:22", hhmm_buflen );
	}
}

/*
 @ set timezone offset.
 */
void dtv__settings_set_timezone_offset( const char *hhmm )
{
}

/*
 @ set timezone offset.
 */
void dtv__settings_get_timezone_offset( char *hhmm, int hhmm_buflen )
{
}

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
void dtv__settings_select_pvr_device( const char *dev )
{
}

/*
 @ get current pvr device directory, like "/mnt/sda1"
 */
const char *dtv__settings_get_selected_pvr_device(void)
{
	return "/mnt/sda1";
}

/*
 @ change pvr work dir. ---will be deprecated.
 */
void dtv__settings_set_pvr_workdir( const char *dir )
{
}

/*
 @ set timer available or not. timer={ "ON", "OFF" }.
 */
void dtv__settings_switch_timer_set_available( const char *timer, bool bON )
{
}

/*
 @ set time. timer={ "ON", "OFF" }.
 */
void dtv__settings_switch_timer_set_time( const char *timer, const char *hhmm )
{
}

/*
 @ set date. timer={ "ON", "OFF" }.
 */
void dtv__settings_switch_timer_set_date( const char *timer, const char *yyyymmdd )
{
}

/*
 @ set repeat mode. timer={ "ON", "OFF" }, repeat_mode={ "None", "Daily" }.
 */
void dtv__settings_switch_timer_set_repeat_mode( const char *timer, const char *repeat_mode )
{
}

/*
 @ check given timer is available or not. timer={ "ON", "OFF" }.
 */
bool dtv__settings_is_switch_timer_available( const char *timer )
{
	return false;
}

/*
 @ get time. timer={ "ON", "OFF" }.
 */
void dtv__settings_switch_timer_get_time( const char *timer, char *hhmm, int hhmm_buflen )
{
	if( hhmm!= NULL && hhmm_buflen >= 24 )
	{
		strncpy( hhmm, "14:25", hhmm_buflen );
	}
}

/*
 @ get date. timer={ "ON", "OFF" }.
 */
void dtv__settings_switch_timer_get_date( const char *timer, char *yyyymmdd, int date_buflen )
{
	if( yyyymmdd != NULL && date_buflen >= 24 )
	{
		strncpy( yyyymmdd, "2013-11-25", date_buflen );
	}
}

/*
 @ get repeat mode. timer={ "ON", "OFF" }, return={ "None", "Daily" }.
 */
const char * dtv__settings_switch_timer_get_repeat_mode( const char *timer )
{
	return "Daily";
}

/*
 @ check whether there's software image for upgrade, bOTA==false means via USB.
 */
bool dtv__settings_is_software_upgrade_available( bool bOTA )
{
	return false;
}

/*
 @ set parental guide rating, age such as 0, 15, 17, 18, 100 .etc.
 */
void dtv__settings_set_parental_rating_age( int rating_age )
{
}

/*
 @ get parental guide rating age.
 */
int dtv__settings_get_parental_rating_age(void)
{
	return 15;
}

/*
 @ set parental guide rating by standard. for instance, austrilia{"M", "R", "MA15", "AV15" }
 */
void dtv__settings_set_parental_rating( const char *rating_standard )
{
}

/*
 @ get parental guide rating standard.
 */
const char *dtv__settings_get_parental_rating(void)
{
	return "MA15";
}

/*
 @ set parental guide password.
 */
void dtv__settings_set_parental_password( const char *password )
{
}

/*
 @ get parental guide password.
 */
void dtv__settings_get_parental_password( char *password, int password_buflen )
{
}

/*
 @ select country, by code defined in iso3611-1.
 */
void dtv__settings_set_country( const char *country )
{
}

/*
 @ get selected country code, iso3611-1.
 */
const char *dtv__settings_get_country(void)
{
	return "china";
}

/*
 @ select region.
 */
void dtv__settings_set_region( const char *region )
{
}

/*
 @ get selected region.
 */
void dtv__settings_get_region( char *region, int region_buflen )
{
	if( region != NULL && region_buflen >= 12 )
	{
		strncpy( region, "xxxregion", region_buflen );
	}
}

/*
 @ enable LCN or not.
 */
void dtv__settings_set_lcn_on( bool bON )
{
}

/*
 @ check whether LCN is enabled or not.
 */
bool dtv__settings_get_lcn_on(void)
{
	return false;
}

/*
 @ enable antenna power compensation (for DVB-T) or not.
 */
void dtv__settings_set_antenna_power_compensation( bool bON )
{
}

/*
 @ check whether antenna power compensation (for DVB-T) is enabled or not.
 */
bool dtv__settings_get_antenna_power_compensation(void)
{
	return false;
}

/*
 @ enable DST (daylight saving time) or not.
 */
void dtv__settings_set_dst_on( bool bON )
{
}

/*
 @ check whether DST (daylight saving time) is enabled or not.
 */
bool dtv__settings_is_dst_on(void)
{
	return false;
}

/*
 @ get option count for channel sort mode.
 */
int dtv__settings_get_channel_sort_mode_option_count(void)
{
	return 3;
}

/*
 @ get option meaning of given channel sort mode.
 */
const char *dtv__settings_get_channel_sort_mode_option( int option_index )
{
	return "7Mhz";
}

/*
 @ set channel sort mode, by option.
 */
void dtv__settings_set_channel_sort_mode( int option_index )
{
}

/*
 @ get channel sort mode, by option.
 */
int dtv__settings_get_channel_sort_mode(void)
{
	return 0;
}

