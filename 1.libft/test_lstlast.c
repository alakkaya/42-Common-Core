#include "libft.h"
int main()
{
    // Bağlı liste elemanlarını oluşturma
    t_list *node1 = ft_lstnew("Birinci düğüm");
    t_list *node2 = ft_lstnew("İkinci düğüm");
    t_list *node3 = ft_lstnew("Üçüncü düğüm");

    // Düğümleri birbirine bağlama
    node1->next = node2;
    node2->next = node3;

    // Listenin son düğümünü bulma
    t_list *last = ft_lstlast(node1);

    // Son düğümün içeriğini yazdırma
    if (last)
        printf("Son düğüm içeriği: %s\n", (char *)last->content);
    else
        printf("Liste boş.\n");

    // Belleği temizleme
    free(node1);
    free(node2);
    free(node3);

    return 0;
}