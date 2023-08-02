#include<iostream>
#include<cassert>
#include<Windows.h>
#include<string.h>
#include<string.h>
#include<conio.h>
using namespace std;
int global_id = 0;
typedef unsigned short int ush;
#include"Engine_class.h"
#include"Transporter.h"
#include"Car_class.h"
#include"Ship_class.h"
#include"Airplane_class.h"
#include"Stack.h"
#include"Vehicle_Depo_class.h"
void main()
{
	Vehicle_Depo ibrahims_depo("Ibrahim AirWays");
	ibrahims_depo.cars.push(Car("Mercedes", "CLS63", Engine("8437827", "AMG", 5.5), false));
	ibrahims_depo.cars.push(Car("BMW", "F10", Engine("321214", "M model", 4.4), false));
	ibrahims_depo.ships.push(Ship("MSC", "Mediter", Engine("6732617", "MSC", 120), false));
	ibrahims_depo.ships.push(Ship("SMC", "Okinator", Engine("123132142", "OKT", 130), false));
	ibrahims_depo.airplanes.push(Airplane("Boeingo", "Boen", Engine("4783HSJA", "Boeing", 57), 3, 150));
	ibrahims_depo.airplanes.push(Airplane("WERA", "Z123", Engine("DK4832", "Boeing", 60), 3, 200));
	cout << ibrahims_depo;
}