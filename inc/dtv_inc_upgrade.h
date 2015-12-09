#ifndef DTV_INC_UPGRADE_H
#define DTV_INC_UPGRADE_H

#ifdef __cplusplus
extern "C" {
#endif


/*
 @ get current absolutepath
 */
void dtv__upgrade_get_absolute_path( char *dir, int dir_buflen );

/*
 @ get file count under current directory.
 */
int dtv__upgrade_get_file_count(void);

/*
 @ check whether given file is actually directory.
 */
bool dtv__upgrade_is_file_directory( int file_index );

/*
 @ get file name.
 */
void dtv__upgrade_get_file_name( char *file_name, int file_name_buflen, int file_index );
/*
 @ enter a directory
 */
void dtv__upgrade_select_directory( int file_index );

/*
 @ back to parent directory
 */
void dtv__upgrade_back_parent_dir(void);

/*
 @ enter a file
 */
void dtv__upgrade_select_file( int file_index );

/*
 @ start software upgrade.
 */
void dtv__settings_start_software_upgrade( bool bOTA );

/*
 @ get software upgrade progress by percent [0, 100].
 */
int dtv__settings_get_software_upgrade_progress(void);

/*
 @ get software upgrade status, return like "loading", "burning", "success", "failed".
 */
const char *dtv__settings_get_software_upgrade_status(void);

/*
 @ stop/cancel software upgrade.
 */
void dtv__settings_stop_software_upgrade(void);

#ifdef __cplusplus
}
#endif
#endif