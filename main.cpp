//
//  main.cpp
//  Tashal
//
//  Created by Davit Tavadze on 2019-01-17.
//  Copyright © 2019 DADANA. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int quantity = 0;
    int unit = 0;
    double length = 0;
    
    
    
    cout<<"Choose a quantity: "
    <<endl<<"1.Length"<<endl<<"2.Mass"<<endl<<"3.Tempreture"
    <<endl<<"Quantity: ";cin>>quantity;
    cin>>quantity;
    
    if(quantity == 1)
    {
        cout<<"Choose an unit: "<<endl<<"1.Nanometer"
        <<endl<<"2.Micrometre"
        <<endl<<"3.Milimetre"
        <<endl<<"4.Centimetre"
        <<endl<<"5.Decimetre"
        <<endl<<"6.Metre"
        <<endl<<"7.Decametre"
        <<endl<<"8.Hectometre"
        <<endl<<"9.Kilometre"
        <<endl<<"10.Mil"
        <<endl<<"11.Inch"
        <<endl<<"12.Foot"
        <<endl<<"13.Yard"
        <<endl<<"14.Mile"
        <<endl<<"Unit: ";
        cin>>unit;
        
        if(unit == 1){
            cout<<"Ammount: "<<endl;
            cin>>length;
            
            cout<<length<<" Nanometre = "<<length / 1000<<"Micrometre"
            <<endl<<length<<" Nanometre = "<<length / 1000000<<"Milimetre"
            <<endl<<length<<" Nanometre = "<<length / 10000000<<"Centimetre"
            <<endl<<length<<" Nanometre = "<<length / 100000000<<"Decimetre"
            <<endl<<length<<" Nanometre = "<<length / 1000000000<<"Metre"
            <<endl<<length<<" Nanometre = "<<length / 10000000000<<"Decametre"
            <<endl<<length<<" Nanometre = "<<length / 100000000000<<"Hectometre"
            <<endl<<length<<" Nanometre = "<<length / 1000000000000<<"Kilometre"
            <<endl<<length<<" Nanometre = "<<length / 10000000000000<<"Mil"
            <<endl<<length<<" Nanometre = "<<length / 2.54*100000000<<"inch"
            <<endl<<length<<" Nanometre = "<<length / 3.048*1000000000<<"Foot"
            <<endl<<length<<" Nanometre = "<<length / 9.144*1000000000<<"Yard"
            <<endl<<length<<" Nanometre = "<<length / 1.609*1000000000000<<"Mile";
            
            
            
        }
        
        
        
        
        
        
        
    }
    return 0;
}
