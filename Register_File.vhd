library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity Register_File is
	Port(
		Instr_valid : in  STD_LOGIC;
		tag : in  STD_LOGIC_VECTOR (4 downto 0);
		Ri : in  STD_LOGIC_VECTOR (4 downto 0);
		Rj : in  STD_LOGIC_VECTOR (4 downto 0);
		Rk : in  STD_LOGIC_VECTOR (4 downto 0);
		CDB : in  STD_LOGIC_VECTOR (37 downto 0);
		Vi : out  STD_LOGIC_VECTOR (31 downto 0);
		Vj : out  STD_LOGIC_VECTOR (31 downto 0);
		Qi : out  STD_LOGIC_VECTOR (4 downto 0);
		Qj : out  STD_LOGIC_VECTOR (4 downto 0));
end Register_File;

architecture Behavioral of Register_File is

COMPONENT Reg5BitR
	port(
		Clk,WrEn,Reset : in std_logic;
		Din : in  STD_LOGIC_VECTOR (4 downto 0);
		Dout : out std_logic_VECTOR (4 downto 0)); 
END COMPONENT;

COMPONENT Reg32BitR
	port(
		Clk,WrEn,Reset : in std_logic;
		Din : in  STD_LOGIC_VECTOR (31 downto 0);
		Dout : out std_logic_VECTOR (31 downto 0)); 
END COMPONENT;

COMPONENT mux32to1_32Bit
	port(
		in0 : in  STD_LOGIC_VECTOR (31 downto 0);
		in1 : in  STD_LOGIC_VECTOR (31 downto 0);
		in2 : in  STD_LOGIC_VECTOR (31 downto 0);
		in3 : in  STD_LOGIC_VECTOR (31 downto 0);
		in4 : in  STD_LOGIC_VECTOR (31 downto 0);
		in5 : in  STD_LOGIC_VECTOR (31 downto 0);
		in6 : in  STD_LOGIC_VECTOR (31 downto 0);
		in7 : in  STD_LOGIC_VECTOR (31 downto 0);
		in8 : in  STD_LOGIC_VECTOR (31 downto 0);
		in9 : in  STD_LOGIC_VECTOR (31 downto 0);
		in10 : in  STD_LOGIC_VECTOR (31 downto 0);
		in11 : in  STD_LOGIC_VECTOR (31 downto 0);
		in12 : in  STD_LOGIC_VECTOR (31 downto 0);
		in13 : in  STD_LOGIC_VECTOR (31 downto 0);
		in14 : in  STD_LOGIC_VECTOR (31 downto 0);
		in15 : in  STD_LOGIC_VECTOR (31 downto 0);
		in16 : in  STD_LOGIC_VECTOR (31 downto 0);
		in17 : in  STD_LOGIC_VECTOR (31 downto 0);
		in18 : in  STD_LOGIC_VECTOR (31 downto 0);
		in19 : in  STD_LOGIC_VECTOR (31 downto 0);
		in20 : in  STD_LOGIC_VECTOR (31 downto 0);
		in21 : in  STD_LOGIC_VECTOR (31 downto 0);
		in22 : in  STD_LOGIC_VECTOR (31 downto 0);
		in23 : in  STD_LOGIC_VECTOR (31 downto 0);
		in24 : in  STD_LOGIC_VECTOR (31 downto 0);
		in25 : in  STD_LOGIC_VECTOR (31 downto 0);
		in26 : in  STD_LOGIC_VECTOR (31 downto 0);
		in27 : in  STD_LOGIC_VECTOR (31 downto 0);
		in28 : in  STD_LOGIC_VECTOR (31 downto 0);
		in29 : in  STD_LOGIC_VECTOR (31 downto 0);
		in30 : in  STD_LOGIC_VECTOR (31 downto 0);
		in31 : in  STD_LOGIC_VECTOR (31 downto 0);
		sel : in  STD_LOGIC_VECTOR (4 downto 0);
		output : out  STD_LOGIC_VECTOR (31 downto 0));
END COMPONENT;

COMPONENT mux32to1_5Bit
	port( 
		in0 : in  STD_LOGIC_VECTOR (4 downto 0);
		in1 : in  STD_LOGIC_VECTOR (4 downto 0);
		in2 : in  STD_LOGIC_VECTOR (4 downto 0);
		in3 : in  STD_LOGIC_VECTOR (4 downto 0);
		in4 : in  STD_LOGIC_VECTOR (4 downto 0);
		in5 : in  STD_LOGIC_VECTOR (4 downto 0);
		in6 : in  STD_LOGIC_VECTOR (4 downto 0);
		in7 : in  STD_LOGIC_VECTOR (4 downto 0);
		in8 : in  STD_LOGIC_VECTOR (4 downto 0);
		in9 : in  STD_LOGIC_VECTOR (4 downto 0);
		in10 : in  STD_LOGIC_VECTOR (4 downto 0);
		in11 : in  STD_LOGIC_VECTOR (4 downto 0);
		in12 : in  STD_LOGIC_VECTOR (4 downto 0);
		in13 : in  STD_LOGIC_VECTOR (4 downto 0);
		in14 : in  STD_LOGIC_VECTOR (4 downto 0);
		in15 : in  STD_LOGIC_VECTOR (4 downto 0);
		in16 : in  STD_LOGIC_VECTOR (4 downto 0);
		in17 : in  STD_LOGIC_VECTOR (4 downto 0);
		in18 : in  STD_LOGIC_VECTOR (4 downto 0);
		in19 : in  STD_LOGIC_VECTOR (4 downto 0);
		in20 : in  STD_LOGIC_VECTOR (4 downto 0);
		in21 : in  STD_LOGIC_VECTOR (4 downto 0);
		in22 : in  STD_LOGIC_VECTOR (4 downto 0);
		in23 : in  STD_LOGIC_VECTOR (4 downto 0);
		in24 : in  STD_LOGIC_VECTOR (4 downto 0);
		in25 : in  STD_LOGIC_VECTOR (4 downto 0);
		in26 : in  STD_LOGIC_VECTOR (4 downto 0);
		in27 : in  STD_LOGIC_VECTOR (4 downto 0);
		in28 : in  STD_LOGIC_VECTOR (4 downto 0);
		in29 : in  STD_LOGIC_VECTOR (4 downto 0);
		in30 : in  STD_LOGIC_VECTOR (4 downto 0);
		in4 : in  STD_LOGIC_VECTOR (4 downto 0);
		sel : in  STD_LOGIC_VECTOR (4 downto 0);
		output : out  STD_LOGIC_VECTOR (4 downto 0));
end COMPONENT;

begin


end Behavioral;

