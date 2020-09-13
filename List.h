#pragma once
class list {

	int* A;
	int max;
	int size = 0;
	int ci;
	
   
public:
	list() {
		A = nullptr;
		max = 0;
		size = 0;
		ci = 0;
	}
	~list() {
	}
	void createlist();
	void insertion();
	void deletion();
	void delbyl();
	void delbyv();
	void update();
	void start();
	void next();
	void back();
	void tail();
	int find();
	void copy();
	void get();
	void sizee();
	void displaylist();
	void deallocatelist();
	void zero();
	void dbeven();
	void dbodd();
	void dbprime();
	int maxcheck();
	int sizecheck();
	void imenu();
	void ilmenu();
	void ivmenu();
	int inserted();
	int isize();
	int ici();
	void choice();
	int ibl();
	void iatl();
	void iafl();
	void ibv();
	void iafv();
	void delmenu();
	void deleteci(int ci);
	int getmax();
};