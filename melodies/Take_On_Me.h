//Take on Me by A-Ha
struct
{
  unsigned char mmIndex = 28;
  unsigned char unitsPerTick = 8;
} melody;

#ifdef sound1core
struct
{
  int length = 37;
  a_tone tones[37] = { 
	{ NOTE_FS5, 4},
	{0, 1},
	{ NOTE_FS5, 5}, 
	{ NOTE_D5, 5},
	{ NOTE_B4, 5}, 
	{0, 4},
	{ NOTE_B4, 5},	
	{0, 4},
	{ NOTE_E5, 5},
	{0, 4},
	{ NOTE_E5, 5}, 
	{0, 4},
	{ NOTE_E5, 5},
	{ NOTE_GS5, 4},
	{0, 1},
	{ NOTE_GS5, 5}, 
	{ NOTE_A5, 5}, 
	{ NOTE_B5, 5},
	{ NOTE_A5, 4},
	{0, 1},
	{ NOTE_A5, 4},
	{0, 1},
	{ NOTE_A5, 5},
	{ NOTE_E5, 5},
	{0, 4},	
	{ NOTE_D5, 5},
	{0, 4},	
	{ NOTE_FS5, 5},
	{0, 4},
	{ NOTE_FS5, 5},
	{0, 4},
	{ NOTE_FS5, 5},
	{ NOTE_E5, 4},
	{0, 1},
	{ NOTE_E5, 5},
	{ NOTE_FS5, 5}, 
	{ NOTE_E5, 5}	
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
