#ifndef DATABASE_H
#define DATABASE_H

#include <string>

class Database {
public:
    virtual ~Database() = default;
    virtual int GetUserAge(const std::string& username) = 0;
};

#endif // DATABASE_H
