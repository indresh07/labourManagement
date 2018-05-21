#include <iostream>
#include <string>
#include <job.h>
#include <vector>

using namespace std;

class User{

	protected:
		int id;
		string name;
		vector<Job> history;
		string location;

	public:

		int getID();
		void setID(int i);
		string getName();
		void setName(string n);
		string getLocation();
		void setLocation(string l);
		vector<Job> getHistory();
		void addJob(Job j);
};