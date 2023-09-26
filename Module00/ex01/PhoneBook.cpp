/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:35:36 by chabrune          #+#    #+#             */
/*   Updated: 2023/09/26 14:52:02 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::prompt()
{
	std::cout << "Welcome to PhoneBook\nHere is what you can do :\n1-ADD : save a new contact\n2-SEARCH : display a specific contact\n3-EXIT\n Please type one of this three commands!" << std::endl << std::endl;
}

void PhoneBook::add_contact()
{
	static int i = 0;
	users[i++].init_contact();
	if(i > 7)
		i = 0;
}

void	PhoneBook::add_search()
{

}
