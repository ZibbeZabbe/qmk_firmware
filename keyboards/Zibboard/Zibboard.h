#pragma once

#include "quantum.h"

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
    k00, k01, k02, k03, k04,     	        \
    k10, k11, k12, k13, k14,     	        \
    k20, k21, k22, k23, k24,      	        \
    k30, k31, k32, k33, k34,     	      \
    k40, k41,      k43, k44, k42, k45, k46, \
	k50, k51,      k53, k54, k52, k55, k56, \
	k60, k61,      k63, k64, k62, k65, k66, \
	k70, k71,      k73, k74, k72, k75, k76 \
) \
{ \
    { k00, k01, k02, k03, k04, KC_NO, KC_NO},  \
	{ k10, k11, k12, k13, k14, KC_NO, KC_NO},  \
	{ k20, k21, k22, k23, k24, KC_NO, KC_NO},  \
	{ k30, k31, k32, k33, k34, KC_NO, KC_NO},  \
    { k40, k41,      k43, k44, k42, k45, k46}, \
	{ k50, k51,	     k53, k54, k52, k55, k56}, \
	{ k60, k61,      k63, k64, k62, k65, k66}, \
	{ k70, k71,      k73, k74, k72, k75, k76}  \
}
