#include<iostream>
#include<cstdlib>
#include<math.h> 
#include<cctype>

using  namespace std;
struct Member {
	float a;
	float b;
	char c[10];
	float cc;
};
void calculate(Member& ft);
void calculate(Member& ft, Member& ft1);
void calculate(float, float, float);
void calculate_qone(float, float, float);

int Show_mode(int);

int main(){
	Member num;
	Member num1;
	Member num2;
	string con;
	int select;
	cout << "Welcome, ";
	cout << "to continuum  press any key. (q to exit)\n"; cin >> con;
	while (con != "q") {
		cout << "Select mode of caclute" << endl;
		switch (select = Show_mode(1)) {
		case 1:
			while (con != "N") {
				cout << "Enter num1: "; cin >> num.a;
				cout << "Plese enter mode of calculate "; cin >> num.c;
				while (*num.c != '+' && *num.c != '-' && *num.c != '*' && *num.c != '/'  ) {
					cout << "Please retry enter +,-,*,/ " << endl;
					cin >> num.c;
				}
				cout << "Enter num2: "; cin >> num.b;
				calculate(num);
				cout << "continuum or switch other mode? (Y/N)";
				cin >> con;

			}
			
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
			cout << "Please enter 2 of 1, a,b,c for ax + by + c = 0 " << endl;
			cout << "a = ";	cin >> num1.a;
			cout << "b = "; cin >> num1.b;
			cout << "c = "; cin >> num1.cc;
			cout << "Please enter 2 of 2, a,b,c for ax + by + c = 0 " << endl;
			cout << "a = ";	cin >> num2.a;
			cout << "b = "; cin >> num2.b;
			cout << "c = "; cin >> num2.cc;
			calculate(num1, num2);

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
	float x1;
	float x2;
	float bb1;
	bb1 = pow(bb, 2);
	x = bb1 - 4 * aa * cc;
	if (x > 0) {
		//Τㄢぃ龟计
		cout << "Τㄢぃ龟计" << endl;
		cout << "X = " << x << endl;
		x = sqrt(x);
		x1 = (-bb + x) / 2 * aa;
		x2 = (-bb - x) / 2 * aa;
		cout << "x1 = " << x1 <<" , x2 = " << x2 << endl;

	}
	else if (x == 0) {
		//ㄢ单龟计
		cout << "ㄢ单龟计 \n";
		x1 = -bb / 2 * aa;
		cout << " x = " << x << endl;
	}
	else {
		//ㄢぃ狡计砿狡
		cout << "ㄢぃ狡计砿狡 \n";
		struct answer {
			float answer_x1;
			float answer_x2;
		};

		answer x3;
		x3.answer_x1 = -bb / 2 * aa;
		x3.answer_x2 = 4*aa*cc - bb1;
		x3.answer_x2 = sqrt(x3.answer_x2) / 2 * aa;
		cout << "x = " << x3.answer_x1 << " + " << x3.answer_x2 << "i" << endl;
		cout << "x = " << x3.answer_x1 << " - " << x3.answer_x2 << "i" << endl;
			
	}
		
}
void calculate(Member& ft, Member& ft1) {
	float x;
	float y;
	x = (ft.b * ft1.cc - ft.cc * ft1.b) / (ft.a * ft1.b - ft.b * ft1.a);
	y = (ft.a * ft1.cc - ft1.a * ft.cc) / (ft1.a * ft.b - ft.a * ft1.b);
	cout << "Answer is : " << endl;
	cout << " X = " << x << endl;
	cout << " Y = " << y << endl;
	
}




int Show_mode(int) {
	int select_num;
	cout << "1. Stardand mode " << "2. linear equation with one unknowns " << endl;
	cout << "3. quadratic equation of one unknowns " << "4. linear equation in two unknowns " << endl;
	cin >> select_num;
	system("cls");
	return select_num;

}
