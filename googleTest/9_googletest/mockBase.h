#pragma once
#include "baseInterface.h"
#include <gmock/gmock.h>

class MockBase : public BaseInterface
{
	public:
		MOCK_METHOD0(func1, void());
		MOCK_METHOD0(func2, int());
		MOCK_METHOD2(func3, int(int a, int b));

};
