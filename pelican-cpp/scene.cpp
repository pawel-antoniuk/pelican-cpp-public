#include "scene.h"

using namespace pelican;

//debug
#include <iostream>
using namespace std;

void scene::draw() const {
	cout << "drawn: " << _models.size() << " models\n";
}
