Devour-Drupal-Module
====================

Devour provides an extensible workflow to establish connections to external sites and extract data according to user input. In short, it allows data mining sites that lack an API or REST.

It is extensible in that site configurations can be easily added using Drupal hooks. This allows much simpler (and in-turn much quicker) deployments to various sites. 

Devour uses Selenium WebDriver to create REAL user sessions that can move thru a site and do complex tasks that are unavailable to other methods. 

Error handling and logging is a big part of Devour as there are so many possible iterations of a page response. Errors due to maintenance or changes are considered normal and must be well-documented and seamless to user interaction. Devour hooks integrate this error handling.
