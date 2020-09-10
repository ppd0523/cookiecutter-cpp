/**
 * @file main.cpp
 * @author {{ cookiecutter.full_name }} ({{ cookiecutter.email }})
 * @brief {{ cookiecutter.project_short_description }}
 * @version 0.1.0
 * @date {% now 'local', '%Y-%m-%d' %}
 * 
 * (c) {% now 'local', '%Y' %}. {{ cookiecutter.full_name }} all rights reserved.
 * 
 */

#include <cstdlib>

#include "spdlog/spdlog.h"

int main(int argc, char* argv[]){
    spdlog::set_level(spdlog::level::trace);
    spdlog::set_pattern("%Y-%m-%dT:%T%z, [%^%8l%$] [%s:%!,L:%#]: %v");

    SPDLOG_INFO("spdlog info.. {}", "hello world");
    SPDLOG_WARN("spdlog warn.. {:02x}", 255);
    SPDLOG_DEBUG("spdlog debug.. {:05.2f}", 3.141592);
    SPDLOG_ERROR("spdlog error.. {}", 'c');
    SPDLOG_CRITICAL("spdlog critical.. {}", "이 메세지가 표시되어야 함");
    
    return EXIT_SUCCESS;
}