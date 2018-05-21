#include <user.h>
#include <set>
#include <labourManager.h>

using namespace std;

// class time{

// 	public :
	
// 	int hr;
// 	int min;

// 	time(int h, int m):hr(h),min(m){}

// 	bool operator< (const struct time& t){ 
// 		return (this->hr * 60 + this->min) < (t.hr * 60 + t.min);	
// 	}

// 	bool operator> (const struct time& t){ 
// 		return (this->hr * 60 + this->min) > (t.hr * 60 + t.min);
// 	}
// };

class Labour :: public User{

	set<string> skills;
	bool status;
	int availability[2];

public:
	set<string> getSkills();
	void addSkill(string);
	bool getStatus();
	void updateStatus();
	bool checkAvailability(int, int);
	void setAvailability(int, int);
	void acceptJob();
	void rejectJob();
};