-- Release info package -- Do NOT edit this file, it will be overwritten
---------------
-- Libraries --
---------------
--Standard libraries
library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
--Basic library
library base_lib;
use base_lib.base_lib_pkg.all;

-------------------------
-- Package declaration --
-------------------------
package release_info_pkg is

    ------------
    -- Types  --
    ------------
    -- Record containing the release information packed
    type date_t is record
        day             : integer range 1 to 31;
        month           : integer range 1 to 12;
        year            : integer range 0 to 99;
        hour            : integer range 0 to 23;
        min             : integer range 0 to 59;
        sec             : integer range 0 to 59;
        sec_since_epoch : integer;
    end record;

    ---------------
    -- Constants --
    ---------------
    constant RELEASE_DATE_C         : date_t := (26, 02, 16, 14, 04, 02, 1456506242);
    
end release_info_pkg;

