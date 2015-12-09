/*
 @ Copyright (C) 2010-2013, Shaomin Zhang. All rights reserved.
 
 @ File: dtv_inc_timeshift.h
 
 @ Summary: This file is part of High-Level-APIs, which contain all
         possible high level interfaces of DTV/DVB and its similar
         neighbor application services.
 
 @ Revision:
  1.0          Shaomin (Samuel) Zhang       2013-11-21
 
 */
#ifndef DTV_INC_TIMESHIFT_H
#define DTV_INC_TIMESHIFT_H

#ifdef __cplusplus
extern "C" {
#endif

/*
 @ get current status of timeshift-play. return as following:
 
 	"playing",
	"paused",
	"forward_x2",
	"forward_x4",
	"forward_x8",
	"forward_x1/2",
	"backward_x2",
	"backward_x4",
	"backward_x8",
	"backward_x1/2",
	"stopped"
 */
const char *dtv__pvr_timeshift_get_status(void);

/*
 @ start timeshift.
 */
void dtv__pvr_timeshift_start(void);

/*
 @ stop timeshift.
 */
void dtv__pvr_timeshift_stop(void);

/*
 @ pause timeshift playing.
 */
void dtv__pvr_timeshift_pause(void);

/*
 @ resume timeshift playing.
 */
void dtv__pvr_timeshift_resume(void);

/*
 @ speed forward: "x1 ->x2 ->x4 ->x8 ->x1/2 ->x1.."
 */
void dtv__pvr_timeshift_speed_forward(void);

/*
 @ speed backward: "x1 ->x2 ->x4 ->x8 ->x1/2 ->x1.."
 */
void dtv__pvr_timeshift_speed_backward(void);

/*
 @ get the current playing file's duration, formatted as "hh:mm:ss".
 */
void dtv__pvr_timeshift_get_duration( char *time_hhmmss, int time_bufsize );

/*
 @ get the current playing file's position, formatted as "hh:mm:ss".
 */
void dtv__pvr_timeshift_get_position( char *time_hhmmss, int time_bufsize );

/*
 @ get the current position percent.
 */
int dtv__pvr_timeshift_get_positoin_percent(void);

/*
 @ seek to position percent.
 */
void dtv__pvr_timeshift_seek_position_percent( int position_percent );

/*
 @ check whether timeshift is working now.
 */
bool dtv__pvr_timeshift_is_working(void);

#ifdef __cplusplus
}
#endif

#endif
