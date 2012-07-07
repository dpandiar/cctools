/*
Copyright (C) 2012- The University of Notre Dame
This software is distributed under the GNU General Public License.
See the file COPYING for details.
*/

#include "cctools.h"
#include "debug.h"

#include <assert.h>
#include <stdio.h>

void print_version (FILE *stream, const char *cmd)
{
	fprintf(stream, "%s version %s (released %s)\n", cmd, CCTOOLS_VERSION, CCTOOLS_RELEASE_DATE);
	fprintf(stream, "\tBuilt by %s@%s on %s at %s\n", BUILD_USER, BUILD_HOST, __DATE__, __TIME__);
	fprintf(stream, "\tConfiguration: %s\n", CCTOOLS_CONFIGURE_ARGUMENTS);
}

void debug_version (int type, const char *cmd)
{
	debug(type, "%s version %s (released %s)", cmd, CCTOOLS_VERSION, CCTOOLS_RELEASE_DATE);
	debug(type, "Built by %s@%s on %s at %s", BUILD_USER, BUILD_HOST, __DATE__, __TIME__);
	debug(type, "Configuration: %s\n", CCTOOLS_CONFIGURE_ARGUMENTS);
}
