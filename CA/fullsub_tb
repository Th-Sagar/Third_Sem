library ieee;
use ieee.std_logic_1164.all;

entity fullsub_tb is 
end fullsub_tb;


architecture test of fullsub_tb is
	component fulsub 
	port (
	
		a:in std_ulogic;
		b:in std_ulogic;
		c:in std_ulogic;
		diff:out std_ulogic;
		borr:out std_ulogic
		);
end component;
signal a,b,c,diff,borr: std_ulogic;
begin
	full_tb:fulsub port map(a=>a,b=>b,c=>c,diff=>diff,borr=>borr);
	
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
		
		assert false report "sakiyo";
		wait;
	end process;
end test;
		