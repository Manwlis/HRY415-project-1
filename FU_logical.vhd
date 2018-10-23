library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity FU_logical is
    Port ( tag : in  STD_LOGIC_VECTOR (4 downto 0);
           op : in  STD_LOGIC;
           value_in1 : in  STD_LOGIC_VECTOR (31 downto 0);
           value_in2 : in  STD_LOGIC_VECTOR (31 downto 0);
           ready : out  STD_LOGIC;
           value_out : out  STD_LOGIC_VECTOR (31 downto 0);
           Q : out  STD_LOGIC_VECTOR (4 downto 0);
           request : out  STD_LOGIC;
           grant : in  STD_LOGIC;
			  Clk : in  STD_LOGIC);
end FU_logical;

architecture Behavioral of FU_logical is

COMPONENT Reg32BitR
port
(Clk,WrEn,Reset : in std_logic;
 Din : in  STD_LOGIC_VECTOR (31 downto 0);
 Dout : out std_logic_VECTOR (31 downto 0)); 
END COMPONENT;

COMPONENT logical_unit is
port 
(Vin1 : in  STD_LOGIC_VECTOR (31 downto 0);
 Vin2 : in  STD_LOGIC_VECTOR (31 downto 0);
 op : in  STD_LOGIC_VECTOR (1 downto 0);
 Vout : out  STD_LOGIC_VECTOR (31 downto 0));
end COMPONENT;

COMPONENT FU_logical_control is
port  
( grant : in  STD_LOGIC;
 request : out  STD_LOGIC;
 stage1_enable : out  STD_LOGIC;
 stage2_enable : out  STD_LOGIC;
 ready : out  STD_LOGIC;
 tag : in  STD_LOGIC_VECTOR (4 downto 0));
end COMPONENT;

signal execution_module_in1, execution_module_in2 ,tag_op_in ,tag_op_out, execution_module_out, q_reg_out : STD_LOGIC_VECTOR (31 downto 0);
signal stage1_enable, stage2_enable : STD_LOGIC;
begin

Value_in1_reg : Reg32BitR
port map(
	Clk => Clk,
	WrEn => stage1_enable,
	Reset => '0',
	Din => value_in1,
	Dout => execution_module_in1);
	
Value_in2_reg : Reg32BitR
port map(
	Clk => Clk,
	WrEn => stage1_enable,
	Reset => '0',
	Din => value_in2,
	Dout => execution_module_in2);
	
tag_op_in <= "00000000000000000000000000" & tag & op;

tag_op_reg : Reg32BitR
port map(
	Clk => Clk,
	WrEn => stage1_enable,
	Reset => '0',
	Din => tag_op_in,
	Dout => tag_op_out);

execution_module : logical_unit
port map(
	Vin1 => execution_module_in1,
	Vin2 => execution_module_in2,
	op => tag_op_out (1 downto 0),
	Vout => execution_module_out);

Result_reg : Reg32BitR
port map(
	Clk => Clk,
	WrEn => stage2_enable,
	Reset => '0',
	Din => execution_module_out,
	Dout => value_out);
	
q_reg : Reg32BitR
port map(
	Clk => Clk,
	WrEn => stage2_enable,
	Reset => '0',
	Din => tag_op_out,
	Dout => q_reg_out);

Q <= q_reg_out(6 downto 2);

control : FU_logical_control
port map( 
	grant => grant,
	request => request,
	stage1_enable => stage1_enable,
	stage2_enable => stage1_enable,
	ready => ready,
	tag => tag); -- isws prepei na to parei ka8isterimeno ena kiklo
	
end Behavioral;

