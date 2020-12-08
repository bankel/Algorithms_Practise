//
// Created by lyf on 12/8/20.
//

#include "Roman_To_Integer.h"

int Roman_To_Integer::romanToInt(string s) {
    int sum = 0;
    for (int i = 0; i < s.size(); i++) {
        char c = s[i];
        if(c== 77){//M
            sum += 1000;
        }else if(c == 68){//D
            sum += 500;
        }else if(c == 67){//C
            if(i+1<s.size()){
                if(s[i+1] ==68){//D
                    sum +=400;
                    i++;
                }else if(s[i+1]==77){//M
                    sum +=900;
                    i++;
                }else{
                    sum += 100;
                }
            } else{
                sum += 100;
            }
        }else if(c == 76){//L
            sum += 50;
        }else if(c == 88){//X
            if (i + 1 < s.size()) {
                if(s[i+1] ==76){//L
                    sum +=40;
                    i++;
                }else if(s[i+1]==67){//C
                    sum +=90;
                    i++;
                }else{
                    sum += 10;
                }
            }else{
                sum += 10;
            }
        }else if(c == 86){//V
            sum += 5;
        }else if(c == 73){//I
            if(i+1<s.size()){
                if(s[i+1] ==86){//V
                    sum +=4;
                    i++;
                }else if(s[i+1]==88){//X
                    sum +=9;
                    i++;
                }else{
                    sum += 1;
                }
            } else{
                sum += 1;
            }
        }
    }

    return sum;
}
