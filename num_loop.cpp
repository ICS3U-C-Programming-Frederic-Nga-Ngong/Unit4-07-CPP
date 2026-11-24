// Copyright (c) Year Your Name All rights reserved.
// .
// Created by: Fred
// Date: Feb 18 2008
// Display number from 1000 to 2000, 5 per line.

#include<iostream>

int main() {
    int counter;
    for (counter = 1000; counter <= 2000; counter++) {
        std::cout << counter << " ";
        if ((counter+1)%5 == 0) {
            std::cout << std::endl;
        }
    }
}
