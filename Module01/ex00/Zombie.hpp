/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:52:37 by chabrune          #+#    #+#             */
/*   Updated: 2023/09/27 15:08:07 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>
# include <cstring>

class Zombie
{
	private:
		std::string		_name;
		std::string		_type;
	public:
		Zombie(std::string name, std::string type);
		~Zombie(void){};
		void			announce(void);
};

#endif
