
#pragma once

#include "../IntegrationTestLib/BaseFunctionalTests.h"
#include "../IntegrationTestLib/Logger.h"
#include "gtest/gtest.h"

extern System::Dispatcher globalSystem;
extern CryptoNote::Currency currency;
extern Tests::Common::BaseFunctionalTestsConfig config;

class TransfersTest :
  public Tests::Common::BaseFunctionalTests,
  public ::testing::Test {

public:
  TransfersTest() : BaseFunctionalTests(currency, globalSystem, config) {
  }
};
