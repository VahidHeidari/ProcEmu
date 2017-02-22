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
project(ProcSimZ80)
set(CMAKE_USE_RELATIVE_PATHS true)

set(TARGET_NAME proc-sim-z80)

set(SOURCES_LIST
	main.c)

include_directories(
	${CMAKE_SOURCE_DIR}/Src/EmulatorDriver
	${CMAKE_SOURCE_DIR}/Src/Z80)

set(LIBRARIES_LIST
	emulator-driver
	z80)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c89 -Wall -Wextra -pedantic")

add_subdirectory(Z80)
add_subdirectory(EmulatorDriver)

add_executable(${TARGET_NAME} ${SOURCES_LIST})
target_link_libraries(${TARGET_NAME} ${LIBRARIES_LIST})

