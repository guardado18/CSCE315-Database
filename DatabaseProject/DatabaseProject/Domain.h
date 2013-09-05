#include <Map>
#include <string>

using namespace std;

namespace database{
	
	class Domain{

	private:
		string* valueType;

	public:
		Domain(string* value);

		bool isAdmissibleValue(string* value);
	};

};