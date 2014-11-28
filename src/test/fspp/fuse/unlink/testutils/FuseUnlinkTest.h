#pragma once
#ifndef TEST_FSPP_FUSE_UNLINK_TESTUTILS_FUSEUNLINKTEST_H_
#define TEST_FSPP_FUSE_UNLINK_TESTUTILS_FUSEUNLINKTEST_H_

#include "test/testutils/FuseTest.h"

class FuseUnlinkTest: public FuseTest {
public:
  const char *FILENAME = "/myfile";

  void Unlink(const char *filename);
  int UnlinkAllowError(const char *filename);

  ::testing::Action<void(const char*)> FromNowOnReturnDoesntExistOnLstat();
};

#endif