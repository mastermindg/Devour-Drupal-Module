Devour-Drupal-Module
====================

Devour provides an extensible workflow to establish connections to external sites and extract data according to user input. In short, it allows data mining sites that lack an API or REST.

It is extensible in that site configurations can be easily added using Drupal hooks. This allows much simpler (and in-turn much quicker) deployments to various sites. 

Devour uses Selenium WebDriver to create REAL user sessions that can move thru a site and do complex tasks that are unavailable to other methods. 

Error handling and logging is a big part of Devour as there are so many possible iterations of a page response. Errors due to maintenance or changes are considered normal and must be well-documented and seamless to user interaction. Devour hooks integrate this error handling.


ROADMAP

Here is the roadmap for development for Devour:

Phase 1: Create basic functional product
	Consists of:
		1) Database table for storing system settings (adding sites)					DONE
			What data I need to extract data:											DONE
				1) Site name															DONE
				2) User specific data											DONE
		2) User table for storing user settings (perferences)		DONE
			Preferred stores array for now												DONE
		3) User interface for preferences					DONE
			Setup Fields added to devour_specific tables
			Create initial form												
		4) Block(s) for outputting the data

		
Phase 2: Refine install
	Consists of:
		1) Database table for accessing content (caching)
		2) Mapping functionality to tie into the user interface
		 	Allow for more speicifc user location data (street)
		3) Allow to add additional profiles from settings page
		4) Add validation
		5) Create custom user page for preferred content
			a) Put preferred content in select boxes
		 	
Phase 3: Add advanced functionality to detect methods on a site automatically
