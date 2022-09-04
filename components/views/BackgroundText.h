//
//  BackgroundText.h
//  RubenSystemsWebsite
//
//  Created by Ruben Ticehurst-James on 21/08/2022.
//

#ifndef BackgroundText_h
#define BackgroundText_h

#include "../../RSwCF/headers/View.h"
#include "../../RSwCF/headers/Content.h"

#include "../subviews/BackgroundTextContent.h"

rswcf::View * background_text(const std::string & uid, const std::string & name, const std::string & title, const std::string & description, const std::string & image_url) {
	return rswcf::view("div", {
			rswcf::view("div")
			->attr({"class", uid + "-trigger"}),
			rswcf::view("div", {
				rswcf::view("div", {
					background_text_content(uid, name, title, description)
				
			})
//			->style({"width", "64%"})
//				->attr({"class", "full-big"})
			->style({"margin", "10rem auto"})
		})
		->style({"background", "url('"+ image_url +"') no-repeat top"})
		->style({"background-size", "cover !important"})
		->style({"color", "white"})
		->style({"padding", "64px 0"})
		->attr({"class", uid})
		
	});
}

#endif /* BackgroundText_h */
