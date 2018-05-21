#include <labour.h>
#include <map>

static class LabourManager{

	map<string, set<labour*> > skillList;
	map<pair<int, int>, set<labour*> > availList;

public:

	void addToSkillList(string, labour&);
	void addToAvailList(pair<int, int>, labour&);

	set<labour*> getLabour(string);
	set<labour*> getLabour(pair<int, int>);
}