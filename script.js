

/**
 ==================
 Shard animations
 ==================
 */
const duration = 1000;
const baseScale = 40
const baseOffset = 500

new ScrollMagic.Scene({duration: (duration - 80), offset: 0})
.setPin(".hero-header")
// .addIndicators({name: "2 (duration: 0)"})
.addTo(controller);

new ScrollMagic.Scene({triggerElement: "body", duration: duration, offset: baseOffset})
.setTween(TweenMax.fromTo(".shard-1", 1, {
	transform: `scale(${baseScale})`,
}, {
	transform: "scale(1) translate(0px, 0px)",
}))
//.addIndicators({name: "2 (duration: 0)"})
.addTo(controller);

new ScrollMagic.Scene({triggerElement: "body", duration: duration, offset: baseOffset})
.setTween(TweenMax.fromTo(".shard-2", 1, {
	transform: `scale(${baseScale * 5}) `,
}, {
	transform: "scale(1) translate(0px, 0px)",
}))
//.addIndicators({name: "2 (duration: 0)"})
.addTo(controller);

new ScrollMagic.Scene({triggerElement: "body", duration: duration, offset: baseOffset})
.setTween(TweenMax.fromTo(".shard-3", 1, {
	transform: `scale(${baseScale * 25})`,
}, {
	transform: "scale(1) translate(0px, 0px)",
}))
//.addIndicators({name: "2 (duration: 0)"})
.addTo(controller);
/**
 ==================
 endof shard animations
 ==================
 */


/**
 ==================
 homepage hero video animation
 ==================
 */

var video_element = document.getElementsByClassName("home-video")[0];
new ScrollMagic.Scene({triggerElement: "body", duration: duration, offset: baseOffset})
	.addTo(controller)
	.on("progress", function (e) {
		video_element.currentTime = e.progress.toFixed(3) * 10
	});

/**
 ==================
 endof homepage hero video animation
 ==================
 */

/**
 ==================
 Navbar animations
 ==================
 */

//new ScrollMagic.Scene({triggerElement: ".main-title", duration: (duration + 40), offset: -100})
//.setTween(TweenMax.to(".navigation-bar", 1, {
//	color: "black !important",
//}))
////.addIndicators({name: "2 (duration: 0)"})
//.addTo(controller);



/**
 ==================
 Background item animations
 ==================
 */

const background_duration = 400
const background_text_duration = 100
const background_text_offset = 400

new ScrollMagic.Scene({triggerElement: ".rsidx-trigger", duration: background_duration, offset: background_text_offset})
.setTween(TweenMax.to(".rsidx", 1, {
	transform: "scale(0.9)",
	boxShadow: "10px 10px 50px rgba(0,0,0,0.2)",
	borderRadius: "25px"
}))
//.addIndicators({name: "2 (duration: 0)"})
.addTo(controller);


//new ScrollMagic.Scene({triggerElement: ".rsidx-trigger", duration: background_duration, offset: background_text_offset + 100})
//.setPin(".rsidx")
//.addTo(controller);

const target_elements = ["name", "title", "p"];
for (var i = 0; i < 3; i ++) {
	new ScrollMagic.Scene({triggerElement: ".rsidx-trigger", duration: background_text_duration, offset: background_text_offset + (i * 10)})
	.setTween(TweenMax.fromTo(`.rsidx-${target_elements[i]}`, 1, {
		transform: `translate(-50px, 50px)`,
		opacity: 0
	}, {
		transform: `translate(0px, 0px)`,
		opacity: 1
	}))
	//.addIndicators({name: "2 (duration: 0)"})
	.addTo(controller);
}


new ScrollMagic.Scene({triggerElement: ".rssrv-trigger", duration: background_duration, offset: background_text_offset})
.setTween(TweenMax.to(".rssrv", 1, {
	transform: "scale(0.9)",
	boxShadow: "10px 10px 50px rgba(0,0,0,0.2)",
	borderRadius: "25px"
}))
//.addIndicators({name: "2 (duration: 0)"})
.addTo(controller);

//new ScrollMagic.Scene({triggerElement: ".rssrv-trigger", duration: background_duration, offset: background_text_offset + 100})
//.setPin(".rssrv")
//.addTo(controller);


for (var i = 0; i < 3; i ++) {
	new ScrollMagic.Scene({triggerElement: ".rssrv-trigger", duration: background_text_duration, offset: background_text_offset + (i * 20)})
	.setTween(TweenMax.fromTo(`.rssrv-${target_elements[i]}`, 1, {
		transform: `translate(-50px, 50px)`,
		opacity: 0
	}, {
		transform: `translate(0px, 0px)`,
		opacity: 1
	}))
	//.addIndicators({name: "2 (duration: 0)"})
	.addTo(controller);
}
