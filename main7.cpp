#include<iostream>
#include<string>

#include<cstring>

using namespace std;
#include"plorg.h"
int main()
{
	Plorg one;
	one.Show();
	Plorg two("aaa");
	two.Show();
	Plorg three("bb",33);
	three.Show();
	one.GetCI() = 99;
	one.Show();
	return 0;
}
