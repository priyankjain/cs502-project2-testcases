int x;
int y;
int z;
void fun(int w, int p)
{
	 int a=9;
	 int i=1;
	 int k;
	 int m;
	 if(a < 10){
		 x = a;
		 switch(i){
			 case 1: {
				 switch(a){
					 case 1:{
						 y=i;
						 z=y+1;
						 a=a+1;
						 m=a+w;
						 k=m;
						 break;		
						 }
					 case 2:{
						 m = 5;
						 switch(w){
							 case 1:{
								 y = p;
								 z = y + 1;
								 m = p * w;
								 k = p / w;
								 break;
								 }
							 case 2:{
								 y = m;
								 z = y + 1;
								 p = 2/w + m;
								 k = 2/w - m;
								 break;
								 }
							 default:
							     y = a;
							     k = a;
								 z = y + 1;
							}
						 break;
						 }
					 default:
					 a=a+2;
					 m=a;
					 k=m;
					 y=a+k;
					 z=y+1;
					}
					break;
				 }
			 case 4:{
				 k=i+4;
				 m=i+k;
				 y=m;
				 z=y+1;
				 break;
				 }
			 default:{
				 i = i+1;
				 k = i+a+1;
				 i = k+20;
				 m = k;
				 y = m+k;
				 z = y+1;
				 }
			}
		}
	 else{
		 switch(i){
			 case 1: {
				 x = i;
				 switch(a){
					 case 1:{
						 a=a+1;
						 k=a;
						 y=p;
						 z=y+1;
						 break;		
						 }
					 case 2:{
						 y=w;
						 switch(w){
							 case 1:{
								 m = p * w;
								 k = p / w;
								 z = y + 1;
								 break;
								 }
							 case 2:{
								 p = 2/w + p;
								 k = 2/w - p;
								 z = y + 1;
								 break;
								 }
							}
						 break;
						 }
					 default:
					 a=a+2;
					 k=i+a;
					 y=k;
					 z=y+1;
					}
				 break;
				 }
			 case 4:{
				 k=i+4;
				 x=k;
				 y=x;
				 z=y+1;
				 break;
				 }
			 default:{
				 i = i+1;
				 k = i+a+1;
				 i = k+20;
				 x = i+k;
				 y = x+k;
				 z = y+1;
				 }
			}
			m=p+22;
		}
	printf("k = %d, m = %d\n", k, m);
}

void main(){
  fun(1,2);
  printf("%d %d %d\n", x, y, z);
}