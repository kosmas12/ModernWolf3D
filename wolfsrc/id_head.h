// ID_HEAD.H

#include <stdbool.h>

#define	EXTENSION	"WLF"
#define WOLF

#define	TEXTGR	0
#define	CGAGR	1
#define	EGAGR	2
#define	VGAGR	3

#define GRMODE	VGAGR

#include "version.h"

#define boolean bool
typedef	unsigned	char		byte;
typedef	unsigned	int			word;
typedef	unsigned	long		longword;
typedef	byte *					Ptr;

typedef	struct
		{
			int	x,y;
		} Point;

typedef	struct
		{
			Point	ul,lr;
		} Rect;


void	Quit (char *error);		// defined in user program

