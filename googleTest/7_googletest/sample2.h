#pragma once

#include <gtest/gtest.h>

class Sample2 : public testing::Test
{
  public:
  static void SetUpTestCase();
  static void TearDownTestCase();

  virtual void SetUp() override;
  virtual void TearDown() override;


};
