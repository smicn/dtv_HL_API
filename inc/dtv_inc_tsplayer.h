/*
 @ Copyright (C) 2010-2013, Shaomin Zhang. All rights reserved.
 
 @ File: dtv_inc_tsplayer.h
 
 @ Summary: This file is part of High-Level-APIs, which contain all
         possible high level interfaces of DTV/DVB and its similar
         neighbor application services.
 
 @ Revision:
  1.0          Shaomin (Samuel) Zhang       2013-11-21
 
 */
#ifndef DTV_INC_TSPLAYER_H
#define DTV_INC_TSPLAYER_H

#ifdef __cplusplus
extern "C" {
#endif

/*
 @ check whether playable channel(s) exist.
 */
bool dtv__is_no_channel_for_play(void);

/*
 @ stop live-ts play.
 */
void dtv__stop_play_livets(void);

/*
 @ check whether live-ts play is working.
 */
bool dtv__is_livets_playing(void);

/*
 @ play the historic channel.
 */
void dtv__play_historic_channel(void);

/*
 @ play the recall channel.
 */
void dtv__play_recall_channel(void);

/*
 @ play the prev channel.
 */
void dtv__play_prev_channel(void);

/*
 @ play the next channel.
 */
void dtv__play_next_channel(void);

/*
 @ select channel for play by its number.
 */
void dtv__play_channel_by_number( int channel_num );

/*
 @ get max channel number for play.
 */
int dtv__get_max_played_channel_number(void);

/*
 @ get current played channel number.
 */
int dtv__get_current_played_channel_number(void);

/*
 @ get current play channel name.
 */
void dtv__get_current_played_channel( char *channel_name, int channel_name_bufsize );

/*
 @ check whether the current playing channel's LOCK state is true. 
 */
bool dtv__is_current_played_channel_lock(void);

/*
 @ check whether the current playing channel's FAV state is true. 
 */
bool dtv__is_current_played_channel_fav(void);

/*
 @ check whether the current playing channel's CA encryped or not. 
 */
bool dtv__is_current_played_channel_ca_encryped(void);

/*
 @ check whether the current playing channel's HD state or not. 
 */
bool dtv__is_current_played_channel_hd(void);

/*
 @ check whether the current playing channel's type is radio. 
 */
bool dtv__is_current_played_channel_radio(void);

/*
 @ get present program. 
 */
bool dtv__get_present_program( char *program, int program_bufsize );

/*
 @ get present program's start time, format as "hh:mm".
 */
bool dtv__get_present_program_start_time( char *time_hhmm, int time_bufsize );

/*
 @ get present program's end time, format as "hh:mm".
 */
bool dtv__get_present_program_end_time( char *time_hhmm, int time_bufsize );

/*
 @ get present program's playing progress, unit as percent.
 */
int dtv__get_present_program_progress_percent(void);

/*
 @ get follow program.
 */
bool dtv__get_follow_program( char *program, int program_bufsize );

/*
 @ get follow program's start time, format as "hh:mm".
 */
bool dtv__get_follow_program_start_time( char *time_hhmm, int time_bufsize );

/*
 @ get follow program's end time, format as "hh:mm".
 */
bool dtv__get_follow_program_end_time( char *time_hhmm, int time_bufsize );

/*
enum
{
	AUDIOTRACK_LEFT,
	AUDIOTRACK_RIGHT,
	AUDIOTRACK_STEORO,
};
*/

/*
 @ get current playing audio track: 0=left, 1=right, 2=steoro
 */
int dtv__get_current_audio_track(void);

/*
 @ set current playing audio track: 0=left, 1=right, 2=steoro
 */
void dtv__set_current_audio_track( int audio_track );

/*
 @ get current playing audio volume level.
 */
int dtv__get_current_audio_volume_level(void);

/*
 @ set current playing audio volume level.
 */
void dtv__set_current_audio_volume_level( int volume_level );

/*
 @ get audio language count of current playing channel.
 */
int dtv__get_current_audio_language_count(void);

/*
 @ get audio language index in the multi-audio-languages.
 */
int dtv__get_current_audio_language_index(void);

/*
 @ get current playing audio language, return like "eng", "fre".
 */
const char *dtv__get_current_audio_language_iso639_2( int lan_index );

/*
 @ start pvr recording.
 */
void dtv__start_instant_record(void);

/*
 @ stop pvr recording.
 */
void dtv__stop_instant_record(void);

/*
 @ check whether it's recording now.
 */
bool dtv__is_instant_record_working(void);

/*
 @ get instant record-ed time duration, format as "hh:mm:ss".
 */
void dtv__get_instant_record_duration( char *time_hhmmss, int time_bufsize );

/*
 @ set live ts player's video viewport/window.
 */
void dtv__set_livets_play_video_window( int x, int y, int w, int h );

#ifdef __cplusplus
}
#endif

#endif
