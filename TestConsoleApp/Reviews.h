#pragma once
#include <iostream>
#include <vector>
#include "Review.h"
using namespace std;

class Reviews {
public:
    void InputReviews();
    void PrintCommentsForRating(int currRating) const;
    int GetAverageRating() const;

private:
    vector<Review> reviewList;
};
