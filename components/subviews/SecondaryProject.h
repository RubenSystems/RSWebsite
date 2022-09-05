//
//  SecondaryProject.h
//  RubenSystemsWebsite
//
//  Created by Ruben Ticehurst-James on 21/08/2022.
//

#ifndef SecondaryProject_h
#define SecondaryProject_h

#include "../../RSwCF/headers/View.h"
#include "../../RSwCF/headers/Content.h"


rswcf::View * secondary_project(const std::string & name, const std::string & title, const std::string & description) {
	return rswcf::view("div", {
		rswcf::view("p", {
			rswcf::content(name)
		})
		->attr({"class", "main-title-para main-title-component"})
		->style({"width", "50%"})
		->style({"font-size", "32px"})
		->style({"font-weight", "bolder"}),
		rswcf::view("div", {
			rswcf::view("h1", {
				rswcf::content(title)
			})
			->attr({"class", "main-title-title main-title-component"})
			->style({"font-size", "64px"})
			->style({"font-weight", "900"})
			->style({"width", "50%"}),
			
			rswcf::view("p", {
				rswcf::content(description)
			})
			->attr({"class", "main-title-para main-title-component"})
			->style({"width", "50%"})
			->style({"font-size", "32px"})
			->style({"padding", "0 16px"})
			
		})
		->style({"display", "flex"})
		
		->attr({"class", "main-title-contianer"})
		
	})
	->style({"max-width", "1088px" })
	->style({"padding", "0 32px"})
	->style({"margin", "10rem auto"});

}


#endif /* SecondaryProject_h */
