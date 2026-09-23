#ifndef __EXYNOS_ADV_TRACER_H__
#define __EXYNOS_ADV_TRACER_H__

struct adv_tracer_info {
	unsigned int plugin_num;
	struct device *dev;
	unsigned int enter_wfi;
};

extern void *adv_tracer_memcpy_align_4(void *dest, const void *src, unsigned int n);
#if defined(CONFIG_EXYNOS_ADV_TRACER)
extern int adv_tracer_arraydump(void);
#else
static inline int adv_tracer_arraydump(void) { return 0; }
#endif
#endif

