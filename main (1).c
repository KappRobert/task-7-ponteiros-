
#include <stdio.h>

int main()
{
  int a91,b91;
    
    if(&a91 > &b91)
    printf("\nO endereço de a91 (%p) e maior que o endereço de b91 (%p\n\n)", &a91, &b91);
    else
    printf("\nO endereço de b91 (%p) e maior que o endereço de a91 (%p\n\n)", &b91, &a91);

    return 0;
}
