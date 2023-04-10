/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfornah <mfornah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:40:22 by mfornah           #+#    #+#             */
/*   Updated: 2023/03/10 09:07:56 by mfornah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main(void)
{
    char *str;
    int fd;
	

	fd = open("test.txt", O_RDONLY);
	
	str = get_next_line(fd);
	printf("%s", str)
/* 	str = get_next_line(fd2);
	printf("%s", str); */

}
