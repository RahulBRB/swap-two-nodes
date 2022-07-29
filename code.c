void nodeswap(node*ptrhead,int val1,int val2){
    ptr1=ptrhead;
    while(ptr1->next->data!=val1)
    ptr1=ptr1->next;

    ptr2=ptrhead;
    while(ptr2->next->data!=val2)
    ptr2=ptr2->next;

    tmp1=ptr1->next;
    tmp2=ptr2->next->next;

    ptr1->next=ptr2->next;
    ptr2->next->nex=tmp1->next;

    ptr2->next->next=tmp1;
    tmp1->next=tmp2;
}
