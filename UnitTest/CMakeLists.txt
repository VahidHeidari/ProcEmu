#
# ProcEmu (Processor Emulator) is a simple emulator frame work for famous
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
project(InsertYourProjectNameHere)
set(CMAKE_USE_RELATIVE_PATHS true)

set(TARGET_NAME test-target-name)

set(SOURCES_LIST main.c)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c89 -Wall -Wextra -pedantic")

add_executable(${TARGET_NAME} ${SOURCES_LIST})

