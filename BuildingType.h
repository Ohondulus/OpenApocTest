#ifndef BUILDINGTYPE_H
#define BUILDINGTYPE_H
#include <string>

using namespace std;

enum class Size {Small, Large};

class BuildingType
{
	int ID;
	string name;
	int building_price;
	int maintance_cost;
	int days_to_build;
	bool buildable;
	int capacity;
	Size size;
public:
	BuildingType();
	~BuildingType();

};

#endif // BUILDINGTYPE_H
