Explanation for ex03 Cpp-Module01:
Flow of the program: Line by Line 

## HumanA
1. **Line 20:** Weapon instance `club` is created, `this->_type` initialised to given string:"crude spiked club"
2. **Line 21:** HumanA instance `bob` is created, Constructor initialisation list: `this->_name` to name "Bob" and `this->_weapon` to given reference to weapon instance club
3. **Line 22:** Bob attacks with his new weapon "crude spiked club" through `_weapon` ref to access the instance member function `getType`
4. **Line 23:** Weapon member function `setType` changes `_type` of Weapon instance `club`
5. **Line 24:** Bob attacks with his new type of club "some other type of club.

## HumanB
1. **Line 27:** Weapon instance `club` is created, this step is 1:1 identical to `HumanA` step 1.
2. **Line 28:** HumanB instance `jim` is created, Constructor Initialisation List: `this->_name` to name "Jim" and `this->_weapon` private member attribute *weapon to `NULL`
3. **Line 29:** Jim attacks WITH HIS BARE HANDS as he holds no weapon (`this->_weapon == NULL`)
4. **Line 30:** Jim receives a weapon through setWeapon. Alias &weapon is created to temporarily hold club instance. In setWeapon, `this->_weapon` is set to Address of the alias, which stores the address of Weapon instance club, creating a pointer.
5. **Line 31:** Jim attacks with his new Weapon, referencing his pointer through this->_weapon get type
6. **Line 32:** Club setType new club "heavy club"
7. **Line 33:** Jim attacks with new weapon type heavy club through pointer.


Note: 
- While Step 3 of HumanA and Step 5 of HumanB may look identical, the attributes are stored in Class HumanA and Class HumanB as reference and Pointer respectively.