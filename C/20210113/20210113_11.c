#include <stdio.h>

int main()
{
   float tomatoPrice = 4.5;
   float tomatoWeight;
   float tomatoTotal;
   float flourPrice = 1.8;
   float flourWeight;
   float flourTotal;
   float yoghurtPrice = 0.5;
   float yoghurtNumber;
   float yoghurtTotal;
   float icecreamPrice = 0.6;
   float icecreamNumber;
   float icecreamTotal;
   float candyPrice = 1.5;
   float candyWeight;
   float candyTotal;
   float lollipopPrice = 0.15;
   float lollipopNumber;
   float lillipopTotal;

   printf("Здравейте, добре дошли в нашия магазин! Днес предлагаме - пресни домати,брашно, кисело мляко, сладолед на фунийки и близалки.\n");
   printf("Колко килограма домати ще желаете? ");
   scanf("%f",&tomatoWeight);
   tomatoTotal = tomatoWeight * tomatoPrice;
   printf("Цена : %f",tomatoTotal);
   

}
