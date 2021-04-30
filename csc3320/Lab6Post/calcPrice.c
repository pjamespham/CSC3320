#include <stdio.h>

int main(void) {

int itemnumber;
int itemquantity;
int datePurchasedDay;
int datePurchasedMonth;
int datePurchasedYear;
double unitprice;

printf("Enter item number:\n");
scanf("%d",&itemnumber);

printf("Enter unit price:\n");
scanf("%lf",&unitprice);

printf("Enter item quantity:\n");
scanf("%d",&itemquantity);

printf("Enter purchase date (mm/dd/yyyy)\n");
scanf("%d/%d/%d",&datePurchasedMonth,&datePurchasedDay,&datePurchasedYear);

printf("Item #	 Unit Price	QTY	Purchase Date	Total Amount\n");
printf("%-0d 	 $%.2lf		%-d	%-d/%-d/%-d	$      %.2lf\n",itemnumber,unitprice,itemquantity,datePurchasedMonth,datePurchasedDay,datePurchasedYear,itemquantity*unitprice);

return 0;
}

