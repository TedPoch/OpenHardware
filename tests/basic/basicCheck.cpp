//
// Created by Ted Pochmara on 2019-03-02.
//

#include "gtest/gtest.h"
#include "Hardware.hpp"

TEST(BasicChecks, defaultCtor) {
    const Hardware testCtor("testy");
    EXPECT_EQ("testy", testCtor.getHWName());
    EXPECT_EQ(false, testCtor.available());
}

TEST(BasicChecks, setInUseAndFree){
    Hardware testSetInUse("testy");
    testSetInUse.setInUse();
    EXPECT_EQ(true, testSetInUse.available());
    testSetInUse.setFree();
    EXPECT_EQ(false, testSetInUse.available());
}
