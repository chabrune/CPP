/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <chabrune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:35:30 by chabrune          #+#    #+#             */
/*   Updated: 2023/09/26 15:48:03 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


void Contact::init_contact()
{
	std::string buff;
	static int i = 0;
	if(i++ > 7)
		i = 0;
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

std::string put_search(int id)
{
	if(1 alors prenom / 2 nom / 3 surnom etc etc)
		return strigng
}
