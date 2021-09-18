#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <ctime>
using namespace std; 
int total,total1,total2,total3,total4,total5,total6;
int suma1=0,suma2=0,suma3=0,suma4=0,suma5=0,suma6=0,suma7=0,suma8=0,suma9=0,suma10=0,suma11=0,suma12=0,suma13=0,suma14=0,suma15=0,suma16=0,suma17=0,suma18=0,suma19=0,suma20=0;
int suma21=0,suma22=0,suma23=0,suma24=0,suma25=0,suma26=0,suma27=0,suma28=0,suma29=0,suma30=0,suma31=0,suma32=0,suma33=0,suma34=0,suma35=0,suma36=0,suma37=0,suma38=0,suma39=0,suma40=0;
int suma41=0,suma42=0,suma43=0,suma44=0,suma45=0,suma46=0,suma47=0,suma48=0,suma49=0,suma50=0,suma51=0,suma52=0,suma53=0,suma54=0,suma55=0,suma56=0,suma57=0,suma58=0,suma59=0,suma60=0,suma61=0;
int suma62=0,suma63=0,suma64=0,suma65=0,suma66=0,suma67=0,suma68=0,suma69=0,suma70=0,suma71=0,suma72=0,suma73=0,suma74=0,suma75=0,suma76=0;
int suma77=0,suma78=0,suma79=0,suma80=0,suma81=0,suma82=0,suma83=0,suma84=0,suma85=0,suma86=0,suma87=0,suma88=0,suma89=0,suma90=0,suma91=0,suma92=0;
int suma93=0,suma94=0,suma95=0,suma96=0,suma97=0,suma98=0,suma99=0,suma00=0,suma01=0,suma02=0,suma03=0,suma04=0,suma05=0,suma06=0,suma07=0,suma08=0,suma09=0,suma0q=0,suma0p=0,suma0o=0;
int suma0i=0,suma0u=0,suma0y=0;
int main()
{
	system("color f");
    int menumatriz = 0;
  //Opciones del Menu
    Beep(500,300);
    cout << "               ............PROYECTO FINAL 2020.........." << endl;
    cout<<endl;
    cout<<endl;
    cout << "               ............INTEGRANTES.........." << endl;
    cout << "Aquino Loza Jhyssel Laura" << endl;
    cout << "Castro Alvis Jose Antonio" << endl;
    cout << "Bustillos Sucre Luis Marcelo" << endl;
    cout << "Mamani Mollo Kevin Jhonatan" << endl;
    cout << "Rosas Barja Jose Luis" << endl;
    cout<<endl;
    cout<<endl;
    Sleep(500);
    Beep(500,300);
    cout << "  Elige una opcion :  " << endl;
    cout<<endl;
    cout << "1.-   MICROMERCADO KARMALAND    " << endl;
    cout<<endl;
    cout << "2.-   Salir  " << endl;
    cout<<endl;
    cout<<"Numero: ";cin>>menumatriz;
    switch (menumatriz)
    {
    case 1:
    {
        float suma = 0;
        string respuesta, cant = "";
        Sleep(500);
        Beep(500,300);
        cout << " ..............................................." << endl;
        cout << " .                                             ." << endl;
        cout << " .   Bienvenido al Micro Mercado KARMALAND     ." << endl;
        cout << " .                                             ." << endl;
        cout << " ..............................................." << endl;
        cout << endl;
        cout << " Elija una Opcion de la Lista de Secciones" << endl;
        do
        {
        	Sleep(500);
        	Beep(500,300);
            cout << endl;
            cout << " ________________________________________________________" << endl;
            cout << "|                                                        |" << endl;
            cout << "|                    Menu de Secciones                   |" << endl;
            cout << "|--------------------------------------------------------|" << endl;
            cout << "| 1--Bebidas                                             |" << endl;
            cout << "|--------------------------------------------------------|" << endl;
            cout << "| 2--Dulces y Galletas                                   |" << endl;
            cout << "|--------------------------------------------------------|" << endl;
            cout << "| 3--Articulos de Limpieza                               |" << endl;
            cout << "|--------------------------------------------------------|" << endl;
            cout << "| 4--Cereales                                            |" << endl;
            cout << "|--------------------------------------------------------|" << endl;
            cout << "| 5--Lacteos                                             |" << endl;
            cout << "|--------------------------------------------------------|" << endl;
            cout << "| 6--Frutas y Verduras                                   |" << endl;
            cout << "|________________________________________________________|" << endl; 
                int i1;
                cout<<endl;
                cout<<"Numero: ";cin>>i1;
            switch (i1)
            {
            case 1:{
            	Sleep(500);
        		Beep(500,300);
                cout << " ______________________________________________________________" << endl;
                cout << "|                                                              |" << endl;
                cout << "|                      Menu de Bebidas                         |" << endl;
                cout << "|--------------------------------------------------------------|" << endl;
                cout << "| 1-Pepsi Light 3L: 9bs      | 11-Sprite 3L: 13bs              |" << endl;
                cout << "|----------------------------|---------------------------------|" << endl;
                cout << "| 2-Lata Imperial 500Ml: 5bs | 12-RedBull 500Ml: 16bs          |" << endl;
                cout << "|----------------------------|---------------------------------|" << endl;
                cout << "| 3-Lata Huari 500Ml: 9bs    | 13-Monster 500Ml: 16bs          |" << endl;
                cout << "|----------------------------|---------------------------------|" << endl;
                cout << "| 4-Ades Durazno 1L: 10bs    | 14-Four Loko Sandia 750Ml: 27bs |" << endl;
                cout << "|----------------------------|---------------------------------|" << endl;
                cout << "| 5-Ades Manzana 1L: 10bs    | 15-Four Loko Uva 750Ml: 27bs    |" << endl;
                cout << "|----------------------------|---------------------------------|" << endl;
                cout << "| 6-Pepsi 3L: 10bs           | 16-Vino Tinto 750Ml: 26bs       |" << endl;
                cout << "|----------------------------|---------------------------------|" << endl;
                cout << "| 7-7UP 3L: 10bs             | 17-Flor de Caña 1L: 73bs        |" << endl;
                cout << "|----------------------------|---------------------------------|" << endl;
                cout << "| 8-Guarana 3L: 10bs         | 18-Fernet Branca 750Ml: 75bs    |" << endl;
                cout << "|----------------------------|---------------------------------|" << endl;
                cout << "| 9-CocaCola 3L: 13bs        | 19-Fernet Menta 750Ml: 75bs     |" << endl;
                cout << "|----------------------------|---------------------------------|" << endl;
                cout << "| 10-Fanta Limon 3L: 13bs    | 20-Whisky Johnie 1L: 135bs      |" << endl;
                cout << "|____________________________|_________________________________|" << endl;
				int u1 = 0;
                int c;
                cout<<endl;
                cout<<"Numero: ";cin >> u1;
                switch (u1)
                {
                case 1:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Pepsi Light a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma1 = (suma1 + 9)*c;
                    cant =cant + "*Pepsi Light..............................................................9 Bs *";
                    break;
                case 2:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Lata Imperial 500Ml a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma2 = (suma2 + 5)*c;
                    cant = cant + "*Imperial Lata 500Ml......................................................5 Bs *";
                    break;
                case 3:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Lata Huari 500Ml a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma3 = (suma3 + 9)*c;
                    cant = cant + "*Lata Huari 500Ml.........................................................9 Bs *";
                    break;
                case 4:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Ades Durazno 1L a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma4 = (suma4 + 10)*c;
                    cant = cant + "*Ades Durazno 1L.........................................................10 Bs *";
                    break;
                case 5:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Ades Manzana 1L a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma5 = (suma5 + 10)*c;
                    cant = cant + "*Ades Manzana 1L.........................................................10 Bs *";
                    break;
                case 6:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Pepsi 3L a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma6 = (suma6 + 10)*c;
                    cant = cant + "*Pepsi de 3L.............................................................10 Bs *";
                    break;
                case 7:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de 7UP 3L a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma7 = (suma7 + 10)*c;
                    cant = cant + "*7Up de 3L................................................................10Bs *";
                    break;
                case 8:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Guarana 3L a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma8 = (suma8 + 10)*c;
                    cant = cant + "*Fanta Guarana 3L........................................................10 Bs *";
                    break;
                case 9:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de CocaCola 3L a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma9 = (suma9 + 15)*c;
                    cant = cant + "*Coca Cola 3L............................................................13 Bs *";
                    break;
                case 10:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Fanta Limon 3L a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma10 = (suma10 + 13)*c;
                    cant = cant + "*Fanta 3L................................................................13 Bs *";
                    break;
                case 11:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Sprite 3L a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma11 = (suma11 + 13)*c;
                    cant = cant + "*Sprite 3L...............................................................13 Bs *";
                    break;
                case 12:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de RedBull 500Ml a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma12 = (suma12 + 16)*c;
                    cant = cant + "*Redbul 500L.............................................................16 Bs *";
                    break;
                case 13:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Monster 500Ml a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma13 = (suma13 + 16)*c;
                    cant = cant + "*Monster Energy 500Ml....................................................16 Bs *";
                    break;
                case 14:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Four Loko Sandia 750Ml a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma14 = (suma14 + 27)*c;
                    cant = cant + "*Four Loko Sabor Sandia..............................................750Ml 27 Bs *";
                    break;
                case 15:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Four Loko Uva 750Ml a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma15 = (suma15 + 27)*c;
                    cant = cant + "*Four Loko Sabor Uva 750Ml...............................................27 Bs *";
                    break;
                case 16:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Vino Tinto 750Ml a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma16 = (suma16 + 26)*c;
                    cant = cant + "*Vino Tinto 750Ml........................................................26 Bs *";
                    break;
                case 17:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Flor de Caña 1L a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma17 = (suma17 + 73)*c;
                    cant = cant + "*Flor de Caña 1L.........................................................73 Bs *";
                    break;
                case 18:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Fernet Branca 750Ml a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma18 = (suma18 + 75)*c;
                    cant = cant + "*Fernet Branca 750Ml.....................................................75 Bs *";
                    break;
                case 19:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Fernet Menta 750Ml a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma19 = (suma19 + 75)*c;
                    cant = cant + "*Fernet Menta 750Ml......................................................75 Bs *";
                    break;
                case 20:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Whisky Johnie 1L a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma20 = (suma20 + 135)*c;
                    cant = cant + "*Whisky Johnie 1L.......................................................135 Bs *";
                    break;
                default:
                	Sleep(500);
        			Beep(500,300);
                    cout << "....Este Valor No Esta Disponible intente con otro...." << endl;
                    break;
                }
                total1=suma1+suma2+suma3+suma4+suma5+suma6+suma7+suma8+suma9+suma10+suma11+suma12+suma13+suma14+suma15+suma16+suma17+suma18+suma19+suma20;
                break;
                }
            case 2:{
            	Sleep(500);
        		Beep(500,300);
                cout << " ________________________________________________________________" << endl;
                cout << "|                                                                |" << endl;
                cout << "|                   Menu de Dulces y Galletas                    |" << endl;
                cout << "|----------------------------------------------------------------|" << endl;
                cout << "| 1-Club Social: 2bs           | 11-Ducales: 7bs                 |" << endl;
                cout << "|------------------------------|---------------------------------|" << endl;
                cout << "| 2-Gauchitas: 3bs             | 12-Choco Chip: 7bs              |" << endl;
                cout << "|------------------------------|---------------------------------|" << endl;
                cout << "| 3-Moraditas: 3bs             | 13-Salvado: 9bs                 |" << endl;
                cout << "|------------------------------|---------------------------------|" << endl;
                cout << "| 4-Maria: 3bs                 | 14-Champagne: 10bs              |" << endl;
                cout << "|------------------------------|---------------------------------|" << endl;
                cout << "| 5-Oreo: 3bs                  | 15-San Gabriel: 10bs            |" << endl;
                cout << "|------------------------------|---------------------------------|" << endl;
                cout << "| 6-Papas Fritas(pequeña): 5bs | 16-Papas Fritas(grandes): 15bs  |" << endl;
                cout << "|------------------------------|---------------------------------|" << endl;
                cout << "| 7-Crackers: 5bs              | 17-Chocolate Bauducco: 20bs     |" << endl;
                cout << "|------------------------------|---------------------------------|" << endl;
                cout << "| 8-Chips Ahoy!: 5bs           | 18-Praline: 20bs                |" << endl;
                cout << "|------------------------------|---------------------------------|" << endl;
                cout << "| 9-Choco Soda: 5bs            | 19-Chocolate Bom o Bom: 20bs    |" << endl;
                cout << "|------------------------------|---------------------------------|" << endl;
                cout << "| 10-Wafers: 5bs               | 20-Ferrari Integral: 25bs       |" << endl;
                cout << "|______________________________|_________________________________|" << endl;
                int c1 = 0;
                int c;
                cout<<endl;
                cout<<"Numero: ";cin >> c1;
                switch (c1)
                {
                case 1:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Club Social a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma21 = (suma21 + 2)*c;
                    cant = cant + "*Club Social....................................................2 Bs *";
                    break;
                case 2:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Gauchitas a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma22 = (suma22 + 3)*c;
                    cant = cant + "*Gauchitas................................................................3 Bs *";
                    break;
                case 3:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Moraditas a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma23 = (suma23 + 3)*c;
                    cant = cant + "*Moraditas................................................................3 Bs *";
                    break;
                case 4:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Maria a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma24 = (suma24 + 3)*c;
                    cant = cant + "*Maria....................................................................3 Bs *";
                    break;
                case 5:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Oreo a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma25 = (suma25 + 3)*c;
                    cant = cant + "*Oreo.....................................................................3 Bs *";
                    break;
                case 6:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Papas Fritas(pequeña) a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma26 = (suma26 + 5)*c;
                    cant = cant + "*Papas Fritas(pequeña)....................................................5 Bs *";
                    break;
                case 7:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Crackers a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma27 = (suma27 + 5)*c;
                    cant = cant + "*Crackers.................................................................5 Bs *";
                    break;
                case 8:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Chips Ahoy! a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma28 = (suma28 + 5)*c;
                    cant = cant + "*Chips Ahoy!..............................................................5 Bs *";
                    break;
                case 9:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Choco Soda a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma29 = (suma29 + 5)*c;
                    cant = cant + "*Choco Soda...............................................................5 Bs *";
                    break;
                case 10:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Wafers a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma30 = (suma30 + 5)*c;
                    cant = cant + "*Wafers...................................................................5 Bs *";
                    break;
                case 11:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Ducales a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma31 = (suma31 + 7)*c;
                    cant = cant + "*Ducales..................................................................7 Bs *";
                    break;
                case 12:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Choco Chip a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma32 = (suma32 + 7)*c;
                    cant = cant + "*Choco Chip...............................................................7 Bs *";
                    break;
                case 13:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Salvado a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma33 = (suma33 + 9)*c;
                    cant = cant + "*Salvado.................................................................9 Bs *";
                    break;
                case 14:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Champagne a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma34 = (suma34 + 10)*c;
                    cant = cant + "*Champagne...............................................................10 Bs *";
                    break;
                case 15:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de San Gabriel a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma35 = (suma35 + 10)*c;
                    cant = cant + "*San Gabriel...................................................10 Bs *";
                    break;
                case 16:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Papas Fritas(grandes) a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma36 = (suma36 + 15)*c;
                    cant = cant + "*Papas Fritas (grandes)..................................................15 Bs *";
                    break;
                case 17:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Chocolate Bauducco a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma37 = (suma37 + 20)*c;
                    cant = cant + "*Chocolate Bauduco.............................................20 Bs *";
                    break;
                case 18:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Praline a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma38 = (suma38 + 20)*c;
                    cant = cant + "*Praline.................................................................20 Bs *";
                    break;
                case 19:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Chocolate Bom o Bom a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma39 = (suma39 + 20)*c;
                    cant = cant + "*Chocolate Bon o Bon.....................................................20 Bs *";
                    break;
                case 20:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Ferrari Integral 1kg a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma40 = (suma40 + 25)*c;
                    cant = cant + "*Ferrari Integral 1 kg...................................................25 Bs *";
                    break;
                default:
                    cout << "....Este Valor No Esta Disponible intente con otro...." << endl;
                    break;
                }
                total2=suma21+suma22+suma23+suma24+suma25+suma6+suma27+suma28+suma29+suma30+suma31+suma32+suma33+suma34+suma35+suma36+suma37+suma38+suma39+suma40;
                break;
            }
            case 3:{
            	Sleep(500);
        		Beep(500,300);
                cout << " ________________________________________________________________" << endl;
                cout << "|                                                                |" << endl;
                cout << "|                  Menu de Articulos de Limpieza                 |" << endl;
                cout << "|----------------------------------------------------------------|" << endl;
                cout << "| 1-Detergente OMO 3Kl: 65bs    | 12-Antigrasa OLA: 19bs         |" << endl;
                cout << "|-------------------------------|--------------------------------|" << endl;
                cout << "| 2-Detergente ACE 1Kl: 20bs    | 13-Desodorante Rexona: 42bs    |" << endl;
                cout << "|-------------------------------|--------------------------------|" << endl;
                cout << "| 3-Detergente Liquido 1L: 75bs | 14-Desodorante Old Spice: 25bs |" << endl;
                cout << "|-------------------------------|--------------------------------|" << endl;
                cout << "| 4-Suavisante de Ropa 1L: 67bs | 15-Lava Vajilla Archer: 19bs   |" << endl;
                cout << "|-------------------------------|--------------------------------|" << endl;
                cout << "| 5-Jaboncillo Dove: 8bs        | 16-Ambientador: 15bs           |" << endl;
                cout << "|-------------------------------|--------------------------------|" << endl;
                cout << "| 6-Shampoo Sedal: 22bs         | 17-Enjuage Bucal Colgate: 45bs |" << endl;
                cout << "|-------------------------------|--------------------------------|" << endl;
                cout << "| 7-Colino Colgate: 10bs        | 18-Jabon Bolivar: 5bs          |" << endl;
                cout << "|-------------------------------|--------------------------------|" << endl;
                cout << "| 8-Cepillo Dental: 20bs        | 19-Esponja Scotch Brite: 25bs  |" << endl;
                cout << "|-------------------------------|--------------------------------|" << endl;
                cout << "| 9-Pack Escoba+Recojedor: 45bs | 20-Lavandina Mr.Flash: 1bs     |" << endl;
                cout << "|-------------------------------|--------------------------------|" << endl;
                cout << "| 10-Antisarro OLA: 20bs        | 21-Alcohol en Gel OLA: 30bs    |" << endl;
                cout << "|-------------------------------|--------------------------------|" << endl;
                cout << "| 11-Limpia Vidrio OLA: 19bs    |                                |" << endl;
                cout << "|_______________________________|________________________________|" << endl;
                int o1 = 0;
                int c;
                cout<<endl;
                cout<<"Numero: ";cin >>o1;
                switch (o1)
                {
                case 1: 
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Detergente OMO 3Kl a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma41 = (suma41 + 65)*c;  
                    cant = cant + "*Detergente OMO 3kl......................................................65 Bs *";
                    break;
                case 2:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Detergente ACE 1Kl a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma42 = (suma42 + 20)*c;
                    cant = cant + "*Detergente Ace 1kl......................................................20 Bs *";
                    break;
                case 3:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Detergente Liquido 1L a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma43 = (suma43 + 75)*c;
                    cant = cant + "*Detergente liquido 1L...................................................75 Bs *";
                    break;
                case 4:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Suavisante de Ropa 1L a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma44 = (suma44 + 67)*c;
                    cant = cant + "*Suavisante de ropa 1l...................................................67 Bs *";
                    break;
                case 5:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Jaboncillo Dove a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma45 = (suma45 + 8)*c;
                    cant = cant + "*Jaboncillo Dove..........................................................8 Bs *";
                    break;
                case 6:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Shampoo Sedal a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma46 = (suma46 + 22)*c;
                    cant = cant + "*Shampoo Sedal...........................................................22 Bs *";
                    break;
                case 7:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Colino Colgate a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma47 = (suma47 + 10)*c;
                    cant = cant + "*Crema dental Colgate....................................................10 Bs *";
                    break;
                case 8:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Cepillo Dental a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma48 = (suma48 + 20)*c;
                    cant = cant + "*Cepillo dental..........................................................20 Bs *";
                    break;
                case 9:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Pack Escoba+Recojedor a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma49 = (suma49 + 45)*c;
                    cant = cant + "*Pack Escoba+Levantador..................................................45 Bs *";
                    break;
                case 10:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Antisarro OLA a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma50 = (suma50 + 20)*c;
                    cant = cant + "*Antisarro OLA...........................................................20 Bs *";
                    break;
                case 11:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Limpia Vidrio OLA a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma51 = (suma51 + 19)*c;
                    cant = cant + "*Limpia Vidrio OLA.......................................................19 Bs *";
                    break;
                case 12:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Antigrasa OLA a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma52 = (suma52 + 19)*c;
                    cant = cant + "*Antigrasa OLA...........................................................19 Bs *";
                    break;
                case 13:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Desodorante Rexona a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma53 = (suma53 + 42)*c;
                    cant = cant + "*Antitranspirante Rexona.................................................42 Bs *";
                    break;
                case 14:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Lava Desodorante Old Spice a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma54 = (suma54 + 25)*c;
                    cant = cant + "*Antitraspirante OldSpice................................................25 Bs *";
                    break;
                case 15:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Lava Vajilla Archer a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma55 = (suma55 + 19)*c;
                    cant = cant + "*Lava Vajilla Archer.....................................................19 Bs *";
                    break;
                case 16:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Ambientador a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma56 = (suma56 + 15)*c;
                    cant = cant + "*Ambientador.............................................................15 Bs *";
                    break;
                case 17:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Enjuage Bucal Colgate a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma57 = (suma57 + 45)*c;
                    cant = cant + "*Enjuage Bucal Colgate...................................................45 Bs *";
                    break;
                case 18:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Jabon Bolivar a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma58 = (suma58 + 5)*c;
                    cant = cant + "*Jabón Bolivar............................................................5 Bs *";
                    break;
                case 19:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Esponja Scotch Brite a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma59 = (suma59 + 25)*c;
                    cant = cant + "*Esponja Scotch Brite....................................................25 Bs *";
                    break;
                case 20:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Lavandina Mr.Flash a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma60 = (suma60 + 1)*c;
                    cant = cant + "*Lavandina Mr.Flash.......................................................1 Bs *";
                    break;
                case 21:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Alcohol en Gel OLA a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma61 = (suma61 + 30)*c;
                    cant = cant + "*Alcohol en Gel OLA......................................................30 Bs *";
                    break;
                default:
                	Sleep(500);
        			Beep(500,300);
                    cout << "....Este Valor No Esta Disponible intente con otro...." << endl;
                    break;
                }
                total3=suma41+suma42+suma43+suma44+suma45+suma46+suma47+suma48+suma49+suma50+suma51+suma52+suma53+suma54+suma55+suma56+suma57+suma58+suma59+suma60+suma61;
                break;
				}
            case 4:{
            	Sleep(500);
        		Beep(500,300);
                cout << " _______________________________________________________" << endl;
                cout << "|                                                       |" << endl;
                cout << "|                    Menu de Cereales                   |" << endl;
                cout << "|-------------------------------------------------------|" << endl;
                cout << "| 1-Miel Pops: 10bs           | 11-Golden Grahams: 25bs |" << endl;
                cout << "|-----------------------------|-------------------------|" << endl;
                cout << "| 2-Relleno de Leche: 10bs    | 12-Smocks: 25bs         |" << endl;
                cout << "|-----------------------------|-------------------------|" << endl;
                cout << "| 3-Milo: 18bs                | 13-Trix: 25bs           |" << endl;
                cout << "|-----------------------------|-------------------------|" << endl;
                cout << "| 4-Chocopotamos: 16bs        | 14-All-Bran Chose: 30bs |" << endl;
                cout << "|-----------------------------|-------------------------|" << endl;
                cout << "| 5-Froties: 15bs             | 15-Nesquik: 30bs        |" << endl;
                cout << "|-----------------------------|-------------------------|" << endl;
                cout << "| 6-Hoco Krispi: 15bs         |                         |" << endl;
                cout << "|-----------------------------|-------------------------|" << endl;
                cout << "| 7-Unicorn Froot Loops: 15bs |                         |" << endl;
                cout << "|-----------------------------|-------------------------|" << endl;
                cout << "| 8-Rice Krispies: 15bs       |                         |" << endl;
                cout << "|-----------------------------|-------------------------|" << endl;
                cout << "| 9-Froot Loops: 16bs         |                         |" << endl;
                cout << "|-----------------------------|-------------------------|" << endl;
                cout << "| 10-Chocapic: 27bs           |                         |" << endl;
                cout << "|_____________________________|_________________________|" << endl;

                int a1 = 0;
                int c;
                cout<<endl;
                cout<<"Numero: ";cin >> a1;
                switch (a1)
                {
                case 1: 
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Miel Pops a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma62 = (suma62 + 10)*c;
                    cant = cant + "*Miel Pops...............................................................10 Bs *";
                    break;
                case 2:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Relleno de Leche a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma63 = (suma63 + 10)*c;
                    cant = cant + "*Rellenos de leche.......................................................10 Bs *";
                    break;
                case 3:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Milo a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma64 = (suma64 + 18)*c;
                    cant = cant + "*Milo....................................................................18 Bs *";
                    break;
                case 4:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Chocopotamos a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma65 = (suma65 + 16)*c;
                    cant = cant + "*Chocopotamos............................................................16 Bs *";
                    break;
                case 5:
                	Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Froties a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma66 = (suma66 + 15)*c;
                    cant = cant + "*Froties.................................................................15 Bs *";
                    break;
                case 6:	
					Sleep(500);
        			Beep(500,300);
                	cout<<"Cantidad de Hoco Krispi a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma67 = (suma67 + 15)*c;
                    cant = cant + "*Choco Krispis...........................................................15 Bs *";
                    break;
                case 7:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de Unicorn Froot Loops a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma68 = (suma68 + 15)*c;
                    cant = cant + "*Unircorn Froot Loops....................................................15 Bs *";
                    break;
                case 8:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de Rice Krispies a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma69 = (suma69 + 15)*c;
                    cant = cant + "*Rice Krispies...........................................................15 Bs *";
                    break;
                case 9:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de Froot Loops a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma70 = (suma70 + 16)*c;
                    cant = cant + "*Froot loops.............................................................16 Bs *";
                    break;
                case 10:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de Chocapic a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma71 = (suma71 + 27)*c;
                    cant = cant + "*Chocapic................................................................27 Bs *";
                    break;
                case 11:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de Golden Grahams a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma72 = (suma72 + 25)*c;
                    cant = cant + "*Golden Grahams..........................................................25 Bs *";
                    break;
                case 12:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de Smocks a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma73 = (suma73 + 25)*c;
                    cant = cant + "*Smocks..................................................................25 Bs *";
                    break;
                case 13:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de Trix a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma74 = (suma74 + 25)*c;
                    cant = cant + "*Trix....................................................................25 Bs *";
                    break;
                case 14:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de All-Bran Chose a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma75 = (suma75 + 30)*c;
                    cant = cant + "*All-Bran choce..........................................................30 Bs *";
                    break;
                case 15:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de Nesquik  a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma76 = (suma76 + 30)*c;
                    cant = cant + "*Nesquick................................................................30 Bs *";
                    break;
                default:
                	Sleep(500);
                	Beep(500,300);
                    cout << "....Este Valor No Esta Disponible intente con otro...." << endl;
                    break;
                }
                total4=suma62+suma63+suma64+suma65+suma66+suma67+suma68+suma69+suma70+suma71+suma72+suma73+suma74+suma75+suma76;
                break;
            	}
            case 5:{
            	Sleep(500);
        		Beep(500,300);
                cout << " ______________________________________________________________" << endl;
                cout << "|                                                              |" << endl;
                cout << "|                         Menu de Lacteos                      |" << endl;
                cout << "|--------------------------------------------------------------|" << endl;
                cout << "| 1-Leche Light: 7bs              | 11-Mantequilla Regia: 20bs |" << endl;
                cout << "|---------------------------------|----------------------------|" << endl;
                cout << "| 2-Leche Deslactosada: 8bs       | 12-Leche en Polvo: 18bs    |" << endl;
                cout << "|---------------------------------|----------------------------|" << endl;
                cout << "| 3-Manjar 1Kl: 35bs              | 13-Helado Pil: 20bs        |" << endl;
                cout << "|---------------------------------|----------------------------|" << endl;
                cout << "| 4-Leche Natural: 6bs            | 14-Helado Norlan: 10bs     |" << endl;
                cout << "|---------------------------------|----------------------------|" << endl;
                cout << "| 5-Leche Condensada: 12bs        | 15-Yogurt Griego: 7bs      |" << endl;
                cout << "|---------------------------------|----------------------------|" << endl;
                cout << "| 6-Leche Evaporada: 13bs         | 16-Pilfrut Durazno: 1bs    |" << endl;
                cout << "|---------------------------------|----------------------------|" << endl;
                cout << "| 7-Queso Premier: 45             |                            |" << endl;
                cout << "|---------------------------------|----------------------------|" << endl;
                cout << "| 8-Yogurt Delicia Frutilla: 15bs |                            |" << endl;
                cout << "|---------------------------------|----------------------------|" << endl;
                cout << "| 9-Yogurt Delicia Durazno: 15bs  |                            |" << endl;
                cout << "|---------------------------------|----------------------------|" << endl;
                cout << "| 10-Yogurt Delicia Coco: 15bs    |                            |" << endl;
                cout << "|_________________________________|____________________________|" << endl;
                int w1 = 0;
                int c;
                cout<<endl;
                cout<<"Numero: ";cin >> w1;
                switch (w1)
                {
                case 1: 
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de Leche Light a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma77 = (suma77 + 7)*c;
                    cant = cant + "*Leche Light..............................................................7 Bs *";
                    break;
                case 2:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de Leche deslactosada a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma78 = (suma78 + 8)*c;
                    cant = cant + "*Leche deslactosada.......................................................8 Bs *";
                    break;
                case 3:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de Manjar 1kl   a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma79 = (suma79 + 35)*c;
                    cant = cant + "*Manjar 1kl..............................................................35 Bs *";
                    break;
                case 4:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de Leche Natural a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma80 = (suma80 + 6)*c;
                    cant = cant + "*Leche Natural............................................................6 Bs *";
                    break;
                case 5:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de Leche Condesada a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma81 = (suma81 + 12)*c;
                    cant = cant + "*Leche Condesada.........................................................12 Bs *";
                    break;
                case 6:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de Leche Evaporada a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma82 = (suma82 + 13)*c;
                    cant = cant + "*Leche Evaporada.........................................................13 Bs *";
                    break;
                case 7:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de Queso Premier a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma83 = (suma83 + 45)*c;
                    cant = cant + "*Queso Premier...........................................................45 Bs *";
                    break;
                case 8:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de Yogurt Delicia Frutilla a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma84 = (suma84 + 15)*c;
                    cant = cant + "*Yogurt Delicia Frutilla.................................................15 Bs *";
                    break;
                case 9:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de Yogurt Delicia Durazno a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma85 = (suma85 + 15)*c;
                    cant = cant + "*Yogurt Delicia Durazno..................................................15 Bs *";
                    break;
                case 10:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de Yogurt Delicia Coco a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma86 = (suma86 + 15)*c;
                    cant = cant + "*Yogurt Delicia Coco.....................................................15 Bs *";
                    break;
                case 11:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de  Mantequilla Regia a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma87 = (suma87 + 20)*c;
                    cant = cant + "*Mantequilla Regia.......................................................20 Bs *";
                    break;
                case 12:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de  Leche en Polvo a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma88 = (suma88 + 18)*c;
                    cant = cant + "*Leche en Polvo..........................................................18 Bs *";
                    break;
                case 13:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de  Helado Pil a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma89 = (suma89 + 20)*c;
                    cant = cant + "*Helado Pil..............................................................20 Bs *";
                    break;
                case 14:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de  Helado Norlan a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma90 = (suma90 + 10)*c;
                    cant = cant + "*Helado Norlan...........................................................10 Bs *";
                    break;
                case 15:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de  Yogurt Griego Delicia a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma91 = (suma91 + 7)*c;
                    cant = cant + "*Yogurt Griego Delicia....................................................7 Bs *";
                    break;
                case 16:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de  Pilfrut durazno a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma92 = (suma92 + 1)*c;
                    cant = cant + "*Pilfrut durazno..........................................................1 Bs *";
                    break;
                default:
                	Sleep(500);
                	Beep(500,300);
                    cout << "....Este Valor No Esta Disponible intente con otro...." << endl;
                    break;
                }
                total5=suma77+suma78+suma79+suma80+suma81+suma82+suma83+suma84+suma85+suma86+suma87+suma88+suma89+suma90+suma91+suma92;
                break;
            	}
            case 6:{
            	Sleep(500);
        		Beep(500,300);
                cout << " ___________________________________________________" << endl;
                cout << "|                                                   |" << endl;
                cout << "|               Menu de Frutas y Verduras           |" << endl;
                cout << "|---------------------------------------------------|" << endl;
                cout << "| 1-Manzana Verde 1Kl: 10bs | 13-Zanahoria 1Kl: 6bs |" << endl;
                cout << "|---------------------------|-----------------------|" << endl;
                cout << "| 2-Chirimolla 1Kl: 20bs    | 14-Cebolla 1Kl: 7bs   |" << endl;
                cout << "|---------------------------|-----------------------|" << endl;
                cout << "| 3-Durazno 1Kl: 15bs       | 15-Tomate 1Kl: 5bs    |" << endl;
                cout << "|---------------------------|-----------------------|" << endl;
                cout << "| 4-Frtilla 1 Pqte: 10bs    | 16-Navo 1Kl: 8bs      |" << endl;
                cout << "|---------------------------|-----------------------|" << endl;
                cout << "| 5-Ciruelo 1 Pqte: 8bs     | 17-Papa 1Kl: 12bs     |" << endl;
                cout << "|---------------------------|-----------------------|" << endl;
                cout << "| 6-Mora 1 Pqte: 15bs       | 18-Pimenton 1U: 5bs   |" << endl;
                cout << "|---------------------------|-----------------------|" << endl;
                cout << "| 7-Uva 1 Pqte: 14bs        | 19-Brocoli 1U: 9bs    |" << endl;
                cout << "|---------------------------|-----------------------|" << endl;
                cout << "| 8-Arandanos 1 Pqte: 17bs  | 20-Palta 1U: 10bs     |" << endl;
                cout << "|---------------------------|-----------------------|" << endl;
                cout << "| 9-Limon 1Kl: 12bs         | 21-Repollo 1U: 6bs    |" << endl;
                cout << "|---------------------------|-----------------------|" << endl;
                cout << "| 10-Sandia 1U: 32bs        | 22-Berenjena 1U: 8bs  |" << endl;
                cout << "|---------------------------|-----------------------|" << endl;
                cout << "| 11-Melon 1U: 10bs         | 23-Lechuga 1 Bol: 5Bs |" << endl;
                cout << "|---------------------------|-----------------------|" << endl;
                cout << "| 12-Piña 1U: 10bs          |                       |" << endl;
                cout << "|___________________________|_______________________|" << endl;
                int b1 = 0;
                int c;
                cout<<endl;
                cout<<"Numero: ";cin>>b1;
                switch (b1)
                {
                case 1:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de  Manzana Verde 1kl a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma93 = (suma93 + 10)*c;
                    cant = cant + "*Manzana Verde 1kl.......................................................10 Bs *";
                    break;
                case 2:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de  Chirimolla 1kl a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma94 = (suma94 + 20)*c;
                    cant = cant + "*Chirimolla 1kl..........................................................20 Bs *";
                    break;
                case 3:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de  Durazno 1kl a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma95= (suma95 + 15)*c;
                    cant = cant + "*Durazno 1kl.............................................................15 Bs *";
                    break;
                case 4:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de  Frutilla 1 Pqte a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma96 = (suma96 + 10)*c;
                    cant = cant + "*Frutilla 1 Pqte.........................................................10 Bs *";
                    break;
                case 5:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de  Ciruelo 1 Pqte a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma97 = (suma97 + 8)*c;
                    cant = cant + "*Ciruelo 1 Pqte...........................................................8 Bs *";
                    break;
                case 6:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de  Mora 1 Pqte a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma98 = (suma98 + 15)*c;
                    cant = cant + "*Mora 1 Pqte.............................................................15 Bs *"; 
                    break;
                case 7:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de  Uva 1 Pqte a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma99 = (suma99 + 14)*c;
                    cant = cant + "*Uva 1 Pqte..............................................................14 Bs *";
                    break;
                case 8:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de  Arandanos 1 Pqte a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma00 = (suma00 + 17)*c;
                    cant = cant + "*Arandanos 1 Pqte........................................................17 Bs *";
                    break;
                case 9:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de  Limon 1kl a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma01 = (suma01 + 12)*c;
                    cant = cant + "*Limon 1kl...............................................................12 Bs *";
                    break;
                case 10:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de  Sandia 1U a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma02 = (suma02 + 32)*c;
                    cant = cant + "*Sandia 1U...............................................................32 Bs *";
                    break;
                case 11:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de  Melon 1U a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma03 = (suma03 + 10)*c;
                    cant = cant + "*Melon 1U................................................................10 Bs *";
                    break;
                case 12:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de  Piña 1U a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma04 = (suma04 + 10)*c;
                    cant = cant + "*Piña 1U.................................................................10 Bs *";
                    break;
                case 13:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de Zanohoria 1kl a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma05 = (suma05 + 6)*c;
                    cant = cant + "*Zanohoria 1kl............................................................6 Bs *";
                    break;
                case 14:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de Cebolla 1kl a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma06 = (suma06 + 7)*c;
                    cant = cant + "*Cebolla 1kl..............................................................7 Bs *";
                    break;
                case 15:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de Tomate 1kl a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma07 = (suma07 + 5)*c;
                    cant = cant + "*Tomate 1kl...............................................................5 Bs *";
                    break;
                case 16:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de Navo 1kl a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma08 = (suma08 + 8)*c;
                    cant = cant + "*Navo 1kl.................................................................8 Bs *";
                    break;
                case 17:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de Papa 1kl a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma09 = (suma09 + 12)*c;
                    cant = cant + "*Papa 1kl................................................................12 Bs *";
                    break;
                case 18:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de Pimenton 1U a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma0q = (suma0q + 5)*c;
                    cant = cant + "*Pimenton 1U..............................................................5 Bs *";
                    break;
                case 19:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de Brocoli 1U a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma0p = (suma0p + 9)*c;
                    cant = cant + "*Brocoli 1U...............................................................9 Bs *";
                    break;
                case 20:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de Palta 1U a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma0o = (suma0o + 10)*c;
                    cant = cant + "*Palta 1U................................................................10 Bs *";
                    break;
                case 21:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de Repollo 1U a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma0i = (suma0i + 6)*c;
                    cant = cant + "*Repollo 1U...............................................................6 Bs *";
                    break;
                case 22:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de Berenjena 1U a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma0u = (suma0u+ 8)*c;
                    cant = cant + "*Berenjena 1U.............................................................8 Bs *";
                    break;
                case 23:
                	Sleep(500);
                	Beep(500,300);
                	cout<<"Cantidad de Lechuga 1Bol a comprar: ";
                	cout<<"Cantidad: ";cin>>c;
                    suma0y = (suma0y + 5)*c;
                    cant = cant + "*Lechuga 1Bol.............................................................5 Bs *";
                    break;
                default:
                	Sleep(500);
                	Beep(500,300);
                    cout << "....Este Valor No Esta Disponible intente con otro...." << endl;
                    break;
                }
                total6=suma93+suma94+suma95+suma96+suma97+suma98+suma99+suma00+suma01+suma02+suma03+suma04+suma05+suma06+suma07+suma08+suma09+suma0q+suma0p+suma0o+suma0i+suma0u+suma0y;
                break;
            	}
            default:
            	Sleep(500);
                Beep(500,300);
                cout << "....Este Valor No Esta Disponible intente con otro...." << endl;
                break;
            }
            total= total1+total2+total3+total4+total5+total6;         
            cout << endl;
            cout << "Suma Actual :  " << total << " Bs" << endl;
            cout << endl;
            Sleep(500);
        	Beep(500,300);
            cout << "Desea comprar otro producto...... Si o No...  " << endl;
            cout<<endl;
            cout<<"Respuesta: ";cin >> respuesta;
        } while (respuesta != "no");
        cout << "..........................................." << endl;
        Sleep(500);
        Beep(500,300);
        cout << "Ingrese su Primer Nombre: ";
        string nombre;
        cin >> nombre;
        cout<<endl;
        Sleep(500);
        Beep(500,300);
        cout << "Ingrese su Primer Apellido: ";
        string apellido;
        cin >> apellido;
        cout<<endl;
        Sleep(500);
        Beep(500,300);
        cout << "Ingrese el NIT/CI.: ";
        string nit;
        cin >> nit;
        cout<<endl;
        Sleep(500);
        Beep(500,300);
        cout << "Ingrese su Direccion de Residencia: ";
        string residencia;
        cin >> residencia;
        cout<<endl;
        Sleep(500);
        Beep(500,300);
        cout << "Ingrese su numero de Telefono: ";
        string telf;
        cin >> telf;
        cout<<endl;
        Sleep(500);
        Beep(500,300);
        cout<<"Ingrese su Numero de su Tarjeta de Credito: ";
        string tarjeta;
        cin>>tarjeta;
        cout<<endl;
        Sleep(500);
        Beep(500,300);
        cout<<"Ingrese su Pin de su Tarjeta de Credito: ";
        string pin;
        cin>>pin;
        string vendedor = "IA.Sanchez  ";
       for (int i=1;i<=2;i++)
        {
			Sleep(700);
			Beep(500,200);
        	system("cls");
        	cout<<endl;
        	cout<<endl;
        	cout<<endl;
        	cout<<endl;
        	cout<<endl;
        	cout<<endl;
        	cout<<"                    Comprovando Su Numero De Tarjeta de Credito y Pin."<<endl;
        	cout<<endl;
        	cout<<"                    Del Cliente: "<<nombre<<" "<<apellido<<endl;
        	Sleep(700);
        	Beep(500,200);
        	system("cls");
        	cout<<endl;
        	cout<<endl;
        	cout<<endl;
        	cout<<endl;
        	cout<<endl;
        	cout<<endl;
        	cout<<"                    Comprovando Su Numero De Tarjeta de Credito y Pin ."<<endl;
        	cout<<endl;
        	cout<<"                    Del Cliente: "<<nombre<<" "<<apellido<<endl;
        	Sleep(700);
        	Beep(500,200);
        	system("cls");
        	cout<<endl;
        	cout<<endl;
        	cout<<endl;
        	cout<<endl;
        	cout<<endl;
        	cout<<endl;
        	cout<<"                    Comprovando Su Numero De Tarjeta de Credito y Pin  ."<<endl;
        	cout<<endl;
        	cout<<"                    Del Cliente: "<<nombre<<" "<<apellido<<endl;
		}
		
		system("cls");
		Beep(5000,200);
		cout<<endl;
       	cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
		cout<<"                    Su Numero De Tarjeta de Credito y Pin Son Correctos"<<endl;
		cout<<endl;
        cout<<"                    Del Cliente: "<<nombre<<" "<<apellido<<endl;
		Beep(5000,200);
		Sleep(700);
		for (int i=1;i<=2;i++)
        {
			Sleep(700);
			Beep(500,200);
        	system("cls");
        	cout<<endl;
       		cout<<endl;
        	cout<<endl;
        	cout<<endl;
        	cout<<endl;
        	cout<<endl;
        	cout<<"                    Confirando Pago De Su Compra."<<endl;
        	cout<<endl;
        	cout<<"                    Del Cliente: "<<nombre<<" "<<apellido<<endl;
        	Sleep(700);
        	Beep(500,200);
        	system("cls");
        	cout<<endl;
       		cout<<endl;
        	cout<<endl;
        	cout<<endl;
        	cout<<endl;
        	cout<<endl;
        	cout<<"                    Confirando Pago De Su Compra ."<<endl;
        	cout<<endl;
        	cout<<"                    Del Cliente: "<<nombre<<" "<<apellido<<endl;
        	Sleep(700);
        	Beep(500,200);
        	system("cls");
        	cout<<endl;
    		cout<<endl;
       		cout<<endl;
       		cout<<endl;
       		cout<<endl;
        	cout<<endl;
        	cout<<"                    Confirando Pago De Su Compra  ."<<endl;
        	cout<<endl;
        	cout<<"                    Del Cliente: "<<nombre<<" "<<apellido<<endl;
		}
		system("cls");
		Beep(5000,200);
		cout<<endl;
       	cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
		cout<<"                    Su Pago Fue Realizado Confirmando"<<endl;
		cout<<endl;
        cout<<"                    Del Cliente: "<<nombre<<" "<<apellido<<endl;
		Beep(5000,200);
		Sleep(700);
		for (int i=1;i<=2;i++)
        {
			Sleep(700);
			Beep(500,200);
        	system("cls");
        	cout<<endl;
        	cout<<endl;
        	cout<<endl;
        	cout<<endl;
        	cout<<endl;
        	cout<<"                    Otorgando Su Pedido A Un Delivery."<<endl;
        	cout<<endl;
        	cout<<"                    Del Cliente: "<<nombre<<" "<<apellido<<endl;
        	Sleep(700);
        	Beep(500,200);
        	system("cls");
        	cout<<endl;
        	cout<<endl;
        	cout<<endl;
        	cout<<endl;
        	cout<<endl;
        	cout<<"                    Otorgando Su Pedido A Un Delivery ."<<endl;
        	cout<<endl;
        	cout<<"                    Del Cliente: "<<nombre<<" "<<apellido<<endl;
        	Sleep(700);
        	Beep(500,200);
        	system("cls");
        	cout<<endl;
        	cout<<endl;
        	cout<<endl;
        	cout<<endl;
        	cout<<endl;
        	cout<<"                    Otorgando Su Pedido A Un Delivery  ."<<endl;
        	cout<<endl;
        	cout<<"                    Del Cliente: "<<nombre<<" "<<apellido<<endl;
		}
		system("cls");
		Beep(5000,200);
		cout<<endl;
       	cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
		cout<<"                    Su Pedido Esta En Camnino"<<endl;
		cout<<endl;
        cout<<"                    Su Direcccion: "<<residencia<<endl;
		Beep(5000,200);
		Sleep(700);
		for (int i=1;i<=2;i++)
        {
			Sleep(700);
			Beep(500,200);
        	system("cls");
        	cout<<endl;
       		cout<<endl;
        	cout<<endl;
        	cout<<endl;
        	cout<<endl;
        	cout<<endl;
        	cout<<"                    Procesando Factura."<<endl;
        	cout<<endl;
        	cout<<"                    Del Cliente: "<<nombre<<" "<<apellido<<endl;
        	Sleep(700);
        	Beep(500,200);
        	system("cls");
        	cout<<endl;
       		cout<<endl;
        	cout<<endl;
        	cout<<endl;
        	cout<<endl;
        	cout<<endl;
        	cout<<"                    Procesando Factura ."<<endl;
        	cout<<endl;
        	cout<<"                    Del Cliente: "<<nombre<<" "<<apellido<<endl;
        	Sleep(700);
        	Beep(500,200);
        	system("cls");
        	cout<<endl;
       		cout<<endl;
        	cout<<endl;
        	cout<<endl;
        	cout<<endl;
        	cout<<endl;
        	cout<<"                    Procesando Factura ."<<endl;
        	cout<<endl;
        	cout<<"                    Del Cliente: "<<nombre<<" "<<apellido<<endl;
        }
		system("cls");
        Sleep(500);
        Beep(500,300);
        time_t now = time(0);
	    tm * time = localtime(&now);
        cout << "*******************************************************************************" << endl;
        cout << "*                                FACTURA                                      *" << endl;
        cout << "*******************************************************************************" << endl;Sleep(600);Beep(500,300);
        cout <<"*Fecha: "<<time->tm_mday<<"/"<<time->tm_mon+1<<"/"<<time->tm_year+1900<<"                                                             *"<<endl;
        cout <<"*                                                                             *"<<endl; 
        cout <<"*Hora:"<<time->tm_hour<<":"<<time->tm_min<<":"<<time->tm_sec<<"                                                                 *"<<endl;
        cout <<"*                                                                             *"<<endl;
        cout <<"*Cliente: " << nombre<<" "<<apellido<< endl;
        cout <<"*                                                                             *"<<endl;
        cout <<"*NIT/CI: " <<nit<<"                                                              *" << endl;
        cout <<"*                                                                             *"<<endl;
        cout <<"*Numero de Telefono: " <<telf<<"                                                 *"<<endl;
        cout <<"*                                                                             *"<<endl;Sleep(700);Beep(500,300);
        cout <<"*******************************************************************************" << endl;
        cout <<"*                          CONCEPTO           " << "    IMPORTE                     *" << endl;
        cout <<"*******************************************************************************" << endl;
        cout <<"*Total: " <<total<<"Bs                                                                 *" << endl;
        cout <<"*******************************************************************************" << endl;
        cout <<"*Productos comprados:                                                         *"<<endl;
        cout <<cant<<endl;
        cout <<"*******************************************************************************" << endl;
        cout <<"*Emitodo por: "<< vendedor<<"                                                    *" << endl;
        cout <<"*Numero de Atencion al cliente: 675430774                                     *"<<endl;
        cout <<"*******************************************************************************" << endl;
        cout <<"*                             Gracias por su compra ¡¡!!                      *" << endl;
        cout <<"*Su(s) producto(s) van en camino, llegaran en un aproximado de 15 a 25 mints. *" << endl;
        cout <<"*El Delivey Cobrara Un Monto De 5Bs Al Entregar El Encargo.                   *" <<endl;
        cout <<"*******************************************************************************" << endl;
        return 0;
    }
    break;
    default:
    	Sleep(500);
        Beep(500,300);
        cout << "    Saliste con exito " << endl;
        cout << "    gracias por visitarnos." << endl;
        return 0;
        break;
    }
	system ("PAUSE");
    return 0;
}
