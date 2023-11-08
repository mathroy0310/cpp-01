/* ************************************************************************** */
/*                                                                            */
/*                                                     ██   ██ ██████         */
/*   ClapTrap.class.hpp                                ██   ██      ██        */
/*                                                     ███████  █████         */
/*   By: maroy <maroy@student.42.qc>                        ██ ██             */
/*                                                          ██ ███████.qc     */
/*   Created: 2023/10/19 12:11:08 by maroy                                    */
/*   Updated: 2023/11/08 17:06:22 by maroy            >(.)__ <(.)__ =(.)__    */
/*                                                     (___/  (___/  (___/    */
/* ************************************************************************** */

#pragma once
#ifndef CLAPTAP_H
# define CLAPTAP_H

# include "common.hpp"

class ClapTrap
{
  public:
	ClapTrap();
	ClapTrap(string name);
	ClapTrap(ClapTrap const &src);
	~ClapTrap();

	ClapTrap &operator=(ClapTrap const &rhs);

	// Getters
	string getName(void) const;
	unsigned int getHitPoints(void) const;
	unsigned int getEnergyPoints(void) const;
	unsigned int getMeleeAttackDamage(void) const;

	// Setters
	void setName(string name);
	void setHitPoints(unsigned int hit_points);
	void setEnergyPoints(unsigned int energy_points);
	void setMeleeAttackDamage(unsigned int attack_damage);

	// Member functions
	bool isAlive(void) const;
	bool isEnergy(void) const;
	void printStatus(void) const;
	void attack(string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	static const unsigned int _max_hit_points;
	static const unsigned int _max_energy_points;

  private:
	string _name;
	int _hit_points;
	unsigned int _energy_points;
	unsigned int _attack_damage;


};

#endif // CLAPTAP_H
