//
//  BackgroundTextContent.h
//  RubenSystemsWebsite
//
//  Created by Ruben Ticehurst-James on 22/08/2022.
//

#ifndef BackgroundTextContent_h
#define BackgroundTextContent_h

#include "../../RSwCF/headers/View.h"
#include "../../RSwCF/headers/Content.h"


rswcf::View * background_text_content(const std::string & uid, const std::string & name, const std::string & title, const std::string & description) {
	return rswcf::view("div", {
		rswcf::view("p", {
			rswcf::content(name)
		})
		->style({"font-size", "32px"})
		->attr({"class", uid + "-name"}),
		
		rswcf::view("h1", {
			rswcf::content(title)
		})
		->style({"font-size", "64px"})
		->style({"font-weight", "900"})
		->attr({"class", uid + "-title"}),
		
		rswcf::view("p", {
			rswcf::content(description)
		})
		
		->style({"font-size", "32px"})
		->attr({"class", uid + "-p"})
	
	})
	->style({"width", "50%"})
	->style({"padding", "64px"})
	
	->attr({"class", "main-title big-no-flex"});
}

#endif /* BackgroundTextContent_h */
