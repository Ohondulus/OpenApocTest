#ifndef SCIENCEBUILDING_H
#define SCIENCEBUILDING_H
#include <Building.h>


enum class ResearchGroup {Quantum_Physics, Biochemistry};

class ScienceBuilding : public Building
{
	int ID;
	ResearchGroup research_group;
public:
	ScienceBuilding();
	~ScienceBuilding();
	void tick();

};

#endif // SCIENCEBUILDING_H
