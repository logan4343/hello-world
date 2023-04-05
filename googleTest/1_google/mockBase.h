#pragma once
#include "baseInterface.h"
#include <gmock/gmock.h>

class MockBase : public BaseInterface
{
 public:

  MOCK_METHOD0(func1, void());

};
