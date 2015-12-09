/*
 @ Copyright (C) 2010-2013, Shaomin Zhang. All rights reserved.
 
 @ File: dtv_inc_dishsetup.h
 
 @ Summary: This file is part of High-Level-APIs, which contain all
         possible high level interfaces of DTV/DVB and its similar
         neighbor application services.
 
 @ Revision:
  1.0          Shaomin (Samuel) Zhang       2013-11-21
 
 */
#ifndef DTV_INC_DISHSETUP_H
#define DTV_INC_DISHSETUP_H

#ifdef __cplusplus
extern "C" {
#endif

/*
 @ get all satelliete count. 
 */
int dtv__satellite_get_count(void);

/*
 @ get satellite info.
 */
void dtv__satellite_get( char *satName, int *longitude, bool *isBandC, int satIndex );

/*
 @ add a new satellite.
 */
bool dtv__satellite_add_new( const char *satName, int longitude, bool isBandC );

/*
 @ delete an existing satellite.
 */
bool dtv__satellite_delete_one( int satIndex );

/*
 @ modify an existing satellite, edit its parameters.
 */
bool dtv__satellite_modify( const char *satName, int longitude, bool isBandC, int satIndex );

/*
 @ update satellite list, MUST be called after any editing options.
 */
void dtv__satellite_update_list(void);

/*
 @ check whether a satellite is selected (for search).
 */
bool dtv__satellite_is_selected( int satIndex );

/*
 @ select a satellite to edit its antenna settings. NOTE: single-selection.
 */
void dtv__satellite_select_for_antenna( int satIndex );

/*
 @ select a satellite and start edit its transponder list. NOTE: single-selection.
 */
void dtv__satellite_select_for_transponder( int satIndex );

/*
 @ select a satellite for later search. NOTE: multi-selection.
 */
void dtv__satellite_select_for_search( int satIndex );

/*
 @ get transponder count on the selected satellite.
 */
int dtv__transponder_get_count(void);

/*
 @ get transponder info.
 */
void dtv__transponder_get( int *frequencyMHz, int *symbrate, bool *isPolarH, int TPIndex );

/*
 @ add a new transponder on the current list.
 */
bool dtv__transponder_add_new( int frequencyMHz, int symbrate, bool isPolarH );

/*
 @ delete an existing transponder.
 */
bool dtv__transponder_delete_one( int TPIndex );

/*
 @ modify transponder, edit its parameters.
 */
bool dtv__transponder_modify( int frequencyMHz, int symbrate, bool isPolarH, int TPIndex );

/*
 @ update transponder list, NOTE: must be called after any editing options.
 */
void dtv__transponder_update_list(void);

/*
 @ check whether a transponder is selected (for later search).
 */
bool dtv__transponder_is_selected( int TPIndex );

/*
 @ select a transponder for later search.
 */
void dtv__transponder_select_for_search( int TPIndex );

/*
 @ get the low LOF value of a dual-LOF LNB or the central LOF of a single-LOF LNB.
 */
int dtv__antenna_lnb_get_low_frequency(void);

/*
 @ get the high LOF value of a dual-LOF LNB. NOTE: if return=0, means it's a single-LOF LNB.
 */
int dtv__antenna_lnb_get_high_frequency(void);

/*
 @ set LOF value for a single-LOF LNB.
 */
void dtv__antenna_lnb_set_single_frequency( int frequencyMHz );

/*
 @ set LOF value for a dual-LOF LNB.
 */
void dtv__antenna_lnb_set_dual_frequency( int lowFrequencyMHz, int highFrequencyMHz );

/*
 @ get LOF value of a unicable LNB.
 */
int dtv__antenna_unicable_get_frequency(void);

/*
 @ set LOF value of a unicable LNB.
 */
void dtv__antenna_unicable_set_frequency( int frequencyMHz );

/*
 @ get the LNB power selected value: 0=auto, 1=on, -1=off.
 */
int dtv__antenna_lnb_power_get(void);

/*
 @ set the LNB power selection: 0=auto, 1=on, -1=off.
 */
void dtv__antenna_lnb_power_set( int lnbPowerSelection );

/*
 @  get the 22K selected value: 0=auto, 1=on, -1=off.
 */
int dtv__antenna_22k_get(void);

/*
 @ set the 22K selection: 0=auto, 1=on, -1=off.
 */
void dtv__antenna_22k_set( int selection_22k );

/*
 @ get ToneBurst selected value: 0=OFF, 1=toneA, 2=toneB
 */
int dtv__antenna_toneburst_get(void);

/*
 @ set the ToneBurst selection: 0=OFF, 1=toneA, 2=toneB
 */
void dtv__antenna_toneburst_set( int toneburstSwitch );

/*
 @ get DiSEqC1.0 port, 1~4, 0 means OFF.
 */
int dtv__antenna_diseqc10_get_port(void);

/*
 @ set DiSEqC1.0 port selection, 1~4. 0 means OFF.
 */
void dtv__antenna_diseqc10_set_port( int diseqc10Switch );

/*
 @ get DiSEqC1.1 port, 1~16, 0 means OFF.
 */
int dtv__antenna_diseqc11_get_port(void);

/*
 @ set DiSEqC1.1 port selection, 1~16, 0 means OFF.
 */
void dtv__antenna_diseqc11_set_port( int diseqc11Switch );

/*
 @ set current motor angle position as the west moving limit.
 */
void dtv__antenna_diseqc12_set_west_limit(void);

/*
 @ set current motor angle position as the east moving limit.
 */
void dtv__antenna_diseqc12_set_east_limit(void);

/*
 @ disable the motor moving angle limit.
 */
void dtv__antenna_diseqc12_disable_limit(void);

/*
 @ motor goes to the reference position.
 */
void dtv__antenna_diseqc12_goto_reference(void);

/*
 @ motor moves to the position of current satellite.
 */
void dtv__antenna_diseqc12_goto_satellite(void); //sateIndex?

/*
 @ motor saves current satellite's angle position.
 */
void dtv__antenna_diseqc12_save_position(void); //sateIndex?

/*
 @ set user's geographic position to DiSEqC1.3/USALS motor.
 */
void dtv__antenna_usals_set_user_position( int longitude, int lantitude );

/*
 @ DiSEqC1.3/USALS motor moves to the position of current satellite continueslly.
 */
void dtv__antenna_usals_gotox(void);

/*
 @ motor moves step by step to east.
 */
void dtv__antenna_motor_step_east(void);

/*
 @ motor moves step by step to west.
 */
void dtv__antenna_motor_step_west(void);

/*
 @ motor moves to east continuesly.
 */
void dtv__antenna_motor_continue_east(void);

/*
 @ motor moves to west continuesly.
 */
void dtv__antenna_motor_continue_west(void);

/*
 @ motor stops moving.
 */
void dtv__antenna_motor_stop(void);

/*
 @ save data if it's changed within dish-setup.
 */
void dtv__satellite_save_data(void);

/*
 @ upgrade satellite data from given file path, only satellite data!
 */
bool dtv__satellite_upgrage_data( const char *path );

/*
 @ import data of satellite, antenna, and channels from given file path.
 */
bool dtv__import_satellite_channel_data( const char *path );

/*
 @ export data of satellite, antenna, and channels to the given file path.
 */
bool dtv__export_satellite_channel_data( const char *path );

#ifdef __cplusplus
}
#endif

#endif
