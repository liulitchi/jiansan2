/******************************************************************************
 * Copyright (C) 2023 Nymph <Academy of Artemis>
 * Copyright (C) 2023 liulitchi <kz-xy@163.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 *
 * Ακαδημία της Αρτέμιδος(Academy of Artemis) is a loosely connected 
 * network of math learning group, whose members share a common interest 
 * in mathematics and statistics and often exchange their learning 
 * experiences with one another.
 *  
 * main.c 
 * Last edited: 2023/8/12
 ******************************************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "book.h"

int main(void) {

    int value = 0;
    srand((unsigned)time(NULL)) ;


    int die1 = rand() % 6 + 1;
    int die2 = rand() % 6 + 1;
    int die3 = rand() % 6 + 1;

    int max = 0;
    int middle = 0;
    int min = 0;
    
    // 三粒骰子排序
    if (die1 >= die2 && die1 >= die3) {
        max = die1;
        if (die2 >= die3) {
            middle = die2;
            min = die3;
        }
        else {
            middle = die3;
            min = die2;
        }
    }
    else if (die2 >= die1 && die2 >= die3) {
        max = die2;
        if (die1 >= die3) {
            middle = die1;
            min = die3;
        }
        else {
            middle = die3;
            min = die1;
        }
    }
    else {
        max = die3;
        if (die1 >= die2) {
            middle = die1;
            min = die2;
        }
        else {
            middle = die2;
            min = die1;
        }
    }
    
    value = 100 * min + 10 * middle + max;
    //value = 222;
    //printf("value = %d\n", value);
    
    printf("骰子： %d %d %d\n", die1, die2, die3);
    
    char Category[] = "";
    int sum;
    sum = die1 + die2 + die3;
    
    if ((die1 == die2) && (die1 == die3)) {
        memcpy(Category, category[0], strlen(category[0]));
    }
    else {

        switch(sum) {
            case 4:
                memcpy(Category, category[1], strlen(category[1]));
                break;
            case 5:
                memcpy(Category, category[2], strlen(category[2]));
                break;    
            case 6:
                memcpy(Category, category[3], strlen(category[3]));
                break;
            case 7:
                memcpy(Category, category[4], strlen(category[4]));
                break;    
            case 8:
                memcpy(Category, category[5], strlen(category[5]));
                break;
            case 9:
                memcpy(Category, category[6], strlen(category[6]));
                break;    
            case 10:
                memcpy(Category, category[7], strlen(category[7]));
                break;
            case 11:
                memcpy(Category, category[8], strlen(category[8]));
                break;    
            case 12:
                memcpy(Category, category[9], strlen(category[9]));
                break;
            case 13:
                memcpy(Category, category[10], strlen(category[10]));
                break;    
            case 14:
                memcpy(Category, category[11], strlen(category[11]));
                break;
            case 15:
                memcpy(Category, category[12], strlen(category[12]));
                break;    
            case 16:
                memcpy(Category, category[13], strlen(category[13]));
                break;
            default:
                memcpy(Category, category[14], strlen(category[14]));
                break; 
            }   
    } 


    int Reward = 0;
    if ((die1 == die2) && (die1 == die3)) {
       switch(die1) {
           case 1: case 4: case 6:
               Reward = 5;
               break;
           default:
               Reward = 4;
               break;
        }
    }
    else {
        switch(sum) {
        
            case 17: case 16: case 15:
                Reward = 4;
                break;
            case 14: case 13: case 12:
                Reward = 3;
                break;    
            case 11: case 10: case 9:
                Reward = 2;
                break;
            case 8: case 7:
                 Reward = 1;
                break;    
            default:
                Reward = 2;
                break; 
            }
        }  
                                   
    for (int i = 0; i < sizeof(points) / sizeof(points[0]); i++) {
        if (points[i] == value) {
            printf("名称： %s\n", name[i]);
            printf("归类： %s\n", Category);
            printf("判词： %s\n", words[i]);
            printf("收取： %d 筹\n", Reward);
            printf("罚筹： %s\n", target[i]);
            return 0;
        }   
    }
    return 0;
}
