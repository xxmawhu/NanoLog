#pragma once
#include "NanoLog.h"
#include "NanoLogCpp17.h"
// using namespace NanoLog::LogLevels;
#define LOG_DEBUG(format, ...) NANO_LOG(DEBUG, format, ##__VA_ARGS__)
#define LOG_INFO(format, ...) NANO_LOG(NOTICE, format, ##__VA_ARGS__)
#define LOG_WARNING(format, ...) NANO_LOG(WARNING, format, ##__VA_ARGS__)
#define LOG_ERROR(format, ...) NANO_LOG(ERROR, format, ##__VA_ARGS__)

