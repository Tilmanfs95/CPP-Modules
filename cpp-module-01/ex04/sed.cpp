/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 02:18:43 by tfriedri          #+#    #+#             */
/*   Updated: 2023/03/02 14:57:33 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void replace_occurrences(std::string &content, const std::string &s1, const std::string &s2) {
    size_t pos = 0;
	std::string	temp;
	pos = content.find(s1, pos);
    while (pos != std::string::npos)
	{
		temp = content.substr(0, pos);
		temp += s2;
		temp += content.substr(pos + s1.length());
		content = temp;
        pos += s2.length();
		pos = content.find(s1, pos);
    }
}

int main(int argc, char **argv) {
	// check argc and empty args
    if (argc != 4)
	{
        std::cerr << "Usage: " << argv[0] << " <file> <s1> <s2>" << std::endl;
        return 1;
    }
	if (std::string(argv[1]) == "" || std::string(argv[2]) == "")
	{
		std::cerr << "Error: <file> and <s1> must not be empty!" << std::endl;
		std::cerr << "Usage: " << argv[0] << " <file> <s1> <s2>" << std::endl;
		return 1;
	}
	std::string outfile_name = std::string(argv[1]) + ".replace";
    std::string s1 = argv[2];
    std::string s2 = argv[3];
	// try to open files
    std::ifstream infile(argv[1]);
    if (!infile) {
        std::cerr << "Error: could not open " << argv[1] << std::endl;
        return 1;
    }
	std::ofstream outfile(outfile_name);
    if (!outfile) {
        std::cerr << "Error: could not create or open " << outfile_name << std::endl;
        return 1;
    }
	// get the whole content of infile as std::string. The two istreambuf_iterator's mark the beginning and the end of the file.
    std::string content((std::istreambuf_iterator<char>(infile)), std::istreambuf_iterator<char>());
    // replace occurrences of s1 in content-string with s2 and write to outfile
    replace_occurrences(content, s1, s2);
    outfile << content;
	// close files
	infile.close();
    outfile.close();
    return 0;
}
