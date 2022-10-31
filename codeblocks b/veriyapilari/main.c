#include <stdio.h>
#include <stdlib.h>

   struct node
    {
    int data;
    struct node*next;
    };


    void listele(struct node * head)
    {
    int i=1;
    while(head!=NULL)
        {
  printf("%d. dugumun adresi = %p\n",i,head);
  printf("%d. dugumun verisi = %d\n",i,head->data);
  printf("%d. dugumun bagli oldugu dugumun adresi= %p\n\n",i,head->next);
  head=head->next;
  i++;}
    }

  void sona_ekle(struct node*head,int data){
  if(head==NULL){
    printf("liste bos iken sona eklme yapamazsiniz");

  }
  struct node*temp=(struct node*)malloc(sizeof(struct node));
  temp->data=data;
  temp->next=NULL;
  struct node*temp2=head;
  while(temp2->next!=NULL)
  {
      temp2=temp2->next;

  }
temp2->next=temp;

  }

   struct node* basa_ekle(struct node*head,int data)
   {
   struct node*temp=(struct node*)malloc(sizeof(struct node));
   temp->data=data;
   temp->next=head;
   head=temp;

   return head;
   };



int main()
{
  int secim,data,index;
  struct node*head= NULL;

whil(1){
  printf("1-listenin basýna eleman ekle\n");
  printf("2-listenin sonuna eleman ekle\n");
  printf("3-listenin ortasýna eleman ekle\n");
  printf("4-listeyi listele\n");
  printf("5-elemaný duzenleme gorme\n");
  printf("6-listeden verilen bir degere sahipcdugum silme\n");
  printf("7-listeyi sil\n");
  printf("8-listedeki eleman sayisi\n");
  printf("9-listenin eleman bilgileri\n");
  printf("10-programdan cýkma\n");
  printf("seciminiz...");
  printf("%d", &secim);
}
  switch(secim){
  case 1   : printf(" basa eklemek istediginiz degeri giriniz");
    scanf("%d", &data);
    head=basa_ekle(head,data);
      break;
  case 2  :

      break;
  case 3  :
      break;
  case 4  :listele(head);
      break;
  case 5  :
      break;
  case  6 :
      break;
  case  7 :
      break;
  case  8 :
      break;
  case 9  :
      break;
  case  10 :exit(0);
      break;
default:printf("yanlis secim\n");

  }



}

