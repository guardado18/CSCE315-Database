using namespace std;

namespace database{
	
	class Result;
	class Action{

	private:

	public:
		virtual Result* performAction() = 0;
	};

};