#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include <iostream>
#include<list>
using namespace std;

int main(void) {

    // 駅名を文字列で設定
    const char* YamanoteLine[] = {
        "Tokyo", "Kanda", "Akihabara","Okachimachi","Ueno",
        "Uguisudani","Nippori","Nishi-Nippori","Tabata","Komagome",
        "Sugamo","Otska","Ikebukuro","Mejire","Takadanobaba",
        "Shin-Okubo","Shinjuku","Yoyogi","Harajuku","Shibuya",
        "Ebisu","Meguro","Gotanda","Osaki","Shinagawa",
        "Takanawa Gateway","Tamachi","Hamamatscho","Shimbashi","Yurakucho"
    };

    // 駅名リスト
    list<const char*> list1970(YamanoteLine, YamanoteLine + 30);
    list<const char*> list2019(YamanoteLine, YamanoteLine + 30);
    list<const char*> list2022(YamanoteLine, YamanoteLine + 30); 
    // 駅の数をカウント
    int count = 0;

    printf("山手線の路線図\n\n");

    // 双方向リストのイテレータを使い出力 
    printf("1970年\n");
    for (auto itr = list1970.begin(); itr != list1970.end(); ++itr) {
        printf("%s", *itr);
        count++;
        // 改行
        if (count % 10 == 0 && count <= 25) {
            printf("\n");
            printf("⇒ ");
        } else if (count < 30) {
            printf(" ⇒ ");
        }
    }
    printf("\n\n\n");
    count = 0;

    printf("2019年\n");
    for (auto itr = list2019.begin(); itr != list2019.end(); ++itr) {
        // 駅名を表示
        printf("%s", *itr);
        count++;

        if (count == 25) {
            itr = list2019.erase(itr); // 高輪ゲートウェイ削除
        } else  {
            // 改行
            if (count % 10 == 0 && count <= 25) {
                printf("\n");
                printf("⇒ ");
            } else if (count < 30) {
                printf(" ⇒ ");
            }
        }
    }
    printf("\n\n\n");
    count = 0;

    printf("2022年\n");
    for (auto itr = list2022.begin(); itr != list2022.end(); ++itr) {
        printf("%s", *itr);
        count++;
        // 改行
        if (count % 10 == 0 && count <= 25) {
            printf("\n");
            printf("⇒ ");
        } else if(count < 30) {
            printf(" ⇒ ");
        }
    }
    printf("\n\n\n");
	return (0);
}