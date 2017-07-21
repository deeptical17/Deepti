#include <stdio.h>

#define DEBUG 1

#define UINT64_MAX 18446744073709551615ULL

void fibonacciBuzzFizz( int );
int isPrime( unsigned long long );

int main(int argc, char *argv[])
{
    fibonacciBuzzFizz( 100 );
    
    return 0;
}

void fibonacciBuzzFizz( int n )
{
    int i;
    int prime;
    unsigned long long first = 0;
    unsigned long long second = 1;
    unsigned long long fibonacci = 0;
    
    for ( i = 0; i <= n; i++ )
    {
        if ( second > UINT64_MAX - first )
        {
            printf( "f(%d) too big for unsigned long long. Stopping.\n", i );
            return;
        }
        else
        {
            if ( i < 2 )
            {
               fibonacci = i;
            }
            else
            {
                fibonacci = first + second;
                first = second;
                second = fibonacci;
            }
            
            prime = isPrime( fibonacci );
            
#if DEBUG
            printf( "f(%d) = %llu%s : ", 
                   i, fibonacci, (prime ? ", prime" : "" ));
#endif
            
            if ( prime || fibonacci % 3 == 0)
            {
                printf( "Buzz" );
            }
            
            if ( prime || fibonacci % 5 == 0)
            {
                printf( "Fizz" );
            }
            
            if ( !prime && fibonacci % 3 && fibonacci % 5 )
            {
                printf( "%llu", fibonacci );
            }
            
            printf( "\n" );

        }
    }
}


int isPrime( unsigned long long num ) 
{
    unsigned long i;
    
    if ( num == 2 || num == 3 )
    {
        return 1;
    }
    else if ( num <= 1 || num % 2 == 0 || num % 3 == 0 )
    {
        return 0;
    }
    else
    {
        for ( i = 5; i * i <= num; i += 6 )
        {
            if ( num % i == 0 || num % ( i + 2 ) == 0 )
            {
                return 0;
            }
        }
    }
    
    return 1;
}
