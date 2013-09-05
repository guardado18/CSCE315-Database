#include "Attribute.h"
#include "Domain.h"

using namespace std;
using namespace database;

Domain* const Attribute::getDomain(){
	return _domain;
}