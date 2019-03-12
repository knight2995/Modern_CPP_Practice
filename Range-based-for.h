#pragma once

#include <iostream>

void func()
{
	int arr[30] = { 1,2,3,0 };

	for (auto v : arr)
		std::cout<<v<<std::endl;
}