# Labafor8

### Условие задачи.

5. Вычислите для целого N (N<10),заданого пользователем, значение знакопеременного выражения

1.1-1.2+1.3-...

### Алгоритм.
1. **Начало**
2. Задать исходные данные:
   `N` - Целое число.
3. Условие:
   Если `N>=10` или `N<=0`:
   
     Вывести: `Неправильное N`
   
   Иначе:
   
   `for (int i = 1; i <= N; i++) {`
   
   `res += zn * (b + i * 0.1 );`
   
   `zn = -zn;`
   
5. Вывести:

   `Результат выражение N`.
7. **Конец**

### Блок-схема
!![Блок-схема алгоритма](схема.png)
(https://app.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=Laba7.png&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0%20%E2%80%94%201%22%20id%3D%22vKg7L8X21BIwSFlcxruJ%22%3E7Vttc6M2EP41nmk7Ew%2FizfAxtnMv7bWXaeaSu37JEFu2dcXIJ%2BTYya%2BvJMSbkI3jgPFlOkMIWoSA3efZXa1wzxott%2B9JsFr8iacw7JnGdNuzxj3TBKZtsX9c8pRIXGAkgjlBU9kpF9ygZyiFabc1msK41JFiHFK0KgsnOIrghJZkASF4U%2B42w2H5rqtgDiuCm0kQVqV3aEoXidQzB7n8A0TzRXpn4PrJmWWQdpZvEi%2BCKd4URNZVzxoRjGlytNyOYMiVl%2Bolue7djrPZgxEY0UMuGH1w%2FvgyuL2%2F8D7e399StFhg68JMRnkMwrV84d7Y6Pljvh8avTHoeYP0mO2HYn8lX4g%2BpVpid2IGYY3hZoEovFkFE35mwzDBZAu6DFkLsMPqQ8v3eISEwm1BJF%2FiPcRLSMkT6yLPWoZUqERUqt9Nbh6QyhYF03hSFkhEzLORc6WxA6m3F%2BjQruqwop9oesnByFqTMIhjNCmrheB1NIX8JsY%2BJcFpCaxVFRV04GhUkMoIDAOKHssQ1%2BlF3uEaI%2FYkuQVcs%2B%2BUbAAMRbkxXpMJlNcVQVkZyioPZCoD0YDMIa0MJAyVvfjxtjMtPQEuJdD5PiGDI8jgdgp94JWh73onxD69Nobf8Y9bh15%2F%2Fkrm6zX5%2FcsFqKjvr%2BxVC0pivm%2FFD9nbB2EIQzwnwZJ1XEGC2INAop67zk%2FU6XWGtjANHE25GGDrUVnUs6HRs92Wnp2mfcwMRzRVGtPEMGZESwUea7PRCq3JmjyKS%2FlAcIvoVz4McwJJ61vhzHgr7yAaT3UuLXEU9Qg7F9fnlxmYtV%2Fu%2BEDf80G2%2BWXA%2BaDvmiDfBm15Ra3OXfec4BaxlyngjTe%2FpRjjjRxxolULuUR5BwSFM8Fc5lVSr39ssHXUgVTwNgerKLy7e0T%2FXK%2B2399Fy2ey%2FfzxkzZYcM%2FqBkvu0%2BeUW43LDZ79G73BiG%2BmUeoV5r0MXaghC7x8WMeHxuNKUNBA5uBUFPgnjMdaFWvy%2BT3EjXAE97E2ox4oES%2Fn4V7qKfSp5eJuzHTFPFvJt5jBj2OerTAPDE7LPE2Wa7o%2F1lhwKZ%2FwOWL%2FTmS6RmHaJ3LioZdOAdnZUSEzvpLXCqJmo3afAr6K2kqcN3XMtjXIc9ti9stmmbXMTnO4QgaX53P7crhDWF1M6s6P1WoOZ6pzzkNZDdwa99AyqxufFLwu1WrE31tdIqPWoD%2BLv39Z%2Fl7nLA4179mEaVXbB5utLt63bLZBxWzJ4yGeACeJsTblLVmr%2FbTXtmy9vgvm9jXmbqI6otWb12xs3OEFwem84KBTOg3KxQjrWC%2BYPVDqBVUAtEwnv0qnHTNJbdHylDNJ2%2FSUknqm9VLNEVSt3tpcMl2Cezu08s8pStkqG46lldXemokeF9U6DuOUYNMUPbJDUcghMBZkkwx7jtjuN%2Fb3y4MUJ2GNi4w%2BG9H4Vdg6GYc9V2EozehiuGTkC3a8%2B8quQ6W5w%2BilCpHfHzhV3KnVueaI%2FfaqRJ3mn66lGNlzjmN2ZXXh1MzW1omSaBk9xPwfEtQdngO3HGW2Zrk6bp2yRgNanZE7fils9g3HrGGYaBXqaI3TrtPZupt%2BhJPS7ui1uK5p1%2Fhy26E2PhePWdH4sTP2k5uuOmV%2FVSjNl9a9dEGdk%2F3C6BuGu7c6yxvHU72%2BYtsp1S2lnmYdW%2BGpBV7beGmrVNFZ6tXpnKoxXKgDOeoae9u4qNYq%2BATq519Hy2qDaZA%2B9HPN1pI0Uzd9fdPRtjWW2Cf2nqml3k5F6qyWu47%2BsKhr76n7irchXDhlZPQNlvF1POnqNuJagzeCmWY%2FqDj3GNAa1ysDtW03TY2Ff8Fky%2B%2BVVBuy1IWWDadLgmJK8L9whENMcmPPUBgqoiBE84hnBcyqIqPiyRGaBOGlPLFE0ym%2FtRYer8uklLK%2FaVQzKVcDIHX1rrlESlO2KH1LBnpelVPSHi9VeAhndJ%2B6Y2ZPFM0%2FiW5jO5f8LTXBRZhdPgsFnxfsQsgXDlYcqEI1zpBtTFkjng447FlHrA3yNtt4d0JHOGKPHyBhNxjEdANjseSBaUCDB%2FGmJ1peUH6ooMOEd1JMaOohB7DzfzQ0ggZ1hRG0hgbWzH%2B5mLj2%2FPef1tV%2F%3C%2Fdiagram%3E%3C%2Fmxfile%3E)

### 2. Реализация программы

	#include <stdio.h>

	#include <stdlib.h>

	#include <locale.h>

	#include <math.h>

	#define _USE_MATH_DEFINES 

	#define _CRT_SECURE_NO_DEPRECATE 

	int main() {

		setlocale(LC_CTYPE, "RUS");
	
		double N;
	
		double res, b;
	
		int zn;
	
		b = 1;
	
		res = 0;
	
		zn = 1;
	
		puts("введите целое число N (N<10): ");
	
		scanf("%lf", &N);
	
		if (N >= 10 || N <= 0) {
	
			printf("\n Неправильное N\n");
		
		}
	
		else {
	
			for (int i = 1; i <= N; i++) {
		
				res += zn * (b + i * 0.1 );
			
				zn = -zn;
			
			}
		
		}
	
		printf("Результат выражения %.1lf", res);
	
		return 0;
	
		}

### 3. Контрольный пример

	Пусть `N` = 3, тогда:

	1.1 - 1.2 + 1.3 = 1.2

	Результат: 1.2

### 4. Результаты работы программы

	введите целое число N (N<10):

	3

	Результат выражения 1.2


### 5. Информация о разработчике

Гусев Иван бИЦ-251

