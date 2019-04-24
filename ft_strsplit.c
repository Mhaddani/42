/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 15:39:32 by mhaddani          #+#    #+#             */
/*   Updated: 2019/04/24 15:39:33 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	**ft_strsplit(char const *s, char c)
// {
// 	size_t		i;
// 	size_t		j;
// 	size_t		k;
// 	size_t		firstchar;
// 	size_t		lastchar;
// 	char		**freshstr;

// 	i = 0;
// 	j = 0;
// 	if(s != NULL)
// 	{
// 		while (s[i])
// 		{
// 			if (s[i] != c)
// 			{
// 				firstchar = i;
// 				while (s[i] && s[i] != c)
// 					i++;
// 				lastchar = i - 1;
// 				k = 0;
// 				freshstr[j] = (char *)malloc(sizeof(char) * (lastchar - firstchar + 2));
// 				while (firstchar <= lastchar)
// 				{
// 					freshstr[j][k] = s[firstchar];
// 					firstchar++;
// 					k++;
// 				}
// 				freshstr[j][k] = '\0';
// 				j++;
// 			}
// 			i++;
// 		}
// 	}
// 	return (char**)ft_strsplit;
// }








char    **ft_strsplit(char const *s, char c)
{
    size_t        i;
    size_t        j;
    size_t        k;
    size_t        firstchar;
    size_t        lastchar;
    char          **freshstr;

    i = 0;
    j = 0;
    freshstr = (char **)malloc(sizeof(char *) * 4);
    if(s != NULL)
    {
        while (s[i])
        {
            if (s[i] != c)
            {
                firstchar = i;
                while (s[i] && s[i] != c)
                    i++;
                lastchar = i--;
                k = 0;
                freshstr[j] = (char *)malloc((lastchar - firstchar + 2));
                while (firstchar <= lastchar)
                {
                    freshstr[j][k] = s[firstchar];
                    firstchar++;
                    k++;
                }
                freshstr[j][k] = '\0';
                j++;
            }
            i++;
        }
    }
    return (char**)freshstr;
}

int main() {
  char tab[] = "MOU**Mo*u***R";
  char **tab1;
  
  tab1 = ft_strsplit(tab, '*');
  int i,j;
  i = j =0;
  while (i < 4)
  {
      printf("%s", tab1[i++]);  

  }
  return 0;
}