#ifndef FT_ABS
# define FT_ABS
# define ABS(val) ((val < 0) * (val * -1) + (val >= 0) * (val))
#endif