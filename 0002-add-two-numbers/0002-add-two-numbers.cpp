class Solution {
public:
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
                string s1 = "", s2 = "";
                ListNode* ptr1 = l1;
                ListNode* ptr2 = l2;

                while (ptr1 != NULL) {
                        s1 += to_string(ptr1->val);
                        ptr1 = ptr1->next;
                   
        }

                while (ptr2 != NULL) {
                        s2 += to_string(ptr2->val);
                        ptr2 = ptr2->next;
                   
        }

                reverse(s1.begin(), s1.end());
                reverse(s2.begin(), s2.end());

                string finalStr = addStrings(s1, s2);

                ListNode* temp = l1;
                ListNode* prev = NULL;

                for (int i = 0; i < finalStr.size(); i++) {
                        if (temp == NULL) {
                                temp = new ListNode(0);
                                if (prev != NULL) {
                                        prev->next = temp;
                                   
                }
                else {
                                        l1 = temp;
                                   
                }
                           
            }

                        temp->val = finalStr[i] - '0';
                        prev = temp;
                        temp = temp->next;
                   
        }

                if (prev != NULL) prev->next = NULL;

                return l1;
           
    }

        string addStrings(string num1, string num2) {
                int i = num1.length() - 1;
                int j = num2.length() - 1;
                int carry = 0;
                string result = "";

                while (i >= 0 || j >= 0 || carry) {
                        int digit1 = (i >= 0) ? num1[i--] - '0' : 0;
                        int digit2 = (j >= 0) ? num2[j--] - '0' : 0;
                        int sum = digit1 + digit2 + carry;
                        carry = sum / 10;
                        result += (sum % 10) + '0';
                   
        }

                return result;
           
    }
};
