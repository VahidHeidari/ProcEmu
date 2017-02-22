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

#include "emulator.h"

#include <stdlib.h>
#include <string.h>

#define IS_ALLOCATED(PTR_SIZE)		(PTR_SIZE != DONT_ALLOCATE)

typedef struct Emulator
{
	ProcessorPtr processor;				/// Emulating Processor
	ProcessorSize processor_size;			/// Used for allocation

	ProcessorDataPtr processor_data;		/// Processor specific data structurs
	ProcessorDataSize processor_data_size;		/// Used for allocation

	UserDataPtr user_data;				/// User data for client

	/// Emulation functions
	PowerOnFunc power_on;
	PowerOffFunc power_off;
	ResetFunc reset;
	StepFunc step;
	RunFunc run;
	RunCyclesFunc run_cycles;
} Emulator, *pEmulator;

EmulatorPtr emulator_init()
{
#ifndef STATIC_MEMORY_EMULATOR
	EmulatorPtr new_emulator = (EmulatorPtr)malloc(sizeof(Emulator));
#else
	static Emulator static_memory_emulator;
	EmulatorPtr new_emulator = &static_memory_emulator;
#endif

	memset(new_emulator, 0, sizeof(Emulator));
	return new_emulator;
}

int emulator_close(EmulatorPtr emulator)
{
#ifndef STATIC_MEMORY_EMULATOR
	if (IS_ALLOCATED(emulator->processor_size))
		free(emulator->processor);
	if (IS_ALLOCATED(emulator->processor_data_size))
		free(emulator->processor_data);
	memset(emulator, 0, sizeof(Emulator));
	free(emulator);
#else
	memset(emulator, 0, sizeof(Emulator));
#endif
	return 1;
}

int emulator_save_state(EmulatorPtr emulator, const char* path)
{
	return 1;
}

int emulator_load_state(EmulatorPtr emulator, const char* path)
{
	return 1;
}

int step(EmulatorPtr emulator)
{
	return 1;
}

int run(EmulatorPtr emulator)
{
	return 1;
}

int run_cycles(EmulatorPtr emulator, int cycles)
{
	return 1;
}

