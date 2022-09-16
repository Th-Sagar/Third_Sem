
library ieee;
use ieee.std_logic_1164.all;

entity full_tb is 
end full_tb;


architecture test of full_tb is
	component ful 
	port (
	
		a:in std_ulogic;
		b:in std_ulogic;
		c:in std_ulogic;
		sum: out std_ulogic;
		carry: out std_ulogic
		);
end component;
signal a,b,c,sum,carry: std_ulogic;
begin
	full_tb:ful port map(a=>a,b=>b,c=>c,carry=>carry,sum=>sum);
	
	process begin 
	
		a<= 'X';
		b<= 'X';
		c<= 'X';
		wait for 1 ns;
		
		a<= '0';
		b<= '0';
		c<= '0';
		wait for 1 ns;
		
		a<= '0';
		b<= '0';
		c<= '1';
		wait for 1 ns;
		a<= '0';
		b<= '1';
		c<= '0';
		wait for 1 ns;
		
		a<= '0';
		b<= '1';
		c<= '1';
		wait for 1 ns;
		
		a<= '1';
		b<= '0';
		c<= '0';
		wait for 1 ns;
		
		a<='1';
		b<='0';
		c<='1';
		wait for 1 ns;
		
		a<= '1';
		b<= '1';
		c<= '0';
		wait for 1 ns;
		
		a<= '1';
		b<= '1';
		c<= '1';
		wait for 1 ns;
		
		assert false report "Reach end";
		wait;
	end process;
end test;
		
		
		