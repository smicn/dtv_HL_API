/*
 @ Copyright (C) 2010-2013, Shaomin Zhang. All rights reserved.
 
 @ File: dtv_inc_system.c
 
 @ Summary: This file is part of High-Level-APIs, which contain all
         possible high level interfaces of DTV/DVB and its similar
         neighbor application services.
 
 @ Revision:
  1.0          Shaomin (Samuel) Zhang       2013-11-21
 
 */
#include "dtv_inc_pubh.h"
#include "dtv_inc_system.h"

/*
 @ initlization of whole dtv-soft modules.
 *
 @ NOTICE: should be called at entrance of dtv.
 */
void dtv__init(void)
{
	dtv_dbg( "%s();\n", __FUNCTION__ );
}

/*
 @ termination of whole dtv-soft modules.
 *
 @ NOTICE: should be called before exit of dtv.
 */
void dtv__term(void)
{
	dtv_dbg( "%s();\n", __FUNCTION__ );
}

/*
 @ get current date from ts, format as "yyyy-mm-dd".
 */
void dtv__get_current_date( char *date_yyyymmdd, int date_bufsize )
{
	if( date_yyyymmdd != NULL && date_bufsize >= 12 )
	{
		strncpy( date_yyyymmdd, "2013-11-25", date_bufsize );
	}
}

/*
 @ get current time from ts, format as "hh:mm".
 */
void dtv__get_current_time( char *time_hhmm, int time_bufsize )
{
	if( time_hhmm != NULL && time_bufsize >= 8 )
	{
		strncpy( time_hhmm, "09:45", time_bufsize );
	}
}

/*
 @ get the software name for displaying.
 */
const char *dtv__get_software_name(void)
{
	return "HbbTV";
}

/*
 @ get the software description text for displaying.
 */
const char *dtv__get_software_description(void)
{
	return "a software with DVB-T and HbbTV.";
}

/*
 @ get the software version for displaying.
 */
const char *dtv__get_software_version(void)
{
	return "1.0.1";
}

/*
 @ get the hardware name for displaying.
 */
const char *dtv__get_hardware_name(void)
{
	return "BCM7309";
}

/*
 @ get the hardware description text for displaying.
 */
const char *dtv__get_hardware_description(void)
{
	return "chip=BCM7309, tuner=MXL101SF, wifi=RTL8188EUS..";
}

/*
 @ get the hardware version for displaying.
 */
const char *dtv__get_hardware_version(void)
{
	dtv_dbg( "%s(): sorry, not supported!\n", __FUNCTION__ );
	return NULL;
}

/*
 @ get the software release date.
 */
const char *dtv__get_release_date(void)
{
	static char date[64];

	if( 0 == date[0] )
	{
		strcpy( date, __DATE__ );
		strcat( date, "  " );
		strcat( date, __TIME__ );
	}

	return date;
}

/*
 @ get the product description text for displaying.
 */
const char *dtv__get_product_description(void)
{
	return "a product with DVB-T and HbbTV.";
}

/*
 @ get the manufacturer description text for displaying.
 */
const char *dtv__get_manufacturer_description(void)
{
	return "iDTVxx Co., Ltd";
}

/*
 @ get the software copy right notice description.
 */
const char *dtv__get_copyright_description(void)
{
	return "(C) Shaomin (Samuel) Zhang; All rights reserved";
}

/*
 @ get the customer's name.
 */
const char *dtv__get_customer(void)
{
	return "Hotbird";
}

