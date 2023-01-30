#include <cstdio>
#include <windows.h>
#include<conio.h>
#include<iostream>
#include"music.hpp"
using namespace std;

int  main()
{
	int pai=400,ban=200;
  	int  ch;
  	while(1)
  	{
  		if(_kbhit())
  		{
  			ch=_getch()-32;
  			cout << ch;
  			switch(ch)
			    {
			    	case(81):Beep(qdo,pai);break;
			    	case(87):Beep(sqdo,pai);break;
			    	case(69):Beep(qre,pai);break;
			    	case(82):Beep(sqre,pai);break;
			    	case(84):Beep(qmi,pai);break;
			    	case(89):Beep(qfa,pai);break;
			    	case(85):Beep(sqfa,pai);break;
			    	case(73):Beep(qso,pai);break;
			    	case(79):Beep(sqso,pai);break;
			    	case(80):Beep(qla,pai);break;
			    	case(219):Beep(sqla,pai);break;
			    	case(221):Beep(qsi,pai);break;
			    	case(220):Beep(do,pai);break;
			    	case(65):Beep(sdo,pai);break;
			    	case(83):Beep(re,pai);break;
			    	case(68):Beep(sre,pai);break;
			    	case(70):Beep(mi,pai);break;
			    	case(71):Beep(fa,pai);break;
			    	case(72):Beep(sfa,pai);break;
			    	case(74):Beep(so,pai);break;
			    	case(75):Beep(sso,pai);break;
			    	case(76):Beep(la,pai);break;
			    	case(186):Beep(sla,pai);break;
			    	case(222):Beep(si,pai);break;
			    	case(90):Beep(do1,pai);break;
			    	case(88):Beep(sdo1,pai);break;
			    	case(67):Beep(re1,pai);break;
			    	case(86):Beep(sre1,pai);break;
			    	case(66):Beep(mi1,pai);break;
			    	case(78):Beep(fa1,pai);break;
			    	case(77):Beep(sfa1,pai);break;
			    	case(188):Beep(so1,pai);break;
			    	case(190):Beep(sso1,pai);break;
			    	case(191):Beep(sla,pai);break;
			    
			    }
  		}
  	}
  
  
  

	
}
