class Solution {
private:
    void reverseLinkedList(ListNode *head) {
        // Ҳ����ʹ�õݹ鷴תһ������
        ListNode *pre = nullptr;
        ListNode *cur = head;

        while (cur != nullptr) {
            ListNode *next = cur->next;
            cur->next = pre;
            pre = cur;
            cur = next;
        }
    }

public:
    ListNode *reverseBetween(ListNode *head, int left, int right) {
        // ��Ϊͷ�ڵ��п��ܷ����仯��ʹ������ͷ�ڵ���Ա��⸴�ӵķ�������
        ListNode *dummyNode = new ListNode(-1);
        dummyNode->next = head;

        ListNode *pre = dummyNode;
        // �� 1 ����������ͷ�ڵ��� left - 1 �������� left �ڵ��ǰһ���ڵ�
        // ����д�� for ѭ�����������
        for (int i = 0; i < left - 1; i++) {
            pre = pre->next;
        }

        // �� 2 ������ pre ���� right - left + 1 �������� right �ڵ�
        ListNode *rightNode = pre;
        for (int i = 0; i < right - left + 1; i++) {
            rightNode = rightNode->next;
        }

        // �� 3 �����жϳ�һ����������ȡ����
        ListNode *leftNode = pre->next;
        ListNode *curr = rightNode->next;

        // ע�⣺�ж�����
        pre->next = nullptr;
        rightNode->next = nullptr;

        // �� 4 ����ͬ�� 206 �⣬��ת�����������
        reverseLinkedList(leftNode);

        // �� 5 �����ӻص�ԭ����������
        pre->next = rightNode;
        leftNode->next = curr;
        return dummyNode->next;
    }
};
