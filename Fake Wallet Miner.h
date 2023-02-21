#include "color.hpp"

#include <Windows.h>
#include <TlHelp32.h>
#include <iostream>
#include <fstream>
#include <thread>

std::string gen_random(const int len);

std::string gen_random_digits(const int len);