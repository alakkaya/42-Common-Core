#include "libft.h"
#include "string.h"
char to_uppercase1(unsigned int i, char c)
{
    (void)i; // İndis kullanılmıyorsa, bu satır uyarıyı önlemek için eklenebilir
    if (c >= 'a' && c <= 'z')
    {
        return c - 32; // Küçük harfi büyük harfe dönüştürür
    }
    return c;
}
void to_uppercase2(unsigned int i, char *c)
{
    (void)i; // İndis kullanılmıyorsa, bu satır uyarıyı önlemek için eklenebilir
    if (*c >= 'a' && *c <= 'z')
    {
        *c -= 32; // Küçük harfi büyük harfe dönüştürür
    }
}
void delete_content(void *content)
{
    free(content);
}
void lst_to_uppercase(void *content)
{
    char *str = (char *)content;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
}
int main(void)
{
    
}

/*
memchr
    char *s = "ali akkaya";
    printf("%s",ft_memchr(s,'y',9));
    return 0;,
    --------
    int s[20] = {1, 2, 3, 4, 5, 6};
    int *arr = (int *)ft_memchr(s,4,2 * sizeof(int));
    printf("%d", *arr);
    ---------
    int s1[5] = {1,2,3,4,5};
    int s2[5] = {1,2,6,7,8};
    printf("%d", ft_memcmp(s1,s2, 5 * sizeof(int)));
----------
    printf("%s\n",ft_strtrim("<<<42 is awesome>>>", "isz") );
-------------------
    printf("%s",ft_strmapi("ali akkaya",to_uppercase));
----------------------------------
char str[] = "ali akkaya";

    ft_striteri(str, to_uppercase2);  // Diziyi büyük harfe çevir
    printf("%s\n", str);  // Değiştirilen diziyi yazdır

    return 0;
    ------------------
    char *content = "Merhaba Ali!";
    t_list *node = ft_lstnew(content);
    printf("%s", (char *)node->next);

    ----------------------- ft_lstadd_front
    t_list *head =  ft_lstnew("İlk Düğüm") ;
   t_list *new_node = ft_lstnew("Yeni Düğüm");

   printf("Listeye ekleme olmadan önce %s \n", (char *)head->content);

    ft_lstadd_front(&head, new_node);

    printf("Sonrası %s \n", (char *)head->content);

    ------------------------- lstsize ve lstlast
    t_list *lst1 = ft_lstnew("Node1");
   t_list *lst2 = ft_lstnew("Node2");
      t_list *lst3 = ft_lstnew("Node3");

    lst1->next = lst2;
    lst2->next = lst3;
   printf("%d",ft_lstsize(lst1));
   //printf("%s",(char*)last->content);

   ---------------------- ft_lstadd_back
   t_list *head = ft_lstnew("Node1");
    t_list *new = ft_lstnew("New Node");

    printf("eklemeden önce : %s",(char*)head->next);
    printf("eklemeden önce : %s",head->content);

    ft_lstadd_back(&head,new);
    printf("sonra: %s",head->next->content);
    --------------------------------lstdelone
    char *str = strdup("Node");

    t_list *node = ft_lstnew(str);
    printf("önce: %s",(char*)node->content);

    ft_lstdelone(node,delete_content);
    //printf("sonra: %s",(char*)node->content);

    ---------------------------- lstclear
    // Dinamik olarak oluşturulan içerikler
    char *str1 = strdup("Node 1");
    char *str2 = strdup("Node 2");
    char *str3 = strdup("Node 3");

    // Bağlantılı listeyi oluştur
    t_list *node1 = ft_lstnew(str1);
    t_list *node2 = ft_lstnew(str2);
    t_list *node3 = ft_lstnew(str3);

    node1->next = node2;
    node2->next = node3;

    // Listeyi temizle
    ft_lstclear(&node2, delete_content);

    // Listeyi yazdır (şu an boş olacak)
    if (node1 == NULL)
    {
        printf("Liste boş.\n");
    }

    --------------------------------------lstiter
    t_list *node1 = ft_lstnew(strdup("node1"));
    t_list *node2 = ft_lstnew(strdup("node2"));
    t_list *node3 = ft_lstnew(strdup("node3"));

    // Listeyi birbirine bağlayalım
    node1->next = node2;
    node2->next = node3;

    printf("%s", (char *)node1->content);
    printf("%s", (char *)node2->content);
    printf("%s", (char *)node3->content);

    ft_lstiter(node1, lst_to_uppercase);

    printf("%s", (char *)node1->content);
    printf("%s", (char *)node2->content);
    printf("%s", (char *)node3->content);
*/