/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <chabrune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 13:35:20 by chabrune          #+#    #+#             */
/*   Updated: 2023/10/04 16:13:53 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

void	replace(const std::string filename, const std::string s1, const std::string s2)
{
	char c;
	std::string buff;
	std::ifstream inputFile;
	std::ofstream outputFile;
	std::string newFilename = filename + ".replace";
	inputFile.open(filename.c_str());
	if(inputFile.fail()){
		std::cerr << "Error : Unable to open input file." << std::endl;
		return;
	}
	while(!inputFile.eof() && inputFile >> std::noskipws >> c)
		buff += c;
	inputFile.close();
	outputFile.open(newFilename.c_str());
	if(outputFile.fail())
		return;
	size_t pos = 0;
	for(int i = 0; i < (int)buff.size(); i++){
		pos = buff.find(s1, i);
		if((int)pos != -1 && (int)pos == i){
			outputFile << s2;
			i += s1.size() - 1;
		}
		else
			outputFile << buff[i];
	}
	outputFile.close();
	return;
}

int main(int argc, char **argv)
{
	if(argc != 4){
		std::cerr << "Usage : " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return(1);
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	replace(filename, s1, s2);
}
