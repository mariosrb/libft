/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdodevsk <mdodevsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:28:58 by mdodevsk          #+#    #+#             */
/*   Updated: 2024/10/29 13:28:58 by mdodevsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t			i;
	char	*result;

	i = 0;
	result = malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (result == NULL)
		return (NULL);
	while (s1)
	{
		result[i] = s1[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
int main(void)
{
    char *result;
    result = ft_strdup;
    free(result);
    return (0);
}*/