//
//  Movie.hpp
//  Exam 1 Final Code
//
//  Created by Joshua Miller on 10/6/16.
//  Copyright © 2016 Joshua Miller. All rights reserved.
//I affirm that all code given below was written solely by me, Joshua Miller, and that any help I recieved adhered to the rules stated for this exam.


#ifndef Movie_hpp
#define Movie_hpp
#include <string>
using namespace std;

class Movie
{
public:
    string GetTitle();
    string GetGenre();
    int GetShowTime();
    Movie() {};
    Movie(string T, string G, int S)
    {
        Title=T;
        Genre=G;
        ShowTime=S;
    }
    
private:
    string Title;
    string Genre;
    int ShowTime;
    
};

string Movie::GetTitle()
{
    return Title;
}

string Movie::GetGenre()
{
    return Genre;
}

int Movie::GetShowTime()
{
    return ShowTime;
}



#endif /* Movie_hpp */
