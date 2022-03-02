/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:28:40 by aribesni          #+#    #+#             */
/*   Updated: 2022/02/28 12:28:41 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	ft_strlen(const char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && i < n - 1 && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int main (int argc, char **argv)
{
    int             i;
    int             j;
    int             size;

    i = 0;
    j = 0;
    size = 0;
    if (argc == 4)
    {
        std::ifstream   ifs(argv[1]);
        std::string     tmp;
        std::string     s1(argv[1]);
        std::string     s2(".replace");
        std::ofstream   ofs(s1 + s2);
        size = ft_strlen(argv[2]);
        while (std::getline(ifs, tmp))
        {
            i = 0;
            j = 0;
            while (tmp[i])
            {   
                while (ft_strncmp(tmp.data() + i, argv[2], size) != 0 && tmp[i])
                {
                    ofs << tmp[i];
                    i++;
                }
                if (ft_strncmp(tmp.data() + i, argv[2], size) == 0 && tmp[i])
                {
                    ofs << argv[3];
                    i += size;
                }
            }
            ofs << std::endl;
        }
        ifs.close();
        ofs.close();
    }
    return (0);
}