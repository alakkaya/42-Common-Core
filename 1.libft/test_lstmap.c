#include "libft.h"

// Basit bir 'f' fonksiyonu: içeriği birer artır
void *increment(void *content)
{
    int *new_value = malloc(sizeof(int));
    if (!new_value)
        return NULL;
    *new_value = *(int *)content + 1;
    return new_value;
}

// 'del' fonksiyonu: içeriği serbest bırak
void delete_content(void *content)
{
    free(content);
}

int main()
{
    // Orijinal listeyi oluşturma
    t_list *original_list = NULL;
    int values[] = {1, 2, 3, 4};
    for (int i = 0; i < 4; i++)
    {
        int *num = malloc(sizeof(int));
        *num = values[i];
        ft_lstadd_back(&original_list, ft_lstnew(num));
    }

    // ft_lstmap ile yeni listeyi oluşturma
    t_list *new_list = ft_lstmap(original_list, increment, delete_content);

    // Sonuçları yazdırma
    printf("Orijinal liste:\n");
    for (t_list *temp = original_list; temp; temp = temp->next)
        printf("%d -> ", *(int *)temp->content);
    printf("NULL\n");

    printf("Yeni liste (increment fonksiyonu ile):\n");
    for (t_list *temp = new_list; temp; temp = temp->next)
        printf("%d -> ", *(int *)temp->content);
    printf("NULL\n");

    // Bellek temizliği
    ft_lstclear(&original_list, delete_content);
    ft_lstclear(&new_list, delete_content);

    return 0;
}