/* SPDX-License-Identifier: GPL-2.0 */
/*
 * 3.18 drivers include <linux/sec_sysfs.h>. On this 4.14 tree the
 * implementation is sec_device_create() in drivers/samsung/sec_class.c,
 * selected by CONFIG_DRV_SAMSUNG. CONFIG_SEC_SYSFS is not a Kconfig symbol
 * here, so do not key the stubs off that name.
 */
#ifndef SEC_SYSFS_H
#define SEC_SYSFS_H

#include <linux/device.h>

#ifdef CONFIG_DRV_SAMSUNG
extern struct device *sec_device_create(void *drvdata, const char *fmt);
extern void sec_device_destroy(dev_t devt);
#else
static inline struct device *sec_device_create(void *drvdata, const char *fmt)
{
	return NULL;
}
static inline void sec_device_destroy(dev_t devt)
{
}
#endif

static inline struct device *sec_device_find(const char *name)
{
	return NULL;
}

#endif /* SEC_SYSFS_H */
