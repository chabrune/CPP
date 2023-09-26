/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:35:30 by chabrune          #+#    #+#             */
/*   Updated: 2023/09/26 14:56:08 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


void Contact::init_contact()
{
	std::string buff;
	static int i = 0;
	if(i++ > 7)
		i = 0;
	this->index = i;
	buff = "";
	while(buff.length() == 0 || buff.length() > 255)
	{
		std::cout << "Firstname : ";
		if(!std::getline(std::cin, buff))
			return;
		if(buff.length() == 0 || buff.length() > 255)
			std::cout << "Please try again" << std::endl << std::endl;
	}
	this->first_name = buff;
	buff = "";
	while(buff.length() == 0 || buff.length() > 255)
	{
		std::cout << "Last name : ";
		if(!std::getline(std::cin, buff))
			return;
		if(buff.length() == 0 || buff.length() > 255)
			std::cout << "Please try again" << std::endl << std::endl;
	}
	this->last_name = buff;
	buff = "";
	while(buff.length() == 0)
	{
		std::cout << "Nickname : ";
		if(!std::getline(std::cin, buff))
			return;
		if(buff.length() == 0 || buff.length() > 255)
			std::cout << "Please try again" << std::endl << std::endl;
	}
	this->nickname = buff;
	buff = "";
	while(buff.length() == 0)
	{
		std::cout << "Phone number : ";
		if(!std::getline(std::cin, buff))
			return;
		if(buff.length() == 0 || buff.length() > 255)
			std::cout << "Please try again" << std::endl << std::endl;
	}
	this->phone_number = buff;
	buff = "";
	while(buff.length() == 0)
	{
		std::cout << "Darkest secret : ";
		if(!std::getline(std::cin, buff))
			return;
		if(buff.length() == 0 || buff.length() > 255)
			std::cout << "Please try again" << std::endl << std::endl;
	}
	this->darkest_secret = buff;
}
void	Contact::init_search()
{
	std::cout << "Index    | First Name | Last Name  | Nickname  " << std::endl;
    std::cout << "-----------------------------------------" << std::endl;
	for (size_t i = 0; i < 8; ++i) {
        // Right-align and truncate strings if necessary
        std::cout << std::right << std::setw(10) << i << " | " << std::setw(10) << (contacts[i].firstName.length() > 10 ? contacts[i].firstName.substr(0, 9) + "." : contacts[i].firstName)
             << " | " << std::setw(10) << (contacts[i].lastName.length() > 10 ? contacts[i].lastName.substr(0, 9) + "." : contacts[i].lastName)
             << " | " << std::setw(10) << (contacts[i].nickname.length() > 10 ? contacts[i].nickname.substr(0, 9) + "." : contacts[i].nickname)
             << std::endl;
	}

}
