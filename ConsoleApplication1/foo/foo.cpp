// foo.cpp : DLL을 위해 내보낸 함수를 정의합니다.
//

#include "pch.h"
#include "framework.h"
#include "foo.h"
#include <iostream>

void foo() {
	std::cout << "foo!" << std::endl;
}