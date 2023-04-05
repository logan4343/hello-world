#pragma once

#include <gtest/gtest.h>
#include <iostream>

using namespace std;
class Sample :public testing::Test
{
	public:
		Sample();
		virtual ~Sample();
		static void SetUpTestCase();
	        static void TearDownTestCase();
	        void SetUp();
		void TearDown();
	        void bar1();
	        int bar2(int a, int b);
	        void bar3(int a, int b);	

};
