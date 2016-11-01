#ifndef RUCHI_H
#define RUCHI_H

namespace encode{
	int encode(char x){
		switch (x){
			case 'k':
				return 1;
				break;
			case 'e':
				return 2;
				break;
			case 'l':
				return 3;
				break;
			case 'v':
				return 4;
				break;
			case 'i':
				return 5;
				break;
			case 'n':
				return 6;
				break;
			case 'a':
				return 7;
				break;
			case 't':
				return 8;
				break;
			case 'o':
				return 9;
				break;
			case 'r':
				return 0;
				break;
			default:
				std::cout<<"Enter correct code!: '"<<x<<"' was incorrect!\n";
				break;

		}
	}
	int increment(int h, int t, int o){
		float total;
		total = h*100+t*10+o;
		total = total + (total*0.07);
		return total;
	}
}

#endif