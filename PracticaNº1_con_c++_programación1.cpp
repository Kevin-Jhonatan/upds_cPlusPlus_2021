// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << "...Ingrese el numero de tarea que quiera hacer correr...\n\n\nNombre : Kevin Jhonatan Mamani Mollo\n\n1.- Leer 10 numeros e imprimir solamente los numeros positivos\n2.- Calcular el promedio de edades de damas y caballeros de todo un grupo de alumnos (45)\n3.-Calcular total de suma los centavos ya definidos 1ctv,5ctvs,20ctvs,100 ctvs\n";
	cout << "4.-Calcular cualquier cantidad en bs para saber cuantos centavos tiene esa cantidad ingresada\n5.-Calcular el cambio en modenas de 20,0.5,0.1 ctvs\n6.-Calcular el perimetro de un circulo pidiento el radio como dato\n";
	cout << "7.-Calcular el volumen de cualquier cilindro con datos ingresados de radio y altura\n8.-Calcular el cambio de Euros a Pesetas\n9.-Calcular el cambio de Pesetas a Euros con decimales, redondeando a 2 digitos\n10.- Nombre del estudiante:\n10.- Salir:";
	int opcion = 0;
	cin >> opcion;
	do
	{
		switch (opcion)
		{
		case 1:
		{ //1)Leer 10 números e imprimir solamente los números positivos
			int a, valor;
			for (a = 1; a <= 10; a++)
			{
				cout << "Ingrese un numero cualquiera :\n";
				cin >> valor;
				if (valor > 0)
				{
					cout << "El numero " << valor << " es positivo\n";
				}
				else
				{
					if (valor < 0)
					{
						cout << "El numero es negativo\n" << a << endl;
					}
					if (valor == 0)
					{
						cout << "Ingreso el cero y es ( neutro ) :\n";
					}
				}
			}
			break;
		}

		case 2:
		{ //2)Calcular el promedio de edades de damas y caballeros de todo un grupo de alumnos (45)
			int x, y, edad, edad1, cantidad = 0, promediodamas, promediocaballeros, suma = 0, suma1 = 0, cantidad1 = 0;
			cout << "Ingrese la cantidad total de damas:\n";
			cin >> x;

			while (cantidad < x)
			{
				cout << "Ingresar las edades de las damas :\n";
				cin >> edad;
				suma = suma + edad;
				cantidad = cantidad + 1;
			}
			promediodamas = suma / x;
			cout << "El promedio de las edades de las damas es : " << promediodamas << "\n\n";

			cout << "Ingrese la cantidad total de caballeros:\n";
			cin >> y;
			while (cantidad1 < y)
			{
				cout << "Ingresar las edades de los caballeros :\n";
				cin >> edad1;
				suma1 = suma1 + edad1;
				cantidad1 = cantidad1 + 1;
			}
			promediocaballeros = suma1 / y;
			cout << "\nEl promedio de las edades de los caballeros es :" << promediocaballeros << "\n\n\n";
			break;
		}
		case 3:
		{
			break;
		}
		case 4:
		{ //Grupo 2 Examen 
	//1)	Leer tres números diferentes e imprimir el número mayor de los 3.
	int x, y, z;
	cout << "....Para realizar la comparacion debe ingresar 3 numeros de su gusto....\n";
	cout << "Ingrese el primer numero : \n";
	cin >> x;
	cout << "Ingrese el segundo numero : \n";
	cin >> y;
	cout << "Ingrese el tercer numero : \n";
	cin >> z;
	if ((x>y)&&(x>z))
	{
		cout << "El primer numero ingresado = "<<x<<" es mayor al segundo = "<<y<<" y tercer = "<<z<<" numero :\n";
	}
	else
	{
		if ((y>x)&&(y>z))
		{
			cout << "El segundo numero = "<<y<<" es mayor al primer = "<<x<<" y tercer = "<<z<<" numero :\n";
		}
		else
		{
			if ((z>x)&&(z>y))
			{
				cout << "El tercer numero = "<<z<<" es mayor al primer = "<<x<<" y segundo = "<<y<<" numero :\n";
			}
			else
			{
				if ((x==y)&&(x==z))
				{
					cout << "Todos los numeros que ingreso son iguales : x = " << x << " -- y = " << y << " -- z = " << z << "\n";
				}
			}
		}
	}
	system("pause");
			break;
		}
		case 5:
		{//2)Se tiene un conjunto de números el cual es ingresado por el usuario,
		  //del conjunto de estos números indicar cuántos son positivos, negativos e igual a 0. 
	        int positivo=1	, negativo=0, cero=0, n;
      	do
     	{
		    cout << "...Ingrese la cantidad de numeros que guste : ...\n...( Ingrese el numero 0001 para terminar )...\n";
		    cin >> n;
		    if (n>0)
		    {
		     	positivo = positivo + 1;
		    }
		    else
		    {
			if (n<0)
			{
				negativo = negativo + 1;
			}
			else
			{
				if (n==0)
				{
					cero = cero + 1;
				}
			}
		    }
	    } while (n!=0001);
	            cout <<"La cantidad de positivos es : "<< positivo-2<<"\n";
	            cout <<"La cantidad de negativos es : "<< negativo<<"\n";
	            cout <<"La cantidad de ceros es : "<< cero<<"\n";
			break;
		}
		case 6:
		{int n,aprobado, reprobado,promedioaprobados,promedioreprobados,x=0;
	cout << "Ingrese la cantidad total de notas aprobadas :\n";
	cin >> aprobado;
	cout << "Ingrese la cantidad total de notas reprobadas :\n";
	cin >> reprobado;
	do
	{
		cout << "Ingrese sus notas aprobadas y reprobadas :\n ( Cuando termine ingrese -1 para terminar )\n";
		cin >> n;
		if ((n>=51)&&(n<=100))
		{
			n=n + n;
			promedioaprobados =n/ aprobado;
		}
		else
		{
			if ((n>=0)&&(n<51))
			{
				x = n + n;
				promedioreprobados = x/ reprobado;
			}
		}
	} while (n!=-1);
	cout << "El promedio de las notas aprobadas es : "<<promedioaprobados<<"\n";
	cout << "El promedio de las notas reprobadas es : " << promedioreprobados << "\n";
	cout << "La cantidad de notas reprobadas es : " << aprobado<<"\n";
	cout << "La cantidad de notas aprobadas es : " << reprobado<<"\n";
	system("pause");
			break;
		}
		case 7:
		{ //Grupo 3 Examen 
   /*1)	Leer dos números si son iguales que los multiplique, si el primero es mayor el segundo que los reste y si no que lo sume.*/
	int x, y,mult,suma,resta,n;
	cout << "Ingrese el primer numero ( positivo ) :\n";
	cin >> x;
	cout << "Ingrese el segundo numero (positivo ) :\n";
	cin >> y;
	if (x==y)
	{
		mult = x * y;
		cout << "Los valores son iguales por tanto su multiplicacion es : " << mult<<"\n\n";
	}
	else
	{
		if (x>y)
		{
			resta = x - y;
			cout << "El primer valor es mayor al segundo por tanto su resta es : " << resta<<"\n\n";
		}
		else
		{
			if (y>x)
			{
				suma = y + x;
				cout << "El segundo valor es mayor al primero por tanto la suma es : " << suma<<"\n\n";
			}
		}
	}
	system("pause");
			break;
		}
		case 8:
		{
			break;
		}
		case 9:
		{// Grupo 3 Examen 
  // Ejercicio 3)Simular el comportamiento de un reloj digital imprimiendo: la hora minutos y segundos de un día desde las 00:00:00 hasta las 23:59:59 horas.
	int h, m, s;
	for (h= 0; h <=23; h++)
	{
		for (m = 0; m <=59; m++)
		{
			for ( s = 0; s <= 59; s++)
			{
				cout << h << " HH : "<< " MM : " << m << " SS : "<<s<<endl;
			}
		}
	}
	system("pause");
			break;
		}
		case 10:
		{
			break;
		}
		default: cout << "Usted no selecciono una opcion valida, intentelo nuevamente\n" << opcion << endl;
			break;
		}
	} while (opcion != 10);
	cout << "Gracias por usar mi pequeno programa";
}
