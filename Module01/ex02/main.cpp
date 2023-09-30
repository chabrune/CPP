/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 19:28:14 by chabrune          #+#    #+#             */
/*   Updated: 2023/09/30 19:43:59 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(){
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << &brain << " address of the string variable" << std::endl;
	std::cout << stringPTR << " address held by stringPTR" << std::endl;
	std::cout << &stringREF << " address held by stringREF" << std::endl << std::endl;
	std::cout << brain << " value of the string variable" << std::endl;
	std::cout << *stringPTR << " value pointed to by stringPTR" << std::endl;
	std::cout << stringREF << " value pointed to by stringREF" << std::endl;
	return(0);
}
