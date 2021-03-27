/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1; /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"JetBrains Mono:size=11"
};
static const char *prompt = NULL; /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*                  fg         bg       */
	[SchemeNorm]    = { "#c5c8c6", "#1d1f21"},
	[SchemeSel]     = { "#c8ccd4", "#3c3836"},
	[SchemeOut]     = { "#000000", "#00ffff" },
	[SchemeBorder]  = { "#000000", "#005577" }, /* fg unused */
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

static int centered = 0; /* -c option; centers dmenu on screen */
static int minwidth = 250; /* minimum width when centered */

static unsigned int borderwidth = 0; /* -bw; border width */

/* -h option; minimum height of a menu line */
static unsigned int lineheight = 0;
static unsigned int min_lineheight = 8;
