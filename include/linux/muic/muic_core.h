/*
 * include/linux/muic/muic_core.h
 *
 * Exynos7870/S2MU004 MUIC helper macros.
 *
 * This header used to be a full copy of <linux/muic/muic.h> which shared the
 * very same include guard, so a translation unit silently ended up with either
 * of the two generations.  The common definitions (enums, struct
 * muic_platform_data and prototypes) now live in muic.h only, and this header
 * just adds the MUIC-core specific notifier macros on top of it.
 */

#ifndef __MUIC_CORE_H__
#define __MUIC_CORE_H__

#include <linux/muic/muic.h>

#ifdef CONFIG_IFCONN_NOTIFIER
#include <linux/ifconn/ifconn_notifier.h>
#endif

#define MUIC_CORE "MUIC_CORE"

#ifdef CONFIG_IFCONN_NOTIFIER
#define MUIC_SEND_NOTI_ATTACH(dev) \
{	\
	int ret;	\
	ret = ifconn_notifier_notify( \
					IFCONN_NOTIFY_MUIC,	\
					IFCONN_NOTIFY_MANAGER,	\
					IFCONN_NOTIFY_ID_ATTACH,	\
					dev,	\
					IFCONN_NOTIFY_PARAM_DATA,	\
					NULL);	\
	if (ret < 0) {	\
		pr_err("%s: Fail to send noti\n", \
				__func__);	\
	}	\
}

#define MUIC_SEND_NOTI_ATTACH_ALL(dev) \
{	\
	int ret;	\
	ret = ifconn_notifier_notify( \
					IFCONN_NOTIFY_MUIC,	\
					IFCONN_NOTIFY_ALL,	\
					IFCONN_NOTIFY_ID_ATTACH,	\
					dev,	\
					IFCONN_NOTIFY_PARAM_DATA,	\
					NULL);	\
	if (ret < 0) {	\
		pr_err("%s: Fail to send noti\n", \
				__func__);	\
	}	\
}

#define MUIC_SEND_NOTI_DETACH_ALL(dev) \
{	\
	int ret;	\
	ret = ifconn_notifier_notify( \
					IFCONN_NOTIFY_MUIC,	\
					IFCONN_NOTIFY_ALL,	\
					IFCONN_NOTIFY_ID_DETACH,	\
					dev,	\
					IFCONN_NOTIFY_PARAM_DATA,	\
					NULL);	\
	if (ret < 0) {	\
		pr_err("%s: Fail to send noti\n", \
				__func__);	\
	}	\
}

#define MUIC_SEND_NOTI_TO_CCIC_ATTACH(dev) \
{	\
	int ret;	\
	struct ifconn_notifier_template template;	\
	template.cable_type = dev;	\
	ret = ifconn_notifier_notify( \
					IFCONN_NOTIFY_MUIC,	\
					IFCONN_NOTIFY_CCIC,	\
					IFCONN_NOTIFY_ID_ATTACH,	\
					IFCONN_NOTIFY_EVENT_ATTACH,	\
					IFCONN_NOTIFY_PARAM_DATA,	\
					&template);	\
	if (ret < 0) {	\
		pr_err("%s: Fail to send noti\n", \
				__func__);	\
	}	\
}

#define MUIC_SEND_NOTI_TO_CCIC_DETACH(dev) \
{	\
	int ret;	\
	struct ifconn_notifier_template template;	\
	template.cable_type = dev;	\
	ret = ifconn_notifier_notify( \
					IFCONN_NOTIFY_MUIC,	\
					IFCONN_NOTIFY_CCIC,	\
					IFCONN_NOTIFY_ID_DETACH,	\
					IFCONN_NOTIFY_EVENT_DETACH,	\
					IFCONN_NOTIFY_PARAM_DATA,	\
					&template);	\
	if (ret < 0) {	\
		pr_err("%s: Fail to send noti\n", \
				__func__);	\
	}	\
}

#define MUIC_SEND_NOTI_DETACH(dev) \
{	\
	int ret;	\
	struct ifconn_notifier_template template;	\
	template.cable_type = dev;	\
	ret = ifconn_notifier_notify( \
					IFCONN_NOTIFY_MUIC,	\
					IFCONN_NOTIFY_MANAGER,	\
					IFCONN_NOTIFY_ID_DETACH,	\
					IFCONN_NOTIFY_EVENT_DETACH,	\
					IFCONN_NOTIFY_PARAM_DATA,	\
					&template);	\
	if (ret < 0) {	\
		pr_err("%s: Fail to send noti\n", \
				__func__);	\
	}	\
}
#else
#define MUIC_SEND_NOTI_ATTACH(dev)	\
		muic_notifier_attach_attached_dev(dev)
#define MUIC_SEND_NOTI_DETACH(dev) \
		muic_notifier_detach_attached_dev(dev)
#define MUIC_SEND_NOTI_TO_CCIC_ATTACH(dev) \
		muic_pdic_notifier_attach_attached_dev(dev)
#define MUIC_SEND_NOTI_TO_CCIC_DETACH(dev) \
		muic_pdic_notifier_detach_attached_dev(dev)
#endif

#endif /* __MUIC_CORE_H__ */
