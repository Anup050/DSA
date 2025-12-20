class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        int a = coordinate1[0] - 'a';
        int b = coordinate1[1] - '0';
        int c = coordinate2[0] - 'a';
        int d = coordinate2[1] - '0';
        string s1 = "";
        string s2 = "";

        if(a%2==0){
            if(b%2==0) s1 = "white";
            else s1 = "black";
        }else{
            if(b%2==0) s1 = "black";
            else s1 = "white";
        }

        if(c%2==0){
            if(d%2==0) s2 = "white";
            else s2 = "black";
        }else{
            if(d%2==0) s2 = "black";
            else s2 = "white";
        }

        return s1 == s2;
    }
};