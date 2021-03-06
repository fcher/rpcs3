#pragma once

namespace vm { using namespace ps3; }

// libvoice = 0x80310801 - 0x803108ff
// libvoice version 100

// Error Codes
enum
{
	CELL_VOICE_ERROR_ADDRESS_INVALID       = 0x8031080a,
	CELL_VOICE_ERROR_ARGUMENT_INVALID      = 0x80310805,
	CELL_VOICE_ERROR_CONTAINER_INVALID     = 0x80310806,
	CELL_VOICE_ERROR_DEVICE_NOT_PRESENT    = 0x80310812,
	CELL_VOICE_ERROR_EVENT_DISPATCH        = 0x80310811,
	CELL_VOICE_ERROR_EVENT_QUEUE           = 0x8031080f,
	CELL_VOICE_ERROR_GENERAL               = 0x80310803,
	CELL_VOICE_ERROR_LIBVOICE_INITIALIZED  = 0x80310802,
	CELL_VOICE_ERROR_LIBVOICE_NOT_INIT     = 0x80310801,
	CELL_VOICE_ERROR_NOT_IMPLEMENTED       = 0x80310809,
	CELL_VOICE_ERROR_PORT_INVALID          = 0x80310804,
	CELL_VOICE_ERROR_RESOURCE_INSUFFICIENT = 0x80310808,
	CELL_VOICE_ERROR_SERVICE_ATTACHED      = 0x8031080c,
	CELL_VOICE_ERROR_SERVICE_DETACHED      = 0x8031080b,
	CELL_VOICE_ERROR_SERVICE_HANDLE        = 0x80310810,
	CELL_VOICE_ERROR_SERVICE_NOT_FOUND     = 0x8031080d,
	CELL_VOICE_ERROR_SHAREDMEMORY          = 0x8031080e,
	CELL_VOICE_ERROR_TOPOLOGY              = 0x80310807,
};

// Definitions
enum
{
	CELLVOICE_MAX_IN_VOICE_PORT = 32,
	CELLVOICE_MAX_OUT_VOICE_PORT = 4,
	CELLVOICE_GAME_1MB_MAX_IN_VOICE_PORT = 8,
	CELLVOICE_GAME_1MB_MAX_OUT_VOICE_PORT = 2,
	CELLVOICE_MAX_PORT = 128,
	CELLVOICE_INVALID_PORT_ID = 0xff,
	
	CELLVOICE_PORTTYPE_NULL = -1,
	CELLVOICE_PORTTYPE_IN_MIC = 0,
	CELLVOICE_PORTTYPE_IN_PCMAUDIO = 1,
	CELLVOICE_PORTTYPE_IN_VOICE = 2,
	CELLVOICE_PORTTYPE_OUT_PCMAUDIO = 3,
	CELLVOICE_PORTTYPE_OUT_VOICE = 4,
	CELLVOICE_PORTTYPE_OUT_SECONDARY = 5,
	
	CELLVOICE_PORTSTATE_NULL = -1,
	CELLVOICE_PORTSTATE_IDLE = 0,
	CELLVOICE_PORTSTATE_READY = 1,
	CELLVOICE_PORTSTATE_BUFFERING = 2,
	CELLVOICE_PORTSTATE_RUNNING = 3,
	
	CELLVOICE_BITRATE_NULL  = -1,
	CELLVOICE_BITRATE_3850  = 3850,
	CELLVOICE_BITRATE_4650  = 4650,
	CELLVOICE_BITRATE_5700  = 5700,
	CELLVOICE_BITRATE_7300  = 7300,
	CELLVOICE_BITRATE_14400 = 14400,
	CELLVOICE_BITRATE_16000 = 16000,
	CELLVOICE_BITRATE_22533 = 22533,
	
	CELLVOICE_SAMPLINGRATE_NULL = -1,
	CELLVOICE_SAMPLINGRATE_16000 = 16000,
	
	CELLVOICE_EVENT_DATA_ERROR = 1 << 0,
	CELLVOICE_EVENT_PORT_ATTACHED = 1 << 1,
	CELLVOICE_EVENT_PORT_DETACHED = 1 << 2,
	CELLVOICE_EVENT_SERVICE_ATTACHED = 1 << 3,
	CELLVOICE_EVENT_SERVICE_DETACHED = 1 << 4,
	CELLVOICE_EVENT_PORT_WEAK_ATTACHED = 1 << 5,
	CELLVOICE_EVENT_PORT_WEAK_DETACHED = 1 << 6,
	
	CELLVOICE_PCM_NULL = -1,
	CELLVOICE_PCM_FLOAT = 0,
	CELLVOICE_PCM_FLOAT_LITTLE_ENDIAN = 1,
	CELLVOICE_PCM_SHORT = 2,
	CELLVOICE_PCM_SHORT_LITTLE_ENDIAN = 3,
	CELLVOICE_PCM_INTEGER = 4,
	CELLVOICE_PCM_INTEGER_LITTLE_ENDIAN = 5,
	
	CELLVOICE_ATTR_ENERGY_LEVEL = 1000,
	CELLVOICE_ATTR_VAD = 1001,
	CELLVOICE_ATTR_DTX = 1002,
	CELLVOICE_ATTR_AUTO_RESAMPLE = 1003,
	CELLVOICE_ATTR_LATENCY = 1004,
	CELLVOICE_ATTR_SILENCE_THRESHOLD = 1005,
	
	CELLVOICE_APPTYPE_GAME_1MB = 1 << 29
};
