#ifndef __PLAT_IOMUX_H
#define __PLAT_IOMUX_H

#define INVALID_MODE	0xffffffff

int gpio_to_mode(int gpio);
int mode_to_gpio(unsigned int mode);
void iomux_set_gpio_mode(int gpio);
void iomux_set(unsigned int mode);

#endif