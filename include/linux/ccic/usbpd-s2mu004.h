/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Compatibility shim: the Exynos7870 MUIC driver includes the S2MU004 USB-PD
 * definitions through linux/ccic/, while the ported header lives next to the
 * rest of the ifpmic CCIC headers.
 */
#ifndef __CCIC_USBPD_S2MU004_H__
#define __CCIC_USBPD_S2MU004_H__

#include <linux/ifpmic/ccic/usbpd-s2mu004.h>

#endif /* __CCIC_USBPD_S2MU004_H__ */
