/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <chabrune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 16:40:36 by chabrune          #+#    #+#             */
/*   Updated: 2023/10/08 19:52:00 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    this->ideas = new std::string[100];
    for(int i = 0; i < 100; i++)
        this->ideas[i] = "Brain";
    std::cout << "Brain Default constructor called" << std::endl;
}

Brain::~Brain()
{
    delete [] (this->ideas);
    std::cout << "Brain Destructor called" << std::endl;
}

Brain::Brain(Brain const & copy)
{
    this->ideas = new std::string[100];
    for(int i = 0; i < 100; i++)
        this->ideas[i] = copy.ideas[i] + ".copied";
    std::cout << "Brain Constructor copy called" << std::endl;
}

Brain& Brain::operator=(Brain const & rhs)
{
    for(int i = 0; i < 100; i++)
        this->ideas[i] = rhs.ideas[i];
    std::cout << "Brain assignment operator called" << std::endl;
    return(*this);
}

void Brain::setIdea(std::string idea, unsigned int index)
{
    if(index > 99)
        return;
    this->ideas[index] = idea;
}

std::string Brain::getIdea(unsigned int index)
{
    if(index > 99)
        return(0);
    return(this->ideas[index]);   
}

void Brain::setAllIdea(std::string idea)
{
    for(int i = 0; i < 100; i++)
        this->ideas[i] = idea;
}

void Brain::getAllIdea(void)
{
    for(int i = 0; i < 100; i++)
    {
        std::cout << this->ideas[i] << std::endl;
    }
}