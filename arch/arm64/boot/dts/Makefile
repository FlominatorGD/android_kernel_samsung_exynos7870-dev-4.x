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

# Samsung Galaxy A3 (2017) (a3y17lte).  The board dts files live at $(src)
# root next to the imported Exynos7870 dtsi includes and are addressed by
# flat name through CONFIG_BUILD_ARM64_APPENDED_DTB_IMAGE_NAMES when
# building Image.gz-dtb (eur_open rev00-03 are the boards selected there).
dtb-$(CONFIG_SOC_EXYNOS7870) += exynos7870-a3y17lte_eur_open_00.dtb
dtb-$(CONFIG_SOC_EXYNOS7870) += exynos7870-a3y17lte_eur_open_01.dtb
dtb-$(CONFIG_SOC_EXYNOS7870) += exynos7870-a3y17lte_eur_open_02.dtb
dtb-$(CONFIG_SOC_EXYNOS7870) += exynos7870-a3y17lte_eur_open_03.dtb
dtb-$(CONFIG_SOC_EXYNOS7870) += exynos7870-a3y17lte_eur_openxc_00.dtb
dtb-$(CONFIG_SOC_EXYNOS7870) += exynos7870-a3y17lte_eur_openxc_01.dtb
dtb-$(CONFIG_SOC_EXYNOS7870) += exynos7870-a3y17lte_eur_openxc_02.dtb
dtb-$(CONFIG_SOC_EXYNOS7870) += exynos7870-a3y17lte_eur_ldu_00.dtb
dtb-$(CONFIG_SOC_EXYNOS7870) += exynos7870-a3y17lte_eur_ldu_01.dtb
dtb-$(CONFIG_SOC_EXYNOS7870) += exynos7870-a3y17lte_eur_ldu_02.dtb

targets += dtbs
DTB_LIST  := $(dtb-y) $(dtbo-y)
always    := $(DTB_LIST)

dtbs: $(addprefix $(obj)/, $(DTB_LIST))

clean-files := *.dtb*