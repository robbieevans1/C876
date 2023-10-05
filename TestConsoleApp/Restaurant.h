#pragma once
#include <string>
#include "Reviews.h"
using namespace std;

class Restaurant {
public:
    void SetName(string restaurantName);
    void ReadAllReviews();
    void PrintCommentsByRating() const;

private:
    string name;
    Reviews reviews;
};