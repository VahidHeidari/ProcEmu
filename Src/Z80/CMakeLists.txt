#
# ProcEmu (Processor Emulator) is a simple emulator frame work for some famous
# processors and architectures.
#
# Copyright (C) 2017  Vahid Heidari (DeltaCode)
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.
#

cmake_minimum_required(VERSION 2.8)
project(Z80)
set(CMAKE_USE_RELATIVE_PATHS true)

set(TARGET_NAME z80)

set(SOURCES_LIST z80.c)

add_library(${TARGET_NAME} ${SOURCES_LIST})

