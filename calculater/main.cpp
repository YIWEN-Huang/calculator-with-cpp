#include<iostream>
#include<cstdlib>
#include<math.h> 

using  namespace std;
struct Member {
	float a;
	float b;
	char c[10];
	float cc;
};
void calculate(Member& ft);
void calculate(float, float, float);
void calculate_qone(float, float, float);
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
		case 2:		// linear equation with one unknowns
			cout << "Please enter a,b,c for ax + b = c"<< endl;
			cout << "a = ";	cin >> num.a;
			cout << "b = "; cin >> num.b;
			cout << "c = "; cin >> num.cc;
			calculate(num.a, num.b, num.cc);
			break;
		case 3:// quadratic equation of one unknowns
			cout << "Please enter a,b,c for ax^2 + bx +c = 0" << endl;
			cout << "a = ";	cin >> num.a;
			cout << "b = "; cin >> num.b;
			cout << "c = "; cin >> num.cc;
			calculate_qone(num.a, num.b, num.cc);
			break;
		case 4:
			// linear equation of two unknowns
			break;
		case 5:
			// quadratic equation of two unknowns
			break;
		}
		
	
		cout << "to countium  press any key. (q to exit)"<<endl; cin >> con;
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
void calculate(float aa, float bb, float cc) {
	float x;
	x = (cc - bb) / aa;
	cout << "unknown X = " << x << " . "<< endl;
}
void calculate_qone(float aa, float bb, float cc) {
	float x;
	bb = pow(bb, 2);
	x = bb - 4 * aa * cc;
	if (x > 0) {
		cout << "Τㄢぃ龟计" << endl;
	}
	else if (x == 0) {
		//ㄢ单龟计
	}
	else {
		//ㄢぃ狡计砿狡
	}
		
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
