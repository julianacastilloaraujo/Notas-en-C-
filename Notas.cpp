#include <iostream>
using namespace std;

int main(){
	float nota1, nota2, nota3, nota4, promedio;
	
	cout<<endl <<endl <<"RESULTADO DE NOTAS" <<endl <<endl;
	
	cout <<"DIGITE LA NOTA 1" <<endl;
	cin >> nota1;
	cout <<endl <<endl <<"DIGITE LA NOTA 2" <<endl;
	cin >> nota2;
	cout <<endl <<endl <<"DIGITE LA NOTA 3" <<endl;
	cin >> nota3;
	cout <<endl <<endl <<"DIGITE LA NOTA 4" <<endl;
	cin >> nota4;
	
	promedio =(nota1 + nota2 + nota3 + nota4)/4;
	
	if(promedio>=3){
		if(promedio <=3.5){
			cout <<endl <<endl <<"En este momento no tiene aprobada la materia de tecnologia, ";
			cout <<endl <<endl <<"pero tiene la oportunidad de recuperar. "<<endl <<endl;
		}
	}else if (promedio <3){
		cout<<endl <<endl <<"No aprobado." <<endl <<endl;
	}else if (promedio >3.5){
		cout<<endl <<endl <<"Aprobado. " <<endl <<endl;
	}
	
	system("pause");
	return 0;
}
