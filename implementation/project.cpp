#include<iostream>
#include<fstream>
using namespace std;
class realestate
{
int choice,selection,acres,bhk,price,area,choose,turn;
public:
void ip();
void file();
};
	void realestate::ip()
   {
		cout<<"Real Estate Program"<<endl;
		cout<<"1.search listing"<<endl;
		cout<<"2.random"<<endl;
        cout<<"Enter Selection:"<<endl;
        cin>>choice;
        switch(choice)
      { 
	      case 1:
			if(choice=1)
		{
			cout<<"1.search for agriculture and or 2 for housing"<<endl;
			cout<<"enter selection:"<<endl;
			cin>>selection;
			switch(selection)
		{
		 case 1:
			if(selection==1)
			{ 
				cout<<"please select 1 to 2 acres for agriculture"<<endl;
				cout<<"enter acres:"<<endl;
				cin>>acres;
				switch(acres)
				{
				case 1:	
				  if(acres=1)	
					{
					cout<<"please select price range between 2.4crs to 90lakhs "<<endl;
					cin>>price;
					if(price>=15000000&&price<=24000000)
				    {
				    	cout<<"near nit jalandhar"<<endl;
					    cout<<"location-jalandhar"<<endl;
					    cout<<"price=17000000"<<endl;
					}
					else if(price>=9000000&&price<=14000000)
					{
						cout<<"near burger king"<<endl;
						cout<<"location-phagwara"<<endl;
						cout<<"price=10000000"<<endl;
					}
			    
					else
					{
						cout<<"not available";
					}
				}
			break;
			
			case 2:
				 if(acres=2)
				  {
				  	cout<<"please select price range between 4crs to 2.5crs "<<endl;
					cin>>price;
					if(price>=35000000&&price<=40000000)
				    {
				    	cout<<"near lovely professional university"<<endl;
					    cout<<"location-phagwara"<<endl;
					    cout<<"price=37000000"<<endl;
					}
					 else if(price>=25000000&&price<=34000000)
					{
						cout<<"near chekuri railwaystation"<<endl;
						cout<<"location-phagwara"<<endl;
						cout<<"price=27000000"<<endl;
					}
					else
					{
						cout<<"not available";
					}
		    	}
		    	break;
	          }
	        }
	    break;
		case 2:	
		if(selection==2)
	      {		
			cout<<"choose 1 for apartment or 2 for independent"<<endl;
			cin>>choose;
			switch(choose)
		{
		 case 1:	
			if(choose==1)
			{
				cout<<"turn for 1.rent or 2.buying"<<endl;
			    cin>>turn;
				switch(turn)
				{
			     case 1:	
					if(turn==1)
			     {	
			    cout<<"please select which BHK you want 3BHK,2BHK"<<endl;
				cin>>bhk;
			switch(bhk)
				{
			     case 3:
				if(bhk==3)
		       	{
					cout<<"please select price range"<<endl;
					cin>>price;
					if(price>=25000&&price<=30000)
					{
						cout<<"pragya towers"<<endl;
						cout<<"location-jalandhar"<<endl;
						cout<<"price=26000"<<endl;
					}
					else if(price>=21000&&price<=24000) 
					{
						cout<<"socio apartments"<<endl;
						cout<<"location-phagwara"<<endl;
						cout<<"price=22000"<<endl;
			     	}	
			    	else 
					{
						cout<<"not available";
					}
                }
                break;
                case 2:
				if(bhk==2)
				{
					cout<<"please select price range"<<endl;
					cin>>price;
					if(price>=16000&&price<=20000)
					{
						cout<<"alekhya towers"<<endl;
						cout<<"location-phagwara"<<endl;
						cout<<"price=17500"<<endl;
					}
					else if(price>=12000&&price<=15000)
					{
						cout<<"mickey apartments"<<endl;
						cout<<"location-jalandhar"<<endl;
						cout<<"price=14000"<<endl;
					}
					else
					{
						cout<<"not available";
					}
				}
		     	break;
		    }
	  }
		break;
	    	case 2:
				if(turn==2)
				{	
			    cout<<"please select which BHK you want 3BHK,2BHK"<<endl;
				cin>>bhk;
				switch(bhk)
				{
			case 3:
				if(bhk=3)
		       	{
					cout<<"please select price range"<<endl;
					cin>>price;
					if(price>=2500000&&price<=3000000)
					{
						cout<<"pragya towers"<<endl;
						cout<<"location-jalandhar"<<endl;
						cout<<"price=2600000"<<endl;
					}
					else if(price>=2100000&&price<=2400000) 
					{
						cout<<"socio apartments"<<endl;
						cout<<"location-phagwara"<<endl;
						cout<<"price=2200000"<<endl;
				}	
				else 
					{
						cout<<"not available";
					}
                }
                break;
                case 2:
				if(bhk==2)
				{
					cout<<"please select price range"<<endl;
					cin>>price;
					if(price>=1600000&&price<=2000000)
					{
						cout<<"alekhya towers"<<endl;
						cout<<"location-phagwara"<<endl;
						cout<<"price=1750000"<<endl;
					}
					else if(price>=1200000&&price<=1500000)
					{
						cout<<"mickey apartments"<<endl;
						cout<<"location-jalandhar"<<endl;
						cout<<"price=1400000"<<endl;
					}
					else
					{
						cout<<"not available";
					}
				}
			break;
        	}		
				break;
		}
		}
		break;	
         case 2:    
			if(choose=2)
			{
				cout<<"please select how much area do you prefer 1. 150sqfts or 2. 250sqfts or 3. 330sqfts"<<endl;
				cin>>area;
				  switch(area)
				   {
					case 1:
						{
							if(area==1)
							cout<<"rajini venture"<<endl;
							cout<<"location-jalandhar"<<endl;
							cout<<"price=400000"<<endl;
						}
							break;
							case 2:
						{
							if(area==2)
							cout<<"rmc limited"<<endl;
							cout<<"location-phagwara"<<endl;
								cout<<"price=700000"<<endl;
						}
								break;
							case 3:
						{
							if(area==3)
							cout<<"kil limited"<<endl;
							cout<<"location-law gate"<<endl;
								cout<<"price=1000000"<<endl;
					    }
								break;	
			    	}
			}
		break;
 }
	}    
break;
 }
}
break;
           case 2:
	     		if(choice=2)
		    {
			cout<<"apartments"<<endl;
			cout<<"APPARTMENT NAME"<<ends<<ends<<ends<<ends<<ends<<"PRICE"<<ends<<ends<<ends<<"LOCATION"<<endl;
			cout<<"pragaya towers"<<ends<<ends<<ends<<"2650000"<<ends<<ends<<ends<<"jalandhar"<<endl;
			cout<<"rajini appartmet"<<ends<<ends<<ends<<"2350000"<<ends<<ends<<ends<<"jalandhar"<<endl;
			cout<<"alekhya  appartmet"<<ends<<ends<<ends<<"1900000"<<ends<<ends<<ends<<"phagwara"<<endl;
			cout<<"devil appartmet"<<ends<<ends<<ends<<"1500000"<<ends<<ends<<ends<<"phagwara"<<endl;
			cout<<"friendly appartmet"<<ends<<ends<<ends<<"1000000"<<ends<<ends<<ends<<"law gate"<<endl;
			cout<<"independent"<<endl;
			cout<<"VENTURE NAME"<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<"PRICE"<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<"AREA"<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<"LOCATION"<<endl;
			cout<<"goutham venture"<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<"1650000"<<ends<<ends<<ends<<"200sqyards"<<ends<<ends<<"jalandhar"<<endl;
			cout<<"kelvin venture"<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<"1900000"<<ends<<ends<<ends<<"300sqyards"<<ends<<ends<<"phagwara"<<endl;
			cout<<"protaitic venture"<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<"1200000"<<ends<<ends<<ends<<"150sqyards"<<ends<<ends<<"law gate"<<endl;
			cout<<"voilating venture"<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<"1700000"<<ends<<ends<<ends<<"250sqyards"<<ends<<ends<<"phagwara"<<endl;
			cout<<"loving venture"<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<"1550000"<<ends<<ends<<ends<<"200sqyards"<<ends<<ends<<"jalandhar"<<endl;
			cout<<"AGRICULTURE LAND"<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<"price"<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<"ACRES"<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<endl;
			cout<<"jalandhar"<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<"2000000"<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<"2"<<endl;
			cout<<"phagwara"<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<"1200000"<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<"1"<<endl;
			cout<<"jalandhar"<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<"1000000"<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<"1"<<endl;  
			cout<<"phagwara"<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<"2100000"<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<"2"<<endl;
        }
    break;
}
}
}
		void realestate::file()
	   {
		    ofstream out;
			out.open("sai.txt",ios::out);
	        out<<"apartments"<<endl;
			out<<"APPARTMENT NAME"<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<"PRICE"<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<"LOCATION"<<endl;
			out<<"pragaya towers"<<ends<<ends<<"\t"<<ends<<ends<<ends<<ends<<ends<<ends<<"2650000"<<ends<<ends<<"jalandhar"<<endl;
			out<<"rajini apartments"<<ends<<ends<<"\t"<<ends<<ends<<ends<<ends<<ends<<ends<<"2350000"<<ends<<ends<<"jalandhar"<<endl;
			out<<"alekhya apartment"<<ends<<ends<<"\t"<<ends<<ends<<ends<<ends<<ends<<ends<<"1900000"<<ends<<ends<<"phagwara"<<endl;
			out<<"devil appartmet"<<ends<<ends<<"\t"<<ends<<ends<<ends<<ends<<ends<<ends<<"1500000"<<ends<<ends<<"phagwara"<<endl;
			out<<"friendly appartmet"<<ends<<ends<<"\t"<<ends<<ends<<ends<<ends<<ends<<ends<<"1000000"<<ends<<ends<<"law gate"<<endl;
			out<<"independent"<<endl;
			out<<"venture NAME"<<ends<<ends<<ends<<ends<<"PRICE"<<ends<<ends<<ends<<ends<<"AREA"<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<"LOCATION"<<endl;
			out<<"goutham venture"<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<"\t"<<"1650000"<<ends<<ends<<"200sqyards"<<ends<<ends<<"jalandhar"<<endl;
			out<<"kelvin venture"<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<"\t"<<"1800000"<<ends<<ends<<"250sqyards"<<ends<<ends<<"phagwara"<<endl;
			out<<"protaitic venture"<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<"\t"<<"1200000"<<ends<<ends<<"150sqyards"<<ends<<ends<<"law gate"<<endl;
			out<<"agriculture"<<endl;
			out<<"LAND"<<ends<<ends<<ends<<ends<<"PRICE"<<ends<<ends<<ends<<ends<<ends<<"ACRES"<<endl;
			out<<"jalandhar"<<ends<<ends<<"\t"<<ends<<ends<<ends<<ends<<ends<<ends<<"2650000"<<ends<<ends<<"2"<<endl;
			out<<"phagwara"<<ends<<ends<<"\t"<<ends<<ends<<ends<<ends<<ends<<ends<<"2150000"<<ends<<ends<<"2"<<endl;
			out<<"phagwara"<<ends<<ends<<"\t"<<ends<<ends<<ends<<ends<<ends<<ends<<"1550000"<<ends<<ends<<"1"<<endl;
			out<<"jalandhar"<<ends<<ends<<"\t"<<ends<<ends<<ends<<ends<<ends<<ends<<"1850000"<<ends<<ends<<"1"<<endl;
			out<<"phagwara"<<ends<<ends<<"\t"<<ends<<ends<<ends<<ends<<ends<<ends<<"2750000"<<ends<<ends<<"2"<<endl;
			out<<"jalandhar"<<ends<<ends<<"\t"<<ends<<ends<<ends<<ends<<ends<<ends<<"1650000"<<ends<<ends<<"1"<<endl;
	     	}

	int main()
	{
		realestate r;
			r.ip();
			ofstream out;
			out.open("sai.txt",ios::out);
			r.file();
			out.close();
			return 0;
	}

