#ifndef USER_SERVICE_H
#define USER_SERVICE_H

#include "Database.h"
#include <string>

class UserService {
public:
    explicit UserService(Database* db) : database(db) {}

    bool IsUserAdult(const std::string& username) {
        return database->GetUserAge(username) >= 18;
    }

private:
    Database* database;
};

#endif // USER_SERVICE_H
