library ieee;
use ieee.std_logic_1164.all;

entity di is 
port (
		a: in std_ulogic;
		b: in std_ulogic;
		d: out std_ulogic;
		borr : out std_ulogic


);
end di;
architecture behave of di is 
begin 
	d<= a xor b ;
	borr<=((not a)and b);
end behave;