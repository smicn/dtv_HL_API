/*
 @ Copyright (C) 2010-2013, Shaomin Zhang. All rights reserved.
 
 @ File: dtv_inc_system.h
 
 @ Summary: This file is part of High-Level-APIs, which contain all
         possible high level interfaces of DTV/DVB and its similar
         neighbor application services.
 
 @ Revision:
  1.0          Shaomin (Samuel) Zhang       2013-11-21
 
 */
#ifndef DTV_INC_DVB_SYSTEM_H
#define DTV_INC_DVB_SYSTEM_H

#ifdef __cplusplus
extern "C" {
#endif

/*
 @ initlization of whole dtv-soft modules.
 *
 @ NOTICE: should be called at entrance of dtv.
 */
void dtv__init(void);

/*
 @ termination of whole dtv-soft modules.
 *
 @ NOTICE: should be called before exit of dtv.
 */
void dtv__term(void);

/*
 @ get current date from ts, format as "yyyy-mm-dd".
 */
void dtv__get_current_date( char *date_yyyymmdd, int date_bufsize );

/*
 @ get current time from ts, format as "hh:mm".
 */
void dtv__get_current_time( char *time_hhmm, int time_bufsize );

/*
 @ get the software name for displaying.
 */
const char *dtv__get_software_name(void);

/*
 @ get the software description text for displaying.
 */
const char *dtv__get_software_description(void);

/*
 @ get the software version for displaying.
 */
const char *dtv__get_software_version(void);

/*
 @ get the hardware name for displaying.
 */
const char *dtv__get_hardware_name(void);

/*
 @ get the hardware description text for displaying.
 */
const char *dtv__get_hardware_description(void);

/*
 @ get the hardware version for displaying.
 */
const char *dtv__get_hardware_version(void);

/*
 @ get the software release date.
 */
const char *dtv__get_release_date(void);

/*
 @ get the product description text for displaying.
 */
const char *dtv__get_product_description(void);

/*
 @ get the manufacturer description text for displaying.
 */
const char *dtv__get_manufacturer_description(void);

/*
 @ get the software copy right notice description.
 */
const char *dtv__get_copyright_description(void);

/*
 @ get the customer's name.
 */
const char *dtv__get_customer(void);

#ifdef __cplusplus
}
#endif

#endif
