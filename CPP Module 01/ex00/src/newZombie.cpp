/* ************************************************************************** */
/*                                                                            */
/*                                                     ██   ██ ██████         */
/*   newZombie.cpp                                     ██   ██      ██        */
/*                                                     ███████  █████         */
/*   By: maroy <maroy@student.42.qc>                        ██ ██             */
/*                                                          ██ ███████.qc     */
/*   Created: 2023/10/14 16:57:11 by maroy                                    */
/*   Updated: 2023/10/14 17:05:09 by maroy            >(.)__ <(.)__ =(.)__    */
/*                                                     (___/  (___/  (___/    */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie *newZombie( string name ){
	Zombie *zombie = new Zombie(name);
	return (zombie);	
}