#include <Research.h>
#include <iostream>


using namespace std;

int main(){
	list<Size> lab_size;
	lab_size.push_front(Size::Small);
	list<int> item_dep;
	item_dep.push_front(1);
	list<int> tech_dep;
	tech_dep.push_front(1);
	Research xr = Research(1,"Name", lab_size, ResearchGroup::Quantum_Physics, 
		100, 5000, 1, DependencySettings::All, DependencySettings::Any, item_dep, tech_dep);
	cout << xr.getName() << endl;
	cout << "UfoP " << xr.getUfopaedia_entry() << endl;
	xr.doProgress(50);
	cout << "Progress 50 " << xr.getProgress() << endl;
	cout << "Completed? " << xr.isCompleted() << endl;
	xr.doProgress(5000);
	cout << "Progress 5000 Completed? " << xr.isCompleted() << endl;
	cout << "Small enough? " << xr.checkSize(Size::Small) << endl;
	cout << "Large enough? " << xr.checkSize(Size::Large) << endl;
	cout << "Quantum? " << xr.checkResearch_group(ResearchGroup::Quantum_Physics) << endl;
	cout << "Bio? " << xr.checkResearch_group(ResearchGroup::Biochemistry) << endl;
	
	
	
	
	return 0;
}
