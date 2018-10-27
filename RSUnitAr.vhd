----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:33:14 10/27/2018 
-- Design Name: 
-- Module Name:    RSUnitAr - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity RSUnitAr is
    Port ( RF_Vj : in  STD_LOGIC_VECTOR (31 downto 0);
			  RF_Vk : in  STD_LOGIC_VECTOR (31 downto 0);
			  RF_Qj : in  STD_LOGIC_VECTOR (4 downto 0);
			  RF_Qk : in  STD_LOGIC_VECTOR (4 downto 0);
			  CDB:in std_logic_vector(37 downto 0);
           Fop : in  STD_LOGIC_VECTOR (1 downto 0);
           issue_ready : in  STD_LOGIC;
           available : out  STD_LOGIC;
			  Vjout:out std_logic_vector(31 downto 0);
			  Vkout:out std_logic_vector(31 downto 0);
			  Fopout:out std_logic_vector(1 downto 0);
           tagRF: out  STD_LOGIC_VECTOR (4 downto 0);
			  tagFU:out std_logic_vector(4 downto 0));
end RSUnitAr;

architecture Behavioral of RSUnitAr is

begin


end Behavioral;

