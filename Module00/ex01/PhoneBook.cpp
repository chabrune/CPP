/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <chabrune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:35:36 by chabrune          #+#    #+#             */
/*   Updated: 2023/09/26 11:52:12 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::prompt()
{
	std::cout << "Welcome to PhoneBook\nHere is what you can do :\n1-ADD : save a new contact\n2-SEARCH : display a specific contact\n3-EXIT\nPlease type one of this three commands!" << std::endl << std::endl;
}

void PhoneBook::add_contact()
{
	static int i = 0;
	users[i++].init_contact();
	if(i > 7)
		i = 0;
	this->index = i;
}

void PhoneBook::add_search()
{
	if(this->index == 0)
	{
		std::cout << "Please register a contact before search" << std::endl << std::endl;
		return;
	}
	std::cout << "   Index  |First Name|Last Name | Nickname" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
	for(int i = 0; i < this->index; i++)
		std::cout << std::right << std::setw(10) << i + 1 << "|" << std::setw(10) << users[i].put_search(1) << "|" << std::setw(10) << users[i].put_search(2)  << "|" << std::setw(10) << users[i].put_search(3) << std::endl << std::endl;
	int j = 0;
	std::cout << "Enter index for complete contact informations : ";
	std::cin >> j;
	std::cout << std::endl << std::endl;
	if(j > 0 && j < 8)
	{
		std::cout << "Firstname : " << users[j - 1].display_informations(1) << std::endl;
		std::cout << "Lastname : " << users[j - 1].display_informations(2) << std::endl;
		std::cout << "Nickname : " << users[j - 1].display_informations(3) << std::endl;
		std::cout << "Phone number : " << users[j - 1].display_informations(4) << std::endl;
		std::cout << "Darkest secret : " << users[j - 1].display_informations(5) << std::endl << std::endl;
	}
}
