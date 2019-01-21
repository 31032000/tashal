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


void quantity();

void UnitOne();
void Nanometre();void Micrometre();void Millimetre();void Centimetre();void Decimetre();void Metre();void Decametre();void Hectometre();
void Kilometre();void Mil();void Inch();void Foot();void Yard();void Mile();

void UnitTwo();void Nanogram();void Microgram();void Milligram(); void Centigram();void Decigram();void Gram();void Decagram();void Hectogram();void Kilogram();

void UnitThree();void Celsius();void Farenheit();void Kelvin();



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
    cout<<endl<<"Choose an unit: "<<endl<<"1.Nanometre\n2.Micrometre\n3.Milimetre"
    <<endl<<"4.Centimetre\n5.Decimetre\n6.Metre\n7.Decametre\n8.Hectometre\n9.Kilometre\n10.Mil\n11.Inch\n12.Foot\n13.Yard\n14.Mile"<<endl<<endl<<"Unit: ";
    cin>>Lengthunit;
    if(Lengthunit == 1)
    {
        return Nanometre();
    }
    if(Lengthunit == 2)
    {
        return Micrometre();
    }
    if(Lengthunit == 3)
    {
        return Millimetre();
    }
    if(Lengthunit == 4)
    {
        return Centimetre();
    }
    if(Lengthunit == 5)
    {
        return Decimetre();
    }
    if(Lengthunit == 6)
    {
        return Metre();
    }
    if(Lengthunit == 7)
    {
        return Decametre();
    }
    if(Lengthunit == 8)
    {
        return Hectometre();
    }
    if(Lengthunit == 9)
    {
        return Kilometre();
    }
    if(Lengthunit == 10)
    {
        return Mil();
    }
    if(Lengthunit == 11)
    {
        return Inch();
    }
    if(Lengthunit == 12)
    {
        return Foot();
    }
    if(Lengthunit == 13)
    {
        return Yard();
    }
    if(Lengthunit == 14)
    {
        return Mile();
    }
}
//lengthclass
void Nanometre()
{
    double nm;
    cout<<"Ammount: ";
    cin>>nm;
    cout<<endl<<nm<<" Nanometre = "<<(nm / 1000)<<" Micometre";
    cout<<endl<<nm<<" Nanometre = "<<(nm / 1000000)<<" Millimetre";
    cout<<endl<<nm<<" Nanometre = "<<(nm / 10000000)<<" Centimetre";
    cout<<endl<<nm<<" Nanometre = "<<(nm / 100000000)<<" Decimetre";
    cout<<endl<<nm<<" Nanometre = "<<(nm / 1000000000)<<" Metre";
    cout<<endl<<nm<<" Nanometre = "<<(nm / 10000000000)<<" Decametre";
    cout<<endl<<nm<<" Nanometre = "<<(nm / 100000000000)<<" Hectometre";
    cout<<endl<<nm<<" Nanometre = "<<(nm / 1000000000000)<<" Kilometre";
    cout<<endl<<nm<<" Nanometre = "<<(nm / 10000000000000)<<" Mil";
    cout<<endl<<nm<<" Nanometre = "<<(nm / (2.54*10000000))<<" Inch";
    cout<<endl<<nm<<" Nanometre = "<<(nm / (3.048*100000000))<<" Foot";
    cout<<endl<<nm<<" Nanometre = "<<(nm / (9.144*100000000))<<" Yard";
    cout<<endl<<nm<<" Nanometre = "<<(nm / (1.609*1000000000000))<<" Mile";
    cout<<endl<<endl;
}
void Micrometre()
{
    double um;
    cout<<"Ammount: ";
    cin>> um;
    cout<<endl<<um<<" Micrometre = "<<(um * 1000 )<<" Nanometre";
    cout<<endl<<um<<" Micrometre = "<<(um / 1000)<<" Millimetre";
    cout<<endl<<um<<" Micrometre = "<<(um / 10000)<<" Centimetre";
    cout<<endl<<um<<" Micrometre = "<<(um / 100000)<<" Decimetre";
    cout<<endl<<um<<" Micrometre = "<<(um / 1000000)<<" Metre";
    cout<<endl<<um<<" Micrometre = "<<(um / 10000000)<<" Decametre";
    cout<<endl<<um<<" Micrometre = "<<(um / 100000000)<<" Hektometre";
    cout<<endl<<um<<" Micrometre = "<<(um / 1000000000)<<" Kilometre";
    cout<<endl<<um<<" Micrometre = "<<(um / 10000000000)<<" Mil";
    cout<<endl<<um<<" Micrometre = "<<(um / (2.54*10000))<<" Inch";
    cout<<endl<<um<<" Micrometre = "<<(um / (3.048*100000))<<" Foot";
    cout<<endl<<um<<" Micrometre = "<<(um / (9.144*100000))<<" Yard";
    cout<<endl<<um<<" Micrometre = "<<(um / (1.609*1000000000))<<" Mile";
    cout<<endl<<endl;
    
}
void Millimetre()
{
    double mm;
    cout<<"Ammount: ";
    cin>>mm;
    cout<<endl<<mm<< " Millimetre = "<<(mm * 1000000)<<"Nanometre";
    cout<<endl<<mm <<" Millimetre = "<<(mm * 1000)<<" Micrometre";
    cout<<endl<<mm <<" Millimetre = "<<(mm / 10)<<" Centimetre";
    cout<<endl<<mm<<" Millimetre = "<<(mm / 100)<<" Decimetre";
    cout<<endl<<mm<<" Millimetre = "<<(mm / 1000)<<" Metre";
    cout<<endl<<mm<<" Millimetre = "<<(mm / 10000)<<" Decametre";
    cout<<endl<<mm<<" Millimetre = "<<(mm / 100000)<<" Hektometre";
    cout<<endl<<mm<<" Millimetre = "<<(mm / 1000000)<<" Kilometre";
    cout<<endl<<mm<<" Millimetre = "<<(mm / 10000000)<<" Mil";
    cout<<endl<<mm<<" Millimetre = "<<(mm / (2.54*10))<<" Inch";
    cout<<endl<<mm<<" Millimetre = "<<(mm / (3.048 * 100))<<" Foot";
    cout<<endl<<mm<<" Millimetre = "<<(mm / (9.144 * 1000))<<" Yard";
    cout<<endl<<mm<<" Millimetre = "<<(mm / (1.609 * 1000000))<<" Mile";
    cout<<endl<<endl;
}
void Centimetre()
{
    double cm;
    cout<<"Ammount: ";
    cin>>cm;
    cout<<endl<<cm<<" Centimetre = "<<(cm * 10000000)<<" Nanometre";
    cout<<endl<<cm<<" Centimetre = "<<(cm * 10000)<<" Micrometre";
    cout<<endl<<cm<<" Centimetre = "<<(cm * 10)<<" Millimetre";
    cout<<endl<<cm<<" Centimetre = "<<(cm / 10)<<" Decimetre";
    cout<<endl<<cm<<" Centimetre = "<<(cm / 100)<<" Metre";
    cout<<endl<<cm<<" Centimetre = "<<(cm / 1000)<<" Decametre";
    cout<<endl<<cm<<" Centimetre = "<<(cm / 10000)<<" Hektometre";
    cout<<endl<<cm<<" Centimetre = "<<(cm / 100000)<<" Kilometre";
    cout<<endl<<cm<<" Centimetre = "<<(cm / 1000000)<<" Mil";
    cout<<endl<<cm<<" Centimetre = "<<(cm / 2.45)<<" Inch";
    cout<<endl<<cm<<" Centimetre = "<<(cm / 30.58)<<" Foot";
    cout<<endl<<cm<<" Centimetre = "<<(cm / 91.44)<<" Yard";
    cout<<endl<<cm<<" Centimetre = "<<(cm / (1.609 * 100000))<<" Mile";
    cout<<endl<<endl;
}
void Decimetre()
{
    double dm;
    cout<<"Ammount: ";
    cin>>dm;
    cout<<endl<<dm<<" Decimetre = "<<(dm * 100000000)<<" Nanometre";
    cout<<endl<<dm<<" Decimetre = "<<(dm * 100000)<<" Micrometre";
    cout<<endl<<dm<<" Decimetre = "<<(dm * 100)<<" Millimetre";
    cout<<endl<<dm<<" Decimetre = "<<(dm * 10)<<" Centimetre";
    cout<<endl<<dm<<" Decimetre = "<<(dm / 10)<<" Metre";
    cout<<endl<<dm<<" Decimetre = "<<(dm / 100)<<" Decametre";
    cout<<endl<<dm<<" Decimetre = "<<(dm / 1000)<<" Hektometre";
    cout<<endl<<dm<<" Decimetre = "<<(dm / 10000)<<" Kilometre";
    cout<<endl<<dm<<" Decimetre = "<<(dm / 100000)<<" Mil";
    cout<<endl<<dm<<" Decimetre = "<<(dm * 3.937)<<" Inch";
    cout<<endl<<dm<<" Decimetre = "<<(dm / 3.058)<<" Foot";
    cout<<endl<<dm<<" Decimetre = "<<(dm / 9.144)<<" Yard";
    cout<<endl<<dm<<" Decimetre = "<<(dm / (1.609 * 10000))<<" Mile";
    cout<<endl<<endl;
}
void Metre()
{
    double m;
    cout<<"Ammount: ";
    cin>>m;
    cout<<endl<<m<<" Metre = "<<(m * 1000000000)<<" Nanometre";
    cout<<endl<<m<<" Metre = "<<(m * 1000000)<<" Micrometre";
    cout<<endl<<m<<" Metre = "<<(m * 1000)<<" Millimetre";
    cout<<endl<<m<<" Metre = "<<(m * 100)<<" Centimetre";
    cout<<endl<<m<<" Metre = "<<(m * 10)<<" Decimetre";
    cout<<endl<<m<<" Metre = "<<(m / 10)<<" Decametre";
    cout<<endl<<m<<" Metre = "<<(m / 100)<<" Hectometre";
    cout<<endl<<m<<" Metre = "<<(m / 1000)<<" Kilometre";
    cout<<endl<<m<<" Metre = "<<(m / 10000)<<" Mil";
    cout<<endl<<m<<" Metre = "<<(m * 39.37)<<" Inch";
    cout<<endl<<m<<" Metre = "<<(m * 3.281)<<" Foot";
    cout<<endl<<m<<" Metre = "<<(m * 1.094)<<" Yard";
    cout<<endl<<m<<" Metre = "<<(m / 1609)<<" Mile";
    cout<<endl<<endl;
}
void Decametre()
{
    double dam;
    cout<<"Ammount: ";
    cin>>dam;
    cout<<endl<<dam<<" Decametre = "<<(dam * 10000000000)<<" Nanometre";
    cout<<endl<<dam<<" Decametre = "<<(dam * 10000000)<<" Micrometre";
    cout<<endl<<dam<<" Decametre = "<<(dam * 10000)<<" Millimetre";
    cout<<endl<<dam<<" Decametre = "<<(dam * 1000)<<" Centimetre";
    cout<<endl<<dam<<" Decametre = "<<(dam * 100)<<" Decimetre";
    cout<<endl<<dam<<" Decametre = "<<(dam * 10)<<" Metre";
    cout<<endl<<dam<<" Decametre = "<<(dam / 10)<<" Hectometre";
    cout<<endl<<dam<<" Decametre = "<<(dam / 100)<<" Kilometre";
    cout<<endl<<dam<<" Decametre = "<<(dam / 1000)<<" Mil";
    cout<<endl<<dam<<" Decametre = "<<(dam * 393.7)<<" Inch";
    cout<<endl<<dam<<" Decametre = "<<(dam * 32.81)<<" Foot";
    cout<<endl<<dam<<" Decametre = "<<(dam * 10.94)<<" Yard";
    cout<<endl<<dam<<" Decametre = "<<(dam / 160.9)<<" Mile";
    cout<<endl<<endl;
}
void Hectometre()
{
    double hm;
    cout<<"Ammount: ";
    cin>>hm;
    cout<<endl<<hm<<" Hectometre = "<<(hm * 100000000000)<<" Nanometre";
    cout<<endl<<hm<<" Hectometre = "<<(hm * 100000000)<<" Micrometre";
    cout<<endl<<hm<<" Hectometre = "<<(hm * 100000)<<" Millimetre";
    cout<<endl<<hm<<" Hectometre = "<<(hm * 10000)<<" Centimetre";
    cout<<endl<<hm<<" Hectometre = "<<(hm * 1000)<<" Decimetre";
    cout<<endl<<hm<<" Hectometre = "<<(hm * 100)<<" Metre";
    cout<<endl<<hm<<" Hectometre = "<<(hm * 10)<<" Decametre";
    cout<<endl<<hm<<" Hectometre = "<<(hm / 10)<<" Kilometre";
    cout<<endl<<hm<<" Hectometre = "<<(hm / 100)<<" Mil";
    cout<<endl<<hm<<" Hectometre = "<<(hm * 3937)<<" Inch";
    cout<<endl<<hm<<" Hectometre = "<<(hm * 328.1)<<" Foot";
    cout<<endl<<hm<<" Hectometre = "<<(hm * 109.4)<<" Yard";
    cout<<endl<<hm<<" Hectometre = "<<(hm / 16.09)<<" Mile";
    cout<<endl<<endl;
    
}
void Kilometre()
{
    double km;
    cout<<"Ammount: ";
    cin>>km;
    cout<<endl<<km<<" Kilometre = "<<(km * 1000000000000)<<" Nanometre";
    cout<<endl<<km<<" Kilometre = "<<(km * 1000000000)<<" Micrometre";
    cout<<endl<<km<<" Kilometre = "<<(km * 1000000)<<" Millimetre";
    cout<<endl<<km<<" Kilometre = "<<(km * 100000)<<" Centimetre";
    cout<<endl<<km<<" Kilometre = "<<(km * 10000)<<" Decimetre";
    cout<<endl<<km<<" Kilometre = "<<(km * 1000)<<" Metre";
    cout<<endl<<km<<" Kilometre = "<<(km * 100)<<" Decametre";
    cout<<endl<<km<<" Kilometre = "<<(km * 10)<<" Hectometre";
    cout<<endl<<km<<" Kilometre = "<<(km / 10)<<" Mil";
    cout<<endl<<km<<" Kilometre = "<<(km * 39370)<<" Inch";
    cout<<endl<<km<<" Kilometre = "<<(km * 3281)<<" Foot";
    cout<<endl<<km<<" Kilometre = "<<(km * 1093.61)<<" Yard";
    cout<<endl<<km<<" Kilometre = "<<(km / 1.609)<<" Mile";
}
void Mil()
{
    double mil;
    cout<<"Ammount: ";
    cin>>mil;
    cout<<endl<<mil<<" Mil = "<<(mil * 10000000000000)<<" Nanometre";
    cout<<endl<<mil<<" Mil = "<<(mil * 10000000000)<<" Micrometre";
    cout<<endl<<mil<<" Mil = "<<(mil * 10000000)<<" Millimetre";
    cout<<endl<<mil<<" Mil = "<<(mil * 1000000)<<" Centimetre";
    cout<<endl<<mil<<" Mil = "<<(mil * 100000)<<" Decimetre";
    cout<<endl<<mil<<" Mil = "<<(mil * 10000)<<" Metre";
    cout<<endl<<mil<<" Mil = "<<(mil * 1000)<<" Decametre";
    cout<<endl<<mil<<" Mil = "<<(mil * 100)<<" Hectometre";
    cout<<endl<<mil<<" Mil = "<<(mil * 10)<<" Kilometre";
    cout<<endl<<mil<<" Mil = "<<(mil * 393701)<<" Inch";
    cout<<endl<<mil<<" Mil = "<<(mil * 32808.42)<<" Foot";
    cout<<endl<<mil<<" Mil = "<<(mil * 10936.1)<<" Yard";
    cout<<endl<<mil<<" Mil = "<<(mil / 0.1609)<<" Mile";
}
void Inch()
{
    double in;
    cout<<"Ammount: ";
    cin>>in;
    cout<<endl<<in<<" Inch = "<<(in * (2.54*10000000))<<" Nanometre";
    cout<<endl<<in<<" Inch = "<<(in * (2.54*10000))<<" Micrometre";
    cout<<endl<<in<<" Inch = "<<(in * (2.54 * 10))<<" Millimetre";
    cout<<endl<<in<<" Inch = "<<(in * 2.54)<<" Centimetre";
    cout<<endl<<in<<" Inch = "<<(in / 3.937)<<" Decimetre";
    cout<<endl<<in<<" Inch = "<<(in / 39.37)<<" Metre";
    cout<<endl<<in<<" Inch = "<<(in / 393.7)<<" Decametre";
    cout<<endl<<in<<" Inch = "<<(in / 3937)<<" Hectometre";
    cout<<endl<<in<<" Inch = "<<(in / 39370)<<" Kilometre";
    cout<<endl<<in<<" Inch = "<<(in / 393700)<<" Mil";
    cout<<endl<<in<<" Inch = "<<(in / 12)<<" Foot";
    cout<<endl<<in<<" Inch = "<<(in / 36)<<" Yard";
    cout<<endl<<in<<" Inch = "<<(in / 63360)<<" Mile";
}
void Foot()
{
    double ft;
    cout<<"Ammount: ";
    cin>>ft;
    cout<<endl<<ft<<" Foot = "<<(ft *(3.048 * 100000000))<<" Nanometre";
    cout<<endl<<ft<<" Foot = "<<(ft *(3.048 * 100000))<<" Micrometre";
    cout<<endl<<ft<<" Foot = "<<(ft *(3.048 * 100))<<" Millimetre";
    cout<<endl<<ft<<" Foot = "<<(ft *(3.048 * 10))<<" Centimetre";
    cout<<endl<<ft<<" Foot = "<<(ft * 3.048)<<" Decimetre";
    cout<<endl<<ft<<" Foot = "<<(ft / 3.281)<<" Metre";
    cout<<endl<<ft<<" Foot = "<<(ft / 32.81)<<" Decametre";
    cout<<endl<<ft<<" Foot = "<<(ft / 328.1)<<" Hectometre";
    cout<<endl<<ft<<" Foot = "<<(ft / 3281)<<" Kilometre";
    cout<<endl<<ft<<" Foot = "<<(ft / 32810)<<" Mil";
    cout<<endl<<ft<<" Foot = "<<(ft * 12)<<" Inch";
    cout<<endl<<ft<<" Foot = "<<(ft / 3)<<" Yard";
    cout<<endl<<ft<<" Foot = "<<(ft / 5280)<<" Mile";
    
}
void Yard()
{
    double yd;
    cout<<"Ammount: ";
    cin >> yd;
    cout<<endl<<yd<<" Yard = "<<(yd * (9.144 * 100000000))<<" Nanometre";
    cout<<endl<<yd<<" Yard = "<<(yd * (9.144 * 100000))<<" Micrometre";
    cout<<endl<<yd<<" Yard = "<<(yd * (9.144 * 100))<<" Millimetre";
    cout<<endl<<yd<<" Yard = "<<(yd * (9.144 * 10))<<" Centimetre";
    cout<<endl<<yd<<" Yard = "<<(yd * 9.144)<<" Decimetre";
    cout<<endl<<yd<<" Yard = "<<(yd / 1.094)<<" Metre";
    cout<<endl<<yd<<" Yard = "<<(yd / 10.94)<<" Decametre";
    cout<<endl<<yd<<" Yard = "<<(yd / 109.4)<<" Hectometre";
    cout<<endl<<yd<<" Yard = "<<(yd / 1094)<<" Kilometre";
    cout<<endl<<yd<<" Yard = "<<(yd / 10940)<<" Mil";
    cout<<endl<<yd<<" Yard = "<<(yd * 36)<<" Inch";
    cout<<endl<<yd<<" Yard = "<<(yd * 3)<<" Foot";
    cout<<endl<<yd<<" Yard = "<<(yd * 1760)<<" Mile";
    
}
void Mile()
{
    double mi;
    cout<<"Ammount: ";
    cin >>mi;
    cout<<endl<<mi<<" Mile = "<<(mi * (1.609 * 1000000000000))<<" Nanometre";
    cout<<endl<<mi<<" Mile = "<<(mi * (1.609 * 1000000000))<<" Micrometre";
    cout<<endl<<mi<<" Mile = "<<(mi * (1.609 * 1000000))<<" Millimetre";
    cout<<endl<<mi<<" Mile = "<<(mi * (1.609 * 100000))<<" Centimetre";
    cout<<endl<<mi<<" Mile = "<<(mi * (1.609 * 10000))<<" Decimetre";
    cout<<endl<<mi<<" Mile = "<<(mi * 1609)<<" Metre";
    cout<<endl<<mi<<" Mile = "<<(mi * 160.9)<<" Decametre";
    cout<<endl<<mi<<" Mile = "<<(mi * 16.09)<<" Hectometre";
    cout<<endl<<mi<<" Mile = "<<(mi * 1.609)<<" Kilometre";
    cout<<endl<<mi<<" Mile = "<<(mi * 0.1609)<<" Mil";
    cout<<endl<<mi<<" Mile = "<<(mi * 63360)<<" Inch";
    cout<<endl<<mi<<" Mile = "<<(mi * 5280)<<" Foot";
    cout<<endl<<mi<<" Mile = "<<(mi * 1760)<<" Yard";
}

//Mass

void UnitTwo()
{
    int MassUnit = 0;
    cout<<endl<<"Choose an unit: "
    <<endl<<"1.Nanogram\n2.Microgram\n3.Milligram\n4.Centigram\n5.Decigram\n6.Gram\n7.Decagram\n8.Hectogram\n9.Kilogram\n10.Ton\n11.Ounce\n12.Pound"<<endl<<endl<<"Unit: ";
    cin>>MassUnit;
    if(MassUnit == 1)
    {
        return Nanogram();
    }
    if(MassUnit == 2)
    {
        return Microgram();
    }
    if(MassUnit == 3)
    {
        return Milligram();
    }
    if(MassUnit == 4)
    {
        return Centigram();
    }
    if(MassUnit == 5)
    {
        return Decigram();
    }
    if(MassUnit == 6)
    {
        return Gram();
    }
    if(MassUnit == 7)
    {
        return Decagram();
    }
    if(MassUnit == 8)
    {
        return Hectogram();
    }
    if(MassUnit == 9)
    {
        return Kilogram();
    }
    if(MassUnit == 10)
    {
        
    }
    if(MassUnit == 11)
    {
        
    }
    if(MassUnit == 12)
    {
        
    }
    
}
//Massclass
void Nanogram()
{
    double ng;
    cout<<"Ammount: ";
    cin>>ng;
    cout<<endl<<ng<<" Nanogram = "<<(ng / 1000)<<" Microgram";
    cout<<endl<<ng<<" Nanogram = "<<(ng / 1000000)<<" Milligram";
    cout<<endl<<ng<<" Nanogram = "<<(ng / 10000000)<<" Centigram";
    cout<<endl<<ng<<" Nanogram = "<<(ng / 100000000)<<" Decigram";
    cout<<endl<<ng<<" Nanogram = "<<(ng / 1000000000)<<" Gram";
    cout<<endl<<ng<<" Nanogram = "<<(ng / 10000000000)<<" Decagram";
    cout<<endl<<ng<<" Nanogram = "<<(ng / 100000000000)<<" Hectogram";
    cout<<endl<<ng<<" Nanogram = "<<(ng / 1000000000000)<<" Kilogram";
    cout<<endl<<ng<<" Nanogram = "<<(ng / 1000000000000000)<<" ton";
    
    cout<<endl<<endl;
}
void Microgram()
{
    double ug;
    cout<<"Ammount: ";
    cin>> ug;
    cout<<endl<<ug<<" Microgram = "<<(ug * 1000 )<<" Nanogram";
    cout<<endl<<ug<<" Microgram = "<<(ug / 1000)<<" Milligram";
    cout<<endl<<ug<<" Micrometre = "<<(ug / 10000)<<" Centigram";
    cout<<endl<<ug<<" Micrometre = "<<(ug / 100000)<<" Decigram";
    cout<<endl<<ug<<" Micrometre = "<<(ug / 1000000)<<" Gram";
    cout<<endl<<ug<<" Micrometre = "<<(ug / 10000000)<<" Decagram";
    cout<<endl<<ug<<" Micrometre = "<<(ug / 100000000)<<" Hectogram";
    cout<<endl<<ug<<" Micrometre = "<<(ug / 1000000000)<<" Kilogram";
    cout<<endl<<ug<<" Micrometre = "<<(ug / 1000000000000)<<" Ton";
    cout<<endl<<endl;
    
}
void Milligram()
{
    double mg;
    cout<<"Ammount: ";
    cin>>mg;
    cout<<endl<<mg<<" Milligram = "<<(mg * 1000000)<<"Nanogram";
    cout<<endl<<mg<<" Milligram = "<<(mg * 1000)<<" Microgram";
    cout<<endl<<mg<<" Milligram = "<<(mg / 10)<<" Centigram";
    cout<<endl<<mg<<" Milligram = "<<(mg / 100)<<" Decigram";
    cout<<endl<<mg<<" Milligram = "<<(mg / 1000)<<" Gram";
    cout<<endl<<mg<<" Milligram = "<<(mg / 10000)<<" Decagram";
    cout<<endl<<mg<<" Milligram = "<<(mg / 100000)<<" Hectogram";
    cout<<endl<<mg<<" Milligram = "<<(mg / 1000000)<<" Kilogram";
    cout<<endl<<mg<<" Milligram = "<<(mg / 1000000000)<<" Mil";
    
    cout<<endl<<endl;
}
void Centigram()
{
    double cg;
    cout<<"Ammount: ";
    cin>>cg;
    cout<<endl<<cg<<" Centigram = "<<(cg * 10000000)<<" Nanogram";
    cout<<endl<<cg<<" Centigram = "<<(cg * 10000)<<" Microgram";
    cout<<endl<<cg<<" Centigram = "<<(cg * 10)<<" Milligram";
    cout<<endl<<cg<<" Centigram = "<<(cg / 10)<<" Decigram";
    cout<<endl<<cg<<" Centigram = "<<(cg / 100)<<" Gram";
    cout<<endl<<cg<<" Centigram = "<<(cg / 1000)<<" Decagram";
    cout<<endl<<cg<<" Centigram = "<<(cg / 10000)<<" Hectogram";
    cout<<endl<<cg<<" Centigram = "<<(cg / 100000)<<" Kilogram";
    cout<<endl<<cg<<" Centigram = "<<(cg / 100000000)<<" Ton";
    cout<<endl<<endl;
}
void Decigram()
{
    double dg;
    cout<<"Ammount: ";
    cin>>dg;
    cout<<endl<<dg<<" Decigram = "<<(dg * 100000000)<<" Nanogram";
    cout<<endl<<dg<<" Decigram = "<<(dg * 100000)<<" Microgram";
    cout<<endl<<dg<<" Decigram = "<<(dg * 100)<<" Milligram";
    cout<<endl<<dg<<" Decigram = "<<(dg * 10)<<" Centigram";
    cout<<endl<<dg<<" Decigram = "<<(dg / 10)<<" Gram";
    cout<<endl<<dg<<" Decigram = "<<(dg / 100)<<" Decagram";
    cout<<endl<<dg<<" Decigram = "<<(dg / 1000)<<" Hectogram";
    cout<<endl<<dg<<" Decigram = "<<(dg / 10000)<<" Kilogram";
    cout<<endl<<dg<<" Decigram = "<<(dg / 10000000)<<" Ton";
    cout<<endl<<endl;
}
void Gram()
{
    double g;
    cout<<"Ammount: ";
    cin>>g;
    cout<<endl<<g<<" Gram = "<<(g * 1000000000)<<" Nanogram";
    cout<<endl<<g<<" Gram = "<<(g * 1000000)<<" Microgram";
    cout<<endl<<g<<" Gram = "<<(g * 1000)<<" Milligram";
    cout<<endl<<g<<" Gram = "<<(g * 100)<<" Centigram";
    cout<<endl<<g<<" Gram = "<<(g * 10)<<" Decigram";
    cout<<endl<<g<<" Gram = "<<(g / 10)<<" Decagram";
    cout<<endl<<g<<" Gram = "<<(g / 100)<<" Hectogram";
    cout<<endl<<g<<" Gram = "<<(g / 1000)<<" Kilogram";
    cout<<endl<<g<<" Gram = "<<(g / 1000000)<<" Ton";
    cout<<endl<<endl;
}
void Decagram()
{
    double dag;
    cout<<"Ammount: ";
    cin>>dag;
    cout<<endl<<dag<<" Decagram = "<<(dag * 10000000000)<<" Nanogram";
    cout<<endl<<dag<<" Decagram = "<<(dag * 10000000)<<" Microgram";
    cout<<endl<<dag<<" Decagram = "<<(dag * 10000)<<" Milligram";
    cout<<endl<<dag<<" Decagram = "<<(dag * 1000)<<" Centigram";
    cout<<endl<<dag<<" Decagram = "<<(dag * 100)<<" Decigram";
    cout<<endl<<dag<<" Decagram = "<<(dag * 10)<<" Gram";
    cout<<endl<<dag<<" Decagram = "<<(dag / 10)<<" Hectogram";
    cout<<endl<<dag<<" Decagram = "<<(dag / 100)<<" Kilogram";
    cout<<endl<<dag<<" Decagram = "<<(dag   / 100000)<<" Ton";
    cout<<endl<<endl;
}
void Hectogram()
{
    double hg;
    cout<<"Ammount: ";
    cin>>hg;
    cout<<endl<<hg<<" Hectogram = "<<(hg * 100000000000)<<" Nanogram";
    cout<<endl<<hg<<" Hectogram = "<<(hg * 100000000)<<" Microgram";
    cout<<endl<<hg<<" Hectogram = "<<(hg * 100000)<<" Milligram";
    cout<<endl<<hg<<" Hectogram = "<<(hg * 10000)<<" Centigram";
    cout<<endl<<hg<<" Hectogram = "<<(hg * 1000)<<" Decigram";
    cout<<endl<<hg<<" Hectogram = "<<(hg * 100)<<" Gram";
    cout<<endl<<hg<<" Hectogram = "<<(hg * 10)<<" Decagram";
    cout<<endl<<hg<<" Hectogram = "<<(hg / 10)<<" Kilogram";
    cout<<endl<<hg<<" Hectogram = "<<(hg / 10000)<<" Ton";
    cout<<endl<<endl;
    
}
void Kilogram()
{
    double kg;
    cout<<"Ammount: ";
    cin>>kg;
    cout<<endl<<kg<<" Kilogram = "<<(kg * 1000000000000)<<" Nanogram";
    cout<<endl<<kg<<" Kilogram = "<<(kg * 1000000000)<<" Microgram";
    cout<<endl<<kg<<" Kilogram = "<<(kg * 1000000)<<" Milligram";
    cout<<endl<<kg<<" Kilogram = "<<(kg * 100000)<<" Centigram";
    cout<<endl<<kg<<" Kilogram = "<<(kg * 10000)<<" Decigram";
    cout<<endl<<kg<<" Kilogram = "<<(kg * 1000)<<" Gram";
    cout<<endl<<kg<<" Kilogram = "<<(kg * 100)<<" Decagram";
    cout<<endl<<kg<<" Kilogram = "<<(kg * 10)<<" Hectogram";
    cout<<endl<<kg<<" Kilogram = "<<(kg / 1000)<<" Ton";
}

//temp
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




