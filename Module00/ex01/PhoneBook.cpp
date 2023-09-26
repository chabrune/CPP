/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <chabrune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:35:36 by chabrune          #+#    #+#             */
/*   Updated: 2023/09/26 15:37:06 by chabrune         ###   ########.fr       */
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
	this->index = i;
	users[i++].init_contact();
	if(i > 7)
		i = 0;
}

void PhoneBook::add_search()
{
	std::cout << "Index    | First Name | Last Name  | nickname  " << std::endl;
    std::cout << "-----------------------------------------" << std::endl;
	static int i = 1;
	std::cout << std::right << std::setw(10) << i << " | " << std::setw(10) << (users[i].first_name.length() > 10 ? users[i].first_name.substr(0, 9) + "." : users[i].first_name);
	i++;
	users[this->index].init_search();
}
