//
//  SecondaryProjects.h
//  RubenSystemsWebsite
//
//  Created by Ruben Ticehurst-James on 21/08/2022.
//

#ifndef SecondaryProjects_h
#define SecondaryProjects_h

#include "../../RSwCF/headers/View.h"
#include "../../RSwCF/headers/Content.h"
#include "../subviews/SecondaryProject.h"


rswcf::View * secondary_projects() {
	return rswcf::view("div", {
		secondary_project(
			"RSrtIC",
			"Stay connected<br> in real time",
			"RSrtIC allows devices communicate in real time over the Internet. This can be used for voice and video calls, stock quotes, autocmoplete results and real-time security monitoring"
		)
		,
		rswcf::view("hr")
		->style({"width", "64%"})->style({"margin", "auto"}),
		secondary_project(
			"RSwCF",
			"The right way to<br> create websites",
			"RSwCF is a declaritive framework for the creation of websites. It provides a set of tools and libraries that enable developers to easily create and maintain complex web applications"
		)
		,
	});
}


#endif /* SecondaryProjects_h */
