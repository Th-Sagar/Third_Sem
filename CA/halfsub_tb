library ieee;
use ieee.std_logic_1164.all;

entity diff_tb is

end diff_tb;


architecture test of diff_tb is 
	component di
	port (
		a: in std_ulogic;
		b:in std_ulogic;
		d:out std_ulogic;
		borr: out std_ulogic


	);
end component;

signal a,b,d,borr:std_ulogic;
begin 
	diff_tb:di port map(a=>a,b=>b,d=>d,borr=>borr);

	process begin

		a<='X';
		b<='X';

		wait for 1 ns;

		a<='0';
		b<='0';

		wait for 1 ns;

		a<='0';
		b<='1';

		wait for 1 ns;



		a<='1';
		b<='0';

		wait for 1 ns;

		a<='1';
		b<='1';

		wait for 1 ns;
		
		assert false report "Sakiyo";
		wait;
	end process;
end test;