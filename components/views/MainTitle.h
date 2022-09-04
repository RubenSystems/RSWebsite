//
//  MainTitle.h
//  RubenSystemsWebsite
//
//  Created by Ruben Ticehurst-James on 18/08/2022.
//

#ifndef MainTitle_h
#define MainTitle_h

#include "../../RSwCF/headers/View.h"
#include "../../RSwCF/headers/Content.h"
#include "../subviews/SecondaryProject.h"

rswcf::View * main_title() {
	return secondary_project("RubenSystems", "Fast Efficient<br/>Powerful<br/>Technology", "RubenSystems is a London based cutting edge technology research company.<br><br>We specalise in developing new database engines, artificial intelligence, facial recognition and real-time computer networking technologies")
	->style({"margin", "10rem auto"});
	
//	rswcf::view("div", {
//		rswcf::view("h1", {
//			rswcf::content("Fast Efficient <br/> "),
//			rswcf::view("span", {rswcf::content("Powerful<br>")}),
//			rswcf::content("Technology")
//		})
//		->attr({"class", "main-title-title"})
//		->style({"font-size", "64px"})
//		->style({"width", "50%"})
//		->style({"font-weight", "900"}),
//
//		rswcf::view("p", {
//			rswcf::content("RubenSystems is a London based cutting edge technology research company.<br><br>We specalise in developing new database engines, artificial intelligence, facial recognition and real-time computer networking technologies")
//		})
//		->attr({"class", "main-title-para"})
//		->style({"width", "50%"})
//		->style({"font-size", "32px"})
//
//	})
//	->style({"width", "64%"})
//	->style({"display", "flex"})
////	->style({"justify-content", "space-between"})
//	->style({"margin", "10rem auto"})
//
//	->attr({"class", "main-title"})
//	;
}

#endif /* MainTitle_h */
