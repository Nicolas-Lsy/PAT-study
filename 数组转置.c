/*
 * 数组转置.c
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


#include <stdio.h>
#define ROW 3
#define COL 4 
int main(int argc, char **argv)
{
	

	int a[ROW][COL], b[COL][ROW];
	int i,j;
	
	printf("输入数组初始值：[3,4] \n");
	//赋值给数组
	for(i=0; i<ROW; i++)
		for(j=0; j<COL; j++)
			scanf("%d",&a[i][j]);
	
	//转置 到数组b
	for(i=0; i<ROW; i++)
		for(j=0; j<COL; j++)
			{
				b[j][i] = a[i][j];	
				}
	//显示两个矩阵
	printf("转置前： \n");
	for(i=0; i<ROW; i++)
		{
			for(j=0; j<COL; j++)
				{
					printf("%8d",a[i][j]);
			}
			printf("\n");
	}
	
	
	printf("\n \n转置后： \n");
	for(j=0; j<COL; j++)
	{
		for(i=0; i<ROW; i++)
		{
			printf("%8d",b[j][i]);
		}
		printf("\n");
	}
	
	printf("输入任意字符退出：");
	getchar(); 
	
	
	return 0;
}

