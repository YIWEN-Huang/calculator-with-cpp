#include<iostream>
#include<cstdlib>

using  namespace std;
struct Member {
	float a;
	float b;
	char c[10];
};
void calculate(Member& ft);
int Show_mode(int);

int main(){
	Member num;
	string con;
	int select;
	cout << "Welcome, ";
	cout << "to countium  press any key. (q to exit)\n"; cin >> con;
	while (con != "q") {
		cout << "Select mode of caclute" << endl;
		switch (select = Show_mode(1)) {
		case 1:
			cout << "Enter num1: "; cin >> num.a;
			cout << "Plese enter mode of calculate "; cin >> num.c;
			cout << "Enter num2: "; cin >> num.b;
			calculate(num);
			break;
		case 2:
			cout << "Enter num1: "; cin >> num.a;
			cout << "Plese enter mode of calculate "; cin >> num.c;
			cout << "Enter num2: "; cin >> num.b;
			calculate(num);
			break;
		case 3:
			cout << "Enter num1: "; cin >> num.a;
			cout << "Plese enter mode of calculate "; cin >> num.c;
			cout << "Enter num2: "; cin >> num.b;
			calculate(num);
			break;
		}
		
	
		cout << "to countium  press any key. (q to exit)"; cin >> con;
	}
	
	

	return 0;
}
void calculate(Member& ft) {
	float d = 0;

	switch (*ft.c) {
	case '+':
		d = ft.a + ft.b;
		
		break;
	case '-':
		d = ft.a - ft.b;

		break;
	case '*':
		d = ft.a * ft.b;

		break;
	case '/':
		d = ft.a / ft.b;

		break;


	}cout << ft.a<< ft.c<< ft.b << " = "<< d << endl;

}
int Show_mode(int) {
	int select_num;
	cout << "1. Stardand mode " << "2. linear equation with one unknowns " << endl;
	cout << "3. quadratic equation of one unknowns " << "4. linear equation in two unknowns " << endl;
	cout << "5. quadratic equation of two unknowns " << endl;
	cin >> select_num;
	system("cls");
	return select_num;

}
