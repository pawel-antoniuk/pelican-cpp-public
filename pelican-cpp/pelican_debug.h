#pragma once
#include <iostream>
#include <typeinfo>
#include <utility>

namespace pelican {
	template<typename Parent>
	struct debug_resource {
#ifdef _DEBUG
		debug_resource() {
			using namespace std;
			cout << "+" 
				<< hex << uppercase << this << nouppercase 
				<< ": " << typeid(typename Parent).name() << endl;
		}
		~debug_resource() {
			using namespace std;
			cout << "-" 
				<< hex << uppercase << this << nouppercase 
				<< ": " << typeid(typename Parent).name() << endl;
		}
#endif
	};
}
