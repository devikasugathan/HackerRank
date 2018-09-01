// Complete the printLinkedList function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode next;
 * }
 *
 */
static void printLinkedList(SinglyLinkedListNode head) {
   SinglyLinkedListNode temp=head;
    for(temp=head;temp!=null;temp=temp.next)
        System.out.println(temp.data);


}
