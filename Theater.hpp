//
//  Theater.hpp
//  Exam 1 Final Code
//
//  Created by Joshua Miller on 10/6/16.
//  Copyright © 2016 Joshua Miller. All rights reserved.
//I affirm that all code given below was written solely by me, Joshua Miller, and that any help I recieved adhered to the rules stated for this exam.


#ifndef Theater_hpp
#define Theater_hpp
#include <string>
#include <array>
#include "Movie.hpp"
using namespace std;

class Theater
{
public:
    void AddMovie(Movie& Movie);
    string GetMovieForHour(int Hour);
    int GetShowTimeForGenre(string Genre);
    int GetPopcornPrice();
    int GetCokePrice();
    Theater(string Name, string Phone);
    Movie movies[11];
    
private:
    int counter = 0;
    string Name;
    string Phone;
};

Theater::Theater(string N, string P)
{
    Name=N;
    Phone=P;
}

void Theater::AddMovie(Movie& Movie)
{
    movies[counter] = Movie;
    counter++;
}
string Theater::GetMovieForHour(int Hour)
{
    if(0<=Hour && Hour<24)
    {
    for (int p = 0; p < 11; p++)
    {
        if( movies[p].GetShowTime() >= Hour)
        {
            return movies[p].GetTitle();
        }
    }
    }
        return "";
}
int Theater::GetShowTimeForGenre(string Genre)
{
    for (int p = 0; p < 11; p++)
    {
        if( movies[p].GetGenre() == Genre)
        {
            return movies[p].GetShowTime();
            
        }
        
        
    }
    return -1;
}
int Theater::GetPopcornPrice()
{
    return 5;
}
int Theater::GetCokePrice()
{
    return 3;
}


#endif /* Theater_hpp */
