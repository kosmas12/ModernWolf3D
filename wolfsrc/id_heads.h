// ID_GLOB.H


#include <alloca.h>
#include <ctype.h>
//#include <DOS.H>
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <memory.h>
//#include <PROCESS.H>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <values.h>
#include <dirent.h>
#include <stdbool.h>
#define __ID_GLOB__
#include "version.h"

//--------------------------------------------------------------------------

extern char signon;

#define	introscn	signon

#ifdef JAPAN
#ifdef JAPDEMO
#include "FOREIGN\JAPAN\GFXV_WJ1.H"
#else
#include "FOREIGN\JAPAN\GFXV_WJ6.H"
#endif
#include "AUDIOWL6.H"
#include "MAPSWL6.H"
#else

#ifndef SPEAR

#include "GFXV_WL6.H"
#include "AUDIOWL6.H"
#include "MAPSWL6.H"

#else

#ifndef SPEARDEMO
#include "GFXV_SOD.H"
#include "AUDIOSOD.H"
#include "MAPSSOD.H"
#else
#include "GFXV_SDM.H"
#include "AUDIOSDM.H"
#include "MAPSSDM.H"
#endif

#endif
#endif
//-----------------


#define GREXT	"VGA"

//
//	ID Engine
//	Types.h - Generic types, #defines, etc.
//	v1.0d1
//

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

#define	nil	((void *)0)


#include "ID_MM.H"
#include "ID_PM.H"
#include "ID_CA.H"
#include "ID_VL.H"
#include "ID_VH.H"
#include "ID_IN.H"
#include "ID_SD.H"
#include "ID_US.H"


void	Quit (char *error);		// defined in user program

//
// replacing refresh manager with custom routines
//

#define	PORTTILESWIDE		20      // all drawing takes place inside a
#define	PORTTILESHIGH		13		// non displayed port of this size

#define UPDATEWIDE			PORTTILESWIDE
#define UPDATEHIGH			PORTTILESHIGH

#define	MAXTICS				10
#define DEMOTICS			4

#define	UPDATETERMINATE	0x0301

extern	unsigned	mapwidth,mapheight,tics;
extern	boolean		compatability;

extern	byte		*updateptr;
extern	unsigned	uwidthtable[UPDATEHIGH];
extern	unsigned	blockstarts[UPDATEWIDE*UPDATEHIGH];

extern	byte		fontcolor,backcolor;

#define SETFONTCOLOR(f,b) fontcolor=f;backcolor=b;

