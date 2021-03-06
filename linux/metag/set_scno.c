/*
 * Copyright (c) 2016-2018 The strace developers.
 * All rights reserved.
 *
 * SPDX-License-Identifier: LGPL-2.1-or-later
 */

static int
arch_set_scno(struct tcb *tcp, kernel_ulong_t scno)
{
	metag_regs.dx[0][1] = scno;
	return set_regs(tcp->pid);
}
