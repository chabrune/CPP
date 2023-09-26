/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <chabrune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:35:25 by chabrune          #+#    #+#             */
/*   Updated: 2023/09/26 11:55:40 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(int argc, char **argv)
{
	(void)argv;
	PhoneBook book;
	std::string buff = "";
	if(argc == 1)
	{
		book.prompt();
		while(1)
		{
			std::cout << ">> ";
			if(!std::getline(std::cin, buff))
				break;
			if(buff == "EXIT")
				break;
			if(buff == "ADD")
				book.add_contact();
			if(buff == "SEARCH")
				book.add_search();
		}
	}
	return (0);
}
