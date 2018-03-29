#include <string>
#include <vector>

#define LOWER_TIMEOUT 3000
#define UPPER_TIMEOUT 23000
#define HB_FREQ 1000
#define API_PORT 4040
#define NODE_THRESHOLD 5


//TYPES OF REQUESTS


class log_entry{
	int req_type;
	std::string key;
	std::string val;

};

class log{
	std::vector<log_entry> entries;
	int committed_;
	log(){
		committed_ = 0;
	}
};