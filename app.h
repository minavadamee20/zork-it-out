
#ifndef app_h
#define app_h
#include<iostream>
#include<string>

class app {
public:
	app(const std::string msg = "done") : msg_(msg)
	{
		std::cout << "STARTING APP: " << __FILE__ << "............/n";
	}
	~app() {
		std::cout << std::endl << std::endl << "/t/t" << msg_ << "./n";
	}

private:
	std::string msg_;
};

#endif // !app_h




