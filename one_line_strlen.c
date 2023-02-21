/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lmao_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <hdelmas@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:56:14 by hdelmas           #+#    #+#             */
/*   Updated: 2023/02/21 18:08:50 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	l_strlen(char *str, int *i)
{
	return ((*(++str) != '\0' && (*i)++ >= 0 && l_strlen(str, i)) || ++(*i));
}

int	main(int ac, char **av)
{
	int	i;

	(void)ac;
	i = 0;
	l_strlen(av[1], &i);
	printf("%d\n", i);
}
