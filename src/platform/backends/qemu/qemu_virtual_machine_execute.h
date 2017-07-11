/*
 * Copyright (C) 2017 Canonical, Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Authored by: Chris Townsend <christopher.townsend@canonical.com>
 *
 */

#ifndef MULTIPASS_QEMU_VIRTUAL_MACHINE_EXECUTE_H
#define MULTIPASS_QEMU_VIRTUAL_MACHINE_EXECUTE_H

#include <multipass/virtual_machine_execute.h>

namespace multipass
{
class QemuVirtualMachineExecute final : public VirtualMachineExecute
{
public:
    std::string execute(int port) override;
    std::string execute(int port, std::string command) override;
};
}

#endif // MULTIPASS_QEMU_VIRTUAL_MACHINE_EXECUTE_H
