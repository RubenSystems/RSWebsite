//
//  Headlines.h
//  RubenSystemsWebsite
//
//  Created by Ruben Ticehurst-James on 22/08/2022.
//

#ifndef Headlines_h
#define Headlines_h


#include "../subviews/SecondaryProject.h"
#include "../subviews/BackgroundTextContent.h"

rswcf::View * headlines() {
	return rswcf::view("div", {
		rswcf::view("div", {
//			rswcf::view("div", {
//				rswcf::view("img")
//				->attr({"src", "https://ik.imagekit.io/arq09jvqm2s/RSWebsite/460x0w_HzNsjuf5p.png?ik-sdk-version=javascript-1.4.3&updatedAt=1661159746240"})
//				->style({"border-radius", "10px"})
//				->style({"width", "64px"})
//				->style({"margin-bottom", "16px"})
//			})
//			->style({"width", "64%"})
//			->style({"margin", "10rem auto -10rem"})
//			->attr({"class", "main-title"})
//			,
			secondary_project(
				"<img src='https://ik.imagekit.io/arq09jvqm2s/RSWebsite/460x0w_HzNsjuf5p.png?ik-sdk-version=javascript-1.4.3&updatedAt=1661159746240' style='border-radius:10px;width:64px;margin-bottom:16px'/><br/> Headlines Today",
				"The news, simplified",
				"HeadlinesToday summarises the news into 10 easy-to-read articles. <br><br>It is perfect for busy people who want to quickly stay up to date with the latest news. With HeadlinesToday, you can easily browse the latest news from several news outlets around the world.<br><br><a href='https://apps.apple.com/gb/app/headlines-today/id1363257410'> Learn More > </a>"
			)
		})
		
		
		
		,
		/*
		rswcf::view("div", {
			rswcf::view("div", {
				background_text_content("", "Search", "Find the news you are interested in", "<br>HeadlinesToday search is powered by RSiDX")
				->style({"padding", "32px"}),
				rswcf::view("img")
				->attr({"src", "https://ik.imagekit.io/arq09jvqm2s/RSWebsite/phone-2_VMhPZYHx7.png?ik-sdk-version=javascript-1.4.3&updatedAt=1661144896659"})
				->style({"max-height", "800px"})
				->style({"transform", "scale(1.3) translate(-20%, 20%)"})
				->attr({"class", "no-transform-big"})
			})
			->style({"display", "flex"})
			->style({"align-items", "center"})
			->style({"justify-content", "space-between"})
			->style({"background", "#efefef"})
			->style({"padding", "4rem 4rem"})
			->style({"border-radius", "25px"})
			->style({"overflow", "hidden"})
			->attr({"class", "big-no-flex"}),
			
			rswcf::view("div", {
				rswcf::view("div", {
					rswcf::view("p", {rswcf::content("HeadlinesToday uses privacy-oriented machine learning algorithms to suggest articles, without using a tracking system")})
					->style({"font-size", "32px"}),
					rswcf::view("div", {
						rswcf::view("img")
						->attr({"src", "https://ik.imagekit.io/arq09jvqm2s/RSWebsite/phone-3_Hz6hkd4zm.png?ik-sdk-version=javascript-1.4.3&updatedAt=1661144895534"})
						->style({"width", "100%"})
					})
					->style({"max-height", "800px"})
					->style({"margin-top", "-20%"})
					->style({"transform", "scale(0.8) translateY(20%)"})
				})
				->style({"display", "flex"})
				->style({"flex-direction", "column"})
				->style({"justify-content", "center"})
				->style({"background", "#efefef"})
				->style({"padding", "4rem 4rem"})
				->style({"border-radius", "25px"})
				->style({"overflow", "hidden"})
				->style({"width", "calc(50% - 8px)"})
				->attr({"class", "full-big"})
				->style({"margin-bottom", "16px"})
				->attr({"class", "big-no-flex"}),
				
				
				rswcf::view("div", {
					rswcf::view("p", {rswcf::content("HeadlinesToday curates the news into 10 articles. It's a great way to stay up-to-date on the latest news without spending hours scrolling through news sites.")})
					->style({"font-size", "32px"}),
					rswcf::view("div", {
						rswcf::view("img")
						->attr({"src", "https://ik.imagekit.io/arq09jvqm2s/RSWebsite/phone-1_tUvu_eE4D.png?ik-sdk-version=javascript-1.4.3&updatedAt=1661144902735"})
						->style({"width", "100%"})
					})
					->style({"max-height", "800px"})
					->style({"margin-top", "-20%"})
					->style({"transform", "scale(0.8) translateY(20%)"})
				})
				->style({"display", "flex"})
				->style({"flex-direction", "column"})
				->style({"justify-content", "center"})
				->style({"background", "#efefef"})
				->style({"padding", "4rem 4rem"})
				->style({"border-radius", "25px"})
				->style({"overflow", "hidden"})
				->style({"width", "calc(50% - 8px)"})
				->attr({"class", "full-big"})
				->style({"margin-bottom", "16px"})
				->attr({"class", "big-no-flex"}),
				
			})
			->style({"display", "flex"})
			->style({"justify-content", "space-between"})
			->style({"margin-top", "16px"})
			->attr({"class", "big-no-flex"})

			
		})
		->style({"transform", "scale(0.8)"})
		->style({"margin", "-64px auto"})
		 */
	});
}

#endif /* Headlines_h */
