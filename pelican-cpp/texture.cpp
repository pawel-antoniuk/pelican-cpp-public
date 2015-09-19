#include "texture.h"
#include "pelican_debug.h"

using namespace std;
using namespace pelican;

texture::texture(const char * buf) {
	struct texture_t : 
		public impl::resrouce_provider::handle_t,
		debug_resource<texture_t> {};

	handle = make_unique<texture_t>();
}