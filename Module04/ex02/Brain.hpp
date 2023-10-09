/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <chabrune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 16:40:34 by chabrune          #+#    #+#             */
/*   Updated: 2023/10/08 19:52:01 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
    public:
    Brain();
    ~Brain();
    Brain& operator=(Brain const & rhs);
    Brain(Brain const & copy);
    void setIdea(std::string idea, unsigned int index);
    std::string getIdea( unsigned int index );
    void setAllIdea(std::string idea);
    void getAllIdea(void);



    private:
    std::string *ideas;
};

#endif