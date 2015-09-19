#include "mesh.h"
#include "pelican_debug.h"

using namespace std;
using namespace pelican;

mesh::mesh(const char * buf) {
	struct mesh_t : 
		public impl::resrouce_provider::handle_t, 
		debug_resource<mesh_t> {};

	handle = make_unique<mesh_t>();
}