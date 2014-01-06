Devour - a Drupal Module for data liberation
============================================

##  DESCRIPTION
Devour provides an extensible workflow to establish connections to external sites and extract data according to user input. Devour prefers geodata that is referencable and comparible as this is most easily relatable.

It is extensible in that site configurations can be easily added using Drupal hooks. This allows much simpler (and in-turn much quicker) deployments to various sites. 

Devour depends on the following tools:

*	[Selenium WebDriver](http://docs.seleniumhq.org) to create REAL user sessions that can move thru a site and do complex tasks that are unavailable to other methods. 
*	[php-webdriver](https://github.com/php-webdriver) to send commands to Selenium using PHP.
*	[Drupal](http://www.drupal.org) to present the data and facilite in error handling.


Error handling and logging is a big part of Devour as there are so many possible iterations of a page response. Errors due to maintenance or changes are considered normal and must be well-documented and seamless to user interaction. Devour hooks integrate this error handling.



## ROADMAP

Here is the roadmap for development for Devour:

## Phase 1: Create basic functionality
1. Database table for storing system settings (adding sites)
2. What data I need to extract data - (Site name,User specific data)
3. Table for storing user settings (perferences) Array of data in table for now
4. Setup Fields added to devour_specific tables
5. Create initial form												
6. Block(s) for outputting the data
		
## Phase 2: Refine install
1. Database table for accessing content (caching)
2. Mapping functionality to tie into the user interface (Allow for more speicifc user location data (street))
3. Allow to add additional profiles from settings page
4. Add validation
5. Create custom user page for preferred content (Put preferred content in select boxes)
		 	
## Phase 3: Add advanced functionality to detect methods on a site automatically
