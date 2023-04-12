#pragma once

#include <memory> // shared_ptr

#include "Core.h"

#include "spdlog/spdlog.h"

namespace Hazel {

class HAZEL_API Log
{
public:
	Log();
	~Log();

	static void init();

	inline static std::shared_ptr<spdlog::logger>& get_core_logger() { return s_core_logger; }
	inline static std::shared_ptr<spdlog::logger>& get_client_logger() { return s_client_logger; }

private:
	static std::shared_ptr<spdlog::logger> s_core_logger;
	static std::shared_ptr<spdlog::logger> s_client_logger;

};


// Core log macros
#define HZ_CORE_LOG_CRITICAL(...)     ::Hazel::Log::get_core_logger()->critical(__VA_ARGS__)
#define HZ_CORE_LOG_ERROR(...)        ::Hazel::Log::get_core_logger()->error(__VA_ARGS__)
#define HZ_CORE_LOG_WARN(...)         ::Hazel::Log::get_core_logger()->warn(__VA_ARGS__)
#define HZ_CORE_LOG_INFO(...)         ::Hazel::Log::get_core_logger()->info(__VA_ARGS__)
#define HZ_CORE_LOG_TRACE(...)        ::Hazel::Log::get_core_logger()->trace(__VA_ARGS__)

// Client log macros
#define HZ_LOG_CRITICAL(...)          ::Hazel::Log::get_client_logger()->critical(__VA_ARGS__)
#define HZ_LOG_ERROR(...)             ::Hazel::Log::get_client_logger()->error(__VA_ARGS__)
#define HZ_LOG_WARN(...)              ::Hazel::Log::get_client_logger()->warn(__VA_ARGS__)
#define HZ_LOG_INFO(...)              ::Hazel::Log::get_client_logger()->info(__VA_ARGS__)
#define HZ_LOG_TRACE(...)             ::Hazel::Log::get_client_logger()->trace(__VA_ARGS__)


} // namespace Hazel


