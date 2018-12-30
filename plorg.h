class Plorg
{
	private:
		char fullname[20];
		int  CI;
	public:
		Plorg(char * na, int ci =50){memcpy(fullname,na,20);CI = ci;}
		Plorg(){memcpy(fullname,"Plorg",20);CI = 50;}
		int & GetCI(){return CI;}
		void Show(){cout << "name: "<< fullname<< " CI: "<< CI <<endl;}
		
		
};
