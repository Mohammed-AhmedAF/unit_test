#include "UserService.h"
#include "MockDatabase.h"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

using ::testing::Return;

TEST(UserServiceTest, UserIsAdult) {
    MockDatabase mockDb;

    // Expect that GetUserAge("JohnDoe") will return 20.
    EXPECT_CALL(mockDb, GetUserAge("JohnDoe"))
        .WillOnce(Return(20));

    UserService service(&mockDb);
    EXPECT_TRUE(service.IsUserAdult("JohnDoe"));
}

TEST(UserServiceTest, UserIsNotAdult) {
    MockDatabase mockDb;

    // Expect that GetUserAge("JaneDoe") will return 15.
    EXPECT_CALL(mockDb, GetUserAge("JaneDoe"))
        .WillOnce(Return(15));

    UserService service(&mockDb);
    EXPECT_FALSE(service.IsUserAdult("JaneDoe"));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
