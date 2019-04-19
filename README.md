# codechef-march-long-challenge-2019

     Problem statement 1 :)
         
         Recently, Chef hosted a strange competition at the Byteland annual fair. There were N participants in the competition (numbered 1 through N); at the end of the competition, their scores were A1,A2,…,AN

. Since it was a strange competition, negative scores were allowed too.

The total score of the competition is calculated as follows:

    Divide the participants into one or more non-empty groups (subsets); if there are K

groups, let's denote them by G1,G2,…,GK
. Each participant should be a member of exactly one group.
Sum up the scores of participants in each individual group. For each valid i
, let's denote the sum of scores of participants in group i by Xi
.
The total score of the competition is the sum of squares of these summed up scores, i.e. X21+X22+…+X2K

    .

Chef wants to choose the groups in such a way that the total score is maximum possible. Since there may be many ways to form the groups that lead to the maximum total score, Chef wants to know just the size of the largest group and the size of the smallest group which could be formed while still maximising the total score. These sizes are independent - formally, they are the maximum and minimum size s
of a group such that there is a way to form groups which maximises the total score and contains a group with size s.


         Problem statement 2 :)
         
          Chef Leonardo has a decimal integer N and a non-zero decimal digit d. N does not contain the digit zero; specifically,    N

should always be treated as a decimal integer without leading zeroes.

Chef likes d
and does not like any other digit, so he decided to change N. He may apply the following operation any number of times (including zero): append the digit d to the decimal representation of N (d becomes the least significant digit of N), then remove one occurrence of one digit from the decimal representation of N

.

Chef has already changed a lot of numbers and he got bored. Now, he wants to know the smallest possible value of N
which can be obtained by performing the operation described above. Can you help him?

     Problem statement 3 :)
       
       Chef has N dishes, numbered 1 through N. For each valid i, dish i is described by a string Di

containing only lowercase vowels, i.e. characters 'a', 'e', 'i', 'o', 'u'.

A meal consists of exactly two dishes. Preparing a meal from dishes i
and j (i≠j) means concatenating the strings Di and Dj in an arbitrary order into a string M describing the meal. Chef likes this meal if the string M

contains each lowercase vowel at least once.

Now, Chef is wondering - what is the total number of (unordered) pairs of dishes such that he likes the meal prepared from these dishes?

      
     Problem statement 4 :)
      
      "It does not matter how slowly you go as long as you do not stop." - Confucius

You are given an array A1,A2,…,AN
and an integer K. For each subarray S=[Al,Al+1,…,Ar] (1≤l≤r≤N):

    Let's define an array B

as S concatenated with itself m times, where m is the smallest integer such that m(r−l+1)≥K.
Next, let's sort B
and define X=BK, i.e. as a K-th smallest element of B. Note that |B|≥K.
Then, let's define F
as the number of occurrences of X in S.
The subarray S
is beautiful if F occurs in S at least once.

Find the number of beautiful subarrays of A. Two subarrays Al,Al+1,…,Ar and Ap,Ap+1,…,Aq are different if l≠p or r≠q.
        
             
