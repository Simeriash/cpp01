/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 10:55:37 by julauren          #+#    #+#             */
/*   Updated: 2026/10/03 14:22:23 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

std::string replace(const std::string &content, const std::string &s1, const std::string &s2)
{
	if (s1.empty() || s2.empty())
		return (content);

	std::string newContent;

	return (newContent);
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Wrong nb of arguments." << std::endl;
		return (0);
	}

	std::ifstream myFile(av[1]);

	if (!myFile.is_open())
	{
		std::cerr << "Error opening the file." << std::endl;
		return (1);
	}

	std::string line, content;

	while (std::getline(myFile, line))
	{
		content += line;
		content += '\n';
	}

	myFile.close();

	std::string newContent = replace(content, av[2], av[3]);

	std::string nameFile = av[1];
	nameFile += ".replace";

	std::ofstream myNewFile(nameFile.c_str());

	if (!myNewFile.is_open())
	{
		std::cerr << "Error opening the file." << std::endl;
		return (1);
	}

	myNewFile << content;

	myNewFile.close();

}
