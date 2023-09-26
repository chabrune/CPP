/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <chabrune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 14:45:01 by chabrune          #+#    #+#             */
/*   Updated: 2023/09/23 15:20:54 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    int i;
    int j;

    if(argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    i = 0;
    while(argv[++i] && argc > 1)
    {
        j = -1;
        while(argv[i][++j])
            std::cout << (char)std::toupper(argv[i][j]);
        
        if(i < argc - 1)
            std::cout << " ";
    }
    std::cout << std::endl;
}