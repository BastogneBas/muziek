//Crab Rave by Noisestorm
struct
{
  unsigned char mmIndex = 20;
  unsigned char unitsPerTick = 8;
} melody;

#ifdef sound1core
struct
{
  int length = 26;
  a_tone tones[26] = { 
	{ NOTE_D5, 4},
	{ NOTE_AS5, 4}, 
	{ NOTE_G5, 3},
	{0, 1},
	{ NOTE_G5, 2}, 
	{ NOTE_D5, 3},	
	{0, 1},
	{ NOTE_D5, 2},
	{ NOTE_A5, 4}, 
	{ NOTE_F5, 3},
	{0, 1},
	{ NOTE_F5, 2},
	{ NOTE_D5, 3},	
	{0, 1},
	{ NOTE_D5, 2},
	{ NOTE_A5, 4},
	{ NOTE_F5, 3}, 
	{0, 1},
	{ NOTE_F5, 2}, 
	{ NOTE_C5, 3},
	{0, 1}, 
	{ NOTE_C5, 4},
	{ NOTE_E5, 3},
	{0, 1},
	{ NOTE_E5, 2},
	{ NOTE_F5, 4},	
		};
} melody_part1;
#endif

#ifdef sound2core
struct
{
	int length = 0;
	a_tone tones[0] = {};
}melody_part2;
#endif
