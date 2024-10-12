#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
//changes from 12423 to 12636
// facing problem in 511 to 530. total problem in r
// current facing problem in 925 to 1082 . part 4 & part 5 issue of g.
//all the problems are solved
void main();
void patternCall(int *nwords, int *nchar, int *n, char *c,int *m,int Re_no,int pseudoI);

void patternN(int *nwords, int *nchar, int *n, char *c,int *m,int Re_no,int pseudoI)
{
    int i, k, j = 0, middleE, rowE, spaceU, middleU, middleG, spaceG, middleA, spaceA, rowA,
    middleN, spaceN, rowN, middleH, spaceH, spaceP, middleP, spaceW, spaceY, middleY, rowR, spaceR, middleR, nspace, k1;

    // m is main.
    *m=*m+1;

    char pattern;

    if (*nwords <= 2)
                {
                    if (*nwords == 2)
                    {
                        *nwords = *nwords + 1;
                    }
                    else if (*nwords == 1)
                    {
                        *nwords = *nwords + 2;
                    }
                  
                }

                middleN = (*nchar / 2) - 2;
                if (middleN < 1)
                {
                    middleN = 1;
                }

                // middleN=0;

                if (*nchar % 2 != 0)
                {
                    middleN += 1;
                }

                if (*nwords <= 1)
                {
                    if (*nwords == 1)
                    {
                        *nwords = *nwords + 2;
                    }
                    else if (*nwords == 2)
                    {
                        *nwords = *nwords + 1;
                    }
                    else
                    {
                        printf("\t\tUNABLE TO PRINT!\n");
                        printf("\t\tTHANK YOU !");
                        return ;
                    }
                }

                //           spaceN = (middleN * (2 * nwords));
                spaceN = (middleN * (2 * (*nwords))) - 6; //(*nchar %3);
                if(*nchar >3)
                {
                    if(*nchar %2 == 0)
                    {
                    spaceN=spaceN + (*nchar-2);
                    }
                    else
                    {

                         spaceN=spaceN + (*nchar-3);
                    }
                    
                }

                //    spaceN=((nchar/2)-2)*(2*nwords)-1;

                for (i = pseudoI; i <= (2 * (*nwords)); i++)
                {
                    rowN = spaceN - (((i - 1) * middleN) + *nchar) + 7;
                 if(*nchar >7)
                {
                    if((*nchar)%2 ==0)
                    {
                        rowN=rowN-(((*nchar)-6)/2);
                    }
                    else
                    {
                        if( (*nchar) %3 ==0)
                        {
                            rowN=rowN-((*nchar-6)/3);
                        }
                        else                                    // no use of code from 99 to 103
                        {
                            rowN=rowN-(((*nchar)-10));
                        }
                    }

                }

                    //          rowN=spaceN-((i-1)*((nchar/2)-2));
                    

                    for (j = 1; j <= 3; j++)
                    {

                        if (j == 1)
                        {
                            for (k = 0; k < *nchar; k++)
                            {
                                printf("%c", *(c+k));
                              
                            }
                       // if(j!=3)
                       // {
                            for (k = 1; k <= (middleN) * (i - 1); k++)
                            //                for( k=1; k<= ((nchar/2)-2)*(i-1);k++)
                            {
                                printf(" ");
                            }
                        //}
                        }

                        else if (j == 2)
                        {
                            for (k = 0; k < *nchar; k++)
                            {
                                printf("%c", *(c+k));
                                
                            }

                            for (k = 1; k <= rowN; k++)
                            {
                                printf(" ");
                            }
                        }

                        else if (j == 3)
                        {
                            for (k = 0; k < *nchar; k++)
                            {
                                printf("%c",*(c+k));
                            }
                 
                  if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }                       
                }
            }
                  pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
                }
               

             //g   printf("\n\n");
}

void patternU(int *nwords,int *nchar,int *n,char *c,int *m, int Re_no,int pseudoI)
{


    int i, k, j = 0, middleE, rowE, spaceU, middleU, middleG, spaceG, middleA, spaceA, rowA,
    middleN, spaceN, rowN, middleH, spaceH, spaceP, middleP, spaceW, spaceY, middleY, rowR, spaceR, middleR, nspace, k1;

    // m is main.
    *m=*m+1;

    char pattern;





     if( *nwords <= 2)
            {
                if(*nwords == 2)
                {
                    *nwords=*nwords+1;
                }
                else if( *nwords == 1)
                {
                    *nwords=*nwords+2;
                }
           
            }
           
            middleU = 0;
           
            for (i = pseudoI; i <= ((2 * (*nwords))); i++)
            {
                if ((i == ((2 * (*nwords)))))
                {
                    for (j = 1; j <= *nwords; j++)
                    {
                        for (k = 0; k < *nchar; k++)
                        {
                            printf("%c", *(c+k));
                        }
                        if( j!= *nwords)
                        {
                        for (k = 1; k <= middleU; k++)
                        {
                            printf(" ");
                        }
                        }
                        if( j== *nwords)
                        {
                              if(( *nchar - Re_no -1==0) && (*nchar !=1))
                            {
                                return;
                            }
                        }
                    }
                   // printf("\n\n");
                }

                else
                {
                    spaceU = (((*nwords - 2) * (*nchar)) + ((*nwords - 1) * middleU));
                    for (j = 1; j <= 2; j++)
                    {
                        for (k = 0; k < *nchar; k++)
                        {
                            printf("%c", *(c+k));
                        }
                        if( j!= 2)
                        {
                            for (k = 1; k <= spaceU; k++)
                            {
                                printf(" ");
                            }
                        }
                        if( j==2)
                        {              
                      if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
        }
    }
}
                            pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
            }

}   

void patternR(int *nwords,int *nchar,int *n,char *c,int *m,int Re_no ,int pseudoI)
{
     int i,ai, k, j = 0, middleE, rowE, spaceU, middleU, middleG, spaceG, middleA, spaceA, rowA,
    middleN, spaceN, rowN, middleH, spaceH, spaceP, middleP, spaceW, spaceY, middleY, rowR, spaceR, middleR, nspace, k1;
    //ai stands for alternative for i.
    // m is main.
    *m=*m+1;

    char pattern;

    
    if (*nwords <= 2)
    {
        if (*nwords == 2)
        {
            *nwords = *nwords + 1;
        }
        else if (*nwords == 1)
        {
            *nwords = *nwords + 2;
        }
       
    }
   
    middleR = 0;
    spaceR = ((*nwords - 2) * (*nchar)) + ((*nwords - 1) * (middleR));
    rowR = ((*nwords - 1) * (*nchar)) + ((*nwords - 1) * middleR);
    

    for (i = pseudoI; i <  ((2 * (*nwords)) +1); i++)
    {
        if ((i == 1) || (i == *nwords ))
        {
            for (j = 1; j <= *nwords; j++)
            {
                for (k = 0; k < *nchar; k++)
                {
                    printf("%c", *(c + k));
                }
                if(j!= *nwords)
                {
                for (k = 1; k <= middleR; k++)
                {
                    printf(" ");
                }
                }
                 if( j== *nwords)
                    {
                      
                 
                  if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }

        }
    }
                            pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
           
             //   printf("\n");
            
        }

        else if ((i > 1) && (i < *nwords ))
        {
            for (j = 1; j <= 2; j++)
            {
                for (k = 0; k < *nchar; k++)
                {
                    printf("%c", *(c + k));
                }
                if(j!=2)
                {
                for (k = 1; k <= spaceR; k++)
                {
                    printf(" ");
                }
                }
                 if( j== 2)
                        {
                                     
                 if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                        }
    }
                            pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
            
        }

        else if (i > *nwords )
        {
            middleR = *nchar / 2;
            if (*nchar % 2 != 0)
            {
                middleR += 1;
            }
            spaceR = rowR / middleR;
           // int Ri;//declared i specially for R pattern.
            //for (ai = 1; ai < spaceR; ai++)
           // {   //Ri=i;
                for (j = 1; j <= 2; j++)
                {
                    for (k = 0; k < *nchar; k++)
                    {
                        printf("%c", *(c + k));
                    }
                    if(j!=2)
                    {
                    //for (k = 1; k <= (middleR * ((i) - 1))-((*nchar) * (*nwords-1)); k++)
                        for (k = 1; k <= middleR * ((i-(*nwords)) - 1); k++)
                    {
                        printf(" ");

                    }

                                      
                   
                    }
                    if(j==2)
                    {
                        for (k = 1; k <=(((*nchar) * (*nwords)) -(middleR * ((i-(*nwords)) - 1)+(2*(*nchar)))); k++)
                    {
                        printf(" "); // maine kar dikhaya !!!

                    }

                    }
                    

                     if( j== 2)
                        {
                              if(( *nchar - Re_no -1==0) && (*nchar !=1))
                            {
                                return;
                            }
                        }
                }
                
               if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                            pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
                 //   printf("\n");
               //  Ri++;
                
            //}
          
        }
    }
    //printf("\n\n");



}

void patternG(int *nwords , int *nchar,int *n,char *c,int *m ,int Re_no,int pseudoI)
{
   int i,ai, k, j = 0, middleE, rowE, spaceU, middleU, middleG, spaceG, middleA, spaceA, rowA,
    middleN, spaceN, rowN, middleH, spaceH, spaceP, middleP, spaceW, spaceY, middleY, rowR, spaceR, middleR, nspace, k1;
    //ai stands for alternative for i.
    // m is main.
    *m=*m+1;
    // no number part is clear no issue in that .

    char pattern;


    if (*nwords <= 2)
    {
        if (*nwords == 2)
        {
            *nwords = *nwords + 1;
        }
        else if (*nwords == 1)
        {
            *nwords = *nwords + 2;
        }
        //     else
        //   {
        //         printf("\t\tUNABLE TO PRINT!\n");
        //         printf("\t\tTHANK YOU !");
        //         return 0 ;
        //   }
    }

    // middleG = nchar /2 -1;
    middleG = 0;
    //  if( nchar % 2!= 0)
    //  {
    //     middleG+=1;
    //  }

    spaceG = ((((*nwords) - 2) * ((*nchar) - 1)) + (((*nwords) - 1) * (middleG))) + 3 + ((*nwords) - 4);

  //  for (i = pseudoI; i <= ((2 * (*nwords))+(*nwords)-1); i++)
    for (i = pseudoI; i <= ((2 * (*nwords))); i++)
  
    // printf("i<= %d",(2*(nwords)) -1);

    {
        if (i == 1)
        {
            for (j = 1; j <= (*nwords); j++)
            {
                for (k = 0; k < (*nchar); k++)
                {
                    printf("%c", *(c + k)); // part1;
                }

                for (k = 1; k <= middleG; k++)
                {
                    printf(" ");
                }
               
            }
                 if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                            pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
        }

        else if ((i > 1) && (i <= (*nwords)))
        {

            for (k = 0; k < *(nchar); k++)
            {
                printf("%c",*(c + k)); //part2;
            }

            for(k=1;k<=(*nchar )*(*nwords-1);k++)
            {
                printf(" ");
            }
              if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                            pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
        }
        // part 2 done!!!

      //  else if ((i > (*nwords)) && (i < ((2 * (*nwords)))))
      else if ((i > (*nwords)) && (i < ( (*nwords)+(3))))
        {

            for (j = 1; j <= 2; j++)
            {
                for (k = 0; k < (*nchar); k++)
                {
                    printf("%c", *(c + k)); //part3;
                }
            if( j!=2)
            {
                for (k = 1; k < spaceG; k++)
                {
                    printf(" ");
                }
            }
            }
               if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                            pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
        }
        // part 3 done!!!

        // else if (i == ((2 * (*nwords))))
         else if (i == (((3)+(*nwords))))
         {
            spaceG = (((*nwords - 1) * (*nchar)) + ((middleG) * (*nwords - 1))) + 1;
            for (j = 1; j <= (*nwords); j++)
            {
                // deleting code from 932 to 1105
                

               // else if( )
               // {   
                    
                    for (k = 0; k < (*nchar); k++)
                    {
                        printf("%c", *(c + k));
                    }
                    for (k = 1; k <= middleG; k++)
                    {
                        printf("-");
                    }

               //    }
               
            }

                if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                            pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
                
                
            
         }


         else if(i>((3)+ (*nwords)))
         {
            for(k=1;k<= (*nchar) *(*nwords-1) ;k++)
            {
                printf(" ");
            }
             for (k = 0; k < (*nchar); k++)
            {
                printf("%c", *(c + k));
            }

                if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                            pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}


         }
    }
  //  printf("\n\n");
}  

void patternA(int *nwords , int *nchar,int *n,char *c,int *m ,int Re_no,int pseudoI)
{
    
    int i, k, j = 0, middleE, rowE, spaceU, middleU, middleG, spaceG, middleA, spaceA, rowA,
              middleN, spaceN, rowN, middleH, spaceH, spaceP, middleP, spaceW, spaceY, middleY, rowR, spaceR, middleR, nspace, k1;

    // m is main.

    char pattern;
    *m=*m+1;

    if ((*nwords) <= 2)
    {
        if ((*nwords) == 2)
        {
            *nwords = *nwords + 1;
        }
        else if (*nwords == 1)
        {
            *nwords = *nwords + 2;
        }
        
    }
    // middleA = nchar /2;
    middleA = 0;
    //  spaceA = nchar[n];
    spaceA = (*nchar);

    if (*nchar % 2 != 0)
    {
        //  middleA+=1;
        spaceA = spaceA + 1;
    }

    for (i = pseudoI; i <= (2 * (*nwords)); i++)
    {
        if (i == 1)
        {
            for (j = 1; j <= (*nwords); j++)
            {
                // for( k=1; k<= middleA ; k++)
                // {
                //     printf(" ");
                // }
                for (k = 0; k < (*nchar); k++)
                {
                    printf("%c", *(c + k));
                }
                if( j!=2)
                {
                for (k = 1; k <= middleA; k++)
                {
                    printf(" ");
                }
                }
            }
                 if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                            pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
        }

        else if( i == (*nwords))
        {
           
            for( j=1 ; j<=(*nwords) ;j++)
            {
                for(k=0; k<(*nchar) ;k++)
                {
                    printf("%c",*(c+k));
                }

                // if( (j==1) || ( j == (nwords-1)) )
                // {
                //     for(k=1;k<=spaceA ;k++)
                //     {
                //         printf(" ");
                //     }
                // }
                // else
               // {
                if(j!= (*nwords))
                {
                    for(k=1;k<=middleA ;k++)
                    {
                        printf(" ");
                    }

                }
              //  }

            }
               if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                            pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
        }
        else
        {
            // rowA=(((nwords-2)*(nchar)) +(2*spaceA)+((nwords-3)*(middleA)));
            rowA = (((*nwords - 2) * (*nchar) + ((*nwords - 1) * (middleA))));

            for (j = 1; j <= 2; j++)
            {
                for (k = 0; k < (*nchar); k++)
                {
                    printf("%c", *(c + k));
                }
                k = 1;
                if(j!=2)
                {
                for (k = 1; k <= rowA; k++)
                {
                    printf(" ");
                }
                }
            }
             if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                            pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
        }
    }

   // printf("\n\n");

    
}

void patternW(int *nwords , int *nchar,int *n,char *c,int *m ,int Re_no,int pseudoI)
{
   

     int i, k, j = 0, middleE, rowE, spaceU, middleU, middleG, spaceG, middleA, spaceA, rowA,
              middleN, spaceN, rowN, middleH, spaceH, spaceP, middleP, spaceW, spaceY, middleY, rowR, spaceR, middleR, nspace, k1;

    // m is main.

    char pattern;
    *m=*m+1;

   





            if( *nwords <= 3)
            {
                if(*nwords == 3)
                {
                    *nwords=*nwords+1;
                }
                else if( *nwords == 2)
                {
                    *nwords=*nwords+2;
                }

                else if( *nwords == 1)
                {
                    *nwords=*nwords+3;
                }

            }
                // no need of middleH variable to declare;
              //  spaceW=2*(*nwords+1)+2*(*nchar);
              spaceW=2*(*nchar)+2*(*nwords);

                for(i=pseudoI ; i<= 2*(*nwords) ; i++ )
                {
                    if( i>= *nwords +2)
                    {
                        for(j=1 ;j<=4 ; j++)
                        {
                            for( k=0 ;k<*nchar; k++)
                            {
                                printf("%c",*(c+k));

                            }
                            if(j == 2)
                            {
                                for(k=1 ;k<=2*(i-(*nwords)); k++)
                                {
                                    printf(" ");
                                }
                            }
                            else if( j!=4 && j!=2)
                            {
                                for( k=1 ;k<=(2*(*nwords))-i ; k++)
                                {
                                    printf(" ");
                                }
                            }
                        }
                if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                            pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
                    }

                    else if( i == *nwords +1)
                    {
                        for( j=1 ;j<=3 ; j++)
                        {
                            for( k=0 ;k<*nchar; k++)
                            {
                                printf("%c",*(c+k));

                            }
                            if(j !=3)
                            { 
                                
                            //     if( *nchar % 2 != 0)
                            // {

                            // }
                                for(k=1 ;k<= (spaceW-*nchar)/2; k++)
                                {
                                    printf(" ");
                                }
                                if((*nchar%2 != 0)  && (j==2))
                                {
                                    printf(" ");
                                }
                              
                            }
                        }

                            if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                            pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
                    }

                    else 
                    {
                        for( j=1 ;j<=2 ;j++)
                        {
                            for( k=0 ;k<*nchar; k++)
                            {
                                printf("%c",*(c+k));

                            }

                            if(j != 2)
                            {
                                for(k=1 ;k<=spaceW; k++)
                                {
                                    printf(" ");
                                }
                            }
                            
                        }
                         if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                            pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
                    }
 
                 }
               
        // }

}

void patternH(int *nwords , int *nchar,int *n,char *c,int *m ,int Re_no,int pseudoI)
{


     int i, k, j = 0, middleE, rowE, spaceU, middleU, middleG, spaceG, middleA, spaceA, rowA,
              middleN, spaceN, rowN, middleH, spaceH, spaceP, middleP, spaceW, spaceY, middleY, rowR, spaceR, middleR, nspace, k1;

    // m is main.

    char pattern;
    *m=*m+1;
     if( *nwords <= 2)
            {
                if(*nwords == 2)
                {
                    *nwords=*nwords+1;
                }
                else if( *nwords == 1)
                {
                    *nwords=*nwords+2;
                }

            }
                middleH=0;
                // middleH=nchar/2;
                // if( nchar % 2!=0)
                // {
                //     middleH+=1;
                // }
                spaceH=(((*(nwords)-2)* (*nchar)) + ((*nwords-1)*middleH) );

                for(i=pseudoI ;i<=((2*(*nwords))  ) ;i++)
                {
                    if( i==( *nwords))
                    {
                        for(j=1 ;j<=*nwords ;j++)
                        {
                            for(k=0 ;k<*nchar; k++)
                            {
                                printf("%c",*(c+k));
                            }
                            if(j!= *nwords)
                            {
                            for(k=1 ;k<=middleH; k++)
                            {
                                printf(" ");
                            }
                            }
                        }

                         if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                            pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
                    }

                    else
                    {
                        for(j=1 ; j<=2 ; j++)
                        {
                            for(k=0 ;k<*nchar; k++)
                            {
                                printf("%c",*(c+k));
                            }

                            if(j!= 2)
                            {
                            for(k=1 ;k<=spaceH; k++)
                            {
                                printf(" ");
                            }
                            }
                        }

                         if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                            pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
                    }

                } 
               

}

void patternP(int *nwords , int *nchar,int *n,char *c,int *m ,int Re_no,int pseudoI)
{


     int i, k, j = 0, middleE, rowE, spaceU, middleU, middleG, spaceG, middleA, spaceA, rowA,
              middleN, spaceN, rowN, middleH, spaceH, spaceP, middleP, spaceW, spaceY, middleY, rowR, spaceR, middleR, nspace, k1;

    // m is main.

    char pattern;
    *m=*m+1;
  if( *nwords <= 2)
            {
                if(*nwords == 2)
                {
                    *nwords=*nwords+1;
                }
                else if( *nwords == 1)
                {
                    *nwords=*nwords+2;
                }
            }
                middleP=0;
                // middleP=nchar/2;
            
                // if( nchar % 2!=0)
                // {
                //     middleP+=1;
                // }


                spaceP=(( *nwords -2) * (*nchar))+((*nwords -1)*(middleP));

                for( i=pseudoI ;i<=(2*(*nwords) ) ; i++)
                {
                    if((i == 1) || ( i == (*nwords)))
                    {
                        for(j=1 ;j<=*nwords ;j++)
                        {
                            for(k=0 ;k<*nchar ;k++)
                            {
                                printf("%c",*(c+k));
                            }

                            if( j!=*nwords)
                            {
                                for(k=1 ;k<=middleP ;k++)
                            {
                                printf(" ");
                            }
                            }

                           
                        }

                   if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                            pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
                    }

                    else if( (i>1 ) && ( i< *nwords ))
                    {
                        for( j=1 ;j<=2 ;j++)
                        {
                            for(k=0 ;k<*nchar ;k++)
                            {
                                printf("%c",*(c+k));
                            }

                            if( j!=2)
                            {
                                for(k=1 ;k<=spaceP ;k++)
                            {
                                printf(" ");
                            }
                            }
                                                        
                        }

                         if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                            pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
                    }

                    else 
                    {
                        for(k=0 ;k<*nchar ;k++)
                            {
                                printf("%c",*(c+k));
                            }

                            for(k=1 ;k<=spaceP+(*nchar) ;k++)
                            {
                                printf(" ");
                            }

                              if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                            pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}

                    }
                }

                

}

void patternY(int *nwords , int *nchar,int *n,char *c,int *m ,int Re_no,int pseudoI)
{
       int i, k, j = 0, middleE, rowE, spaceU, middleU, middleG, spaceG, middleA, spaceA, rowA,
              middleN, spaceN, rowN, middleH, spaceH, spaceP, middleP, spaceW, spaceY, middleY, rowR, spaceR, middleR, nspace, k1;

    // m is main.

    char pattern;
    *m=*m+1;

          if( *nwords <= 3)
            {
                if(*nwords == 2)
                {
                    *nwords=*nwords+2;
                }
                else if( *nwords == 1)
                {
                    *nwords=*nwords+3;
                }
                else if( *nwords == 3)
                {
                    *nwords=*nwords+1;
                }
            }
                // for(i=pseudoI,middleY=2*(pseudoI)-1 ; i<= ( *nwords+*nchar+1) ; i++)
                   for(i=pseudoI,middleY=2*(pseudoI)-1 ; i<= 2*( *nwords) ; i++,middleY+=2)
                {
                    if( i< *nwords)
                    {
                        spaceY =(3*(*nwords ))-5-middleY;
                    //  printf("%d",spaceY);
                    

                    
                        for(j=1 ;j<=2 ; j++)
                        {
                            if( (i!= 1 )&& (j==1))
                            {
                                for(k=1 ; k<=(i-1) ; k++)
                                {
                                    printf(" ");
                                }
                            }
                            for( k=0 ; k<*nchar ; k++)
                            {
                                printf("%c",*(c+k));
                            }
                            if( j!=2)
                            {
                                for( k=1 ;k<=spaceY ; k++)
                                {
                                    printf(" ");
                                }
                            } 
                             if( j==2)
                            {
                                for(k=1 ; k<=(i-1) ; k++)
                                {
                                    printf(" ");
                                }
                            }
                        }
                       if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                            pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
                    }

                    else
                    {
                        
                            for(k=1 ;k<= ((*nwords-1) + (*nchar + (*nwords-i))) ; k++)
                            {
                                printf(" ");
                            }
                            for( k=0 ; k<*nchar ; k++)
                            {
                                printf("%c",*(c+k));
                            }
                             for(k=1 ;k<=(2*(*nchar)+(*nwords+2))- ((*nwords-1) + (*nchar + (*nwords-i)))-(*nchar) ; k++)
                            {
                                printf(" ");
                            }

                          if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                            pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
                        
                    }

                }
                


}

void patternI(int *nwords , int *nchar,int *n,char *c,int *m ,int Re_no,int pseudoI)
{
       int i, k, j = 0, middleE, rowE, spaceU, middleU, middleG, spaceG, middleA, spaceA, rowA,
              middleN, spaceI,spaceT,spaceS,spaceB,spaceN, rowN, middleH, spaceH, spaceP, middleP, spaceW, spaceY, middleY, rowR, spaceR, middleR, nspace, k1;

    // m is main.

    char pattern;
    *m=*m+1;

          if( *nwords <= 3)
            {
                if(*nwords == 2)
                {
                    *nwords=*nwords+2;
                }
                else if( *nwords == 1)
                {
                    *nwords=*nwords+3;
                }
                else if( *nwords == 3)
                {
                    *nwords=*nwords+1;
                }
            }
   spaceI=(( *nwords)*( *nchar)) - ( *nchar);



  for(i=pseudoI;i<=2*( *nwords);i++)
  {
    if(i==1 || i== 2*( *nwords))
    {
        for(j=1;j<= *nwords;j++)
        {
            //
           for( k=0 ; k<*nchar ; k++)
            {
               printf("%c",*(c+k));
            }
        }
       
                     if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                            pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
    }

     else
    {
        for(j=1;j<=2;j++)
        {
            for(k=1;k<=(spaceI)/2;k++)
            {
                printf(" ");
                
            }
            if( *nchar%2 !=0 && j==2)
                {
                    printf(" ");
                }
            if(j!=2)
            {
            for( k=0 ; k<*nchar ; k++)
            {
               printf("%c",*(c+k));
            }
            }
        }
               if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                            pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
       

    }


  }






}
     
void patternT(int *nwords , int *nchar,int *n,char *c,int *m ,int Re_no,int pseudoI)
{
       int i, k, j = 0, middleE, rowE, spaceU, middleU, middleG, spaceG, middleA, spaceA, rowA,
              middleN, spaceI,spaceT,spaceS,spaceB,spaceN, rowN, middleH, spaceH, spaceP, middleP, spaceW, spaceY, middleY, rowR, spaceR, middleR, nspace, k1;

    // m is main.

    char pattern;
    *m=*m+1;

          if( *nwords <= 3)
            {
                if(*nwords == 2)
                {
                    *nwords=*nwords+2;
                }
                else if( *nwords == 1)
                {
                    *nwords=*nwords+3;
                }
                else if( *nwords == 3)
                {
                    *nwords=*nwords+1;
                }
            } 


   spaceT=((*nwords)*(*nchar))-(*nchar);    

  for(i=pseudoI;i<=2*( *nwords);i++)
  {
    if(i==1 )
    {
        for(j=1;j<= *nwords;j++)
        {
            //
           for( k=0 ; k<*nchar ; k++)
            {
               printf("%c",*(c+k));
            }
        }
       
                           if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                            pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
    }
    else
    {
        for(j=1;j<=2;j++)
        {
            for(k=1;k<=(spaceT)/2;k++)
            {
                printf(" ");
                
            }
            if( *nchar%2 !=0 && j==2)
                {
                    printf(" ");
                }
            if(j!=2)
            {
            for( k=0 ; k<*nchar ; k++)
            {
               printf("%c",*(c+k));
            }
            }
        }
                   if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                            pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
    }

  }


}

void patternS(int *nwords , int *nchar,int *n,char *c,int *m ,int Re_no,int pseudoI)
{
       int i, k, j = 0, middleE, rowE, spaceU, middleU, middleG, spaceG, middleA, spaceA, rowA,
              middleN, spaceI,spaceT,spaceS,spaceB,spaceN, rowN, middleH, spaceH, spaceP, middleP, spaceW, spaceY, middleY, rowR, spaceR, middleR, nspace, k1;

    // m is main.

    char pattern;
    *m=*m+1;

          if( *nwords <= 3)
            {
                if(*nwords == 2)
                {
                    *nwords=*nwords+2;
                }
                else if( *nwords == 1)
                {
                    *nwords=*nwords+3;
                }
                else if( *nwords == 3)
                {
                    *nwords=*nwords+1;
                }
            } 


             spaceS=(( *nwords)*( *nchar)) - ( *nchar);
  for(i=pseudoI;i<=2*( *nwords);i++)
  {
    if(i==1 || i== ( *nwords) || i == (2 *( *nwords)) )
    {
        for(j=1;j<= *nwords;j++)
        {
                  for( k=0 ; k<*nchar ; k++)
            {
               printf("%c",*(c+k));
            }
        }
       // printf("\n");
    }
    else if( i>1 && i< *nwords)
    {
      
           
                 for( k=0 ; k<*nchar ; k++)
            {
               printf("%c",*(c+k));
            }
            

        for( j=1 ;j<=spaceS ;j++)
        {
            printf(" ");
        }
       // printf("\n");
    }

      else if( i> *nwords  && i< 2*( *nwords))
    {
         for( j=1 ;j<=spaceS ;j++)
        {
            printf(" ");
        }
        
     
            for( k=0 ; k<*nchar ; k++)
            {
               printf("%c",*(c+k));
            }
            
      

      
       // printf("\n");
    }
             if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                            pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
   

  }






}
    
 void patternM(int *nwords , int *nchar,int *n,char *c,int *m ,int Re_no,int pseudoI)
{
   

     int i, k, j = 0, middleE, rowE, spaceU, middleU, middleG, spaceG, middleA, spaceA, rowA,
              middleN, spaceN, rowN,spaceM ,middleH, spaceH, spaceP, middleP, spaceW, spaceY, middleY, rowR, spaceR, middleR, nspace, k1;

    // m is main.

    char pattern;
    *m=*m+1;

   





            if( *nwords <= 3)
            {
                if(*nwords == 3)
                {
                    *nwords=*nwords+1;
                }
                else if( *nwords == 2)
                {
                    *nwords=*nwords+2;
                }

                else if( *nwords == 1)
                {
                    *nwords=*nwords+3;
                }

            }
                // no need of middleH variable to declare;
              //  spaceW=2*(*nwords+1)+2*(*nchar);
              spaceM=2*(*nchar)+2*(*nwords);

                for(i=(2*(*nwords)- pseudoI+1) ; i>= 1 ; i-- )
                {
                    if( i>= *nwords +2)
                    {
                        for(j=1 ;j<=4 ; j++)
                        {
                            for( k=0 ;k<*nchar; k++)
                            {
                                printf("%c",*(c+k));

                            }
                            if(j == 2)
                            {
                                for(k=1 ;k<=2*(i-(*nwords)); k++)
                                {
                                    printf(" ");
                                }
                            }
                            else if( j!=4 && j!=2)
                            {
                                for( k=1 ;k<=(2*(*nwords))-i ; k++)
                                {
                                    printf(" ");
                                }
                            }
                        }
                        pseudoI=(2*(*nwords)+1)-i;
                  if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                           

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
                    }

                    else if( i == *nwords +1)
                    {
                        for( j=1 ;j<=3 ; j++)
                        {
                            for( k=0 ;k<*nchar; k++)
                            {
                                printf("%c",*(c+k));

                            }
                            if(j !=3)
                            { 
                                
                            
                                for(k=1 ;k<= (spaceM-*nchar)/2; k++)
                                {
                                    printf(" ");
                                }
                                if((*nchar%2 != 0)  && (j==2))
                                {
                                    printf(" ");
                                }
                              
                            }
                        }

                

             // pseudoI=i;
              pseudoI=(2*(*nwords)+1)-i;
                  if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                           

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
                    }

                    else 
                    {
                        for( j=1 ;j<=2 ;j++)
                        {
                            for( k=0 ;k<*nchar; k++)
                            {
                                printf("%c",*(c+k));

                            }

                            if(j != 2)
                            {
                                for(k=1 ;k<=spaceM; k++)
                                {
                                    printf(" ");
                                }
                            }
                            
                        }
                    

           
              pseudoI=(2*(*nwords)+1)-i;
                    if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                           

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
                    }
 
                 }
               
        // }

}   

void patternO(int *nwords,int *nchar,int *n,char *c,int *m, int Re_no,int pseudoI)
{


    int i, k, j = 0, middleE, rowE, spaceU, middleU, middleG, spaceG, middleA, spaceA, rowA,
    middleN, spaceN, rowN,spaceO,spaceM, middleH,middleO, spaceH, spaceP, middleP, spaceW, spaceY, middleY, rowR, spaceR, middleR, nspace, k1;

    // m is main.
    *m=*m+1;

    char pattern;





     if( *nwords <= 2)
            {
                if(*nwords == 2)
                {
                    *nwords=*nwords+1;
                }
                else if( *nwords == 1)
                {
                    *nwords=*nwords+2;
                }
           
            }
           
            middleO = 0;
           
            for (i = pseudoI; i <= ((2 * (*nwords))); i++)
            {
                if ((i == 1) || (i == ((2 * (*nwords)))))
                {
                    for (j = 1; j <= *nwords; j++)
                    {
                        for (k = 0; k < *nchar; k++)
                        {
                            printf("%c", *(c+k));
                        }
                        if( j!= *nwords)
                        {
                        for (k = 1; k <= middleO; k++)
                        {
                            printf(" ");
                        }
                        }
                        if( j== *nwords)
                        {
                              if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                        }
                    }
                   // printf("\n\n");
                }

                else
                {
                    spaceO = (((*nwords - 2) * (*nchar)) + ((*nwords - 1) * middleO));
                    for (j = 1; j <= 2; j++)
                    {
                        for (k = 0; k < *nchar; k++)
                        {
                            printf("%c", *(c+k));
                        }
                        if( j!= 2)
                        {
                            for (k = 1; k <= spaceO; k++)
                            {
                                printf(" ");
                            }
                        }
                        if( j==2)
                        {
                            if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                        }
                    }
                   // printf("\n");
                }
                      
             
                            pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
            }

}  

void patternC(int *nwords,int *nchar,int *n,char *c,int *m, int Re_no,int pseudoI)
{


    int i, k, j = 0, middleE, rowE, spaceU, middleU, middleG, spaceG, middleA, spaceA, rowA,
    middleN, spaceN, rowN,spaceO,spaceM, middleH,middleO,middleC,spaceC, spaceH, spaceP, middleP, spaceW, spaceY, middleY, rowR, spaceR, middleR, nspace, k1;

    // m is main.
    *m=*m+1;

    char pattern;





     if( *nwords <= 2)
            {
                if(*nwords == 2)
                {
                    *nwords=*nwords+1;
                }
                else if( *nwords == 1)
                {
                    *nwords=*nwords+2;
                }
           
            }
           middleC=0;
           
           
            for (i = pseudoI; i <= ((2 * (*nwords))); i++)
            {
                if ((i == 1) || (i == ((2 * (*nwords)))))
                {
                    for (j = 1; j <= *nwords; j++)
                    {
                        for (k = 0; k < *nchar; k++)
                        {
                            printf("%c", *(c+k));
                        }
                        if( j!= *nwords)
                        {
                        for (k = 1; k <= middleC; k++)
                        {
                            printf("-");
                        }
                        }
                        if( j== *nwords)
                        {
                            if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                        }
                    }
                   // printf("\n\n");
                }

                else
                {
                   // spaceC = (((*nwords - 2) * (*nchar)) + ((*nwords - 1) * middleC));
                    spaceC = (*nwords * (*nchar))-*nchar;
                    for (j = 1; j <= 2; j++)
                    {   if(j!=2)
                       {
                           for (k = 0; k < *nchar; k++)
                           {
                              printf("%c", *(c+k));
                           }
                       }
                        if( j!= 2)
                        {
                            for (k = 1; k <= spaceC; k++)
                            {
                                printf(" ");
                            }

                            printf(" "); // since this code is derived from O code.
                        }
                        if( j==2)
                        {
                            if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                        }
                    }
                   // printf("\n");
                }
                       
                  
                            pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
            }

}  

 void patternE(int *nwords,int *nchar,int *n,char *c,int *m, int Re_no,int pseudoI)
{


    int i, k, j = 0, middleE, rowE, spaceU, middleU, middleG, spaceG, middleA, spaceA, rowA,
    middleN, spaceN,spaceE, rowN,spaceO,spaceM, middleH,middleO,middleC,spaceC, spaceH, spaceP, middleP, spaceW, spaceY, middleY, rowR, spaceR, middleR, nspace, k1;

    // m is main.
    *m=*m+1;

    char pattern;





     if( *nwords <= 2)
            {
                if(*nwords == 2)
                {
                    *nwords=*nwords+1;
                }
                else if( *nwords == 1)
                {
                    *nwords=*nwords+2;
                }
           
            }
           middleE=0;
           
           
            for (i = pseudoI; i <= ((2 * (*nwords))); i++)
            {
                if ((i == 1) ||(i ==  (*nwords))|| (i == ((2 * (*nwords)))))
                {
                    for (j = 1; j <= *nwords; j++)
                    {
                        for (k = 0; k < *nchar; k++)
                        {
                            printf("%c", *(c+k));
                        }
                        if( j!= *nwords)
                        {
                        for (k = 1; k <= middleE; k++)
                        {
                            printf(" ");
                        }
                        }
                        if( j== *nwords)
                        {
                            if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                        }
                    }
                   // printf("\n\n");
                }

                else
                {
                    spaceE = (((*nwords - 2) * (*nchar)) + ((*nwords - 1) * middleE));
                    for (j = 1; j <= 2; j++)
                    {   if(j!=2)
                       {
                           for (k = 0; k < *nchar; k++)
                           {
                              printf("%c", *(c+k));
                           }
                       }
                        if( j!= 2)
                        {
                            for (k = 1; k <= spaceE; k++)
                            {
                                printf(" ");
                            }

                            for (k = 0; k<*nchar ; k++)
                            {
                                printf(" ");
                            } // since this code is derived from O code.
                        }
                        if( j==2)
                        {
                            
                          if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }

            }
}
}
                            pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
            }

} 

 void patternF(int *nwords,int *nchar,int *n,char *c,int *m, int Re_no,int pseudoI)
{


    int i, k, j = 0, middleE, rowE, spaceU, middleU, middleG, spaceG, middleA, spaceA, rowA,
    middleN, spaceN,spaceE,middleF,spaceF, rowN,spaceO,spaceM, middleH,middleO,middleC,spaceC, spaceH, spaceP, middleP, spaceW, spaceY, middleY, rowR, spaceR, middleR, nspace, k1;

    // m is main.
    *m=*m+1;

    char pattern;





     if( *nwords <= 2)
            {
                if(*nwords == 2)
                {
                    *nwords=*nwords+1;
                }
                else if( *nwords == 1)
                {
                    *nwords=*nwords+2;
                }
           
            }
           middleF=0;
           
           
            for (i = pseudoI; i <= ((2 * (*nwords))); i++)
            {
                if ((i == 1) ||(i ==  (*nwords)))
                {
                    for (j = 1; j <= *nwords; j++)
                    {
                        for (k = 0; k < *nchar; k++)
                        {
                            printf("%c", *(c+k));
                        }
                        if( j!= *nwords)
                        {
                        for (k = 1; k <= middleF; k++)
                        {
                            printf(" ");
                        }
                        }
                        if( j== *nwords)
                        {
                            if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                        }
                    }
                   // printf("\n\n");
                }

                else
                {
                    //spaceF = (((*nwords - 2) * (*nchar)) + ((*nwords - 1) * middleF));
                    spaceF=(*nwords *(*nchar))-( *nchar);
                    for (j = 1; j <= 2; j++)
                    {   if(j!=2)
                       {
                           for (k = 0; k < *nchar; k++)
                           {
                              printf("%c", *(c+k));
                           }
                       }
                        if( j!= 2)
                        {
                            for (k = 1; k <= spaceF; k++)
                            {
                                printf(" ");
                            }

                            printf(" "); // since this code is derived from O code.
                        }
                        if( j==2)
                        {
                           
                       if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }


            }
}
}
                            pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
            }

} 

 void patternL(int *nwords,int *nchar,int *n,char *c,int *m, int Re_no,int pseudoI)
{


    int i, k, j = 0, middleE, rowE, spaceU, middleU, middleG, spaceG, middleA, spaceA, rowA,
    middleN, spaceN,spaceE,middleL,spaceL, rowN,spaceO,spaceM, middleH,middleO,middleC,spaceC, spaceH, spaceP, middleP, spaceW, spaceY, middleY, rowR, spaceR, middleR, nspace, k1;

    // m is main.
    *m=*m+1;

    char pattern;





     if( *nwords <= 2)
            {
                if(*nwords == 2)
                {
                    *nwords=*nwords+1;
                }
                else if( *nwords == 1)
                {
                    *nwords=*nwords+2;
                }
           
            }
           middleL=0;
           
           
            for (i = pseudoI; i <= ((2 * (*nwords))); i++)
            {
                if ( (i == ((2 * (*nwords)))))
                {
                    for (j = 1; j <= *nwords; j++)
                    {
                        for (k = 0; k < *nchar; k++)
                        {
                            printf("%c", *(c+k));
                        }
                        if( j!= *nwords)
                        {
                        for (k = 1; k <= middleL; k++)
                        {
                            printf("-");
                        }
                        }
                        if( j== *nwords)
                        {
                            
                      if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                        }
                    }
                   // printf("\n\n");
                }

                else
                {
                   // spaceL = (((*nwords - 2) * (*nchar)) + ((*nwords - 1) * middleL));
                   spaceL=(((*nchar) * (*nwords))- (*nchar));
                    for (j = 1; j <= 2; j++)
                    {   if(j!=2)
                       {
                           for (k = 0; k < *nchar; k++)
                           {
                              printf("%c", *(c+k));
                           }
                       }
                        if( j!=2)
                        {
                            for (k = 1; k <= spaceL; k++)
                            {
                                printf(" ");
                            }

                        }



                         //   printf(" "); // since this code is derived from O code.
                      
                        if( j==2)
                        {
                           
                    
                      if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }


            }
}
}
                            pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
            }

} 

void patternQ(int *nwords , int *nchar,int *n,char *c,int *m ,int Re_no,int pseudoI)
{


     int i, k, j = 0, middleE, rowE, spaceU, middleU, middleG, spaceG, middleA, spaceA, rowA,
              middleN, spaceN, rowN, middleH, spaceH, spaceP,spaceQ,middleQ, middleP, spaceW, spaceY, middleY, rowR, spaceR, middleR, nspace, k1;

    // m is main.

    char pattern;
    *m=*m+1;
  if( *nwords <= 2)
            {
                if(*nwords == 2)
                {
                    *nwords=*nwords+1;
                }
                else if( *nwords == 1)
                {
                    *nwords=*nwords+2;
                }
            }
                middleQ=0;
                // middleP=nchar/2;
            
                // if( nchar % 2!=0)
                // {
                //     middleP+=1;
                // }


                spaceQ=(( *nwords -2) * (*nchar))+((*nwords -1)*(middleQ));

                for( i=pseudoI ;i<=(2*(*nwords) ) ; i++)
                {
                    if((i == 1) || ( i == (*nwords)))
                    {
                        for(j=1 ;j<=*nwords ;j++)
                        {
                            for(k=0 ;k<*nchar ;k++)
                            {
                                printf("%c",*(c+k));
                            }

                            if( j!=*nwords)
                            {
                                for(k=1 ;k<=middleQ ;k++)
                            {
                                printf(" ");
                            }
                            }

                           
                        }
   if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                            pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
                    }

                    else if( (i>1 ) && ( i< *nwords ))
                    {
                        for( j=1 ;j<=2 ;j++)
                        {
                            for(k=0 ;k<*nchar ;k++)
                            {
                                printf("%c",*(c+k));
                            }

                            if( j!=2)
                            {
                                for(k=1 ;k<=spaceQ ;k++)
                            {
                                printf(" ");
                            }
                            }
                                                        
                        }

                               if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                            pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
                    }

                    else 
                    {

                        for(k=1 ;k<=spaceQ+(*nchar) ;k++)
                            {
                                printf(" ");
                            }
                        for(k=0 ;k<*nchar ;k++)
                            {
                                printf("%c",*(c+k));
                            }

                            
                              if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                            pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
                }
                }

                

}

void patternB(int *nwords,int *nchar,int *n,char *c,int *m, int Re_no,int pseudoI)
{


    int i, k, j = 0, middleE, rowE, spaceU, middleU, middleG, spaceG, middleA, spaceA, rowA,
    middleN, spaceN, rowN,spaceO,spaceM,spaceB,middleB, middleH,middleO, spaceH, spaceP, middleP, spaceW, spaceY, middleY, rowR, spaceR, middleR, nspace, k1;

    // m is main.
    *m=*m+1;

    char pattern;





     if( *nwords <= 2)
            {
                if(*nwords == 2)
                {
                    *nwords=*nwords+1;
                }
                else if( *nwords == 1)
                {
                    *nwords=*nwords+2;
                }
           
            }
           
            middleB = 0;
           
            for (i = pseudoI; i <= ((2 * (*nwords))); i++)
            {
                if ((i == 1) || (i == ((2 * (*nwords)))) || (i == (((*nwords))))  || (i == (((1+*nwords)))) )
                {
                    for (j = 1; j <= *nwords; j++)
                    { 
                     if( j!=(*nwords))
                     {
                        for (k = 0; k < *nchar; k++)
                        {
                            printf("%c", *(c+k));
                        }
                     }
                     if( j==(*nwords))
                     { 
                       for (k = 0; k < (*nchar/2)+1; k++)
                        {
                            printf("%c", *(c+k));
                        }
                        for (k = 0; k < (*nchar/2 )-1; k++)
                        {
                            printf(" ");
                        }
                         if(*nchar %2!=0)
                        {
                            printf(" ");
                        }
                       
                          
                        
                     }
                        if( j!= *nwords)
                        {
                        for (k = 1; k <= middleB; k++)
                        {
                            printf(" ");
                        }
                        }
                        if( j== *nwords)
                        {
                            if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                        }
                    }
                   // printf("\n\n");
                }

                else
                {
                    spaceB = (((*nwords - 2) * (*nchar)) + ((*nwords - 1) * middleB));
                    for (j = 1; j <= 2; j++)
                    {
                        for (k = 0; k < *nchar; k++)
                        {
                            printf("%c", *(c+k));
                        }
                        if( j!= 2)
                        {
                            for (k = 1; k <= spaceB; k++)
                            {
                                printf(" ");
                            }
                        }
                        if( j==2)
                        {
                           
                                     
                          
                   if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                       }
 
                }
            }
                            pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
            }

}  

void patternD(int *nwords,int *nchar,int *n,char *c,int *m, int Re_no,int pseudoI)
{


    int i, k, j = 0, middleE, rowE, spaceU, middleU, middleG, spaceG, middleA, spaceA, rowA,
    middleN, spaceN, rowN,spaceO,spaceM,spaceB,middleB,spaceD,middleD,
     middleH,middleO, spaceH, spaceP, middleP, spaceW, spaceY, middleY, rowR, spaceR, middleR, nspace, k1;

    // m is main.
    *m=*m+1;

    char pattern;





     if( *nwords <= 2)
            {
                if(*nwords == 2)
                {
                    *nwords=*nwords+1;
                }
                else if( *nwords == 1)
                {
                    *nwords=*nwords+2;
                }
           
            }
           
            middleD = 0;
           
            for (i = pseudoI; i <= ((2 * (*nwords))); i++)
            {
                if ((i == 1) || (i == ((2 * (*nwords))))  )
                {
                    for (j = 1; j <= *nwords; j++)
                    { 
                     if( j!=(*nwords))
                     {
                        for (k = 0; k < *nchar; k++)
                        {
                            printf("%c", *(c+k));
                        }
                     }
                     if( j==(*nwords))
                     { 
                       for (k = 0; k < (*nchar/2); k++)
                        {
                            printf("%c", *(c+k));
                        }
                        for (k = 0; k < (*nchar/2); k++)
                        { if( k< *nchar/4)
                        {
                            printf(".");
                        }
                        else
                        {
                            printf(" ");
                        }

                        }
                        if(*nchar %2!=0)
                        {
                            printf(" ");
                        }
                       
                          
                        
                     }
                        if( j!= *nwords)
                        {
                        for (k = 1; k <= middleD; k++)
                        {
                            printf(" ");
                        }
                        }
                        if( j== *nwords)
                        {
                              if(( *nchar - Re_no -1==0) && (*nchar !=1))
                            {
                                return;
                            }
                        }
                    }
                   // printf("\n\n");
                }

                else
                {
                    spaceD = (((*nwords - 2) * (*nchar)) + ((*nwords - 1) * middleD));
                    for (j = 1; j <= 2; j++)
                    {
                        for (k = 0; k < *nchar; k++)
                        {
                            printf("%c", *(c+k));
                        }
                        if( j!= 2)
                        {
                            for (k = 1; k <= spaceD; k++)
                            {
                                printf(" ");
                            }
                        }
                        if( j==2)
                        {
                              if(( *nchar - Re_no -1==0) && (*nchar !=1))
                            {
                                return;
                            }
                        }
                    }
                   // printf("\n");
                }
                    
                   if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                            pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
            }



}

void patternj(int *nwords , int *nchar,int *n,char *c,int *m ,int Re_no,int pseudoI)
{
       int i, k, j = 0, middleE, rowE, spaceU, middleU, middleG, spaceG, middleA, spaceA, rowA,
              middleN, spaceI,spaceT,spaceJ,spaceS,spaceB,spaceN, rowN, middleH, spaceH, spaceP, middleP, spaceW, spaceY, middleY, rowR, spaceR, middleR, nspace, k1;

    // m is main.


    char pattern;
    *m=*m+1;

          if( *nwords <= 3)
            {
                if(*nwords == 2)
                {
                    *nwords=*nwords+2;
                }
                else if( *nwords == 1)
                {
                    *nwords=*nwords+3;
                }
                else if( *nwords == 3)
                {
                    *nwords=*nwords+1;
                }
            }
   spaceJ=(( *nwords)*( *nchar)) - ( *nchar);



  for(i=pseudoI;i<=2*( *nwords);i++)
  {
    if(i==1 || i== 2*( *nwords))
    {
      if(i==1)
        {
          for(j=1;j<= *nwords;j++)
        {
            
           for( k=0 ; k<*nchar ; k++)
            {
               printf("%c",*(c+k));
            }
        
        }
        
        }

        else if( i== 2*(*nwords))
        {
          for(j=1;j<= *nwords/2;j++)
        {
            
           for( k=0 ; k<*nchar ; k++)
            {
               printf("%c",*(c+k));
            }
        
        }
          for(j=1;j<= *nwords/2;j++)
        {
            
           for( k=0 ; k<*nchar ; k++)
            {
               printf(" ");
            }
        
        }


        }
       
                              if(( *nchar - Re_no -1==0) && (*nchar !=1))
                            {
                                return;
                            }
                            pseudoI=i;

                    if(*(c+(*m-Re_no)) !=' ' && *(c+(*m-Re_no)) !='\n' && (*m<*nchar) )
                  // if(*m<2)
                    {
                     printf("\t");
                        
                            Re_no++;
                        
                    patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                                 if( *nchar - Re_no -1==0)
                            {
                                 printf("\n");
                            }
                        
                        // Re_no--;
                        Re_no--;
                        
                         *m=*m-1;
                          if( Re_no!=0 )
                            { return;}
                             }             
                    else
                    { printf("\n");}
    }

  


    else
    {
        for(j=1;j<=2;j++)
        {
            for(k=1;k<=(spaceJ)/2;k++)
            {
                printf(" ");
                
            }
            if( *nchar%2 !=0 && j==2)
                {
                    printf(" ");
                }
            if(j!=2)
            {
            for( k=0 ; k<*nchar ; k++)
            {
               printf("%c",*(c+k));
            }
            }
        }
       
            
                   if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                            pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
    }

  }

}

void patternV(int *nwords , int *nchar,int *n,char *c,int *m ,int Re_no,int pseudoI)
{

     int i, k, j = 0, middleE, rowE, spaceU, middleU, middleG, spaceG, middleA, spaceA, rowA,
              middleN, spaceI,spaceT,spaceJ,spaceS,spaceB,spaceN,inspaceV, rowN, middleH, spaceH, spaceP, middleP, spaceW, spaceY, middleY, rowR, spaceR, middleR, nspace, k1;

    // m is main.


    char pattern;
    *m=*m+1;
   for( i=pseudoI;i<=2*(*nwords);i++)
{
    inspaceV=2*(  2*(*nwords) - i );
    for(j=1;j<=2;j++)
    {
        if(j==1)
        {
            for(k=1;k<=(i-1);k++)
            {
                printf(" ");
            }
        }
        for( k=0 ;k< *nchar;k++)
        {
            printf("%c",*(c+k));
        }
        if(j!=2)
        {
            for(k=1;k<=inspaceV;k++)
            {
                printf(" ");
            }
        }
        else if(j==2)
        {
            for(k=1;k<=(i-1);k++)
            {
                printf(" ");
            }

        }

    }
   
                          
                   if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                            pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
}
}

void patternK(int *nwords , int *nchar,int *n,char *c,int *m ,int Re_no,int pseudoI)
{

    int i, k, j = 0, middleE, rowE, spaceU, middleU, middleG, spaceG, middleA, spaceA, rowA,
              middleN, spaceI,spaceT,spaceJ,spaceS,spaceB,spaceN,inspaceV,inspaceK, rowN, middleH, spaceH, spaceP, middleP, spaceW, spaceY, middleY, rowR, spaceR, middleR, nspace, k1;

    // m is main.


    char pattern;
    *m=*m+1;
   for( i=pseudoI;i<=2*(*nwords);i++)
{
   if( i<= *nwords)
   {
    inspaceK=2*(*nwords-i);
   }
   else if( i>= *nwords+1)
   {
    inspaceK=2*(i-(*nwords+1));
   }
   
    for(j=1;j<=2;j++)
    {
       
        for( k=0 ;k< *nchar;k++)
        {
            printf("%c",*(c+k));
        }
        if(j!=2)
        {
            for(k=1;k<=inspaceK;k++)
            {
                printf(" ");
            }
        }
        else if(j==2)
        {
            for(k=1;k<=(2*(*nwords)-inspaceK)-2;k++)
            {
                printf(" ");
            }

        }

    }
   
                        
                   if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                            pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
}
}

void patternZ(int *nwords , int *nchar,int *n,char *c,int *m ,int Re_no,int pseudoI)
{
// FACING PROBLEM IN Z.
     int i, k, j = 0, middleE, rowE, spaceU, middleU, middleG, spaceG, middleA, spaceA, rowA,
              middleN, spaceI,spaceT,spaceJ,spaceS,spaceB,spaceN,inspaceV,inspaceK,lspaceZ, rowN, middleH, spaceH, spaceP, middleP, spaceW, spaceY, middleY, rowR, spaceR, middleR, nspace, k1;

// m is main.


   char pattern;
     *m=*m+1;



    for( i=pseudoI;i<=2*(*nwords);i++)
{
   
   
        lspaceZ=(2*(*nwords) -1)-(i-1);
        if(i==1 || i==2*(*nwords))
        {  //j<=(2*(*nwords-1)-(lspaceZ/(*nchar))*(*nchar));
        if(i==1)
        {
            for(k=1;k<=(7-(lspaceZ/(*nchar))*(*nchar));k++)
            {
               // printf("=");
                if(*nchar> (7-(lspaceZ/(*nchar))*(*nchar)))
                    printf("%c",*(c+k));
                
                else
                    printf("=");
            }
       }
          //j<=(2*(*nwords)-1)* *nchar)/(*nchar)
          if(i==(2*(*nwords)))
          {
              lspaceZ=(2*(*nwords) -1);
          }
          for(j=1;j<=(lspaceZ+(*nchar))/(*nchar);j++)
          {
             for( k=0 ;k< *nchar;k++)
        {
            printf("%c",*(c+k));
        }

          }

             if(i==(2*(*nwords)))
        {
            for(k=1;k<=(7-(lspaceZ/(*nchar))*(*nchar));k++)
            {
                
                if(*nchar> (7-(lspaceZ/(*nchar))*(*nchar)))
                    printf("%c",*(c+k));
                
                else
                    printf("=");
            }
       }
        }
       
        
        else 
        {
            for(k=1;k<=lspaceZ;k++)
            {
                printf(" ");
            }
                 for( k=0 ;k< *nchar;k++)
        {
            printf("%c",*(c+k));
        }
         for(k=1;k<=(i-1);k++)
            {
                printf(" ");
            }

        }
 
                          
                   if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                            pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
    }
  

}

void patternX(int *nwords , int *nchar,int *n,char *c,int *m ,int Re_no,int pseudoI)
{
    //complete doubt in printing the words in one line,
       int i, k, j = 0, middleE, rowE, spaceU, middleU, middleG, spaceG, middleA, spaceA, rowA,
              middleN, spaceI,spaceT,spaceJ,spaceS,spaceB,spaceN,inspaceV
              ,inspaceX,inspaceK,lspaceZ, rowN, middleH, spaceH, spaceP, middleP, spaceW, spaceY, middleY, rowR, spaceR, middleR, nspace, k1;
//char *tempaddre;
// m is main.


   char pattern;
     *m=*m+1;
    // c=(c+n);
    



    for( i=pseudoI;i<=2*(*nwords);i++)
{
   
   
      
        if(i<=(*nwords))
        {
            inspaceX=2*(*nwords-i);
        }
               
        else if(i>=(*nwords +1))
        {
             inspaceX=2*(i-(*nwords)-1);
           
        }

        for(j=1;j<=2;j++)
        {
            if( j==1)
            {
                for(k=1;k<=(6- inspaceX)/2;k++)
                {
                    printf(" ");
                }
            }

                for(k=0;k<(*nchar);k++)
                {//  *(c+k)=='-'?  :k=k;  ;
                   printf("%c",*(c+k));
                    // printf("%c%d%d",*(c+k),Re_no,*m);

                }

                 if( j!=2)
            {
                for(k=1;k<=inspaceX;k++)
                {
                    printf(" ");
                }
            }
                  if( j==2)
            {
                for(k=1;k<=(6- inspaceX)/2;k++)
                {
                    printf(" ");
                }
            }
            
        } //changes from 12423 to 12636
      //  printf("n=%d",*nchar);


                   if(( (*(c+(*m)) ==' ' || *(c+(*m)) =='\n') && (Re_no !=0  ||*((c+*m)) =='-' ))  )
                            {
                                return;
                             }
                            pseudoI=i;

                    if(*(c+(*m)) !=' ' && *(c+(*m)) !='\n'  && (*m<*nchar ||(*((c+*m)) =='-'))) // to safe the execution \n or space character;
                  // if(*m<2)
                    {          
                                if((*((c+*m)) !='-'))
                                
                                { 
                                  printf("\t");                       
                            Re_no++;
                            
                           patternCall(nwords, nchar, n, (c), m,Re_no,pseudoI);
                            }
                            
                             if( (*((c+*m)) =='-'))
                            {

                              printf("\t");
                       
                            Re_no++;
                          
                               
                                 *m=0;

                            
                               if(*(c+(*m))!=' ' && i==1)
                                {
                                *n=*n+1;
                                }
                         
                           c=c+100;
                                nchar=nchar+1;
                                       if(*(c)=='-' )
                             { 
                               c=c+100;
                               printf("\t\t");
                               if( i==1)
                               {
                                  *n=*n+1;
                               }
                               
                                nchar=nchar+1;
                             }
                           
                                patternCall(nwords, (nchar), n, (c), m,Re_no,pseudoI);
                              
                                c=c-100;
                               nchar=nchar-1;
                               if(*(c)=='-' )
                               { 
                                   c=c-100;
                                  nchar=nchar-1;
                               }                           
                                (*m)=(*nchar);
                            
                            }
                         
                            Re_no--;
                                                
                         if( Re_no!=0  )
                          {
                            *m=*m-1;                         
                            }
                         else if((*(c+(*nchar))!='-' ))
                         {
                          *m=*m-1;
                         }                       
                        
                          if( Re_no!=0  )
                            { 
                            return;}
                            printf("\n");   
                             }
                                        
                    else
                    { printf("\n");}
                    
    }

}

void patternCall(int *nwords, int *nchar, int *n, char *c,int *m,int Re_no,int pseudoI)
{
   int i;
            if(*(c+(*m)) =='n' || *(c+(*m)) =='N')
                         {
                             patternN(nwords, nchar, n, (c), m,Re_no,pseudoI);
                             return;

                         }
                         
                         else if(*(c+(*m)) =='u' || *(c+(*m)) =='U')
                         {
                            patternU(nwords, nchar, n, (c), m,Re_no,pseudoI);
                              return;

                            
                         }

                          else if(*(c+(*m)) =='r' || *(c+(*m)) =='R')
                         {
                            patternR(nwords, nchar, n, (c), m,Re_no,pseudoI);
                              return;

                            
                         }

                          else if(*(c+(*m)) =='g' || *(c+(*m)) =='G')
                         {
                            patternG(nwords, nchar, n, (c), m,Re_no,pseudoI);
                              return;

                            
                         }

                           else if(*(c+(*m)) =='a' || *(c+(*m)) =='A')
                         {
                            patternA(nwords, nchar, n, (c), m,Re_no,pseudoI);
                              return;

                            
                         }

                            else if(*(c+(*m)) =='w' || *(c+(*m)) =='W')
                         {
                            patternW(nwords, nchar, n, (c), m,Re_no,pseudoI);
                              return;

                            
                         }

                            else if(*(c+(*m)) =='h' || *(c+(*m)) =='H')
                         {
                            patternH(nwords, nchar, n, (c), m,Re_no,pseudoI);
                              return;

                            
                         }

                            else if(*(c+(*m)) =='p' || *(c+(*m)) =='P')
                         {
                            patternP(nwords, nchar, n, (c), m,Re_no,pseudoI);
                              return;

                            
                         }

                             else if(*(c+(*m)) =='y' || *(c+(*m)) =='Y')
                         {
                            patternY(nwords, nchar, n, (c), m,Re_no,pseudoI);
                              return;

                            
                         }

                                 
                                 else if(*(c+(*m)) =='i' || *(c+(*m)) =='I')
                         {
                            patternI(nwords, nchar, n, (c), m,Re_no,pseudoI);
                              return;

                            
                         }

                                 else if(*(c+(*m)) =='t' || *(c+(*m)) =='T')
                         {
                            patternT(nwords, nchar, n, (c), m,Re_no,pseudoI);
                              return;

                            
                         }

                                 else if(*(c+(*m)) =='s' || *(c+(*m)) =='S')
                         {
                            patternS(nwords, nchar, n, (c), m,Re_no,pseudoI);
                              return;

                            
                         }

                                 else if(*(c+(*m)) =='m' || *(c+(*m)) =='M')
                         {
                            patternM(nwords, nchar, n, (c), m,Re_no,pseudoI);
                              return;

                            
                         }

                                 else if(*(c+(*m)) =='o' || *(c+(*m)) =='O')
                         {
                            patternO(nwords, nchar, n, (c), m,Re_no,pseudoI);
                              return;

                            
                         }

                                 else if(*(c+(*m)) =='c' || *(c+(*m)) =='C')
                         {
                            patternC(nwords, nchar, n, (c), m,Re_no,pseudoI);
                              return;

                            
                         }

                                 else if(*(c+(*m)) =='e' || *(c+(*m)) =='E')
                         {
                            patternE(nwords, nchar, n, (c), m,Re_no,pseudoI);
                              return;

                            
                         }

                                 else if(*(c+(*m)) =='f' || *(c+(*m)) =='F')
                         {
                            patternF(nwords, nchar, n, (c), m,Re_no,pseudoI);
                              return;

                            
                         }

                                 else if(*(c+(*m)) =='l' || *(c+(*m)) =='L')
                         {
                            patternL(nwords, nchar, n, (c), m,Re_no,pseudoI);
                              return;

                            
                         }

                                 else if(*(c+(*m)) =='q' || *(c+(*m)) =='Q')
                         {
                            patternQ(nwords, nchar, n, (c), m,Re_no,pseudoI);
                              return;

                            
                         }
                                 else if(*(c+(*m)) =='b' || *(c+(*m)) =='B')
                         {
                            patternB(nwords, nchar, n, (c), m,Re_no,pseudoI);
                              return;

                            
                         }

                                 else if(*(c+(*m)) =='d' || *(c+(*m)) =='D')
                         {
                            patternD(nwords, nchar, n, (c), m,Re_no,pseudoI);
                              return;

                            
                         }

                                  else if(*(c+(*m)) =='j' || *(c+(*m)) =='J')
                         {
                            patternj(nwords, nchar, n, (c), m,Re_no,pseudoI);
                              return;

                            
                         }
                                   else if(*(c+(*m)) =='v' || *(c+(*m)) =='V')
                         {
                            patternV(nwords, nchar, n, (c), m,Re_no,pseudoI);
                              return;

                            
                         }

                                   else if(*(c+(*m)) =='k' || *(c+(*m)) =='K')
                         {
                            patternK(nwords, nchar, n, (c), m,Re_no,pseudoI);
                              return;

                            
                        }

                                    if(*(c+(*m)) =='x' || *(c+(*m)) =='X')
                         {
                            patternX(nwords, nchar, n, (c), m,Re_no,pseudoI);
                              return;

                            
                         }
                                   else if(*(c+(*m)) =='z' || *(c+(*m)) =='Z')
                         {
                            patternZ(nwords, nchar, n, (c), m,Re_no,pseudoI);
                              return;

                            
                         }

             

} 

void main()
{
     int i, nchar[10], nwords, k, j = 0, middleE, rowE, spaceU, middleU, middleG, spaceG, middleA, spaceA, rowA,
                                 middleN,spaceI,spaceT,spaceS,spaceB, spaceN, rowN, n, m, middleH, spaceH, spaceP, middleP, spaceW, spaceY, middleY, rowR, spaceR, middleR, nspace, k1;

    // m is main.
    int re_no =0,pseudoI=1,pseudoR=0;
    char *dashV,*bdashV;

    char c[100][100], pattern,tO,*arraySub;

    printf("Enter your Message : ");

    for (i = 0; c[i - 1][j] != '\n'; i++)
    {
        for (j = 0; ((c[i][j - 1] != ' ')  && (c[i][j - 1] != '-') ); j++)
        {
            
            c[i][j] = getchar();
         //   printf("c[%d][%d]=%c",i,j,c[i][j]);
               
            if ((c[i][j] == '\n'))
            {
                nchar[i] = j;
             
                nspace = i;

                break;
            }

            
            nchar[i] = j;
            if (c[i][j] == '-')
               { nchar[i] = j;            }
        }
        nspace = i;
    }
    printf("\n\tThe base adrress=%u\n",c);
    printf("\nSizeof char %u",sizeof(char));

       

    nwords = 4;
    printf("\n\n");
   
    for (n = 0; n <= nspace; n++)
    {
      //   printf("c[%d]=%u\n",n,&c[i][0]);
        for (m = 0; m < nchar[n]; m++)
        {
                 
                    patternCall(&nwords,&nchar[n],&n,(c+n),&m,re_no,pseudoI);
                      m=nchar[n];
                 
                }
               
                     printf("\n\n\n");    

  }
  tO=getche();
}
