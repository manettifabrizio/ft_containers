/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanetti <fmanetti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 18:28:25 by fmanetti          #+#    #+#             */
/*   Updated: 2021/11/03 18:14:10 by fmanetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILITY_HPP
# define UTILITY_HPP

namespace ft
{

	/*	Pair class template
		This class couples together a pair of values, which may be of
		different types (T1 and T2). The individual values can be accessed
		through its public members first and second.
	*/

	template <class T1, class T2>
	struct pair
	{
		/*							MEMBER TYPES							*/

		T1			first;
		T2			second;

		/*		-*-*-*-*-*-*-*-  MEMBER FUNCTIONS -*-*-*-*-*-*-*-			*/

		/*							CONSTRUCTORS							*/

		/*	first()
			Constructs a pair object with its elements value-initialized.	*/
		pair( void ) : first(T1()), second(T2())
		{
		}

		/*	second()
			The object is initialized with the contents of the pr pair
			object. The corresponding member of pr is passed to the
			constructor of each of its members.								*/
		template<class U, class V>
		pair( const pair<U,V> &pr ) : first(pr.first), second(pr.second)
		{
		}

		/*	third()
			Member first is constructed with a and member second with b.	*/
		pair( const T1 &a, const T2 &b ) : first(a), second(b)
		{
		}
	};

	/*	Make_pair function template
		Constructs a pair object with its first element set to x and
		its second element set to y.
	*/

	template <class T1, class T2>
  	ft::pair<T1,T2>		make_pair (T1 x, T2 y)
	{
    	return ( ft::pair<T1,T2>(x,y) );
  	}

	template <class T>
	const T& max (const T& a, const T& b)
	{
		return (a < b) ? b : a;
	}

	/*			-*-*-*-*-*-*-*-  NON-MEMBER FUNCTIONS -*-*-*-*-*-*-*-		*/

	/*				-|-|-|-|- RELATIONAL OPERATORS -|-|-|-|-				*/

	template <class T1, class T2>
	bool operator==( const pair<T1,T2> &lhs, const pair<T1,T2> &rhs )
	{
		return ( lhs.first == rhs.first && lhs.second == rhs.second );
	}

	template <class T1, class T2>
	bool operator!=( const pair<T1,T2> &lhs, const pair<T1,T2> &rhs )
	{
		return ( !(lhs == rhs ) );
	}

	template <class T1, class T2>
	bool operator<( const pair<T1,T2> &lhs, const pair<T1,T2> &rhs )
	{
		return ( lhs.first < rhs.first ||
				(!(rhs.first < lhs.first) && lhs.second < rhs.second) );
	}

	template <class T1, class T2>
	bool operator<=( const pair<T1,T2> &lhs, const pair<T1,T2> &rhs )
	{
		return ( !(rhs < lhs) );
	}

	template <class T1, class T2>
	bool operator>( const pair<T1,T2> &lhs, const pair<T1,T2> &rhs )
	{
		return ( rhs < lhs );
	}

	template <class T1, class T2>
	bool operator>=( const pair<T1,T2> &lhs, const pair<T1,T2> &rhs )
	{
		return ( !(lhs < rhs) );
	}

}

#endif