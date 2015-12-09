/*
 @ Copyright (C) 2010-2013, Shaomin Zhang. All rights reserved.
 
 @ File: dtv_inc_upgrade.c
 
 @ Summary: This file is part of High-Level-APIs, which contain all
         possible high level interfaces of DTV/DVB and its similar
         neighbor application services.
 
 @ Revision:
  1.0          Shaomin (Samuel) Zhang       2013-11-21
 
 */
#include "dtv_inc_pubh.h"
#include "dtv_inc_upgrade.h"

/*
 @ get current absolutepath
 */
void dtv__upgrade_get_absolute_path( char *dir, int dir_buflen )
{
	if( dir != NULL && dir_buflen >= 32 )
	{
		strcpy( dir, "/mnt/sd/", dir_buflen );
	}
}

/*
 @ get file count under current directory.
 */
int dtv__upgrade_get_file_count(void)
{
	return 15;
}

/*
 @ check whether given file is actually directory.
 */
bool dtv__upgrade_is_file_directory( int file_index )
{
	return true;
}

/*
 @ get file name.
 */
void dtv__upgrade_get_file_name( char *file_name, int file_name_buflen, int file_index )
{
	if( file_name != NULL && file_name_buflen >= 32 ) 
		{
			snprintf( file_name, file_name_buflen, "%s_%d", "upgradefile_", file_index );
		}
}

/*
 @ enter a directory
 */
void dtv__upgrade_select_directory( int file_index )
{
}

/*
 @ back to parent directory
 */
void dtv__upgrade_back_parent_dir(void)
{
}

/*
 @ enter a file
 */
void dtv__upgrade_select_file( int file_index )
{
}

/*
 @ start software upgrade.
 */
void dtv__settings_start_software_upgrade( bool bOTA )
{
}

/*
 @ get software upgrade progress by percent [0, 100].
 */
int dtv__settings_get_software_upgrade_progress(void)
{
	return 50;
}

/*
 @ get software upgrade status, return like "loading", "burning", "success", "failed".
 */
const char *dtv__settings_get_software_upgrade_status(void)
{
	return "loading";
}

/*
 @ stop/cancel software upgrade.
 */
void dtv__settings_stop_software_upgrade(void)
{
}
