#include <Map>
#include <string>

using namespace std;

namespace database{

	class Relation;
	class Database{

	private:
		map<string, Relation>* _relations;

	public:
		void addRelation(Relation* relation);
		void removeRelation(string* relationName);
		void removeRelation(Relation* relation);
	};
};