#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// キャラクターのクラスを表す列挙型
typedef enum {
    MAGE,
    KNIGHT,
    THIEF
} CharacterClass;

// キャラクターのステータスを表示する関数
void displayStats(int intelligence, int stamina, int charisma) {
    printf("Intelligence: %d\n", intelligence);
    printf("Stamina: %d\n", stamina);
    printf("Charisma: %d\n", charisma);
}

// キャラクターのクラスを判定する関数
CharacterClass determineClass(int intelligence, int stamina, int charisma) {
    if (intelligence > stamina && intelligence > charisma) {
        return MAGE;
    } else if (stamina > intelligence && stamina > charisma) {
        return KNIGHT;
    } else {
        return THIEF;
    }
}

int main() {
    // 乱数の初期化
    srand(time(NULL));

    // 合計が20になるようにランダムに値を生成
    int intelligence = rand() % 11;
    int stamina = rand() % (20 - intelligence + 1);
    int charisma = 20 - intelligence - stamina;

    // ステータスを表示
    displayStats(intelligence, stamina, charisma);

    // クラスを判定
    CharacterClass characterClass = determineClass(intelligence, stamina, charisma);

    // 判定したクラスを表示
    switch (characterClass) {
        case MAGE:
            printf("Class: Mage\n");
            break;
        case KNIGHT:
            printf("Class: Knight\n");
            break;
        case THIEF:
            printf("Class: Thief\n");
            break;
    }

    return 0;
}
