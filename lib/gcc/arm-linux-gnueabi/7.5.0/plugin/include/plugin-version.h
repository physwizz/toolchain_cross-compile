#include "configargs.h"

#define GCCPLUGIN_VERSION_MAJOR   7
#define GCCPLUGIN_VERSION_MINOR   5
#define GCCPLUGIN_VERSION_PATCHLEVEL   0
#define GCCPLUGIN_VERSION  (GCCPLUGIN_VERSION_MAJOR*1000 + GCCPLUGIN_VERSION_MINOR)

static char basever[] = "7.5.0";
static char datestamp[] = "20191114";
static char devphase[] = "";
static char revision[] = "[linaro-7.5-2019.12 revision 44900969eaa3e634ec386fa51ce0810f92ef07e1]";

/* FIXME plugins: We should make the version information more precise.
   One way to do is to add a checksum. */

static struct plugin_gcc_version gcc_version = {basever, datestamp,
						devphase, revision,
						configuration_arguments};
