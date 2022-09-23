library ieee;
use ieee.std_logic_1164.all;

entity ful is 
port (
		a:in std_ulogic;
		b:in std_ulogic;
		c:in std_ulogic;
		sum:out std_ulogic;
		carry:out std_ulogic
		);
end ful;
architecture behave of ful is 
begin 
	sum<=a xor b xor c;
	carry<=(a and b) or (a and c) or (b and c);
end behave;