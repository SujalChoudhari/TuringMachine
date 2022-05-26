#pragma once

#include <iostream>

struct TCM{
    const int max = 4999;
    bool mem[5000];

    int counter= 0;

    TCM(){
		for (int i= 0; i<max;i++){
			mem[i] = false;
		}
	}

    void left(){
		counter --;
		if (counter <0) counter = max;
	}

    void right(){
		counter ++;
		if (counter > max) counter = 0;
	}

   void read(){
	   std::cout << "["<< counter <<"] "<< mem[counter] << std::endl;
   }

   void flip(){
	   mem[counter] = !mem[counter];
   }

   bool iif(){
       return mem[counter];
   }

};