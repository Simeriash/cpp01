/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 10:55:37 by julauren          #+#    #+#             */
/*   Updated: 2026/10/03 16:00:18 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include <fstream>
#include <iostream>
#include <string>

std::string replace(const std::string &content, const std::string &s1, const std::string &s2)
{
	if (content.empty() && s1.empty())
		return (s2);

	if (content.empty() || s1.empty())
		return (content);

	std::size_t len = s1.size();
	std::size_t pos = 0;
	std::string newContent;

	std::size_t found = content.find(s1);;

	if (found == std::string::npos)
		return (content);

	while (found != std::string::npos)
	{
		newContent.append(content, pos, found - pos);
		newContent.append(s2);
		pos = found + len;
		found = content.find(s1, pos);
	}

	newContent.append(content, pos, std::string::npos);

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
	bool first_line = true;

	while (std::getline(myFile, line))
	{
		if (!first_line)
			content += '\n';
		content += line;
		first_line = false;
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

	myNewFile << newContent;

	myNewFile.close();

}
