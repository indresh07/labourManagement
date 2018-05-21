#include <iostream>
#include <vector>
#include <map>
#include <labour.h>
#include <contractor.h>

using namespace std;

class Job{

	int id;
	int cid;
	map<string, set<Labour*> > labours;
	bool status;
	string type;
	string location;

public:

	Job()
	int getId() 
};