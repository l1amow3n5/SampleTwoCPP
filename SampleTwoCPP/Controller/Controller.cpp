//
//  Controller.cpp
//  SampleTwoCPP
//
//  Created by Owen, Liam on 1/24/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"

Controller :: Controller()
{
    this->specialNumber = 123456;
}

void Controller :: start()
{
    cout << "This is inside the start method! Cooleroo :D" << endl;
    cout << "This is a special Number: " << specialNumber << endl;
    specialNumber = 123;
    string answer;
    cout << "Type in your name!" << endl;
    getline(cin, answer);
    cout << "You Typed: " << answer << endl;
    
}
