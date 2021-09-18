// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{ 
	cout <<"Ingrese el numero de tarea que quiera hacer correr:Nombre :\n\n\n1.- Cantidad de personas que se pueden trasladar en los autobuses\n2.-Cantidad de libros que les toca a cada persona y cuantos sobran\n3.-Calcular total de suma los centavos ya definidos 1ctv,5ctvs,20ctvs,100 ctvs\n";
	cout <<"4.-Calcular cualquier cantidad en bs para saber cuantos centavos tiene esa cantidad ingresada\n5.-Calcular el cambio en modenas de 20,0.5,0.1 ctvs\n6.-Calcular el perimetro de un circulo pidiento el radio como dato\n";
	cout <<"7.-Calcular el volumen de cualquier cilindro con datos ingresados de radio y altura\n8.-Calcular el cambio de Euros a Pesetas\n9.-Calcular el cambio de Pesetas a Euros con decimales, redondeando a 2 digitos\n10.- Nombre del estudiante:\n11.- Salir:";
	int opcion = 0;
	cin >> opcion;
	do
	{
		switch (opcion)
		{
		case 1:
		{ //Calcular la cantidad de personas que se pueden trasladar en los autobuses
			int buses, asientos, cantpersonas;
			cout << "Ingrese la cantidad de autobuses:\n";
			cin >> buses;
			cout << "Ingrese la cantidad de asientos por autobus:\n";
			cin >> asientos;
			cantpersonas = buses * asientos;
			cout << "La cantidad de personas que se pueden trasladar en los autobuses es : " << cantpersonas << endl;

			break;
		}

		case 2:
		{ //Calcular la cantidad de libro que toca por persona y la cantidad de libros que sobran
			int cantlibros, cantpersonas, repartidos, sobrantes;
			cout << "Ingrese la cantidad de libros disponibles:\n";
			cin >> cantlibros;
			cout << "Ingrese la cantidad de personas que requieren de un libro:\n";
			cin >> cantpersonas;
			repartidos = cantlibros / cantpersonas;
			sobrantes = cantlibros - cantpersonas;
			cout << "La cantidad de libros por persona es:" << repartidos << endl;
			cout << "La cantidad de libros sobrantes es:" << sobrantes << endl;
			break;
		}
		case 3:
		{ //Dada una cantidad en monedas de 1céntimo, monedas de 5c, de 20c y de 1€, calcular el total de céntimos
			//En este pequeño codigo se muestra la suma de la cantidad de centavos ya definidas
			float a = 1, b = 20, c = 5, suma;
			int d = 100;
			suma = a + b + c + d;
			cout << "La suma de 1 ctvs, 5 ctvs, 20 ctvs y (100 ctvs = 1 bs es: )" << suma << "ctvs" << endl;
			break;
		}
		case 4:
		{
			//En este otro codigo podemos convertir cualquier cantidad en bs a ctvs
			float a, cantcentavos;
			cout << "Ingrese la cantidad de dinero en (bs) para saber que cantidad en centavos tiene:\n";
			cin >> a;
			cantcentavos = (a * 100);
			cout << "La cantidad de centavos que tiene es:" << cantcentavos << endl;
			break;
		}
		case 5:
		{   //Dada una cantidad total en céntimos (leyendo un sólo nº), escribir su cambio minimizando el número de monedas de euro, 20centimos, 5c y 1c
			int centavos;
			float x = 20, y = 0.5, z = 0.1;
			cout << "Ingrese la cantidad de centavos :\n";
			cin >> centavos;
			cout << "La cantidad ingresada equivale a Bs :" << centavos / 100 << endl;
			cout << "La cantidad de monedas de 20 centavos es :" << centavos / x << endl;
			cout << "La cantidad de monedas de 5 centavos es :" << centavos / y << endl;
			cout << "La cantidad de monedas de 1 centavos es :" << centavos / z << endl;
			break;
		}
		case 6:
		{   //Calcular el perimetro de un circulo pidiendo el radio como dato
			float radio, perimetro, pi = 3.14;
			cout << "Ingrese el radio para calcular el perimetro:\n";
			cin >> radio;
			perimetro = 2 * pi*radio;
			cout << "El perimetro es :" << perimetro << endl;
			break;
		}
		case 7:
		{ //Calcular el volumen de un cilindro a partir del radio de su base y la altura
			float radio, altura, volumen;

			cout << "Ingrese el radio de la base para calcular el volumen del cilindro en cm\n";
			cin >> radio;
			cout << "Ingrese la altura del cilindro en cm\n";
			cin >> altura;
			volumen = 3.14*radio*radio*altura;
			cout << "El volumen del cilindro es: " << volumen << "  centimetros" << endl;
			break;
		}
		case 8:
		{  //Pasar una cantidad real de Euros a Pesetas en entero (cambio: 1€ = 166,386Ptas)
			float euros;
			int pesetas;
			cout << "Ingrese la cantidad de Euros que desea cambiar a Pesetas\n";
			cin >> euros;
			pesetas = euros * 166.386;
			cout << "La cantidad de Pesetas obtenidas es :" << pesetas << endl;
			break;
		}
		case 9:
		{  //(más complejo): Pasar una cantidad entera de Ptas a Euros, con solo dos decimales y redondeo en el tercer decimal.
			float pesetas, euros;
			cout << "Ingrese la cantidad de Pesetas que deseas cambiar a Euros :\n";
			cin >> pesetas;
			euros = (pesetas / 166.3865) * 100 / 100;
			cout << fixed << setprecision(2) << "La cantidad de Euros obtenidas es :" << euros << endl;
			break;
		}
		case 10:
		{
			cout << "Nombre : Kevin Jhonatan Mamani Mollo\n\n";
			break;
		}
		default: cout << "Usted no selecciono una opcion valida, intentelo nuevamente\n" << opcion << endl;
			break;
		}
	}while (opcion != 11);
	cout << "Gracias por usar mi pequeno programa";
	{

	}
} 