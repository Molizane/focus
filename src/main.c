#include "config.h"
#ifdef ARCH_SPECTRUM
#include "focus/spectrum/main.h"
#include "focus/spectrum/console.h"
#endif
#include "focus/util.h"
#include "focus/types.h"
#include "focus/version.h"
#include "focus/memory.h"
#include "focus/errno.h"
#include "focus/vfs.h"
#include "focus/shell.h"


static void banner();


void main( void )
{
	errno = 0;

	intr_disable();
	hw_init();

	/* print a banner */
	printf( "%s %s\n", os_name, os_version );

	memory_init();
	device_init();
	vfs_init();

	/* new line after all initialisation messages */
	printf("\n");

    console_init();

	/* fire up the shell! */
	shell_start();
}

