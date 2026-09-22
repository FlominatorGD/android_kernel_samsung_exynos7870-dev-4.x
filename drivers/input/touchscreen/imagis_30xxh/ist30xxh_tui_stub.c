// SPDX-License-Identifier: GPL-2.0
/*
 * Weak stand-ins for the Trustonic TUI helpers the IST3038H driver calls.
 * The exynos7870 gud/TlcTui driver is not in this tree; if it is linked
 * later these weak definitions are overridden.
 */
#include <linux/export.h>
#include <linux/types.h>

int __weak trustedui_blank_inc(void)
{
	return 0;
}
EXPORT_SYMBOL_GPL(trustedui_blank_inc);

int __weak trustedui_blank_dec(void)
{
	return 0;
}
EXPORT_SYMBOL_GPL(trustedui_blank_dec);

int __weak trustedui_blank_get_counter(void)
{
	return 0;
}
EXPORT_SYMBOL_GPL(trustedui_blank_get_counter);

void __weak trustedui_blank_set_counter(int counter)
{
}
EXPORT_SYMBOL_GPL(trustedui_blank_set_counter);

int __weak trustedui_get_current_mode(void)
{
	return 0;
}
EXPORT_SYMBOL_GPL(trustedui_get_current_mode);

void __weak trustedui_set_mode(int mode)
{
}
EXPORT_SYMBOL_GPL(trustedui_set_mode);

int __weak trustedui_set_mask(int mask)
{
	return 0;
}
EXPORT_SYMBOL_GPL(trustedui_set_mask);

int __weak trustedui_clear_mask(int mask)
{
	return 0;
}
EXPORT_SYMBOL_GPL(trustedui_clear_mask);

void __weak trustedui_set_tsp_irq(int irq_num)
{
}
EXPORT_SYMBOL_GPL(trustedui_set_tsp_irq);

int __weak tui_force_close(u32 arg)
{
	return 0;
}
EXPORT_SYMBOL_GPL(tui_force_close);
