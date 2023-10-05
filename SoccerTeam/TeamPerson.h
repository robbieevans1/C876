#pragma once
#include <string>
using namespace std;

class TeamPerson {
public:
    void   SetFullName(string firstAndLastName);
    void   SetAgeYears(int ageInYears);
    string GetFullName() const;
    int    GetAgeYears() const;
    void   Print() const;

private:
    string fullName;
    int    ageYears;
};
