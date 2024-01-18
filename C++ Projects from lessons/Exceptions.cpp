#include<iostream>

using namespace std;

int main()
{

	try
	{
		int num;

		cout << "Enter a number: ";
		cin >> num;

		if (num == 0)
		{
			exception obj("Division with zero is not allowed.");
			throw obj;
			//throw "Division with zero is not allowed.";
			//throw 150;
		}

		cout << 7 / num;
	}
	catch (const  char * error)
	{
		cout << error << endl;
	}
	catch (int errorCode)
	{
		cout << "Exception. Error code is "<< errorCode << endl;
	}
	catch (exception excObj)
	{
		cout << excObj.what()<<" "<< &excObj << endl;
	}

	
	
	return 0;
}




