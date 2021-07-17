#ifndef REPEAT_H_
#define REPEAT_H_

#include "command.h"
#include "program.h"
#include <iostream>
#include <string>


//Code by Alan Jaison
class Repeat :
    public Command, public Program
{
    private:
       Program prog;  
    public:
        void run();
       
        friend std::istream& operator>>(std::istream& in, Repeat& r);
};



#endif 
