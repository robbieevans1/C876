#pragma once
#include <iostream>
using namespace std;

class Review {
public:
    void SetRatingAndComment(
        int revRating,
        string revComment);
    int GetRating() const;
    string GetComment() const;

private:
    int rating = -1;
    string comment = "NoComment";
};
