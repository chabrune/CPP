/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <chabrune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:35:30 by chabrune          #+#    #+#             */
/*   Updated: 2023/09/26 11:48:13 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


void Contact::init_contact()
{
	std::string buff;
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
	std::cout << std::endl;
	this->darkest_secret = buff;
}

std::string Contact::put_search(int id)
{
	std::string buff;
	if(id == 1)
	{
		if(first_name.length() > 10)
		{
			buff = first_name.substr(0, 9) + ".";
			return(buff);
		}
		return(first_name);
	}
	if(id == 2)
	{
		if(last_name.length() > 10)
		{
			buff = last_name.substr(0, 9) + ".";
			return(buff);
		}
		return(last_name);
	}
	if(id == 3)
	{
		if(nickname.length() > 10)
		{
			buff = nickname.substr(0, 9) + ".";
			return(buff);
		}
		return(nickname);
	}
	return(0);
}

std::string Contact::display_informations(int id)
{
	if(id == 1)
		return(first_name);
	if(id == 2)
		return(last_name);
	if(id == 3)
		return(nickname);
	if(id == 4)
		return(phone_number);
	if(id == 5)
		return(darkest_secret);
	return(0);	
}
