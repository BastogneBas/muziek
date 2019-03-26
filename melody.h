#include "pitches.h"

typedef struct {int note; char units; } a_tone;

#ifdef VADER_JACOB
#include "melodies/vader_jacob.h"
#endif
#ifdef BOER_WAT_ZEG_JE
#include "melodies/boer_wat_zeg_je.h"
#endif
/* MEGALOVANIA{{{*/
#ifdef MEGALOVANIA

struct
{
	uint8_t mmIndex = 22;
	uint8_t unitsPerTick = 4;
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

#endif
/* }}}*/
/* TETRIS_THEME_A{{{*/
#ifdef TETRIS_THEME_A

struct
{
	unsigned char mmIndex = 24;
	uint8_t unitsPerTick = 4;
} melody;

#ifdef sound1core
struct
{
	int length = 44;
	a_tone tones[44] = {
		{ NOTE_E5, 4 },
		{ NOTE_B4, 2 },
		{ NOTE_C5, 2 },
		{ NOTE_D5, 2 },
		{ NOTE_E5, 1 },
		{ NOTE_D5, 1 },
		{ NOTE_C5, 2 },
		{ NOTE_B4, 2 },
		{ NOTE_A4, 4 },
		{ NOTE_A4, 2 },
		{ NOTE_C5, 2 },
		{ NOTE_E5, 4 },
		{ NOTE_D5, 2 },
		{ NOTE_C5, 2 },
		{ NOTE_B4, 4 },
		{ NOTE_B4, 1 },
		{ NOTE_B4, 1 },
		{ NOTE_C5, 2 },
		{ NOTE_D5, 4 },
		{ NOTE_E5, 4 },
		{ NOTE_C5, 4 },
		{ NOTE_A4, 4 },
		{ NOTE_A4, 8 },

		{ NOTE_D5, 4 },
		{ NOTE_D5, 2 },
		{ NOTE_F5, 2 },
		{ NOTE_A5, 4 },
		{ NOTE_G5, 2 },
		{ NOTE_F5, 2 },
		{ NOTE_E5, 4 },
		{ NOTE_E5, 2 },
		{ NOTE_C5, 2 },
		{ NOTE_E5, 4 },
		{ NOTE_D5, 2 },
		{ NOTE_C5, 2 },
		{ NOTE_B4, 4 },
		{ NOTE_B4, 1 },
		{ NOTE_B4, 1 },
		{ NOTE_C5, 2 },
		{ NOTE_D5, 4 },
		{ NOTE_E5, 4 },
		{ NOTE_C5, 4 },
		{ NOTE_A4, 4 },
		{ NOTE_A4, 8 }
	};
} melody_part1;
#endif

#ifdef sound2core
struct
{
	int length = 63;
	a_tone tones[63] = {
		{ NOTE_E3, 2 },
		{ NOTE_E4, 2 },
		{ NOTE_E3, 2 },
		{ NOTE_E4, 2 },
		{ NOTE_E3, 2 },
		{ NOTE_E4, 2 },
		{ NOTE_E3, 2 },
		{ NOTE_E4, 2 },
		{ NOTE_A3, 2 },
		{ NOTE_A4, 2 },
		{ NOTE_A3, 2 },
		{ NOTE_A4, 2 },
		{ NOTE_A3, 2 },
		{ NOTE_A4, 2 },
		{ NOTE_A3, 2 },
		{ NOTE_A4, 2 },
		{ NOTE_GS3, 2 },
		{ NOTE_GS4, 2 },
		{ NOTE_GS3, 2 },
		{ NOTE_GS4, 2 },
		{ NOTE_E3, 2 },
		{ NOTE_E4, 2 },
		{ NOTE_E3, 2 },
		{ NOTE_E4, 2 },
		{ NOTE_A3, 2 },
		{ NOTE_A4, 2 },
		{ NOTE_A3, 2 },
		{ NOTE_A4, 2 },
		{ NOTE_A3, 2 },
		{ NOTE_B3, 2 },
		{ NOTE_C4, 2 },
		{ NOTE_D4, 2 },

		{ NOTE_D3, 2 },
		{ NOTE_D4, 2 },
		{ NOTE_D3, 2 },
		{ NOTE_D4, 2 },
		{ NOTE_D3, 2 },
		{ NOTE_D4, 2 },
		{ NOTE_D3, 2 },
		{ NOTE_D4, 2 },
		{ NOTE_C3, 2 },
		{ NOTE_C4, 2 },
		{ NOTE_C3, 2 },
		{ NOTE_C4, 2 },
		{ NOTE_C3, 2 },
		{ NOTE_C4, 2 },
		{ NOTE_C3, 2 },
		{ NOTE_C4, 2 },
		{ NOTE_G2, 2 },
		{ NOTE_G3, 2 },
		{ NOTE_G2, 2 },
		{ NOTE_G3, 2 },
		{ NOTE_E3, 2 },
		{ NOTE_E4, 2 },
		{ NOTE_E3, 2 },
		{ NOTE_E4, 2 },
		{ NOTE_A3, 2 },
		{ NOTE_A4, 2 },
		{ NOTE_A3, 2 },
		{ NOTE_A4, 2 },
		{ NOTE_A3, 2 },
		{ NOTE_A4, 2 },
		{ NOTE_A3, 4 }
	};
} melody_part2;
#endif

#endif
/* }}}*/
