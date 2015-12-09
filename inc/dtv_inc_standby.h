/*
 @ Copyright (C) 2010-2013, Shaomin Zhang. All rights reserved.
 
 @ File: dtv_inc_standby.h
 
 @ Summary: This file is part of High-Level-APIs, which contain all
         possible high level interfaces of DTV/DVB and its similar
         neighbor application services.
 
 @ Revision:
  1.0          Shaomin (Samuel) Zhang       2013-11-29
 
 */
#ifndef DTV_INC_STANDBY_H
#define DTV_INC_STANDBY_H

#ifdef __cplusplus
extern "C" {
#endif

/*
 @ enter passive standby: passive means real standby, main-chip
 @ might power-off and MCU like PM.C51 takes over control.
 */
void dtv__enter_standby_passive(void);

/*
 @ enter active standby: active means not real standby, under this
 @ condition some background actions might take place.
 */
void dtv__enter_standby_active(void);

/*
 @ check whether it's now active standby.
 */
bool dtv__is_now_active_standby(void);

/*
 @ wake from active standby.
 */
void dtv__wake_from_active_standby(void);

//void dtv__start_silent_record(void);
//void dtv__stop_silent_record(void);
//bool dtv__is_silent_record_working(void);

#ifdef __cplusplus
extern "C" {
#endif

#endif