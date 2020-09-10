/**
 * @file function.cpp
 * @author {{ cookiecutter.full_name }} ({{ cookiecutter.email }})
 * @brief 함수 정의
 * @version 0.1.0
 * @date {% now 'local', '%Y-%m-%d' %}
 * 
 * (c) {% now 'local', '%Y' %}. {{ cookiecutter.full_name }} all rights reserved.
 * 
 */

#include "{{cookiecutter.project_slug}}/function.h"

/**
 * @brief 덧셈
 * 
 * @param a 피가산수
 * @param b 가수
 * @return int 합
 */
int sum(int a, int b){
    return a + b;
}

/**
 * @brief 뺄셈
 * 
 * @param a 피감수
 * @param b 감수
 * @return int 차
 */
int minus(int a, int b){
    return a - b;
}