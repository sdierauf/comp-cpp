#ifndef CPU_H
#define CPU_H

#include "const.hpp"

#include<stdio.h>

using namespace std;

class Cpu {
	public:
		void exec();
		vector<bool> getReg();
		vector<bool> getPc();
	private:
		vector<bool> reg = vector<bool>(WORD_SIZE);
		vector<bool> pc = vector<bool>(ADDR_SIZE);
		int cycle = 0;
		void increasePc();
		void read(vector<bool> adr);
		void write(vector<bool> adr);
		void add(vector<bool> adr);
		void sub(vector<bool> adr);
		void jump(vector<bool> adr);
		void readPointer(vector<bool> adr);
		void jumpIf(vector<bool> adr);
		void jumpIfSmaller(vector<bool> adr);
};

#endif