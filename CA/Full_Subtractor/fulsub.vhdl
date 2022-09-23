library ieee;
use ieee.std_logic_1164.all;

entity fulsub is 
port (
		a:in std_ulogic;
		b:in std_ulogic;
		c:in std_ulogic;
		diff:out std_ulogic;
		borr:out std_ulogic
		);
end fulsub;
architecture behave of fulsub is 
begin 
	diff<=a xor b xor c;
	borr<=((not a) and b) or ((not a) and c) or (b and c);
end behave;
