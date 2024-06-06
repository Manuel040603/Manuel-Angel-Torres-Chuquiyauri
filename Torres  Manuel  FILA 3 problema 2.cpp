//https://github.com/Manuel040603/Manuel-Angel-Torres-Chuquiyauri//
#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
struct Empleado{
	char nombre[30];
	char tipoContrato[30];
	float sueldoBase;
}listaEmpleados[100];
int main(){
	int numEmpleados, comparar;
	float aportesAFP[100], seguro[100], bonificacion[100], sueldoNeto[100], totalContratados=0, totalNombrados=0;
	do{
		cout<<"Ingrese la cantidad de trabajadores: "; cin>>numEmpleados;
	}while(numEmpleados<0);
	for(int i=0;i<numEmpleados;i++){
		fflush(stdin); //Limpiar el buffer 
		cout<<"\nIngrese el nombre del trabajador "<<i+1<<": ";
		cin.getline(listaEmpleados[i].nombre,30);
		cout<<"SELECCIONE EL TIPO DE CONTRATO: "<<endl;
		cout<<"Contratado (C). "<<endl;
		cout<<"Nombrado (N). "<<endl;
		cout<<"Ingrese el tipo (C o N) del trabajador "<<i+1<<": "; cin>>listaEmpleados[i].tipoContrato;
		do{
			cout<<"Ingrese el sueldo base del trabajador "<<i+1<<": "; cin>>listaEmpleados[i].sueldoBase;
		}while(listaEmpleados[i].sueldoBase<0);
		aportesAFP[i]=0.08*listaEmpleados[i].sueldoBase;
		seguro[i]=0.05*listaEmpleados[i].sueldoBase;
		comparar=strcmp(listaEmpleados[i].tipoContrato,"C");
		if(comparar==0){
			bonificacion[i]=0.08*listaEmpleados[i].sueldoBase;
		}
		else{
			bonificacion[i]=0.12*listaEmpleados[i].sueldoBase;
		}
		sueldoNeto[i]=listaEmpleados[i].sueldoBase+bonificacion[i]-(aportesAFP[i]+seguro[i]);
		comparar=strcmp(listaEmpleados[i].tipoContrato,"C");
		if(comparar==0){
			totalContratados+=sueldoNeto[i];
		}
		else{
			totalNombrados+=sueldoNeto[i];
		}
	}
	cout<<"\nRESUMEN CONSOLIDADO: "<<endl;
	cout<<"La cantidad de trabajadores es: "<<numEmpleados<<endl;
	cout<<"N"<<setw(20)<<"NOMBRE"<<setw(20)<<"TIPO CONTRATO"<<setw(20)<<"SUELDO BASE"<<setw(20)<<"BONIFICACION"<<setw(20)<<"APORTES AFP"<<setw(20)<<"SEGURO"<<setw(20)<<"SUELDO NETO"<<endl;
	for(int i=0;i<numEmpleados;i++){
		cout<<i+1<<setw(20)<<listaEmpleados[i].nombre<<setw(20)<<listaEmpleados[i].tipoContrato<<setw(20)<<listaEmpleados[i].sueldoBase<<setw(20)<<bonificacion[i]<<setw(20)<<aportesAFP[i]<<setw(20)<<seguro[i]<<setw(20)<<sueldoNeto[i]<<endl;
	}
	cout<<"El total de sueldos netos acumulados para trabajadores CONTRATADOS es: "<<totalContratados<<endl;
	cout<<"El total de sueldos netos acumulados para trabajadores NOMBRADOS es: "<<totalNombrados<<endl;
	return 0;
}

