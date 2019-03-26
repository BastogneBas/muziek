/* TETRIS_THEME_A{{{*/
struct
{
	unsigned char mmIndex = 24;
	unsigned char unitsPerTick = 4;
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
/* }}}*/
