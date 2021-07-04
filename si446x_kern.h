/* SPDX-License-Identifier: GPL-2.0-only */
/**
 * @file si446x_kern.h
 * @author Sunip K. Mukherjee (sunipkmukherjee@gmail.com)
 * @brief 
 * @version 1.0a
 * @date 2021-06-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _SI446X_KERN_H
#define _SI446X_KERN_H
#include <linux/types.h>

static int si446x_open(struct inode *inod, struct file *filp);
static int si446x_release(struct inode *inod, struct file *filp);
static long si446x_ioctl(struct file *filp, unsigned int cmd, unsigned long arg);
static ssize_t si446x_read(struct file *filp, char __user *buf, size_t count, loff_t *offset);
static ssize_t si446x_write(struct file *filp, const char __user *buf, size_t count, loff_t *offset);
static unsigned int si446x_poll(struct file *filp, struct poll_table_struct *poll_table);
#endif