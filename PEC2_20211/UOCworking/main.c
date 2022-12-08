/*
*Author: Eugenio Moya
*Date: 29/09/2021
*Descripción: PEC2 2021 1
*Proyectn: UOCoworking
*/

/* System header files */
#include <stdio.h>
#include <stdbool.h>

/* Constant definition*/
#define CATEGORY1 1					//Category 1 id
#define CATEGORY2 2					//Category 2 id
#define CATEGORY3 3					//Category 3 id
#define DISTANCE_MAX 5.00			//max. distance fron City center
#define PRICE_MAX 100.00			//max. Center price
#define OCCUPATION_MIN 50.00		//min. Occupation
#define COWORKERS_MAX 2				//max. Coworkers in each center



/* User types definition */
typedef enum {STARTUPS, FREELANCERS, RURAL, SPECIALIZED, GENERALIST} tCoworkingType;

/* Main function */
int main() {

	/* Declaracition of variables */
	int id;								//center id
	tCoworkingType coworkingType;		//center type
	int category;                  		//center category
	float price;                       	//center price [Eur/month per space]
	float distanceFromCityCenter;      	//center distance from city center [km]}
	bool hasMeetingRooms;				//has meeting rooms? [False/True]
	bool hasKitchen;					//has kitchen? [False/True]
	bool hasAuditorium;					//has auditorium? [False/True]
	float percentOccupation; 			//percentage of occupation [Percent]
	int coworkers;						//number of coworkers
	float discount;						//discount percentage on the rental price[Percent]
	bool conditions;					//center ideal conditions [False/True]
	bool needMarketing;					//needs promotion [False/True]
	float mounthPrice; 					//total mounth rental price
	int intToBool;						//convert int to bool
	int totalRooms;					//total numbers of rooms
		
	/*Data input*/
    	
	/*Exercise 2.1*/
	printf("INPUT DATA\n");
	printf("ID? (AN INTEGER) >> \n");
	scanf("%d",&id);
	printf("TYPE? (1-STARTUPS, 2-FREELANCERS, 3-RURAL, 4-SPECIALIZED, 5-GENERALIST) >> \n");
	scanf("%u",&coworkingType);
	printf("CATEGORY? (AN INTEGER) >> \n");
	scanf("%d",&category);
	printf("PRICE [EUR]? (A REAL) >> \n");
	scanf("%f",&price);					//center price [Eur/month per space]}
    printf("DISTANCE FROM CITY CENTER [KM]? (A REAL) >> \n");
	scanf("%f",&distanceFromCityCenter);
 	printf("HAS KITCHEN? (0-FALSE, 1-TRUE) >> \n");
	scanf("%d", &intToBool);
	hasKitchen = (bool)intToBool;
	printf("HAS AUDITORIUM? (0-FALSE, 1-TRUE) >> \n");
	scanf("%d",&intToBool);
	hasAuditorium = (bool)intToBool;
	printf("OCCUPATION [PERCENT]? (A REAL) >> \n");
	scanf("%f",&percentOccupation);
	/*Exercise 2.2*/
	printf("COWORKERS? (AN INTEGER) >> \n");
	scanf("%d",&coworkers);
	printf("DISCOUNT [PERCENT]? (A REAL) >> \n");
	scanf("%f",&discount);
	
	/* Expressions */
	/*Exercise 2.3*/
	conditions = (distanceFromCityCenter < DISTANCE_MAX) && (price<=PRICE_MAX) && (hasKitchen == 1);
	/*Exercise 2.4*/
	needMarketing = (percentOccupation < OCCUPATION_MIN) && (distanceFromCityCenter >= DISTANCE_MAX);
	/*Exercise 2.5*/
	totalRooms = (coworkers/COWORKERS_MAX)+(coworkers %COWORKERS_MAX);
	mounthPrice = (price * (float)totalRooms)-((price * (float)totalRooms)*(discount/100));
		
	/*Data output*/
	
	/*Exercise 2.6*/
	printf("RESULTS\n");
	printf("IS ACCEPTABLE (0-FALSE, 1-TRUE): %d\n", conditions);
	printf("NEEDS PROMOTION (0-FALSE, 1-TRUE): %d\n", needMarketing);
	printf("MONTHLY PRICE [EUR]: %.2f\n", mounthPrice);
	
	
	
	
	
	return 0;
	}


