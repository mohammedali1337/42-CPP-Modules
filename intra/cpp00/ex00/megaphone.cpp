/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarouj <mgarouj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 08:45:27 by mgarouj           #+#    #+#             */
/*   Updated: 2025/08/11 09:33:09 by mgarouj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int c, char **v)
{
    if (c == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    else{
        for (int i = 1; i < c; i++)
            for (int j = 0; v[i][j]; j++)
                std::cout << (char)std::toupper(v[i][j]);
        std::cout << std::endl;
    }
    return 0;
}
