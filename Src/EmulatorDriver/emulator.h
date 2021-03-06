/**
 * ProcEmu (Processor Emulator) is a simple emulator frame work for some famous
 * processors and architectures.
 *
 * Copyright (C) 2017  Vahid Heidari (DeltaCode)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef EMULATOR_H_
#define EMULATOR_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stddef.h>

#define DONT_ALLOCATE			((size_t)(-1))
#define DONT_ALLOCATE_PROCESSOR		DONT_ALLOCATE
#define PROCESSOR_DATA_NO_ALLOCATE	DONT_ALLOCATE

typedef void* ProcessorPtr;
typedef size_t ProcessorSize;

typedef void* ProcessorDataPtr;
typedef size_t ProcessorDataSize;

typedef void* UserDataPtr;

typedef struct Emulator* EmulatorPtr;

/// Processor emulation functions
typedef int (*PowerOnFunc)(EmulatorPtr emulator);
typedef int (*PowerOffFunc)(EmulatorPtr emulator);
typedef int (*ResetFunc)(EmulatorPtr emulator);
typedef int (*StepFunc)(EmulatorPtr emulator);
typedef int (*RunFunc)(EmulatorPtr emulator);
typedef int (*RunCyclesFunc)(EmulatorPtr emulator, int cycles);

EmulatorPtr emulator_init(void);
int emulator_close(EmulatorPtr emulator);
int emulator_save_state(EmulatorPtr emulator, const char* path);
int emulator_load_state(EmulatorPtr emulator, const char* path);
int step(EmulatorPtr emulator);
int run(EmulatorPtr emulator);
int run_cycles(EmulatorPtr emulator, int cycles);

#ifdef __cplusplus
}
#endif

#endif

