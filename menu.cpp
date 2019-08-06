#include <iostream>
#include <string>
using namespace std;
int main()
{
	string U, P, U1, P1;
	char ch;

	do {
		cout << "\n//////////////////MENU/////////////////" << endl;
		cout << "program calculate area" << endl;
		cout << "1.Register " << endl;
		cout << "2.login" << endl;
		cout << "Q.exit program" << endl;
		cout << endl;
		cout << "________________________________________" << endl;
		cout << endl;
		cout << "enter your choose number ";
		cin >> ch;

		if (ch == '1')
		{
			cout << "\n********Register********" << endl;
			cout << "input Username : ";
			cin >> U;
			cout << "input password ";
			cin >> P;
		}
		else if (ch == '2')
		{
			cout << "\n********login********" << endl;
			cout << "input Username : ";
			cin >> U1;
			cout << "input password ";
			cin >> P1;
			if (U == U1 && P == P1)
			{
				cout << "Username or password correct\n" << endl;
			}
			else
			{
				cout << "!!!!!Username or password incorrect Please try again!!!!!\n" << endl;
			}
		}

	} while (ch != 'q' && ch != 'Q');
	cout << " Exit Program" << endl;

	return(0);
}