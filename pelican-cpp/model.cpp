#include "model.h"

using namespace std;
using namespace pelican;

model::model(const char* buf) {
	_parts.push_back(make_tuple(mesh(buf), texture(buf)));
}
