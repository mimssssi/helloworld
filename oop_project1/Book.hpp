#pragma once

#include <iostream>
#include <string>


struct Book
{
    // static unsigned gen;
    // unsigned libID;

    std::string author;
    std::string title;
    std::string path;
    std::string description;
    unsigned rating;
    std::string ISBN;


// public:
    Book(std::string author, std::string title, std::string path, std::string description, 
    unsigned rating, std::string ISBN);
    Book();
};
