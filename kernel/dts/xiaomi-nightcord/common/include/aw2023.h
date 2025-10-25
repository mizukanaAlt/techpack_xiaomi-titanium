#ifndef _DTS_MITHORIUM_INCLUDE_AW2013_H
#define _DTS_MITHORIUM_INCLUDE_AW2013_H

#define AW2023_LED(led_color, led_id) \
	aw2023,##led_color { \
		aw2023,name = #led_color; \
		aw2023,id = <led_id>; \
		aw2023,imax = <2>; \
		aw2023,led-current = <3>; \
		aw2023,max-brightness = <255>; \
		aw2023,rise-time-ms = <6>; \
		aw2023,hold-time-ms = <0>; \
		aw2023,fall-time-ms = <6>; \
		aw2023,off-time-ms = <4>; \
	};

#endif