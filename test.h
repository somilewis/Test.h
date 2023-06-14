#include<iostream>

#ifndef TEST_H
#define TEST_H

#define RED_ON "\033[1;31m"
#define GREEN_ON "\033[1;32m"
#define COLOR_OFF "\033[0m"

template<typename T>
void testEqual(const T& expected, const T& actual, const std::string& testname)
{
    if(expected == actual) std::cout << '\t' << GREEN_ON << "SUCCESS: " << COLOR_OFF << testname << std::endl;
    else std::cout << '\t' << RED_ON << "ERROR: "<< COLOR_OFF  << testname << std::endl;
}

void testTrue(bool predicate, const std::string& testname)
{
    if(predicate) std::cout << '\t' << GREEN_ON << "SUCCESS: " << COLOR_OFF << testname << std::endl;
    else std::cout << '\t' << RED_ON << "ERROR: "<< COLOR_OFF  << testname << std::endl;
}

void testFalse(bool predicate, const std::string& testname)
{                                                                                                                                                                                                                                                                                                                                                                                                                                                                         
    if(!predicate) std::cout << '\t' << GREEN_ON << "SUCCESS: " << COLOR_OFF << testname << std::endl;
    else std::cout << '\t' << RED_ON << "ERROR: "<< COLOR_OFF  << testname << std::endl;
}

void testSuccess(const std::string& testname)
{
    std::cout << '\t' << GREEN_ON << "SUCCESS: " << COLOR_OFF << testname << std::endl;
}

void testFail(const std::string& testname)
{
    std::cout << '\t' << RED_ON << "ERROR: "<< COLOR_OFF  << testname << std::endl;
}

#endif /* TEST_H */

