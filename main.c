/**
  ******************************************************************************
  * @file    main.c
  * @author  Yosra Abdouli
  * @brief   How to develop structured code 
  * @version V1.0.0
  * @date    27-10-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/

/* Macros --------------------------------------------------------------------*/
#define SOM
 //#define MUL
#define INTEL
#define OTHERS  /*definir un macro others */
#define MIN     /* defnir un macro MIN*/
#define MAX     /*definir un macro MAX*/

/* Private function prototypes -----------------------------------------------*/
static int sum(int var1, int var2); /* on utilise static avant de déclarer la variable pour garder la valeur juste pour cette fonction */
static int mul(int var1, int var2);
static int max(int var1,int var2) ;
static int min(int var1, int var2);
/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
int main(void)
{
#ifdef SOM 
  int ResultSom = sum(1,3);
#endif

#ifdef MUL
  int ResultMul = mul(1,3);
#endif
#ifdef MIN
  int ResultMin =min(3,4);  /*mettre la valeur min dans ValeurMin */
#endif 
#ifdef MAX
  int ResultMax= max(3,4);  /*mettre la valeur max dans ValeurMax */
#endif  
  while (1)
  {
  }
}
#ifdef SOM 
static int sum(int var1, int var2)
 {
   return(var1+var2);
 }
#endif
#ifdef MUL
static int mul(int var1, int var2)   
 {
   return(var1*var2);
 }
#endif
#ifdef MIN
static int min(int var1, int var2)
 {
   int ResultMin;
   ResultMin=(var1<var2) ? var1:var2; /* si var1<var2 la valeur min egal var1 si nn egal la var2 */
   return ResultMin;                /*  retouner la valeur minimale*/
 }
#endif

#ifdef MAX
static int max(int var1, int var2)
 { 
   int ResultMax;
   ResultMax=(var1>var2) ? var1:var2;  /* si var1>var2 la valeur max egal var1 si nn egal la var2 */
   return ResultMax;                 /* retourner la valeur maximal */
 }
#endif
/**************************************END OF FILE**************************************/
