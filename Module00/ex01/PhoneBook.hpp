/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:35:38 by chabrune          #+#    #+#             */
/*   Updated: 2023/09/27 13:33:40 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"
# include <cstring>
# include <iomanip>

class PhoneBook
{
	Contact users[8];
	int index;

	public:
	void add_search();
	void add_contact();
	void prompt();
	PhoneBook(){this->index = 0;};
	~PhoneBook(){};
};

#endif
