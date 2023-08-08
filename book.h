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
 
 
 * Ακαδημία της Αρτέμιδος(Academy of Artemis) is a loosely connected 
 * network of math learning group, whose members share a common interest 
 * in mathematics and statistics and often exchange their learning 
 * experiences with one another.
 *

 *
 * book.h: 明·屠豳叟《兼三图》
 *
 * Last edited: 2023/8/7
 ******************************************************************************/
int points[56] = {111, 112, 113, 114, 115, 116,
                122, 123, 124, 125, 126,
                133, 134, 135, 136,
                144, 145, 146,
                155, 156,
                166,
                222, 223, 224, 225, 226,
                233, 234, 235, 236,
                244, 245, 246,
                255, 256,
                266,
                333, 334, 335, 336,
                344, 345, 346,
                355, 356,
                366,
                444, 445, 446,
                455, 456,
                466,
                555, 556,
                566,
                666, 
}; 

char name[56][12] = {"幺幺幺", "二幺幺", "三幺幺", "四幺幺", "五幺幺", "六幺幺",
                     "幺二二", "幺二三", "幺二四", "幺二五", "幺二六",
                     "幺三三", "幺三四", "幺三五", "幺三六",
                     "幺四四", "幺四五", "幺四六", 
                     "幺五五", "幺五六",
                     "幺六六",
                     "二二二", "三二二", "四二二", "五二二", "六二二", 
                     "二三三", "二三四", "二三五", "二三六", 
                     "二四四", "二四五", "二四六", 
                     "二五五", "二五六",  
                     "二六六",
                     "三三三", "四三三", "五三三", "六三三",
                     "三四四", "三四五", "三四六",
                     "三五五", "三五六",
                     "三六六",
                     "四四四", "五四四", "六四四",
                     "四五五", "四五六",
                     "四六六",
                     "五五五", "六五五",
                     "五六六",
                     "六六六",
                    };

char category[15][12] = {"浑色", "四点", "五点", "六点", "七点", "八点", 
                     "九点", "十点", "十一点", "十二点", "十三点", 
                     "十四点", "十五点", "十六点", "十七点",
                    };

char words[56][15] = {"一单一双", "凄凉四星", "点水蜻蜓", "春锁二乔", "竹林名饮", "绿绮南金",
                        "落日双凫", "雁行中断", "月夜花朝", "小径疏花", "芳卉九衢", 
                        "峨眉山月", "星月璧光", "三五明月", "天人一致", 
                        "织女妆红", "愁红怨绿", "阳台近镜", 
                        "葵向日倾", "六街花月", 
                        "圆月中天", 
                        "六朝金粉", "七宝香车", "八分水流", "对酌山花", "二八秦楼", 
                        "二人同心", "鸳鸯七十", "三市七条", "鱼雁传书", 
                        "零落梅花", "白云芳草", "汉宫春晓",
                        "梅应小春", "楼阁含春",
                        "天上双星", 
                        "九微片片", "十里春花", "柳絮花飞", "芙蓉出水", 
                        "八月星槎", "三条九陌", "七贤六逸",
                        "徽轸十三", "三层楼阁",
                        "三星在天", 
                        "渭水非熊", "凤楼双度", "舞阁金铺", 
                        "十月杏花", "胡姬十五",
                        "六龙随驾",
                        "满地梨花", "绣帘花满",
                        "五云丽天", 
                        "天上六龙", 
                        };
                        
char target[56][50] = {
    /*111 - 116*/
    "栋梁之材，或为独生子女者", "失恋，或丧偶者", "坐不安席者二人，罚", "有过两次恋爱经历，或二次婚姻者", "？", "富贵气象，衣着华丽者",
    /*122 - 126*/
    "爱挑灯夜读者", "送别亲友者", "常设宴请客者", "养盆栽之人", "爱花之人，居处逶迤难至者",
    /*133 - 136*/
    "眉清目秀者", "远行归家之人", "排行第三、第五，或儿女十五岁者", "左右两边的人表演才艺",
    /*144 - 146*/
    "化妆精致者，喝酒脸红者", "兄弟姐妹失和者", "新婚者",
    /*155, 156*/
    "不喜交游者", "击鼓传花",
    /*166*/
    "爱赏月者",

    /*222 - 226*/
    "挑灯夜读者", "送别亲友者", "常设宴请客者", "养盆栽之人", "爱花之人，居处逶迤难至者",
    /*233 - 236*/
    "眉清目秀者", "远行归家之人", "排行第三、第五，或儿女十五岁者", "左右两边的人表演才艺",
    /*244 - 246*/
    "化妆精致者，喝酒脸红者", "兄弟姐妹失和者", "新婚者",
    /*255, 256*/
    "不喜交游者", "击鼓传花",
    /*266*/
    "爱赏月者",                  
};
//char reward[5] = {1, 2, 3, 4, 5};                      
