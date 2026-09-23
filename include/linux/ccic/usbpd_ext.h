/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Compatibility shim: the imported exynos7870 CCIC driver includes the
 * extended USB-PD helpers via linux/ccic/, while the implementation lives in
 * linux/ifpmic/ccic/usbpd_ext.h.
 */
#ifndef __CCIC_USBPD_EXT_H__
#define __CCIC_USBPD_EXT_H__

#include <linux/ifpmic/ccic/usbpd_ext.h>

#endif /* __CCIC_USBPD_EXT_H__ */
