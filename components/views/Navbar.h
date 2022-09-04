//
//  Navbar.h
//  RubenSystemsWebsite
//
//  Created by Ruben Ticehurst-James on 18/08/2022.
//

#ifndef Navbar_h
#define Navbar_h

#include "../../RSwCF/headers/View.h"
#include "../../RSwCF/headers/Content.h"


rswcf::View * navbar() {
	return rswcf::view("div", {
		rswcf::view("div", {
			rswcf::content("Ruben"),
			rswcf::view("span", {
				rswcf::view("span", {rswcf::content("Systems"),
					rswcf::view("span", {rswcf::content(".")})
					->style({"color", "#00b595"})
				})
				->style({"font-weight", "bolder"}),
				
				
			})
			
		})
		->attr({"class", "navigation-bar"})
		->style({"font-size", "32px"})
	})
	->style({"z-index", "100"})
	->style({"width", "100%"})
	->style({"position", "absolute"})
	->style({"padding", "32px"})
	->style({"color", "white"})
	;
}


#endif /* Navbar_h */
