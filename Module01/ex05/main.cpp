/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:11:16 by chabrune          #+#    #+#             */
/*   Updated: 2023/10/01 16:42:08 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl frr;
	frr.complain("WARNING");
	frr.complain("INFO");
	frr.complain("DEBUG");
	frr.complain("ERROR");
	return(0);
}
