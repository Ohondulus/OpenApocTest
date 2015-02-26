#ifndef XCOMRESEARCH_H
#define XCOMRESEARCH_H
#include <BuildingType.h>
#include <ScienceBuilding.h>
#include <string>
#include <list>

using namespace std;

enum class DependencySettings{All, Any, None};

class Research
{
	int ID;
	string name;
	list<Size> lab_size;
	ResearchGroup research_group;
	int score;
	int skill_hours;
	int progress;
	int ufopaedia_entry;
	DependencySettings item_dependency_settings;
	DependencySettings research_dependency_settings;
	list<int> Item_dep;
	list<int> Research_dep;
public:
	Research(const int ID, const string name, const list<Size> lab_size, 
		const ResearchGroup research_group, const int score, const int skill_hours, 
		const int ufopaedia_entry, const DependencySettings item_dependency_settings, 
		const DependencySettings research_dependency_settings, 
		list<int> Item_dep, list<int> Research_dep);
	~Research();
	// increase the progress of the research by the total of scientists skills
	void doProgress(const int skill_total);
	// check for items, technology or other dependencies and return true if all available
	bool checkDependencies();
	// check if its already completed
	bool isCompleted();
	// check if the lab is large enough for this research
	bool checkSize(const Size size);
	// check for the type of lab like Quantum Physics
	bool checkResearch_group(const ResearchGroup group);
	int getProgress();
	string getName();
	int getUfopaedia_entry();
};

#endif // XCOMRESEARCH_H
