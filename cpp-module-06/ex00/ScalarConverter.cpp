/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:32:59 by tfriedri          #+#    #+#             */
/*   Updated: 2023/05/02 19:06:13 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int		ScalarConverter::check_input_type(const std::string& input)
{
	const char* c_input = input.c_str();
	char* succ;
	
	// check if empty
	if (input.empty())
		return 4;
	// check if char
	if (input.size() == 1 && !isdigit(c_input[0]))
		return 0;
	// check if int
    long long value = std::strtoll(c_input, &succ, 10);
    if (*succ == '\0')
    {
        if (value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min())
            return 4;
        else
            return 1;
    }
	// check if float
	std::strtof(c_input, &succ);
    if (strcmp(succ, "f") == 0)
        return 2;
	// check if double
    std::strtod(c_input, &succ);
    if (*succ == '\0')
	{
        return 3;
	}
	// impossible/nan
	return 4;
}

void	ScalarConverter::convert(const std::string& str)
{
	char	char_val;
	int		int_val;
	float	float_val;
	double	double_val;
	bool	valid_int = true;
	// check input-type and convert
	switch (check_input_type(str))
	{
		case 0:
			char_val = str[0];
			int_val = static_cast<int>(char_val);
			float_val = static_cast<float>(char_val);
			double_val = static_cast<double>(char_val);
			break;
		case 1:
			int_val = std::strtol(str.c_str(), NULL, 10);
			char_val = static_cast<char>(int_val);
			float_val = static_cast<float>(int_val);
			double_val = static_cast<double>(int_val);
			break;
		case 2:
			float_val = std::strtof(str.c_str(), NULL);
			char_val = static_cast<char>(float_val);
			int_val = static_cast<int>(float_val);
			double_val = static_cast<double>(float_val);
			break;
		case 3:
			double_val = std::strtod(str.c_str(), NULL);
			char_val = static_cast<char>(double_val);
			int_val = static_cast<int>(double_val);
			float_val = static_cast<float>(double_val);
			break;
		default:
			float_val = std::numeric_limits<float>::quiet_NaN();
			double_val = std::numeric_limits<double>::quiet_NaN();
			valid_int = false;
	}
	// print char
	if (valid_int == false || int_val < 0 || int_val > 127)
		std::cout << "char: impossible" << std::endl;
	else if (int_val < 32 || int_val > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << char_val << "'" << std::endl;
	// print int
	if (valid_int == true && double_val > -2147483649.0 && double_val < 2147483648.0)
		std::cout << "int: " << int_val << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	// print float
	std::cout << "float: " << float_val << "f" << std::endl;
	// print double
	std::cout << "double: " << double_val << std::endl;
}
