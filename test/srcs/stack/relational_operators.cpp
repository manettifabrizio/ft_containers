/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   relational_operators.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanetti <fmanetti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 00:39:45 by fmanetti          #+#    #+#             */
/*   Updated: 2021/10/27 19:55:33 by fmanetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../general.hpp"

int		main()
{
	TESTED_NAMESPACE::stack<int> foo;   // three ints with a value of 100
	TESTED_NAMESPACE::stack<int> bar;   // two ints with a value of 200

	for (int i = 0; i < 3; i++)
		foo.push(100);
	
	for (int i = 0; i < 2; i++)
		bar.push(200);

	if (foo == bar) std::cout << "foo and bar are equal\n";
	if (foo != bar) std::cout << "foo and bar are not equal\n";
	if (foo < bar) std::cout << "foo is less than bar\n";
	if (foo > bar) std::cout << "foo is greater than bar\n";
	if (foo <= bar) std::cout << "foo is less than or equal to bar\n";
	if (foo >= bar) std::cout << "foo is greater than or equal to bar\n";

	for (int i = 0; i < 2; i++)
		bar.pop();

	for (int i = 0; i < 3; i++)
		bar.push(100);

	if (foo == bar) std::cout << "foo and bar are equal\n";
	if (foo != bar) std::cout << "foo and bar are not equal\n";
	if (foo < bar) std::cout << "foo is less than bar\n";
	if (foo > bar) std::cout << "foo is greater than bar\n";
	if (foo <= bar) std::cout << "foo is less than or equal to bar\n";
	if (foo >= bar) std::cout << "foo is greater than or equal to bar\n";

	bar.push(100);
	bar.push(100);

	if (foo == bar) std::cout << "foo and bar are equal\n";
	if (foo != bar) std::cout << "foo and bar are not equal\n";
	if (foo < bar) std::cout << "foo is less than bar\n";
	if (foo > bar) std::cout << "foo is greater than bar\n";
	if (foo <= bar) std::cout << "foo is less than or equal to bar\n";
	if (foo >= bar) std::cout << "foo is greater than or equal to bar\n";

	return (0);
}