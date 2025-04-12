#ifndef MOCK_DATABASE_H
#define MOCK_DATABASE_H

#include "Database.h"
#include <gmock/gmock.h>

class MockDatabase : public Database {
public:
    MOCK_METHOD(int, GetUserAge, (const std::string& username), (override));
};

#endif // MOCK_DATABASE_H
