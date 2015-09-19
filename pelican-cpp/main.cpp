#include "nana/gui/wvl.hpp"
#include "pelican.h"
#pragma comment(lib, "lib/nana_Debug_x64")

using namespace pelican;
using namespace nana;
using namespace std;

scene prepare_scene() {
	scene simple_scene;
	simple_scene.models().push_back(model("model"));
	return simple_scene;
}

int main() {
	form form;
	scene scene = prepare_scene();
	form.draw_through([&scene] { scene.draw(); });
	form.show();
	exec();
}