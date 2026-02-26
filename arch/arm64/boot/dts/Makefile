# SPDX-License-Identifier: GPL-2.0

# Exynos9820 device trees (and overlays)
dtb-$(CONFIG_SOC_EXYNOS9820) += exynos/exynos9825.dtb
dtbo-$(CONFIG_SOC_EXYNOS9820) += samsung/exynos9820-d1x_kor_22.dtbo
dtbo-$(CONFIG_SOC_EXYNOS9820) += samsung/exynos9820-d1x_kor_23.dtbo
dtbo-$(CONFIG_SOC_EXYNOS9820) += samsung/exynos9820-d1x_kor_19.dtbo
dtbo-$(CONFIG_SOC_EXYNOS9820) += samsung/exynos9820-d1x_kor_21.dtbo
dtbo-$(CONFIG_SOC_EXYNOS9820) += samsung/exynos9820-d1x_kor_18.dtbo

# Exynos7870 device trees
dtb-$(CONFIG_SOC_EXYNOS7870) += exynos/exynos7870-smdk7870.dtb
dtb-$(CONFIG_SOC_EXYNOS7870) += exynos/exynos7870-universal7870.dtb
dtb-$(CONFIG_SOC_EXYNOS7870) += exynos/exynos7870-universal7870_rev01.dtb

targets += dtbs
DTB_LIST  := $(dtb-y) $(dtbo-y)
always    := $(DTB_LIST)

dtbs: $(addprefix $(obj)/, $(DTB_LIST))

clean-files := *.dtb*