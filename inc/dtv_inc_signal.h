/*
 @ Copyright (C) 2010-2013, Shaomin Zhang. All rights reserved.
 
 @ File: dtv_inc_signal.h
 
 @ Summary: This file is part of High-Level-APIs, which contain all
         possible high level interfaces of DTV/DVB and its similar
         neighbor application services.
 
 @ Revision:
  1.0          Shaomin (Samuel) Zhang       2013-11-21
 
 */
#ifndef DTV_INC_SIGNAL_H
#define DTV_INC_SIGNAL_H

#ifdef __cplusplus
extern "C" {
#endif

/* dtv.sigmsg.sys.startup */
#define DTV_SIGMSG__SYS_STARTUP            100
/* dtv.sigmsg.sys.poweroff */
#define DTV_SIGMSG__SYS_POWEROFF           101
/* dtv.sigmsg.sys.sw.update */
#define DTV_SIGMSG__SYS_SWUPDATE           102
/* dtv.sigmsg.sys.data.update */
#define DTV_SIGMSG__SYS_DATAUPDATE         103
/* dtv.sigmsg.sys.usb.plugin */
#define DTV_SIGMSG__SYS_USBPLUGIN          104
/* dtv.sigmsg.sys.usb.plugout */
#define DTV_SIGMSG__SYS_USBPLUGOUT         105
/* dtv.sigmsg.sys.book.prevalarm */
#define DTV_SIGMSG__SYS_BOOKPREVALARM      106
/* dtv.sigmsg.sys.book.alaram */
#define DTV_SIGMSG__SYS_BOOKALARM          107

/* dtv.sigmsg.tsplayer.nosignal */
#define DTV_SIGMSG__TSPLAY_NOSIGNAL        200
/* dtv.sigmsg.tsplayer.signalok */
#define DTV_SIGMSG__TSPLAY_SIGNALOK        201
/* dtv.sigmsg.tsplayer.nodata */
#define DTV_SIGMSG__TSPLAY_NOAVDATA        202
/* dtv.sigmsg.tsplayer.dataok */
#define DTV_SIGMSG__TSPLAY_AVDATAOK        203
/* dtv.sigmsg.tsplayer.user.lock */
#define DTV_SIGMSG__TSPLAY_USERLOCK        204
/* dtv.sigmsg.tsplayer.parental.lock */
#define DTV_SIGMSG__TSPLAY_PGLOCK          205
/* dtv.sigmsg.tsplayer.ca */
#define DTV_SIGMSG__TSPLAY_CA              256
/* dtv.sigmsg.tsplayer.epg.pf.update */
#define DTV_SIGMSG__TSPLAY_EPGUPDATE       277
/* dtv.sigmsg.tsplayer.sat.motor.move */
#define DTV_SIGMSG__TSPLAY_MOTORMOVE       298
/* dtv.sigmsg.tsplayer.sat.motor.stop */
#define DTV_SIGMSG__TSPLAY_MOTORSTOP       299

/* dtv.sigmsg.searchs.begin */
#define DTV_SIGMSG__SEARCHS_BEGIN          300
/* dtv.sigmsg.searchs.sat.begin */
#define DTV_SIGMSG__SEARCHS_SAT_BEGIN      301
/* dtv.sigmsg.searchs.sat.finished */
#define DTV_SIGMSG__SEARCHS_SAT_FINISHED   302
/* dtv.sigmsg.searchs.motor.move */
#define DTV_SIGMSG__SEARCHS_MOTOR_MOVE     310
/* dtv.sigmsg.searchs.motor.stop */
#define DTV_SIGMSG__SEARCHS_MOTOR_STOP     311
/* dtv.sigmsg.searchs.freq.begin */
#define DTV_SIGMSG__SEARCHS_FREQ_BEGIN     320
/* dtv.sigmsg.searchs.freq.finished */
#define DTV_SIGMSG__SEARCHS_FREQ_FINISHED  321
/* dtv.sigmsg.searchs.nit.begin */
#define DTV_SIGMSG__SEARCHS_NIT_BEGIN      390
/* dtv.sigmsg.searchs.nit.success */
#define DTV_SIGMSG__SEARCHS_NIT_SUCCESS    391
/* dtv.sigmsg.searchs.nit.failed */
#define DTV_SIGMSG__SEARCHS_NIT_FAILED     392
/* dtv.sigmsg.searchs.newchannel */
#define DTV_SIGMSG__SEARCHS_NEW_CHANNEL    397
/* dtv.sigmsg.searchs.progress */
#define DTV_SIGMSG__SEARCHS_PROGRESS       398
/* dtv.sigmsg.searchs.finished */
#define DTV_SIGMSG__SEARCHS_FINISHED       399

/* dtv.sigmsg.searchc.begin */
#define DTV_SIGMSG__SEARCHC_BEGIN          400
/* dtv.sigmsg.searchc.freq.begin */
#define DTV_SIGMSG__SEARCHC_FREQ_BEGIN     420
/* dtv.sigmsg.searchc.freq.finished */
#define DTV_SIGMSG__SEARCHC_FREQ_FINISHED  421
/* dtv.sigmsg.searchc.nit.begin */
#define DTV_SIGMSG__SEARCHC_NIT_BEGIN      490
/* dtv.sigmsg.searchc.nit.success */
#define DTV_SIGMSG__SEARCHC_NIT_SUCCESS    491
/* dtv.sigmsg.searchc.nit.failed */
#define DTV_SIGMSG__SEARCHC_NIT_FAILED     492
/* dtv.sigmsg.searchc.newchannel */
#define DTV_SIGMSG__SEARCHC_NEW_CHANNEL    497
/* dtv.sigmsg.searchc.progress */
#define DTV_SIGMSG__SEARCHC_PROGRESS       498
/* dtv.sigmsg.searchc.finished */
#define DTV_SIGMSG__SEARCHC_FINISHED       499

/* dtv.sigmsg.searcht.begin */
#define DTV_SIGMSG__SEARCHT_BEGIN          500
/* dtv.sigmsg.searcht.freq.begin */
#define DTV_SIGMSG__SEARCHT_FREQ_BEGIN     520
/* dtv.sigmsg.searcht.freq.finished */
#define DTV_SIGMSG__SEARCHT_FREQ_FINISHED  521
/* dtv.sigmsg.searcht.nit.begin */
#define DTV_SIGMSG__SEARCHT_NIT_BEGIN      590
/* dtv.sigmsg.searcht.nit.success */
#define DTV_SIGMSG__SEARCHT_NIT_SUCCESS    591
/* dtv.sigmsg.searcht.nit.failed */
#define DTV_SIGMSG__SEARCHT_NIT_FAILED     592
/* dtv.sigmsg.searcht.newchannel */
#define DTV_SIGMSG__SEARCHT_NEW_CHANNEL    597
/* dtv.sigmsg.searcht.progress */
#define DTV_SIGMSG__SEARCHT_PROGRESS       598
/* dtv.sigmsg.searcht.finished */
#define DTV_SIGMSG__SEARCHT_FINISHED       599

/* dtv.sigmsg.pvr.record.nodisk */
#define DTV_SIGMSG__RECORD_NODISK          600
/* dtv.sigmsg.pvr.record.diskfull */
#define DTV_SIGMSG__RECORD_DISKFULL        601
/* dtv.sigmsg.pvr.record.oversize */
#define DTV_SIGMSG__RECORD_OVERSIZE        602
/* dtv.sigmsg.pvr.record.overtime */
#define DTV_SIGMSG__RECORD_OVERTIME        603
/* dtv.sigmsg.pvr.record.error */
#define DTV_SIGMSG__RECORD_ERROR           649

/* dtv.sigmsg.pvr.playback.eof */
#define DTV_SIGMSG__PLAYBACK_EOF           650
/* dtv.sigmsg.pvr.playback.sof */
#define DTV_SIGMSG__PLAYBACK_SOF           650
/* dtv.sigmsg.pvr.playback.error */
#define DTV_SIGMSG__PLAYBACK_ERROR         679
/* dtv.sigmsg.pvr.timeshift.eof */
#define DTV_SIGMSG__TIMESHIFT_EOF          680
/* dtv.sigmsg.pvr.timeshift.error */
#define DTV_SIGMSG__TIMESHIFT_ERROR        699

/* dtv.sigmsg.media.player.eof */
#define DTV_SIGMSG__MEDIAPLAY_EOF          700
/* dtv.sigmsg.media.player.sof */
#define DTV_SIGMSG__MEDIAPLAY_SOF          701
/* dtv.sigmsg.media.player.decode.failed */
#define DTV_SIGMSG__MEDIAPLAY_DECFAILED    702
/* dtv.sigmsg.media.player.error */
#define DTV_SIGMSG__MEDIAPLAY_ERROR        799

/* dtv.sigmsg.ethn.drop */
#define DTV_SIGMSG__ETHN_DROP              800
/* dtv.sigmsg.ethn.ok */
#define DTV_SIGMSG__ETHN_OK                801
/* dtv.sigmsg.wifi.drop */
#define DTV_SIGMSG__WIFI_DROP              802
/* dtv.sigmsg.wifi.ok */
#define DTV_SIGMSG__WIFI_OK                803
/* dtv.sigmsg.wifi.password.error */
#define DTV_SIGMSG__WIFI_PWDERR            804

/*
 @ register signal notification callback. pls choose either of two callbacks with
 @ diff msg type as you wish, pls also notice that msg values are defined above.
 */
void dtv__register_signal_receiver( const char *whom,
		void (*callback_0)( const char *whom, unsigned int msg, void *context ),
		void (*callback_1)( const char *whom, const char *msg, void *context ),
		void *context );

/*
 @ unregister signal notification callback.
 */
void dtv__unregister_signal_receiver( const char *whom );

#ifdef __cplusplus
}
#endif

#endif
