/*
||
|| @file Keypad.h
|| @version 4.0
|| @author Mark Stanley, Alexander Brevig, , Foone Turing
|| @contact mstanley@technologist.com, alexanderbrevig@gmail.com, fooneturing@gmail.com
||
|| @description
|| | Key class provides an abstract definition of a key or button
|| | and was initially designed to be used in conjunction with a
|| | state-machine.
|| #
||
|| @license
|| | This library is free software; you can redistribute it and/or
|| | modify it under the terms of the GNU Lesser General Public
|| | License as published by the Free Software Foundation; version
|| | 2.1 of the License.
|| |
|| | This library is distributed in the hope that it will be useful,
|| | but WITHOUT ANY WARRANTY; without even the implied warranty of
|| | MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
|| | Lesser General Public License for more details.
|| |
|| | You should have received a copy of the GNU Lesser General Public
|| | License along with this library; if not, write to the Free Software
|| | Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
|| #
||
*/

#ifndef Keypadlib_KEY_H_
#define Keypadlib_KEY_H_

#include <Arduino.h>

#define OPEN LOW
#define CLOSED HIGH

typedef unsigned int uint;
typedef enum{ IDLE, PRESSED, HOLD, RELEASED } KeyState;
typedef uint16_t keypad_type;

const keypad_type NO_KEY = 0xFFFF;

class Key {
public:
	// members
	keypad_type kcode;
	KeyState kstate;
	boolean stateChanged;

	// methods
	Key();
	Key(keypad_type userKeyCode);
	void key_update(keypad_type userKeyCode, KeyState userState, boolean userStatus);

private:

};

#endif

/*
|| @changelog
|| | 1.0 2012-06-04 - Mark Stanley : Initial Release
|| #
*/
