#include <stdio.h>
int main()
{
	int a,b,c,d,e,a1,a2,a3,a4,a5,tot,A,B,C,D,E;
	float b1,b2,b3,b4,b5,b6,b7,b8,b9,b10;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	A=50;
	B=30;
	C=70;
	D=100;
	E=20;
	a1=a*A;
	a2=b*B;
	a3=c*C;
	a4=d*D;
	a5=e*E;
	if(a<0||b<0||c<0||d<0||e<0)
	{
		printf("ERROR");
		goto st;
	}
	if(a==0&&b==0&&c==0&&d==0&&e==0)
	{
		printf("ERROR");
		goto st;
	}
	tot=a1+a2+a3+a4+a5;
	printf("QTY=%d  UNIT PRICE=%d TOTAL PRICE OF BISCUTS=%d\n",a,A,a1);
	printf("QTY=%d  UNIT PRICE=%d TOTAL PRICE OF OIL=%d\n",b,B,a2);
	printf("QTY=%d  UNIT PRICE=%d TOTAL PRICE OF SOAP=%d\n",c,C,a3);
	printf("QTY=%d  UNIT PRICE=%d TOTAL PRICE OF CHIPS=%d\n",d,D,a4);
	printf("QTY=%d  UNIT PRICE=%d TOTAL PRICE OF SHAMPOO=%d\n",e,E,a5);
	printf("TOTAL PRICE=%d\n",tot);
	if(tot<500)
	{
		printf("NO DISCOUNT\n");
		b9=tot*0.05;
		b10=tot+b9;
		printf("GST=(5%)ADDED=%0.2f\nFINAL PRICE=%0.2f",b9,b10);
	}
	if(tot>500&&tot<=1000)
	{
		b1=tot*0.05;
		b2=tot-b1;
		printf("ELIGIBLE FOR DISCOUNT OF (5%) =%0.2f\n",b2);
		b3=b2*0.05;
		b4=b2+b3;
		printf("GST=(5%)ADDED=%0.2f\nFINAL PRICE=%0.2f",b3,b4);
	}
	if(tot>1000)
	{
		b5=tot*0.1;
		b6=tot-b5;
		printf("ELIGIBLE FOR DISCOUNT OF (10%) =%0.2f\n",b6);
		b7=b6*0.05;
		b8=b6+b7;
		printf("GST=(5%)ADDED=%0.2f\nFINAL PRICE=%0.2f",b7,b8);
	}

st:
	return 0;
}
