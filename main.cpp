
//
//  main.cpp
//  Tashal
//
//  Created by Davit Tavadze on 2019-01-17.
//  Copyright © 2019 DADANA. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;


void quantity();void UnitOne();void UnitTwo();void UnitThree();void Celsius();void Farenheit();void Kelvin();

int main()
{
    quantity();
    return 0;
}
//quantity
void quantity()
{
    int quantity = 0;
    cout<<"Choose a quantity: "
    <<endl<<endl<<"1.Length"<<endl<<"2.Mass"<<endl<<"3.Tempreture"
    <<endl<<endl<<"------------------------------------------------------------------"<<endl<<"Quantity: ";
    cin>>quantity;
    if(quantity == 1)
    {
        return UnitOne();
    }
    if(quantity == 2)
    {
        return UnitTwo();
    }
    if(quantity == 3)
    {
        return UnitThree();
    }
}
//choosing an unit
void UnitOne()
{
    int Lengthunit = 0;
    cout<<endl<<"Choose an unit: "<<endl<<"1.Nanometer\n2.Micrometre\n3.Milimetre"
    <<endl<<"4.Centimetre\n5.Decimetre\n6.Metre\n7.Decametre\n8.Hectometre\n9.Kilometre\n10.Mil\n11.Inch\n12.Foot\n13.Yard\n14.Mile"<<endl<<endl<<"Unit: ";
    cin>>Lengthunit;
}
void UnitTwo()
{
    int MassUnit = 0;
    cout<<endl<<"Choose an unit: "
    <<endl<<"1.Nanogram\n2.Microgram\n3.Milligram\n4.Centigram\n5.Decigram\n6.Gram\n7.Decagram\n8.Hectogram\n9.Kilogram\n10.Ton\n11.Ounce\n12.Pound"<<endl<<endl<<"Unit: ";
    cin>>MassUnit;
    
}
void UnitThree()
{
    int TempUnit = 0;
    cout<<endl<<"Choose an unit\n1.Celsius\n2.Farenheit\n3.Kelvin\n\n"<<"Unit: ";
    cin>>TempUnit;
    if(TempUnit == 1)
    {
        return Celsius();
    }
    if(TempUnit == 2)
    {
        return Farenheit();
    }
    if(TempUnit == 3)
    {
        return Kelvin();
    }
}
//tempclass
void Celsius()
{
    double c = 0;
    cout<<"Ammount: ";
    cin>>c;
    cout<<endl<<c<<"Celsius = "<<((c* 1.8)+32)  << " Farenheit."<<endl<<c<<" Celsius = "<< (c + 273.15)  << " Kelvin."
    << endl << endl;
}
void Farenheit()
{
    double f = 0;
    cout<<"Ammount: ";
    cin>>f;
    cout<<endl<<f<<"Farenheit = "<<((f - 32) / 1.8 )<<"Celsius."<<endl<<f<<"Farenheit = "<<(((f - 32)/1.8)+273.15)
    <<"Kelvin";
}
void Kelvin()
{
    double k = 0;
    cout<<"Ammount: ";
    cin>>k;
    cout<<endl<<k<<"Kelvin = "<<( k - 273.15 )<<" Celsius"<<endl<<k<<"Kelvin = "<<((k - 273.15) * 1.8 + 32)<<"Farenheit";
}

