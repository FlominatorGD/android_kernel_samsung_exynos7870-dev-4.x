/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Compatibility shim: the driver imported from the exynos7870 3.18 tree
 * includes its headers through the ifpmic/ prefix.  The 4.14 tree keeps the
 * CCIC notifier definitions in linux/ccic/, so forward the include there
 * instead of maintaining a second, divergent copy of the same header.
 */
#ifndef __IFPMIC_CCIC_NOTIFIER_H__
#define __IFPMIC_CCIC_NOTIFIER_H__

#include <linux/ccic/ccic_notifier.h>

#endif /* __IFPMIC_CCIC_NOTIFIER_H__ */
