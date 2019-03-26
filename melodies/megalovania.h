/* MEGALOVANIA{{{*/
struct
{
	unsigned int mmIndex = 22;
	unsigned int unitsPerTick = 4;
} melody;

#ifdef sound1core
struct
{
	int length = 44;
	a_tone tones[44] = {
		{ NOTE_D4, 1 },
		{ NOTE_D4, 1 },
		{ NOTE_D5, 2 }, // TODO: staccato
		{ NOTE_A4, 3 }, // TODO: staccato
		{ NOTE_GS4, 1 },
		{ 0, 1 },
		{ NOTE_G4, 2 },
		{ NOTE_F4, 2 },
		{ NOTE_D4, 1 },
		{ NOTE_F4, 1 },
		{ NOTE_G4, 1 },

		{ NOTE_C4, 1 },
		{ NOTE_C4, 1 },
		{ NOTE_D5, 2 }, // TODO: staccato
		{ NOTE_A4, 3 }, // TODO: staccato
		{ NOTE_GS4, 1 },
		{ 0, 1 },
		{ NOTE_G4, 2 },
		{ NOTE_F4, 2 },
		{ NOTE_D4, 1 },
		{ NOTE_F4, 1 },
		{ NOTE_G4, 1 },

		{ NOTE_B3, 1 },
		{ NOTE_B3, 1 },
		{ NOTE_D5, 2 }, // TODO: staccato
		{ NOTE_A4, 3 }, // TODO: staccato
		{ NOTE_GS4, 1 },
		{ 0, 1 },
		{ NOTE_G4, 2 },
		{ NOTE_F4, 2 },
		{ NOTE_D4, 1 },
		{ NOTE_F4, 1 },
		{ NOTE_G4, 1 },

		{ NOTE_AS3, 1 },
		{ NOTE_AS3, 1 },
		{ NOTE_D5, 2 }, // TODO: staccato
		{ NOTE_A4, 3 }, // TODO: staccato
		{ NOTE_GS4, 1 },
		{ 0, 1 },
		{ NOTE_G4, 2 },
		{ NOTE_F4, 2 },
		{ NOTE_D4, 1 },
		{ NOTE_F4, 1 },
		{ NOTE_G4, 1 }
	};
} melody_part1;
#endif

#ifdef sound2core
struct
{
	int length = 0;
	a_tone tones[0] = {};
} melody_part2;
#endif
/* }}}*/
