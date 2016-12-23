/*
 * 猜数字游戏.c
 * 
 * Copyright 2016 root <root@pywizard>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */
// NO.1 

#include <stdio.h>

int main(int argc, char **argv)
{
	 int i = 5;  //猜测次数
	 int right_number = 123;
	 int user_number;
	 
	 printf("输入你猜的数字 （在1000以内） 可以猜5次） ：");
	 while (i){
		scanf("%d",&user_number);
		if (user_number == right_number){
			printf("你猜对啦 ！\n");
		    break;
		}
		else{
			printf("没有猜对\n");
			
			i--;
		}
	}
		if (i==0)
			printf("Game Over !");

	 
	return 0;
}

