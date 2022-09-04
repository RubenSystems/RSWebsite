//
//  HomePageHeader.hpp
//  RubenSystemsWebsite
//
//  Created by Ruben Ticehurst-James on 14/08/2022.
//

#ifndef HomePageHeader_hpp
#define HomePageHeader_hpp


#include <stdio.h>
#include "../../RSwCF/headers/View.h"
#include "../../RSwCF/headers/Content.h"

static rswcf::View * logo_fragment(const std::string & url, const std::string & shard_number) {
	return rswcf::view("img")
	->attr({"src", url})
	->style({"width", "100%"})
	->style({"position", "absolute"})
	->attr({"class", ("shard-" + shard_number)});
}

rswcf::View * hero_header() {
	return rswcf::view("div", {
		rswcf::view("div")
		->attr({"class", "hero-start-trigger"}),
		rswcf::view("div", {
			rswcf::view("video", {
				rswcf::view("source")
				->attr({"src", "https://ik.imagekit.io/arq09jvqm2s/RSWebsite/0001-0250_1Fx3pwIfl.mp4?ik-sdk-version=javascript-1.4.3&updatedAt=1662203299385"})
				->attr({"type", "video/mp4"})
			})
			->style({"width", "100%"})
			->attr({"class", "home-video video-1"}),
			rswcf::view("div", {
				rswcf::view("div", {
					logo_fragment("https://ik.imagekit.io/arq09jvqm2s/RSWebsite/rs3_L2dclmMdP.png?ik-sdk-version=javascript-1.4.3&updatedAt=1660471061372", "1"),
					logo_fragment("https://ik.imagekit.io/arq09jvqm2s/RSWebsite/rs1_8xp1Opj-D.png?ik-sdk-version=javascript-1.4.3&updatedAt=1660471057369", "2"),
					logo_fragment("https://ik.imagekit.io/arq09jvqm2s/RSWebsite/rs2_bmZGFNkWQ.png?ik-sdk-version=javascript-1.4.3&updatedAt=1660471053891", "3")
				})
				->style({"position", "relative"})
			})
			->style({"position", "absolute"})
			->style({"top", "50%"})
			->style({"left", "50%"})
			->style({"width", "200px"})
			->style({"height", "200px"})
			->style({"transform", "translate(-50%, -50%)"}),
			
			
			
		})
		->style({"background", "green"})
		->style({"display", "flex"})
		->style({"justify-content", "center"})
		->style({"align-items", "center"})
		->style({"position", "relative"})
		->style({"width", "100%"})
		->style({"height", "100vh"}),

		
	})
	->style({"overflow-y", "hidden"})
	->attr({"class", "hero-header"});
}



#endif /* HomePageHeader_hpp */
