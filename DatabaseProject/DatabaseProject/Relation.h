#include <Map>
#include <string>
#include <vector>

using namespace std;

namespace database{
	
	class Tuple;
	class Attribute;
	class Relation{

	private:
		map<string*, Attribute*>* attributes;
		vector<Tuple*>* rows;

	public:
		//Creates an empty tuple.
		Tuple* createTuple();

		//Creates a tuple then fills it with the given values.
		Tuple* createTuple(vector<string*> values);
		
		//Attempts to add a tuple to the vector. 
		//Returns false and doesn't add the tuple if it isn't valid for this Relation.
		bool addTuple(Tuple* tuple);

		//Creates a tuple and adds it to the vector. Fails if the values aren't valid for this relation.
		bool addTuple(vector<string*> values);

		bool isValid(vector<string*> values);
		bool isValid(Tuple* tuple);
		
		vector<Tuple*> const getTuples();
		vector<Attribute*> const getAttributes();
		vector<string*> const getAttributeNames();
	};

};