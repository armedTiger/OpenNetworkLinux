/**************************************************************************//**
 *
 *
 *
 *****************************************************************************/
#include <x86_64_cel_redstone_xp/x86_64_cel_redstone_xp_config.h>

#include "x86_64_cel_redstone_xp_log.h"

static int
datatypes_init__(void)
{
#define X86_64_CEL_REDSTONE_XP_ENUMERATION_ENTRY(_enum_name, _desc)     AIM_DATATYPE_MAP_REGISTER(_enum_name, _enum_name##_map, _desc,                               AIM_LOG_INTERNAL);
#include <x86_64_cel_redstone_xp/x86_64_cel_redstone_xp.x>
    return 0;
}

void __x86_64_cel_redstone_xp_module_init__(void)
{
    AIM_LOG_STRUCT_REGISTER();
    datatypes_init__();
}

int __onlp_platform_version__ = 1;
