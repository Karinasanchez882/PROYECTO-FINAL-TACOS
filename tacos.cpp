//PROYECTO PROGRA T-T
#include <iostream>
#include <queue>
#include <conio.h>

using namespace std;

//registros
struct COMIDA{
	string Nombre;
	float Bebida;
	string Tipo;
	float precio;
	int cantidad;
};
typedef struct COMIDA comida;

struct PAGO{
	float monto;
	string nombre;
};
typedef struct PAGO pago;

//colas
queue<comida>Aqui;
queue<comida>Llevar;
queue<pago>Ventas;
queue<pago>Cuenta;

//prototipo-funciones
void TomarOrden (bool);
void Ordenar(string, int, int, bool);
void PedirCuenta();
void NumVentas();
void Menu();
float OrdenarBebida();
void MostrarCuenta();

//---------------------------------------------
int main(){
	//NEGOCIO DE TACOS: EL NEGOCIO DE TACOS
	int opcion=0;
	bool flag=true, flagAqui=true;
	//menu
	do{
		cout<<"\t\t || TAQUERIA: EL NEGOCIO DE TACOS ||\n\n";
		cout<<"\tQue va a desear mi rey/reina/otrx?"<<endl;
		cout<<"\t1. Ordenar para comer aqui "<<endl;
		cout<<"\t2. Ordenar para llevar a casita "<<endl;
		cout<<"\t3. La cuenta porfiiis! "<<endl;
		cout<<"\t4. Saber el valor de ventas diarias "<<endl;
		cout<<"\t5. Salir del local"<<endl;
		cout<<"Opcion: "; cin>>opcion;
		
		cout<<"----------------------------------------------------------------------\n\n";
		switch(opcion){
			case 1:
                TomarOrden(flagAqui);
				break;
			case 2:
                flagAqui=false;
                TomarOrden(flagAqui);
				break;
			case 3:
                PedirCuenta();
				break;
			case 4:
                NumVentas();
				break;
			case 5:
				cout<<"\t\tHas decidido dejar el local. Vuelva pronto!";
				cout<<"\n\n----------------------------------------------------------------------";
				flag=false;
				break;	
			default: cout<<"\nNinguna de las opciones que ha ingresado es valida\n";
				break;
		}
	}
    while(flag);
	return 0;
}
//---------------------------------------------

//funciones
void Menu(){
	cout<<"MENU DE TACOS:\n";
	cout<<"1. Al Pastor------------------------$0.50\n";
	cout<<"2. De cabeza------------------------$0.75\n";
	cout<<"3. De Carnitas----------------------$0.60\n";
	cout<<"4. Los dorados----------------------$0.50\n";
	cout<<"5. De lengua------------------------$0.75\n";
	cout<<"6. De panza-------------------------$0.60\n";
	cout<<"7. Ya estuvo :b\n\n";
    
}

float OrdenarBebida(){
	cout<<"\nMENU DE BEBIDAS:\n";
	cout<<"1. Coca Cola------------------------$0.60\n";
	cout<<"2. Jugo natural---------------------$0.75\n";
	cout<<"3. Agua-----------------------------$0.50\n";
	cout<<"4. No quiero :v\n\n";
	
	int n=0;
	cout<<"Ingrese Opcion de Bebida: ";
	cin>>n;
	bool flag3=true;
	
	do{
		switch(n){
		case 1:
			return 0.60;
			break;
			
		case 2:
			return 0.75;
			break;
			
		case 3:
			return 0.50;
			break;
			
		case 4:
			cout<<"Ha decidido NO elegir una bebida\n\n";
			flag3=false;
			break;
			
		default:
			cout<<"Ninguna opcion es Valida >:v\n\n";
			break;
		}
	}while(flag3);
	
	return 0.00;
	
}