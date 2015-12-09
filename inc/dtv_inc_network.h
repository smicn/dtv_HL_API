/*
 @ Copyright (C) 2010-2013, Shaomin Zhang. All rights reserved.
 
 @ File: dtv_inc_network.h
 
 @ Summary: This file is part of High-Level-APIs, which contain all
         possible high level interfaces of DTV/DVB and its similar
         neighbor application services.
 
 @ Revision:
  1.0          Shaomin (Samuel) Zhang       2013-11-21
 
 */
#ifndef DTV_INC_NETWORK_H
#define DTV_INC_NETWORK_H

#ifdef __cplusplus
extern "C" {
#endif

/*
 @ set ethernet on, means, set wifi off.
 */
void dtv__network_set_ethn_on( bool bON );

/*
 @ set wifi on, means, set ethernet off.
 */
void dtv__network_set_wifi_on( bool bON );

/*
 @ check whether ethernet is open/ON.
 */
bool dtv__network_is_ethn_on(void);

/*
 @ check whether wifi is open/ON.
 */
bool dtv__network_is_wifi_on(void);

/*
 @ check whether any network is connected, no matter wifi or ethernet.
 */
bool dtv__network_is_any_connected(void);

/*
 @ ethernet, open DHCP or close it.
 */
void dtv__network_ethn_set_dhcp_on( bool bDHCP );

/*
 @ ethernet, check whether DHCP is open.
 */
bool dtv__network_ethn_is_dhcp_on(void);

/*
 @ ethernet, get current IP address, return like "201.11.11.11"
 */
const char *dtv__network_ethn_get_ip_address(void);

/*
 @ ethernet, get current subnet mask, return like "255.255.255.0"
 */
const char *dtv__network_ethn_get_submask(void);

/*
 @ ethernet, get current gateway, return like "201.11.11.1"
 */
const char *dtv__network_ethn_get_gateway(void);

/*
 @ ethernet, get current dns server, return like "201.11.11.1"
 */
const char *dtv__network_ethn_get_dns_server(void);

/*
 @ ethernet, set IP address.
 */
void dtv__network_ethn_set_ip_address( const char *ipaddr );

/*
 @ ethernet, set subnet mask.
 */
void dtv__network_ethn_set_submask( const char *submask );

/*
 @ ethernet, set gateway.
 */
void dtv__network_ethn_set_gateway( const char *gateway );

/*
 @ ethernet, set dns server.
 */
void dtv__network_ethn_set_dns_server( const char *dnssvr );

/*
 @ ethernet, try connect to internet or somewhere to ensure network is connected.
 */
void dtv__network_ethn_connect(void);

/*
 @ ethernet, check whether current network is connected with internet or somewhere.
 */
bool dtv__network_ethn_is_connected(void);

/*
 @ wifi, start to scan ssid.
 */
void dtv__network_wifi_start_scan(void);

/*
 @ wifi, stop to scan.
 */
void dtv__network_wifi_stop_scan(void);

/*
 @ wifi, check whether scan is finished.
 */
bool dtv__network_wifi_is_scan_finished(void);

/*
 @ wifi, get avaliable ssid count.
 */
int dtv__network_wifi_get_ssid_count(void);

/*
 @ wifi, get one ssid.
 */
void dtv__network_wifi_get_ssid( char *ssid_name, int ssid_name_buflen, int ssid_index );

/*
 @ wifi, check signal strength of given ssid, return [0, 100].
 */
int dtv__network_wifi_get_ssid_signal_strength( const char *ssid_name );

/*
 @ wifi, check security strategy: "WEP", "WPA-PSK" or "None".
 */
const char *dtv__network_wifi_get_ssid_security( const char *ssid_name );

/*
 @ wifi, choose one ssid to connect.
 */
void dtv__network_wifi_ssid_connect( const char *ssid_name, const char *password );

/*
 @ wifi, check whether wifi is connected to given ssid.
 */
bool dtv__network_wifi_is_connected( const char *ssid_name );

/*
 @ wifi, check whether wifi is connected to internet or somewhere.
 */
bool dtv__network_wifi_is_connected_any(void);

/*
 @ wifi, get current connected ssid, return null if there's not.
 */
const char *dtv__network_wifi_get_connected_ssid(void);

#ifdef __cplusplus
}
#endif

#endif
