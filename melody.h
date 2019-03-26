#include "pitches.h"

typedef struct {int note; char units; } a_tone;

#ifdef VADER_JACOB
#include "melodies/vader_jacob.h"
#endif
#ifdef BOER_WAT_ZEG_JE
#include "melodies/boer_wat_zeg_je.h"
#endif
#ifdef MEGALOVANIA
#include "melodies/megalovania.h"
#endif
#ifdef TETRIS_THEME_A
#include "melodies/tetris_theme_a.h"
#endif
