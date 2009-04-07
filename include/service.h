/*
 *
 *  Connection Manager
 *
 *  Copyright (C) 2007-2009  Intel Corporation. All rights reserved.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2 as
 *  published by the Free Software Foundation.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#ifndef __CONNMAN_SERVICE_H
#define __CONNMAN_SERVICE_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * SECTION:service
 * @title: Service premitives
 * @short_description: Functions for handling services
 */

enum connman_service_type {
	CONNMAN_SERVICE_TYPE_UNKNOWN  = 0,
	CONNMAN_SERVICE_TYPE_ETHERNET = 1,
	CONNMAN_SERVICE_TYPE_WIFI     = 2,
	CONNMAN_SERVICE_TYPE_WIMAX    = 3,
};

enum connman_service_mode {
	CONNMAN_SERVICE_MODE_UNKNOWN = 0,
	CONNMAN_SERVICE_MODE_MANAGED = 1,
	CONNMAN_SERVICE_MODE_ADHOC   = 2,
};

enum connman_service_security {
	CONNMAN_SERVICE_SECURITY_UNKNOWN = 0,
	CONNMAN_SERVICE_SECURITY_NONE    = 1,
	CONNMAN_SERVICE_SECURITY_WEP     = 2,
	CONNMAN_SERVICE_SECURITY_WPA     = 3,
	CONNMAN_SERVICE_SECURITY_WPA2    = 4,
};

enum connman_service_state {
	CONNMAN_SERVICE_STATE_UNKNOWN       = 0,
	CONNMAN_SERVICE_STATE_IDLE          = 1,
	CONNMAN_SERVICE_STATE_ASSOCIATION   = 2,
	CONNMAN_SERVICE_STATE_CONFIGURATION = 3,
	CONNMAN_SERVICE_STATE_READY         = 4,
	CONNMAN_SERVICE_STATE_DISCONNECT    = 5,
	CONNMAN_SERVICE_STATE_FAILURE       = 6,
};

struct connman_service;

#ifdef __cplusplus
}
#endif

#endif /* __CONNMAN_SERVICE_H */
