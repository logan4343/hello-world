#pragma once
#include <gmock/gmock.h>
#include "derive.h"
class MockDerive: public Derive
{
  public:
    MOCK_METHOD0(func1, void());

};
