#pragma once
#include "pelican_impl.h"

namespace pelican {
	class texture : 
		public impl::resrouce_provider {
	public:
		explicit texture(const char* buf);
	};
}
