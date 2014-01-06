<?php

# File created for testing purposes
# Try out new hooks and functions	
	
function _devour_testing() {
        echo 'Running Background Process';
        echo '<Br>';
        $handle = background_process_start('_devour_testing22');
        echo background_process_current_handle($handle);
}
