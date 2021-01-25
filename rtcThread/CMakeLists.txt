cmake_minimum_required(VERSION 3.0.0)
project(rtcThread VERSION 0.1.0)

add_definitions(-D_CRT_NONSTDC_NO_DEPRECATE)
add_definitions(-DV8_DEPRECATION_WARNINGS)
add_definitions(-DUSE_AURA=1)
add_definitions(-DNO_TCMALLOC) 
add_definitions(-DFULL_SAFE_BROWSING)
add_definitions(-DSAFE_BROWSING_CSD)
add_definitions(-DSAFE_BROWSING_DB_LOCAL)
add_definitions(-DCHROMIUM_BUILD)
add_definitions(-DFIELDTRIAL_TESTING_ENABLED)
add_definitions(-D_HAS_EXCEPTIONS=0)
add_definitions(-D__STD_C)
add_definitions(-D_CRT_RAND_S)
add_definitions(-D_CRT_SECURE_NO_DEPRECATE)
add_definitions(-D_SCL_SECURE_NO_DEPRECATE)
add_definitions(-D_ATL_NO_OPENGL)
add_definitions(-D_WINDOWS)
add_definitions(-DCERT_CHAIN_PARA_HAS_EXTRA_FIELDS)
add_definitions(-DPSAPI_VERSION=1)
add_definitions(-DWIN32)
add_definitions(-D_SECURE_ATL)
add_definitions(-DWINAPI_FAMILY=WINAPI_FAMILY_DESKTOP_APP)
add_definitions(-DWIN32_LEAN_AND_MEAN)
add_definitions(-DNOMINMAX)
add_definitions(-D_UNICODE)
add_definitions(-DUNICODE)
add_definitions(-D_DEBUG)
add_definitions(-DDYNAMIC_ANNOTATIONS_ENABLED=1)
add_definitions(-DWTF_USE_DYNAMIC_ANNOTATIONS=1)
add_definitions(-DWEBRTC_ENABLE_PROTOBUF=1)
add_definitions(-DWEBRTC_INCLUDE_INTERNAL_AUDIO_DEVICE)
add_definitions(-DHAVE_SCTP)
add_definitions(-DUSE_BUILTIN_SW_CODECS)
add_definitions(-D_CRT_NONSTDC_NO_WARNINGS)
add_definitions(-D_CRT_NONSTDC_NO_DEPRECATE) 
add_definitions(-DWEBRTC_NON_STATIC_TRACE_EVENT_HANDLERS=1)
add_definitions(-DWEBRTC_WIN)
add_definitions(-D_CRT_SECURE_NO_WARNINGS)
add_definitions(-DFEATURE_ENABLE_SSL)


include_directories(.)
include_directories(src)
include_directories(src/rtc_base)

aux_source_directory(src DIR_SRCS)
aux_source_directory(src/rtc_base DIR_RTC_BASE_SRCS)
aux_source_directory(src/rtc_base/strings DIR_RTC_BASE_STRINGS_SRCS)
aux_source_directory(src/rtc_base/numerics DIR_RTC_BASE_NUMERICS_SRCS)

source_group(src FILES ${DIR_SRCS})
source_group(src\\rtc_base FILES ${DIR_RTC_BASE_SRCS})
source_group(src\\rtc_base\\strings FILES ${DIR_RTC_BASE_STRINGS_SRCS})
source_group(src\\rtc_base\\numerics FILES ${DIR_RTC_BASE_NUMERICS_SRCS})

add_executable(rtcThread 
main.cpp 
${DIR_SRCS} 
${DIR_RTC_BASE_SRCS} 
${DIR_RTC_BASE_STRINGS_SRCS}
${DIR_RTC_BASE_NUMERICS_SRCS}
)

