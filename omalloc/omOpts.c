/*******************************************************************
 *  File:    omStats.c
 *  Purpose: definitions of stats related stuff
 *  Author:  obachman (Olaf Bachmann)
 *  Created: 11/99
 *  Version: $Id: omOpts.c,v 1.4 2000-09-18 09:12:15 obachman Exp $
 *******************************************************************/

#include "omAlloc.h"
#include "omDefaultConfig.h"

omOpts_t om_Opts = 
{
  OM_DEFAULT_MIN_TRACK,
  OM_DEFAULT_MIN_CHECK,
  OM_DEFAULT_KEEP,
  OM_DEFAULT_HOW_TO_REPORT_ERRORS,
  OM_DEFAULT_MARK_AS_STATIC,
  OM_DEFAULT_PAGES_PER_REGION,
  OM_DEFAULT_OUT_OF_MEMORY_FUNC,
  OM_DEFAULT_MEMORY_LOW_FUNC,
  OM_DEFAULT_ERROR_HOOK
};




