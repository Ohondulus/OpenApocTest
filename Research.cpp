#include "Research.h"

Research::Research(const int ID, const string name, const list<Size> lab_size, 
		const ResearchGroup research_group, const int score, const int skill_hours, 
		const int ufopaedia_entry, const DependencySettings item_dependency_settings, 
		const DependencySettings research_dependency_settings, 
		list<int> Item_dep, list<int> Research_dep){
	this->ID = ID;
	this->name = name;
	this->lab_size = lab_size;
	this->research_group = research_group;
	this->score = score;
	this->skill_hours = skill_hours;
	this->ufopaedia_entry = ufopaedia_entry;
	this->item_dependency_settings = item_dependency_settings;
	this->research_dependency_settings = research_dependency_settings;
	this->Item_dep = Item_dep;
	this->Research_dep = Research_dep;
	
	progress = 0;
}

Research::~Research(){
}

void Research::doProgress(const int skill_total){
	progress += skill_total;
}
	
bool Research::checkDependencies(){
	//TODO: Check depending technologies if finshed
	//Check items if available
	//Check other dependencies like alien building or ufo type recovered
	return true;
}

bool Research::isCompleted(){
	if(progress >= skill_hours){
		return true;
	}
	return false;
}

bool Research::checkSize(const Size size){
	for(list<Size>::iterator it = lab_size.begin(); it != lab_size.end(); ++it){
		if(*it == size) return true;
	}
	return false;
}

bool Research::checkResearch_group(const ResearchGroup group){
	if(research_group == group) return true;
	return false;
}

int Research::getProgress(){
	return progress;
}

string Research::getName(){
	return name;
}

int Research::getUfopaedia_entry(){
	return ufopaedia_entry;
}
