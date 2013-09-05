#include <Map>
#include <string>

using namespace std;

namespace database{
	
	class Tuple{

	private:
		map<string*, string*>* values;

	public:
		Tuple(string* attributes);				//Create an empty tuple with the given attributes.
		Tuple(map<string*, string*>* values);	//Create a new tuple with the given values.

		string* const getValue(string* attribute);
		void setValue(string* attribute, string* value);

	};

};