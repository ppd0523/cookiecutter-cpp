/**
 * @file test.cpp
 * @author {{ cookiecutter.full_name }} ({{ cookiecutter.email }})
 * @brief 함수 단위 테스트
 * @version 0.1.0
 * @date {% now 'local', '%Y-%m-%d' %}
 * 
 * (c) {% now 'local', '%Y' %}. {{ cookiecutter.full_name }} all rights reserved.
 * 
 */

#include <limits>

#include "gtest/gtest.h"
#include "{{cookiecutter.project_slug}}/function.h"

/**
 * @brief 예제 함수 단위 테스트
 * @param SampleGroup 테스트 네임스페이스
 * @param FirstTest 테스트 이름
 */
TEST(SampleGroup, FirstTest){
    ASSERT_EQ(3, sum(1, 2)) << "Sum";
    
    int MAX = std::numeric_limits<int>::max();
    EXPECT_EQ(MAX, sum(MAX, 10)) << "overflow test";
    
    int MIN = std::numeric_limits<int>::min();
    EXPECT_EQ(MIN, minus(MIN, 1)) << "underflow test";
}