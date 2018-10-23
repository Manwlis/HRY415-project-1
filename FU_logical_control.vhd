library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity FU_logical_control is
    Port ( grant : in  STD_LOGIC;
           request : out  STD_LOGIC;
           stage1_enable : out  STD_LOGIC;
           stage2_enable : out  STD_LOGIC;
           ready : out  STD_LOGIC;
           tag : in  STD_LOGIC_VECTOR (4 downto 0));
end FU_logical_control;

architecture Behavioral of FU_logical_control is

begin
--lcontrol:process(Clk)
--begin
--if tag = "11111" then --invalid
--	request = 0;
--	ready = 1;
--	enable =0;
--	
--if request = 1 and grant = 0 then
--	enable = 0 
--	ready = 0
--	ksana request ston epomeno kiklo

end Behavioral;

