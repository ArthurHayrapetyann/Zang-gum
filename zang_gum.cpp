#include "head.hpp"

int zang_gum(int h){
	int zang[10]={1, 2, 8, 9, 11, 6, 7, 4, 3, 5};
	int qan = 0;
	int k;
	for (int i = 0; i<sizeof(zang)/sizeof(zang[0]); i++){ 		//vercnume zangvaci arjin gumarelin
		for(int j=i+1; j<sizeof(zang)/sizeof(zang[0]); j++){	//vercnum e erkrord gumarelin i ic sksac
			k = zang[i]+zang[j];				//gumarum e 
			if ( k == h){
				cout << zang[i] << "," << zang[j] << endl;
				qan += 1;				//hashvum zuygeri qanaky	
			}	
		}
	}
	cout << qan << endl;
	return 1;
}


