library ieee;
use ieee.std_logic_1164.all;

entity mux_tb is
end mux_tb;

architecture test of mux_tb is
	component mux
		port
		(
			a: in std_ulogic;
			b: in std_ulogic;
			c: in std_ulogic;
			d: in std_ulogic;
			s0: in std_ulogic;
			s1: in std_ulogic;
			o: out std_ulogic
		);
	end component;
	
	signal a, b, c, d, s0, s1, o : std_ulogic;
begin
	muxt: mux port map (a=>a, b=>b, c=>c, d=>d, s0=>s0, s1=>s1, o=>o);
	
	process begin
		
		wait for 1 ns;
		
		a <= '0';
		b <= '1';
		c <= '0';
		d <= '1';
		
		s0 <= '0';
		s1 <= '0';
		wait for 1 ns;
		
		s0 <= '0';
		s1 <= '1';
		wait for 1 ns;
		
		s0 <= '1';
		s1 <= '0';
		wait for 1 ns;
		
		s0 <= '1';
		s1 <= '1';
		wait for 1 ns;
		
		assert false report "Reached end of test";
		
		wait;
		
		end process;
	end test;
		
		