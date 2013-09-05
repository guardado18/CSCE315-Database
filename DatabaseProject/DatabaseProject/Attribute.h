#include <Map>
#include <string>

using namespace std;

namespace database{
	
	class Domain;
	class Attribute{

	private:
		Domain* _domain;

	public:
		Domain* const getDomain();

	};

};