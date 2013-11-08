/*
 * tkMacOSXXCursors.h --
 *
 *	This file defines a set of Macintosh cursors that
 *	emulate the X cursor set. All of these cursors were
 *	constructed and donated by Grant Neufeld. (gneufeld@ccs.carleton.ca)
 *
 * Copyright (c) 1995-1996 Sun Microsystems, Inc.
 * Copyright 2008-2009, Apple Inc.
 * Copyright (c) 2008-2009 Daniel A. Steffen <das@users.sourceforge.net>
 *
 * See the file "license.terms" for information on usage and redistribution
 * of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 *
 * RCS: @(#) $Id$
 */

static const unsigned char tkMacOSXXCursors[][68] = {

#define TK_MAC_XCURSOR_X_cursor 0
[TK_MAC_XCURSOR_X_cursor] = {
	0xE0, 0x07, 0xF0, 0x0F, 0xF8, 0x1F, 0x7C, 0x3E, 0x3E, 0x7C, 0x1F, 0xF8, 0x0F, 0xF0, 0x07, 0xE0,
	0x07, 0xE0, 0x0F, 0xF0, 0x1F, 0xF8, 0x3E, 0x7C, 0x7C, 0x3E, 0xF8, 0x1F, 0xF0, 0x0F, 0xE0, 0x07,
	0xE0, 0x07, 0xF0, 0x0F, 0xF8, 0x1F, 0x7C, 0x3E, 0x3E, 0x7C, 0x1F, 0xF8, 0x0F, 0xF0, 0x07, 0xE0,
	0x07, 0xE0, 0x0F, 0xF0, 0x1F, 0xF8, 0x3E, 0x7C, 0x7C, 0x3E, 0xF8, 0x1F, 0xF0, 0x0F, 0xE0, 0x07,
	0x00, 0x07, 0x00, 0x07,
},

#define TK_MAC_XCURSOR_arrow 1
[TK_MAC_XCURSOR_arrow] = {
	0x00, 0x00, 0x00, 0x06, 0x00, 0x1E, 0x00, 0x7C, 0x01, 0xFC, 0x07, 0xF8, 0x00, 0xF8, 0x01, 0xF0,
	0x03, 0xB0, 0x07, 0x20, 0x0E, 0x20, 0x1C, 0x00, 0x38, 0x00, 0x70, 0x00, 0x20, 0x00, 0x00, 0x00,
	0x00, 0x07, 0x00, 0x1F, 0x00, 0x7F, 0x01, 0xFE, 0x07, 0xFE, 0x1F, 0xFC, 0x7F, 0xFC, 0x03, 0xF8,
	0x07, 0xF8, 0x0F, 0xF0, 0x1F, 0x70, 0x3E, 0x60, 0x7C, 0x60, 0xF8, 0x40, 0x70, 0x40, 0x20, 0x00,
	0x00, 0x01, 0x00, 0x0E,
},

#define TK_MAC_XCURSOR_based_arrow_down 2
[TK_MAC_XCURSOR_based_arrow_down] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x1F, 0xE0, 0x03, 0x00, 0x03, 0x00,
	0x03, 0x00, 0x0B, 0x40, 0x07, 0x80, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x1F, 0xE0, 0x07, 0x80, 0x07, 0x80,
	0x3F, 0xF0, 0x1F, 0xE0, 0x0F, 0xC0, 0x07, 0x80, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x0B, 0x00, 0x06,
},

#define TK_MAC_XCURSOR_based_arrow_up 3
[TK_MAC_XCURSOR_based_arrow_up] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x07, 0x80, 0x0B, 0x40, 0x03, 0x00,
	0x03, 0x00, 0x03, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x07, 0x80, 0x0F, 0xC0, 0x1F, 0xE0, 0x3F, 0xF0,
	0x07, 0x80, 0x07, 0x80, 0x1F, 0xE0, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x04, 0x00, 0x06,
},

#define TK_MAC_XCURSOR_boat 4
[TK_MAC_XCURSOR_boat] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x03, 0xC0, 0x84, 0x60, 0xFF, 0xFF,
	0x00, 0x18, 0x00, 0x20, 0x00, 0x40, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x03, 0xC0, 0x87, 0xE0, 0xFF, 0xFF,
	0xFF, 0xF8, 0xFF, 0xE0, 0xFF, 0xC0, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x07, 0x00, 0x0F,
},

#define TK_MAC_XCURSOR_bogosity 5
[TK_MAC_XCURSOR_bogosity] = {
	0x00, 0x00, 0x71, 0x1C, 0x11, 0x10, 0x11, 0x10, 0x11, 0x10, 0x7F, 0xFC, 0x51, 0x14, 0x51, 0x14,
	0x51, 0x14, 0x51, 0x14, 0x7F, 0xFC, 0x11, 0x10, 0x11, 0x10, 0x11, 0x10, 0x71, 0x1C, 0x00, 0x00,
	0x00, 0x00, 0x71, 0x1C, 0x11, 0x10, 0x11, 0x10, 0x11, 0x10, 0x7F, 0xFC, 0x7F, 0xFC, 0x7F, 0xFC,
	0x7F, 0xFC, 0x7F, 0xFC, 0x7F, 0xFC, 0x11, 0x10, 0x11, 0x10, 0x11, 0x10, 0x71, 0x1C, 0x00, 0x00,
	0x00, 0x01, 0x00, 0x07,
},

#define TK_MAC_XCURSOR_bottom_left_corner 6
[TK_MAC_XCURSOR_bottom_left_corner] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x00, 0xC0, 0x20, 0xC8, 0x40, 0xC8, 0x80,
	0xC9, 0x00, 0xCA, 0x00, 0xCC, 0x00, 0xCF, 0xC0, 0xC0, 0x00, 0xC0, 0x00, 0xFF, 0xF0, 0xFF, 0xF0,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x00, 0xC0, 0x20, 0xC8, 0x40, 0xC8, 0x80,
	0xC9, 0x00, 0xCA, 0x00, 0xCC, 0x00, 0xCF, 0xC0, 0xC0, 0x00, 0xC0, 0x00, 0xFF, 0xF0, 0xFF, 0xF0,
	0x00, 0x0F, 0x00, 0x00,
},

#define TK_MAC_XCURSOR_bottom_right_corner 7
[TK_MAC_XCURSOR_bottom_right_corner] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 0x03, 0x02, 0x13, 0x01, 0x13,
	0x00, 0x93, 0x00, 0x53, 0x00, 0x33, 0x03, 0xF3, 0x00, 0x03, 0x00, 0x03, 0x0F, 0xFF, 0x0F, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 0x03, 0x02, 0x13, 0x01, 0x13,
	0x00, 0x93, 0x00, 0x53, 0x00, 0x33, 0x03, 0xF3, 0x00, 0x03, 0x00, 0x03, 0x0F, 0xFF, 0x0F, 0xFF,
	0x00, 0x0F, 0x00, 0x0F,
},

#define TK_MAC_XCURSOR_bottom_side 8
[TK_MAC_XCURSOR_bottom_side] = {
	0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x11, 0x10,
	0x09, 0x20, 0x05, 0x40, 0x03, 0x80, 0x01, 0x00, 0x00, 0x00, 0x7F, 0xFC, 0x7F, 0xFC, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x11, 0x10,
	0x09, 0x20, 0x05, 0x40, 0x03, 0x80, 0x01, 0x00, 0x00, 0x00, 0x7F, 0xFC, 0x7F, 0xFC, 0x00, 0x00,
	0x00, 0x0B, 0x00, 0x07,
},

#define TK_MAC_XCURSOR_bottom_tee 9
[TK_MAC_XCURSOR_bottom_tee] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80,
	0x01, 0x80, 0x01, 0x80, 0x7F, 0xFE, 0x7F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80,
	0x01, 0x80, 0x01, 0x80, 0x7F, 0xFE, 0x7F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x0B, 0x00, 0x07,
},

#define TK_MAC_XCURSOR_box_spiral 10
[TK_MAC_XCURSOR_box_spiral] = {
	0xFF, 0xFE, 0x80, 0x00, 0xBF, 0xFE, 0xA0, 0x02, 0xAF, 0xFA, 0xA8, 0x0A, 0xAB, 0xEA, 0xAA, 0x2A,
	0xAA, 0xAA, 0xAB, 0xAA, 0xA8, 0x2A, 0xAF, 0xEA, 0xA0, 0x0A, 0xBF, 0xFA, 0x80, 0x02, 0xFF, 0xFE,
	0xFF, 0xFE, 0x80, 0x00, 0xBF, 0xFE, 0xA0, 0x02, 0xAF, 0xFA, 0xA8, 0x0A, 0xAB, 0xEA, 0xAA, 0x2A,
	0xAA, 0xAA, 0xAB, 0xAA, 0xA8, 0x2A, 0xAF, 0xEA, 0xA0, 0x0A, 0xBF, 0xFA, 0x80, 0x02, 0xFF, 0xFE,
	0x00, 0x08, 0x00, 0x08,
},

#define TK_MAC_XCURSOR_center_ptr 11
[TK_MAC_XCURSOR_center_ptr] = {
	0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x07, 0x80, 0x07, 0x80, 0x0F, 0xC0, 0x0F, 0xC0, 0x1F, 0xE0,
	0x1F, 0xE0, 0x33, 0x30, 0x23, 0x10, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00,
	0x03, 0x00, 0x07, 0x80, 0x07, 0x80, 0x0F, 0xC0, 0x0F, 0xC0, 0x1F, 0xE0, 0x1F, 0xE0, 0x3F, 0xF0,
	0x3F, 0xF0, 0x7F, 0xF8, 0x77, 0xB8, 0x67, 0x98, 0x07, 0x80, 0x07, 0x80, 0x07, 0x80, 0x07, 0x80,
	0x00, 0x01, 0x00, 0x06,
},

#define TK_MAC_XCURSOR_circle 12
[TK_MAC_XCURSOR_circle] = {
	0x00, 0x00, 0x03, 0xC0, 0x0F, 0xF0, 0x1F, 0xF8, 0x3C, 0x3C, 0x38, 0x1C, 0x70, 0x0E, 0x70, 0x0E,
	0x70, 0x0E, 0x70, 0x0E, 0x38, 0x1C, 0x3C, 0x3C, 0x1F, 0xF8, 0x0F, 0xF0, 0x03, 0xC0, 0x00, 0x00,
	0x03, 0xC0, 0x0F, 0xF0, 0x1F, 0xF8, 0x3F, 0xFC, 0x7F, 0xFE, 0x7C, 0x3E, 0xF8, 0x1F, 0xF8, 0x1F,
	0xF8, 0x1F, 0xF8, 0x1F, 0x7C, 0x3E, 0x7F, 0xFE, 0x3F, 0xFC, 0x1F, 0xF8, 0x0F, 0xF0, 0x03, 0xC0,
	0x00, 0x07, 0x00, 0x07,
},

#define TK_MAC_XCURSOR_clock 13
[TK_MAC_XCURSOR_clock] = {
	0x1F, 0xF8, 0x33, 0xCC, 0x64, 0x66, 0x49, 0x92, 0x4F, 0x12, 0x44, 0x22, 0x63, 0xC6, 0x3F, 0xFC,
	0x29, 0x94, 0x29, 0x94, 0x29, 0x94, 0x2B, 0xD4, 0x69, 0x96, 0x78, 0x1E, 0x7F, 0xFE, 0x7F, 0xFE,
	0x1F, 0xF8, 0x3F, 0xFC, 0x7F, 0xFE, 0x7F, 0xFE, 0x7F, 0xFE, 0x7F, 0xFE, 0x7F, 0xFE, 0x3F, 0xFC,
	0x3F, 0xFC, 0x3F, 0xFC, 0x3F, 0xFC, 0x3F, 0xFC, 0x7F, 0xFE, 0x7F, 0xFE, 0x7F, 0xFE, 0x7F, 0xFE,
	0x00, 0x04, 0x00, 0x08,
},

#define TK_MAC_XCURSOR_coffee_mug 14
[TK_MAC_XCURSOR_coffee_mug] = {
	0x03, 0xF8, 0x0C, 0x06, 0x10, 0x01, 0x1C, 0x07, 0x33, 0xF9, 0x70, 0x01, 0xD0, 0x01, 0x90, 0x01,
	0x96, 0x0D, 0xDA, 0x55, 0x7A, 0x55, 0x36, 0xED, 0x10, 0xA1, 0x10, 0x01, 0x08, 0x02, 0x07, 0xFC,
	0x03, 0xF8, 0x0F, 0xFE, 0x1F, 0xFF, 0x1F, 0xFF, 0x3F, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0x3F, 0xFF, 0x1F, 0xFF, 0x1F, 0xFF, 0x0F, 0xFE, 0x07, 0xFC,
	0x00, 0x04, 0x00, 0x03,
},

#define TK_MAC_XCURSOR_cross 15
[TK_MAC_XCURSOR_cross] = {
	0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0xFE, 0xFE, 0x00, 0x00,
	0xFE, 0xFE, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x00, 0x00,
	0x03, 0x80, 0x03, 0x80, 0x03, 0x80, 0x03, 0x80, 0x03, 0x80, 0x03, 0x80, 0xFF, 0xFE, 0xFF, 0xFE,
	0xFF, 0xFE, 0x03, 0x80, 0x03, 0x80, 0x03, 0x80, 0x03, 0x80, 0x03, 0x80, 0x03, 0x80, 0x00, 0x00,
	0x00, 0x07, 0x00, 0x07,
},

#define TK_MAC_XCURSOR_cross_reverse 16
[TK_MAC_XCURSOR_cross_reverse] = {
	0x42, 0x84, 0xA2, 0x8A, 0x52, 0x94, 0x2A, 0xA8, 0x16, 0xD0, 0x0A, 0xA0, 0xFD, 0x7E, 0x02, 0x80,
	0xFD, 0x7E, 0x0A, 0xA0, 0x16, 0xD0, 0x2A, 0xA8, 0x52, 0x94, 0xA2, 0x8A, 0x42, 0x84, 0x00, 0x00,
	0x43, 0x84, 0xE3, 0x8E, 0x73, 0x9C, 0x3B, 0xB8, 0x1F, 0xF0, 0x0F, 0xE0, 0xFF, 0xFE, 0xFF, 0xFE,
	0xFF, 0xFE, 0x0F, 0xE0, 0x1F, 0xF0, 0x3B, 0xB8, 0x73, 0x9C, 0xE3, 0x8E, 0x43, 0x84, 0x00, 0x00,
	0x00, 0x07, 0x00, 0x07,
},

#define TK_MAC_XCURSOR_crosshair 17
[TK_MAC_XCURSOR_crosshair] = {
	0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0xFE, 0xFE,
	0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00,
	0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0xFE, 0xFE,
	0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00,
	0x00, 0x07, 0x00, 0x07,
},

#define TK_MAC_XCURSOR_diamond_cross 18
[TK_MAC_XCURSOR_diamond_cross] = {
	0x02, 0x80, 0x06, 0xC0, 0x0A, 0xA0, 0x12, 0x90, 0x22, 0x88, 0x42, 0x84, 0xFE, 0xFE, 0x00, 0x00,
	0xFE, 0xFE, 0x42, 0x84, 0x22, 0x88, 0x12, 0x90, 0x0A, 0xA0, 0x06, 0xC0, 0x02, 0x80, 0x00, 0x00,
	0x02, 0x80, 0x06, 0xC0, 0x0E, 0xE0, 0x1E, 0xF0, 0x3E, 0xF8, 0x7E, 0xFC, 0xFE, 0xFE, 0x00, 0x00,
	0xFE, 0xFE, 0x7E, 0xFC, 0x3E, 0xF8, 0x1E, 0xF0, 0x0E, 0xE0, 0x06, 0xC0, 0x02, 0x80, 0x00, 0x00,
	0x00, 0x07, 0x00, 0x07,
},

#define TK_MAC_XCURSOR_dot 19
[TK_MAC_XCURSOR_dot] = {
	0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 0x1F, 0xE0, 0x1F, 0xE0, 0x3F, 0xF0, 0x3F, 0xF0, 0x3F, 0xF0,
	0x3F, 0xF0, 0x1F, 0xE0, 0x1F, 0xE0, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x07, 0x80, 0x1F, 0xE0, 0x3F, 0xF0, 0x3F, 0xF0, 0x7F, 0xF8, 0x7F, 0xF8, 0x7F, 0xF8,
	0x7F, 0xF8, 0x3F, 0xF0, 0x3F, 0xF0, 0x1F, 0xE0, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x06, 0x00, 0x06,
},

#define TK_MAC_XCURSOR_dotbox 20
[TK_MAC_XCURSOR_dotbox] = {
	0x00, 0x00, 0x00, 0x00, 0x3F, 0xFC, 0x20, 0x04, 0x20, 0x04, 0x20, 0x04, 0x20, 0x04, 0x21, 0x84,
	0x21, 0x84, 0x20, 0x04, 0x20, 0x04, 0x20, 0x04, 0x20, 0x04, 0x3F, 0xFC, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x3F, 0xFC, 0x3F, 0xFC, 0x30, 0x0C, 0x30, 0x0C, 0x31, 0x8C, 0x33, 0xCC,
	0x33, 0xCC, 0x31, 0x8C, 0x30, 0x0C, 0x30, 0x0C, 0x3F, 0xFC, 0x3F, 0xFC, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x07, 0x00, 0x07,
},

#define TK_MAC_XCURSOR_double_arrow 21
[TK_MAC_XCURSOR_double_arrow] = {
	0x00, 0x00, 0x01, 0x80, 0x03, 0xC0, 0x07, 0xE0, 0x0D, 0xB0, 0x19, 0x98, 0x01, 0x80, 0x01, 0x80,
	0x01, 0x80, 0x01, 0x80, 0x19, 0x98, 0x0D, 0xB0, 0x07, 0xE0, 0x03, 0xC0, 0x01, 0x80, 0x00, 0x00,
	0x01, 0x80, 0x03, 0xC0, 0x07, 0xE0, 0x0F, 0xF0, 0x1F, 0xF8, 0x3F, 0xFC, 0x3B, 0xDC, 0x03, 0xC0,
	0x03, 0xC0, 0x3B, 0xDC, 0x3F, 0xFC, 0x1F, 0xF8, 0x0F, 0xF0, 0x07, 0xE0, 0x03, 0xC0, 0x01, 0x80,
	0x00, 0x07, 0x00, 0x07,
},

#define TK_MAC_XCURSOR_draft_large 22
[TK_MAC_XCURSOR_draft_large] = {
	0x00, 0x00, 0x00, 0x02, 0x00, 0x0C, 0x00, 0x3C, 0x00, 0xF8, 0x03, 0xF8, 0x0F, 0xF0, 0x00, 0xF0,
	0x01, 0x60, 0x02, 0x60, 0x04, 0x40, 0x08, 0x40, 0x10, 0x00, 0x20, 0x00, 0x40, 0x00, 0x00, 0x00,
	0x00, 0x03, 0x00, 0x0F, 0x00, 0x3E, 0x00, 0xFE, 0x03, 0xFC, 0x0F, 0xFC, 0x3F, 0xF8, 0xFF, 0xF8,
	0x03, 0xF0, 0x07, 0xF0, 0x0E, 0xE0, 0x1C, 0xE0, 0x38, 0xC0, 0x70, 0xC0, 0xE0, 0x80, 0x40, 0x80,
	0x00, 0x01, 0x00, 0x0E,
},

#define TK_MAC_XCURSOR_draft_small 23
[TK_MAC_XCURSOR_draft_small] = {
	0x00, 0x00, 0x00, 0x02, 0x00, 0x0C, 0x00, 0x3C, 0x00, 0xF8, 0x03, 0xF8, 0x00, 0x70, 0x00, 0xB0,
	0x01, 0x20, 0x02, 0x20, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20, 0x00, 0x40, 0x00, 0x00, 0x00,
	0x00, 0x03, 0x00, 0x0F, 0x00, 0x3E, 0x00, 0xFE, 0x03, 0xFC, 0x0F, 0xFC, 0x3F, 0xF8, 0x01, 0xF8,
	0x03, 0xF0, 0x07, 0x70, 0x0E, 0x60, 0x1C, 0x60, 0x38, 0x40, 0x70, 0x40, 0xE0, 0x00, 0x40, 0x00,
	0x00, 0x01, 0x00, 0x0E,
},

#define TK_MAC_XCURSOR_draped_box 24
[TK_MAC_XCURSOR_draped_box] = {
	0x00, 0x00, 0x00, 0x00, 0x3F, 0xFC, 0x22, 0x44, 0x26, 0x64, 0x2C, 0x34, 0x38, 0x1C, 0x21, 0x84,
	0x21, 0x84, 0x38, 0x1C, 0x2C, 0x34, 0x26, 0x64, 0x22, 0x44, 0x3F, 0xFC, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x3F, 0xFC, 0x3E, 0x7C, 0x3E, 0x7C, 0x3C, 0x3C, 0x39, 0x9C, 0x23, 0xC4,
	0x23, 0xC4, 0x39, 0x9C, 0x3C, 0x3C, 0x3E, 0x7C, 0x3E, 0x7C, 0x3F, 0xFC, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x07, 0x00, 0x07,
},

#define TK_MAC_XCURSOR_exchange 25
[TK_MAC_XCURSOR_exchange] = {
	0x00, 0x00, 0x47, 0xC0, 0x6F, 0xE0, 0x7C, 0x30, 0x48, 0x10, 0x4C, 0x00, 0x7E, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFC, 0x00, 0x64, 0x10, 0x24, 0x18, 0x7C, 0x0F, 0xEC, 0x07, 0xC4, 0x00, 0x00,
	0xC7, 0xC0, 0xEF, 0xE0, 0xFF, 0xF0, 0xFF, 0xF8, 0xFC, 0x38, 0xFE, 0x10, 0xFF, 0x00, 0xFF, 0x80,
	0x03, 0xFE, 0x01, 0xFE, 0x10, 0xFE, 0x38, 0x7E, 0x3F, 0xFE, 0x1F, 0xFE, 0x0F, 0xEE, 0x07, 0xC6,
	0x00, 0x07, 0x00, 0x07,
},

#define TK_MAC_XCURSOR_fleur 26
[TK_MAC_XCURSOR_fleur] = {
	0x00, 0x00, 0x01, 0x80, 0x03, 0xC0, 0x07, 0xE0, 0x01, 0x80, 0x11, 0x88, 0x31, 0x8C, 0x7F, 0xFE,
	0x7F, 0xFE, 0x31, 0x8C, 0x11, 0x88, 0x01, 0x80, 0x07, 0xE0, 0x03, 0xC0, 0x01, 0x80, 0x00, 0x00,
	0x01, 0x80, 0x03, 0xC0, 0x07, 0xE0, 0x0F, 0xF0, 0x17, 0xE8, 0x3B, 0xDC, 0x7F, 0xFE, 0xFF, 0xFF,
	0xFF, 0xFF, 0x7F, 0xFE, 0x3B, 0xDC, 0x17, 0xE8, 0x0F, 0xF0, 0x07, 0xE0, 0x03, 0xC0, 0x01, 0x80,
	0x00, 0x07, 0x00, 0x07,
},

#define TK_MAC_XCURSOR_gobbler 27
[TK_MAC_XCURSOR_gobbler] = {
	0x00, 0x00, 0x00, 0x78, 0x00, 0x70, 0x40, 0x36, 0x4F, 0xB0, 0x7F, 0xF0, 0x7E, 0x30, 0x7C, 0x30,
	0x30, 0x38, 0x00, 0xF0, 0x0F, 0xE0, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x0F, 0x00, 0x00, 0x00,
	0x00, 0xFC, 0x00, 0xFC, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0xFF, 0xF8, 0xFF, 0xF8,
	0xFF, 0xFC, 0x7F, 0xFC, 0x3F, 0xF8, 0x1F, 0xF0, 0x0E, 0x00, 0x1F, 0x80, 0x1F, 0x80, 0x1F, 0x80,
	0x00, 0x03, 0x00, 0x0E,
},

#define TK_MAC_XCURSOR_gumby 28
[TK_MAC_XCURSOR_gumby] = {
	0x3F, 0x00, 0x10, 0xC0, 0xC8, 0x20, 0xEA, 0xA0, 0xC8, 0x20, 0xCB, 0xA0, 0xF8, 0x38, 0x38, 0x3E,
	0x08, 0x26, 0x08, 0x26, 0x09, 0x2E, 0x09, 0x26, 0x09, 0x20, 0x11, 0x10, 0x21, 0x08, 0x3E, 0xF8,
	0x3F, 0x00, 0x1F, 0xC0, 0xCF, 0xE0, 0xEF, 0xE0, 0xCF, 0xE0, 0xCF, 0xE0, 0xFF, 0xF8, 0x3F, 0xFE,
	0x0F, 0xE6, 0x0F, 0xE6, 0x0F, 0xEE, 0x0F, 0xE6, 0x0F, 0xE0, 0x1F, 0xF0, 0x3F, 0xF8, 0x3E, 0xF8,
	0x00, 0x00, 0x00, 0x02,
},

#define TK_MAC_XCURSOR_hand1 29
[TK_MAC_XCURSOR_hand1] = {
	0x00, 0x0C, 0x00, 0x3C, 0x00, 0xF0, 0x01, 0xE0, 0x03, 0xC0, 0x07, 0xE0, 0x0F, 0xF0, 0x2F, 0xE0,
	0x7F, 0xF0, 0x5F, 0xF0, 0x07, 0xE0, 0x07, 0xC0, 0x4A, 0x00, 0x62, 0x00, 0x34, 0x00, 0x18, 0x00,
	0x00, 0x0C, 0x00, 0x3C, 0x00, 0xF0, 0x01, 0xE0, 0x03, 0xC0, 0x07, 0xE0, 0x0F, 0xF0, 0x2F, 0xE0,
	0x7F, 0xF0, 0x7F, 0xF0, 0x7F, 0xE0, 0x7F, 0xC0, 0x7E, 0x00, 0x7E, 0x00, 0x3C, 0x00, 0x18, 0x00,
	0x00, 0x00, 0x00, 0x0D,
},

#define TK_MAC_XCURSOR_hand2 30
[TK_MAC_XCURSOR_hand2] = {
	0x00, 0x00, 0x3F, 0xC0, 0x40, 0x20, 0x3F, 0x10, 0x08, 0x08, 0x07, 0x08, 0x08, 0x08, 0x07, 0x14,
	0x08, 0x22, 0x06, 0x41, 0x01, 0x82, 0x01, 0x24, 0x00, 0x88, 0x00, 0x50, 0x00, 0x20, 0x00, 0x00,
	0x00, 0x00, 0x3F, 0xC0, 0x7F, 0xE0, 0x3F, 0xF0, 0x0F, 0xF8, 0x07, 0xF8, 0x0F, 0xF8, 0x07, 0xFC,
	0x0F, 0xFE, 0x07, 0xFF, 0x01, 0xFE, 0x01, 0xFC, 0x00, 0xF8, 0x00, 0x70, 0x00, 0x20, 0x00, 0x00,
	0x00, 0x02, 0x00, 0x01,
},

#define TK_MAC_XCURSOR_heart 31
[TK_MAC_XCURSOR_heart] = {
	0x00, 0x00, 0x3E, 0xF8, 0x63, 0x8C, 0xC1, 0x06, 0x80, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x02,
	0xC0, 0x06, 0x60, 0x0C, 0x30, 0x18, 0x18, 0x30, 0x0C, 0x60, 0x06, 0xC0, 0x03, 0x80, 0x00, 0x00,
	0x00, 0x00, 0x3E, 0xF8, 0x7F, 0xFC, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE,
	0xFF, 0xFE, 0x7F, 0xFC, 0x3F, 0xF8, 0x1F, 0xF0, 0x0F, 0xE0, 0x07, 0xC0, 0x03, 0x80, 0x00, 0x00,
	0x00, 0x03, 0x00, 0x07,
},

#define TK_MAC_XCURSOR_icon 32
[TK_MAC_XCURSOR_icon] = {
	0xFF, 0xFF, 0xD5, 0x55, 0xAA, 0xAB, 0xD5, 0x55, 0xA0, 0x0B, 0xD0, 0x05, 0xA0, 0x0B, 0xD0, 0x05,
	0xA0, 0x0B, 0xD0, 0x05, 0xA0, 0x0B, 0xD0, 0x05, 0xAA, 0xAB, 0xD5, 0x55, 0xAA, 0xAB, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x0F, 0xF0, 0x0F, 0xF0, 0x0F, 0xF0, 0x0F,
	0xF0, 0x0F, 0xF0, 0x0F, 0xF0, 0x0F, 0xF0, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0x00, 0x07, 0x00, 0x07,
},

#define TK_MAC_XCURSOR_iron_cross 33
[TK_MAC_XCURSOR_iron_cross] = {
	0x00, 0x00, 0x3F, 0xFC, 0x1F, 0xF8, 0x4F, 0xF2, 0x67, 0xE6, 0x73, 0xCE, 0x79, 0x9E, 0x7F, 0xFE,
	0x7F, 0xFE, 0x79, 0x9E, 0x73, 0xCE, 0x67, 0xE6, 0x4F, 0xF2, 0x1F, 0xF8, 0x3F, 0xFC, 0x00, 0x00,
	0x7F, 0xFE, 0x7F, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xFE, 0x7F, 0xFE,
	0x00, 0x07, 0x00, 0x06,
},

#define TK_MAC_XCURSOR_left_ptr 34
[TK_MAC_XCURSOR_left_ptr] = {
	0x00, 0x00, 0x08, 0x00, 0x0C, 0x00, 0x0E, 0x00, 0x0F, 0x00, 0x0F, 0x80, 0x0F, 0xC0, 0x0F, 0xE0,
	0x0F, 0xF0, 0x0F, 0x80, 0x0D, 0x80, 0x08, 0xC0, 0x00, 0xC0, 0x00, 0x60, 0x00, 0x60, 0x00, 0x00,
	0x18, 0x00, 0x1C, 0x00, 0x1E, 0x00, 0x1F, 0x00, 0x1F, 0x80, 0x1F, 0xC0, 0x1F, 0xE0, 0x1F, 0xF0,
	0x1F, 0xF8, 0x1F, 0xFC, 0x1F, 0xC0, 0x1D, 0xE0, 0x19, 0xE0, 0x10, 0xF0, 0x00, 0xF0, 0x00, 0x70,
	0x00, 0x01, 0x00, 0x04,
},

#define TK_MAC_XCURSOR_left_side 35
[TK_MAC_XCURSOR_left_side] = {
	0x00, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x80, 0x61, 0x00, 0x62, 0x00, 0x64, 0x00, 0x6F, 0xFC,
	0x64, 0x00, 0x62, 0x00, 0x61, 0x00, 0x60, 0x80, 0x60, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x80, 0x61, 0x00, 0x62, 0x00, 0x64, 0x00, 0x6F, 0xFC,
	0x64, 0x00, 0x62, 0x00, 0x61, 0x00, 0x60, 0x80, 0x60, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x07, 0x00, 0x04,
},

#define TK_MAC_XCURSOR_left_tee 36
[TK_MAC_XCURSOR_left_tee] = {
	0x00, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0F, 0xF8,
	0x0F, 0xF8, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0F, 0xF8,
	0x0F, 0xF8, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x00, 0x00,
	0x00, 0x07, 0x00, 0x04,
},

#define TK_MAC_XCURSOR_leftbutton 37
[TK_MAC_XCURSOR_leftbutton] = {
	0x80, 0x02, 0x7F, 0xFC, 0x7F, 0xFC, 0x44, 0x44, 0x45, 0x54, 0x45, 0x54, 0x45, 0x54, 0x45, 0x54,
	0x44, 0x44, 0x7F, 0xFC, 0x7F, 0xFC, 0x7F, 0xFC, 0x7F, 0xFC, 0x7F, 0xFC, 0x7F, 0xFC, 0x80, 0x02,
	0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE,
	0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE,
	0x00, 0x04, 0x00, 0x03,
},

#define TK_MAC_XCURSOR_ll_angle 38
[TK_MAC_XCURSOR_ll_angle] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00,
	0x0C, 0x00, 0x0C, 0x00, 0x0F, 0xF8, 0x0F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00,
	0x0C, 0x00, 0x0C, 0x00, 0x0F, 0xF8, 0x0F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x0B, 0x00, 0x04,
},

#define TK_MAC_XCURSOR_lr_angle 39
[TK_MAC_XCURSOR_lr_angle] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30,
	0x00, 0x30, 0x00, 0x30, 0x1F, 0xF0, 0x1F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30,
	0x00, 0x30, 0x00, 0x30, 0x1F, 0xF0, 0x1F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x0B, 0x00, 0x0B,
},

#define TK_MAC_XCURSOR_man 40
[TK_MAC_XCURSOR_man] = {
	0x03, 0x80, 0x1E, 0xF0, 0x02, 0x80, 0x81, 0x00, 0x43, 0x87, 0x24, 0x4B, 0x1D, 0x70, 0x05, 0x40,
	0x04, 0x40, 0x02, 0x80, 0x04, 0x40, 0x09, 0x20, 0x12, 0x90, 0x14, 0x50, 0x78, 0x3C, 0xF8, 0x3F,
	0x03, 0x80, 0x1F, 0xF0, 0x03, 0x80, 0x81, 0x00, 0x43, 0x87, 0x27, 0xCB, 0x1F, 0xF0, 0x07, 0xC0,
	0x07, 0xC0, 0x03, 0x80, 0x07, 0xC0, 0x0F, 0xE0, 0x1E, 0xF0, 0x1C, 0x70, 0x78, 0x3C, 0xF8, 0x3F,
	0x00, 0x01, 0x00, 0x07,
},

#define TK_MAC_XCURSOR_middlebutton 41
[TK_MAC_XCURSOR_middlebutton] = {
	0x80, 0x02, 0x7F, 0xFC, 0x7F, 0xFC, 0x44, 0x44, 0x54, 0x54, 0x54, 0x54, 0x54, 0x54, 0x54, 0x54,
	0x44, 0x44, 0x7F, 0xFC, 0x7F, 0xFC, 0x7F, 0xFC, 0x7F, 0xFC, 0x7F, 0xFC, 0x7F, 0xFC, 0x80, 0x02,
	0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE,
	0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE,
	0x00, 0x04, 0x00, 0x07,
},

#define TK_MAC_XCURSOR_mouse 42
[TK_MAC_XCURSOR_mouse] = {
	0x06, 0x00, 0x01, 0x00, 0x01, 0x80, 0x0F, 0xF0, 0x10, 0x08, 0x17, 0xE8, 0x14, 0x28, 0x14, 0x28,
	0x17, 0xE8, 0x10, 0x08, 0x10, 0x08, 0x10, 0x08, 0x10, 0x08, 0x10, 0x08, 0x10, 0x08, 0x0F, 0xF0,
	0x06, 0x00, 0x01, 0x00, 0x01, 0x80, 0x0F, 0xF0, 0x1F, 0xF8, 0x1F, 0xF8, 0x1F, 0xF8, 0x1F, 0xF8,
	0x1F, 0xF8, 0x1F, 0xF8, 0x1F, 0xF8, 0x1F, 0xF8, 0x1F, 0xF8, 0x1F, 0xF8, 0x1F, 0xF8, 0x0F, 0xF0,
	0x00, 0x00, 0x00, 0x00,
},

#define TK_MAC_XCURSOR_pencil 43
[TK_MAC_XCURSOR_pencil] = {
	0x00, 0x00, 0x00, 0xF0, 0x00, 0x88, 0x01, 0x08, 0x01, 0x90, 0x02, 0x70, 0x02, 0x20, 0x04, 0x40,
	0x04, 0x40, 0x08, 0x80, 0x08, 0x80, 0x11, 0x00, 0x1E, 0x00, 0x1C, 0x00, 0x18, 0x00, 0x10, 0x00,
	0x00, 0x00, 0x00, 0xF0, 0x00, 0xF8, 0x01, 0xF8, 0x01, 0xF0, 0x03, 0xF0, 0x03, 0xE0, 0x07, 0xC0,
	0x07, 0xC0, 0x0F, 0x80, 0x0F, 0x80, 0x1F, 0x00, 0x1E, 0x00, 0x1C, 0x00, 0x18, 0x00, 0x10, 0x00,
	0x00, 0x0F, 0x00, 0x03,
},

#define TK_MAC_XCURSOR_pirate 44
[TK_MAC_XCURSOR_pirate] = {
	0x03, 0xC0, 0x07, 0xE0, 0x0F, 0xF0, 0x19, 0x98, 0x19, 0x98, 0x0F, 0xF0, 0x07, 0xE0, 0x03, 0xC0,
	0x43, 0xC2, 0x43, 0xC3, 0x21, 0x84, 0x1C, 0x38, 0x03, 0xC0, 0x0F, 0xF1, 0x78, 0x1F, 0x40, 0x02,
	0x07, 0xE0, 0x0F, 0xF0, 0x1F, 0xF8, 0x3F, 0xFC, 0x3F, 0xFC, 0x1F, 0xF8, 0x0F, 0xF0, 0x47, 0xE2,
	0xE7, 0xE7, 0xE7, 0xE7, 0x7F, 0xFF, 0x3F, 0xFC, 0x1F, 0xF9, 0x7F, 0xFF, 0xFF, 0xFF, 0xF8, 0x1F,
	0x00, 0x0A, 0x00, 0x07,
},

#define TK_MAC_XCURSOR_plus 45
[TK_MAC_XCURSOR_plus] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x1F, 0xF8,
	0x1F, 0xF8, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x1F, 0xF8,
	0x1F, 0xF8, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x07, 0x00, 0x07,
},

#define TK_MAC_XCURSOR_question_arrow 46
[TK_MAC_XCURSOR_question_arrow] = {
	0x07, 0xC0, 0x0F, 0xE0, 0x1C, 0x70, 0x18, 0x30, 0x1C, 0x30, 0x0C, 0x70, 0x00, 0xE0, 0x03, 0xC0,
	0x03, 0x80, 0x02, 0x80, 0x02, 0x80, 0x0E, 0xE0, 0x06, 0xC0, 0x03, 0x80, 0x01, 0x00, 0x00, 0x00,
	0x07, 0xC0, 0x0F, 0xE0, 0x1C, 0x70, 0x18, 0x30, 0x1C, 0x30, 0x0C, 0x70, 0x00, 0xE0, 0x03, 0xC0,
	0x03, 0x80, 0x02, 0x80, 0x3F, 0xF8, 0x1F, 0xF0, 0x0F, 0xE0, 0x07, 0xC0, 0x03, 0x80, 0x01, 0x00,
	0x00, 0x0E, 0x00, 0x07,
},

#define TK_MAC_XCURSOR_right_ptr 47
[TK_MAC_XCURSOR_right_ptr] = {
	0x00, 0x00, 0x00, 0x10, 0x00, 0x30, 0x00, 0x70, 0x00, 0xF0, 0x01, 0xF0, 0x03, 0xF0, 0x07, 0xF0,
	0x0F, 0xF0, 0x01, 0xF0, 0x01, 0xB0, 0x03, 0x10, 0x03, 0x00, 0x06, 0x00, 0x06, 0x00, 0x00, 0x00,
	0x00, 0x18, 0x00, 0x38, 0x00, 0x78, 0x00, 0xF8, 0x01, 0xF8, 0x03, 0xF8, 0x07, 0xF8, 0x0F, 0xF8,
	0x1F, 0xF8, 0x3F, 0xF8, 0x03, 0xF8, 0x07, 0xB8, 0x07, 0x98, 0x0F, 0x08, 0x0F, 0x00, 0x0E, 0x00,
	0x00, 0x01, 0x00, 0x0B,
},

#define TK_MAC_XCURSOR_right_side 48
[TK_MAC_XCURSOR_right_side] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x06, 0x01, 0x06, 0x00, 0x86, 0x00, 0x46, 0x00, 0x26,
	0x3F, 0xF6, 0x00, 0x26, 0x00, 0x46, 0x00, 0x86, 0x01, 0x06, 0x00, 0x06, 0x00, 0x06, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x06, 0x01, 0x06, 0x00, 0x86, 0x00, 0x46, 0x00, 0x26,
	0x3F, 0xF6, 0x00, 0x26, 0x00, 0x46, 0x00, 0x86, 0x01, 0x06, 0x00, 0x06, 0x00, 0x06, 0x00, 0x00,
	0x00, 0x08, 0x00, 0x0B,
},

#define TK_MAC_XCURSOR_right_tee 49
[TK_MAC_XCURSOR_right_tee] = {
	0x00, 0x00, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x1F, 0xF0,
	0x1F, 0xF0, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x1F, 0xF0,
	0x1F, 0xF0, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x00,
	0x00, 0x07, 0x00, 0x0A,
},

#define TK_MAC_XCURSOR_rightbutton 50
[TK_MAC_XCURSOR_rightbutton] = {
	0x80, 0x02, 0x7F, 0xFC, 0x7F, 0xFC, 0x44, 0x44, 0x55, 0x44, 0x55, 0x44, 0x55, 0x44, 0x55, 0x44,
	0x44, 0x44, 0x7F, 0xFC, 0x7F, 0xFC, 0x7F, 0xFC, 0x7F, 0xFC, 0x7F, 0xFC, 0x7F, 0xFC, 0x80, 0x02,
	0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE,
	0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE,
	0x00, 0x04, 0x00, 0x03,
},

#define TK_MAC_XCURSOR_rtl_logo 51
[TK_MAC_XCURSOR_rtl_logo] = {
	0x00, 0x00, 0x7F, 0xFE, 0x40, 0x22, 0x40, 0x22, 0x40, 0x22, 0x7F, 0xE2, 0x44, 0x22, 0x44, 0x22,
	0x44, 0x22, 0x44, 0x22, 0x47, 0xFE, 0x44, 0x02, 0x44, 0x02, 0x44, 0x02, 0x7F, 0xFE, 0x00, 0x00,
	0x00, 0x00, 0x7F, 0xFE, 0x7F, 0xFE, 0x60, 0x76, 0x7F, 0xF6, 0x7F, 0xF6, 0x7C, 0x36, 0x6C, 0x36,
	0x6C, 0x36, 0x6C, 0x3E, 0x6F, 0xFE, 0x6F, 0xFE, 0x6E, 0x06, 0x7F, 0xFE, 0x7F, 0xFE, 0x00, 0x00,
	0x00, 0x07, 0x00, 0x07,
},

#define TK_MAC_XCURSOR_sailboat 52
[TK_MAC_XCURSOR_sailboat] = {
	0x00, 0x00, 0x00, 0x40, 0x00, 0x40, 0x01, 0x60, 0x01, 0x60, 0x03, 0x60, 0x03, 0x70, 0x07, 0x70,
	0x07, 0x70, 0x0F, 0x78, 0x0F, 0x78, 0x1F, 0x78, 0x1F, 0x7C, 0x3E, 0x38, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x40, 0x00, 0xE0, 0x01, 0xE0, 0x03, 0xF0, 0x03, 0xF0, 0x07, 0xF0, 0x07, 0xF8, 0x0F, 0xF8,
	0x0F, 0xF8, 0x1F, 0xFC, 0x1F, 0xFC, 0x3F, 0xFC, 0x3F, 0xFE, 0x7F, 0x7C, 0x7E, 0x38, 0x00, 0x00,
	0x00, 0x0C, 0x00, 0x08,
},

#define TK_MAC_XCURSOR_sb_down_arrow 53
[TK_MAC_XCURSOR_sb_down_arrow] = {
	0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80,
	0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x0F, 0xE0, 0x07, 0xC0, 0x03, 0x80, 0x01, 0x00, 0x00, 0x00,
	0x03, 0x80, 0x03, 0x80, 0x03, 0x80, 0x03, 0x80, 0x03, 0x80, 0x03, 0x80, 0x03, 0x80, 0x03, 0x80,
	0x03, 0x80, 0x03, 0x80, 0x03, 0x80, 0x1F, 0xF0, 0x0F, 0xE0, 0x07, 0xC0, 0x03, 0x80, 0x01, 0x00,
	0x00, 0x0E, 0x00, 0x07,
},

#define TK_MAC_XCURSOR_sb_h_double_arrow 54
[TK_MAC_XCURSOR_sb_h_double_arrow] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x10, 0x18, 0x18, 0x3F, 0xFC, 0x78, 0x1E,
	0x3F, 0xFC, 0x18, 0x18, 0x08, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x10, 0x18, 0x18, 0x38, 0x1C, 0x7F, 0xFE, 0xFF, 0xFF,
	0x7F, 0xFE, 0x38, 0x1C, 0x18, 0x18, 0x08, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x07, 0x00, 0x07,
},

#define TK_MAC_XCURSOR_sb_left_arrow 55
[TK_MAC_XCURSOR_sb_left_arrow] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x18, 0x00, 0x3F, 0xFF, 0x78, 0x00,
	0x3F, 0xFF, 0x18, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x18, 0x00, 0x38, 0x00, 0x7F, 0xFF, 0xFF, 0xFF,
	0x7F, 0xFF, 0x38, 0x00, 0x18, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x07, 0x00, 0x01,
},

#define TK_MAC_XCURSOR_sb_right_arrow 56
[TK_MAC_XCURSOR_sb_right_arrow] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x18, 0xFF, 0xFC,
	0x00, 0x1E, 0xFF, 0xFC, 0x00, 0x18, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x18, 0x00, 0x1C, 0xFF, 0xFE,
	0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x1C, 0x00, 0x18, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x08, 0x00, 0x0E,
},

#define TK_MAC_XCURSOR_sb_up_arrow 57
[TK_MAC_XCURSOR_sb_up_arrow] = {
	0x00, 0x00, 0x00, 0x80, 0x01, 0xC0, 0x03, 0xE0, 0x07, 0xF0, 0x01, 0x40, 0x01, 0x40, 0x01, 0x40,
	0x01, 0x40, 0x01, 0x40, 0x01, 0x40, 0x01, 0x40, 0x01, 0x40, 0x01, 0x40, 0x01, 0x40, 0x01, 0x40,
	0x00, 0x80, 0x01, 0xC0, 0x03, 0xE0, 0x07, 0xF0, 0x0F, 0xF8, 0x01, 0xC0, 0x01, 0xC0, 0x01, 0xC0,
	0x01, 0xC0, 0x01, 0xC0, 0x01, 0xC0, 0x01, 0xC0, 0x01, 0xC0, 0x01, 0xC0, 0x01, 0xC0, 0x01, 0xC0,
	0x00, 0x01, 0x00, 0x08,
},

#define TK_MAC_XCURSOR_sb_v_double_arrow 58
[TK_MAC_XCURSOR_sb_v_double_arrow] = {
	0x00, 0x00, 0x01, 0x00, 0x03, 0x80, 0x07, 0xC0, 0x0F, 0xE0, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80,
	0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x0F, 0xE0, 0x07, 0xC0, 0x03, 0x80, 0x01, 0x00, 0x00, 0x00,
	0x01, 0x00, 0x03, 0x80, 0x07, 0xC0, 0x0F, 0xE0, 0x1F, 0xF0, 0x03, 0x80, 0x03, 0x80, 0x03, 0x80,
	0x03, 0x80, 0x03, 0x80, 0x03, 0x80, 0x1F, 0xF0, 0x0F, 0xE0, 0x07, 0xC0, 0x03, 0x80, 0x01, 0x00,
	0x00, 0x07, 0x00, 0x07,
},

#define TK_MAC_XCURSOR_shuttle 59
[TK_MAC_XCURSOR_shuttle] = {
	0x00, 0x20, 0x00, 0x70, 0x00, 0xF8, 0x01, 0xDE, 0x05, 0xDE, 0x09, 0xDE, 0x11, 0xDE, 0x11, 0xDE,
	0x11, 0xDE, 0x11, 0xDE, 0x31, 0xDE, 0x71, 0xDE, 0xFD, 0xDE, 0x18, 0x88, 0x00, 0x78, 0x00, 0x30,
	0x00, 0x20, 0x00, 0x70, 0x00, 0xF8, 0x01, 0xFE, 0x07, 0xFE, 0x0F, 0xFE, 0x1F, 0xFE, 0x1F, 0xFE,
	0x1F, 0xFE, 0x1F, 0xFE, 0x3F, 0xFE, 0x7F, 0xFE, 0xFF, 0xFE, 0x18, 0xF8, 0x00, 0x78, 0x00, 0x30,
	0x00, 0x00, 0x00, 0x0A,
},

#define TK_MAC_XCURSOR_sizing 60
[TK_MAC_XCURSOR_sizing] = {
	0x00, 0x00, 0x7F, 0x80, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x47, 0xE0, 0x44, 0x20, 0x44, 0x22,
	0x44, 0x22, 0x04, 0x22, 0x07, 0xE2, 0x00, 0x12, 0x00, 0x0A, 0x00, 0x06, 0x01, 0xFE, 0x00, 0x00,
	0xFF, 0xC0, 0xFF, 0xC0, 0xFF, 0xC0, 0xE0, 0x00, 0xEF, 0xF0, 0xEF, 0xF0, 0xEC, 0x37, 0xEC, 0x37,
	0xEC, 0x37, 0xEC, 0x37, 0x0F, 0xF7, 0x0F, 0xFF, 0x00, 0x1F, 0x03, 0xFF, 0x03, 0xFF, 0x03, 0xFF,
	0x00, 0x0E, 0x00, 0x0E,
},

#define TK_MAC_XCURSOR_spider 61
[TK_MAC_XCURSOR_spider] = {
	0x20, 0x10, 0x10, 0x20, 0x10, 0x20, 0x08, 0x40, 0x08, 0x40, 0x87, 0x87, 0x67, 0x98, 0x1F, 0xE0,
	0x1F, 0xE0, 0x67, 0x98, 0x87, 0x87, 0x08, 0x40, 0x08, 0x40, 0x10, 0x20, 0x10, 0x20, 0x20, 0x10,
	0x70, 0x38, 0x38, 0x70, 0x38, 0x70, 0x1C, 0xE0, 0x9F, 0xE7, 0xEF, 0xDF, 0xFF, 0xFF, 0x7F, 0xF8,
	0x7F, 0xF8, 0xFF, 0xFF, 0xEF, 0xDF, 0x9F, 0xE7, 0x1C, 0xE0, 0x38, 0x70, 0x38, 0x70, 0x70, 0x38,
	0x00, 0x07, 0x00, 0x07,
},

#define TK_MAC_XCURSOR_spraycan 62
[TK_MAC_XCURSOR_spraycan] = {
	0x00, 0x18, 0x00, 0x40, 0x0D, 0x18, 0x1E, 0x40, 0x1A, 0x18, 0x3F, 0x00, 0x21, 0x00, 0x39, 0x00,
	0x29, 0x00, 0x39, 0x00, 0x29, 0x00, 0x39, 0x00, 0x39, 0x00, 0x21, 0x00, 0x21, 0x00, 0x3F, 0x00,
	0x00, 0x18, 0x00, 0x40, 0x0D, 0x18, 0x1E, 0x40, 0x1E, 0x18, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00,
	0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00,
	0x00, 0x02, 0x00, 0x07,
},

#define TK_MAC_XCURSOR_star 63
[TK_MAC_XCURSOR_star] = {
	0x01, 0x00, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x04, 0x40, 0x04, 0x40, 0x04, 0x40, 0x39, 0x38,
	0xC0, 0x06, 0x38, 0x38, 0x09, 0x20, 0x12, 0x90, 0x24, 0x48, 0x28, 0x28, 0x30, 0x18, 0x20, 0x08,
	0x01, 0x00, 0x03, 0x80, 0x03, 0x80, 0x03, 0x80, 0x07, 0xC0, 0x07, 0xC0, 0x07, 0xC0, 0x3F, 0xF8,
	0xFF, 0xFE, 0x3F, 0xF8, 0x0F, 0xE0, 0x1E, 0xF0, 0x3C, 0x78, 0x38, 0x38, 0x30, 0x18, 0x20, 0x08,
	0x00, 0x07, 0x00, 0x07,
},

#define TK_MAC_XCURSOR_target 64
[TK_MAC_XCURSOR_target] = {
	0x00, 0x00, 0x03, 0x80, 0x0F, 0xE0, 0x1C, 0x70, 0x30, 0x18, 0x60, 0x0C, 0xC1, 0x06, 0xC2, 0x86,
	0xC1, 0x06, 0x60, 0x0C, 0x30, 0x18, 0x1C, 0x70, 0x0F, 0xE0, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x03, 0x80, 0x0F, 0xE0, 0x1F, 0xF0, 0x3C, 0x78, 0x70, 0x1C, 0xE3, 0x8E, 0xE3, 0x8E,
	0xE3, 0x8E, 0x70, 0x1C, 0x3C, 0x78, 0x1F, 0xF0, 0x0F, 0xE0, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x07, 0x00, 0x07,
},

#define TK_MAC_XCURSOR_tcross 65
[TK_MAC_XCURSOR_tcross] = {
	0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0xFF, 0xFE,
	0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00,
	0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0xFF, 0xFE,
	0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00,
	0x00, 0x07, 0x00, 0x07,
},

#define TK_MAC_XCURSOR_top_left_arrow 66
[TK_MAC_XCURSOR_top_left_arrow] = {
	0x00, 0x00, 0x60, 0x00, 0x78, 0x00, 0x3E, 0x00, 0x3F, 0x80, 0x1F, 0xE0, 0x1E, 0x00, 0x0D, 0x00,
	0x0C, 0x80, 0x04, 0x40, 0x04, 0x20, 0x00, 0x10, 0x00, 0x08, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00,
	0xE0, 0x00, 0xF8, 0x00, 0xFE, 0x00, 0x7F, 0x80, 0x7F, 0xE0, 0x3F, 0xF8, 0x3F, 0xFE, 0x1F, 0x80,
	0x1F, 0xC0, 0x0E, 0xE0, 0x0E, 0x70, 0x06, 0x38, 0x06, 0x1C, 0x02, 0x0E, 0x02, 0x04, 0x00, 0x00,
	0x00, 0x01, 0x00, 0x01,
},

#define TK_MAC_XCURSOR_top_left_corner 67
[TK_MAC_XCURSOR_top_left_corner] = {
	0xFF, 0xF0, 0xFF, 0xF0, 0xC0, 0x00, 0xC0, 0x00, 0xCF, 0xC0, 0xCC, 0x00, 0xCA, 0x00, 0xC9, 0x00,
	0xC8, 0x80, 0xC8, 0x40, 0xC0, 0x20, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xFF, 0xF0, 0xFF, 0xF0, 0xC0, 0x00, 0xC0, 0x00, 0xCF, 0xC0, 0xCC, 0x00, 0xCA, 0x00, 0xC9, 0x00,
	0xC8, 0x80, 0xC8, 0x40, 0xC0, 0x20, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00,
},

#define TK_MAC_XCURSOR_top_right_corner 68
[TK_MAC_XCURSOR_top_right_corner] = {
	0x0F, 0xFF, 0x0F, 0xFF, 0x00, 0x03, 0x00, 0x03, 0x03, 0xF3, 0x00, 0x33, 0x00, 0x53, 0x00, 0x93,
	0x01, 0x13, 0x02, 0x13, 0x04, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x0F, 0xFF, 0x0F, 0xFF, 0x00, 0x03, 0x00, 0x03, 0x03, 0xF3, 0x00, 0x33, 0x00, 0x53, 0x00, 0x93,
	0x01, 0x13, 0x02, 0x13, 0x04, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x0F,
},

#define TK_MAC_XCURSOR_top_side 69
[TK_MAC_XCURSOR_top_side] = {
	0x00, 0x00, 0x7F, 0xFC, 0x7F, 0xFC, 0x00, 0x00, 0x01, 0x00, 0x03, 0x80, 0x05, 0x40, 0x09, 0x20,
	0x11, 0x10, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x7F, 0xFC, 0x7F, 0xFC, 0x00, 0x00, 0x01, 0x00, 0x03, 0x80, 0x05, 0x40, 0x09, 0x20,
	0x11, 0x10, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x04, 0x00, 0x07,
},

#define TK_MAC_XCURSOR_top_tee 70
[TK_MAC_XCURSOR_top_tee] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFE, 0x7F, 0xFE, 0x01, 0x80, 0x01, 0x80,
	0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFE, 0x7F, 0xFE, 0x01, 0x80, 0x01, 0x80,
	0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x04, 0x00, 0x07,
},

#define TK_MAC_XCURSOR_trek 71
[TK_MAC_XCURSOR_trek] = {
	0x01, 0x00, 0x00, 0x00, 0x03, 0x80, 0x07, 0xC0, 0x0F, 0xE0, 0x0E, 0xE0, 0x0F, 0xE0, 0x07, 0xC0,
	0x03, 0x80, 0x01, 0x00, 0x0B, 0xA0, 0x0D, 0x60, 0x09, 0x20, 0x08, 0x20, 0x08, 0x20, 0x00, 0x00,
	0x01, 0x00, 0x03, 0x80, 0x07, 0xC0, 0x0F, 0xE0, 0x1F, 0xF0, 0x1F, 0xF0, 0x1F, 0xF0, 0x0F, 0xE0,
	0x07, 0xC0, 0x0B, 0xA0, 0x1F, 0xF0, 0x1F, 0xF0, 0x1F, 0xF0, 0x1D, 0x70, 0x1C, 0x70, 0x08, 0x20,
	0x00, 0x00, 0x00, 0x07,
},

#define TK_MAC_XCURSOR_ul_angle 72
[TK_MAC_XCURSOR_ul_angle] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xF8, 0x0F, 0xF8, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00,
	0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xF8, 0x0F, 0xF8, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00,
	0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x03, 0x00, 0x04,
},

#define TK_MAC_XCURSOR_umbrella 73
[TK_MAC_XCURSOR_umbrella] = {
	0x00, 0x00, 0x08, 0x90, 0x02, 0x28, 0x49, 0xA6, 0x27, 0xC8, 0x19, 0x30, 0x61, 0x0C, 0x01, 0x00,
	0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x40, 0x01, 0x40, 0x00, 0x80, 0x00, 0x00,
	0x00, 0x00, 0x0F, 0xF0, 0x1F, 0xF8, 0x7F, 0xFE, 0x7F, 0xFC, 0xFF, 0xFE, 0xFB, 0xBE, 0xE3, 0x8E,
	0x03, 0x80, 0x03, 0x80, 0x03, 0x80, 0x03, 0xC0, 0x03, 0xE0, 0x03, 0xE0, 0x01, 0xC0, 0x00, 0x80,
	0x00, 0x04, 0x00, 0x07,
},

#define TK_MAC_XCURSOR_ur_angle 74
[TK_MAC_XCURSOR_ur_angle] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF0, 0x1F, 0xF0, 0x00, 0x30, 0x00, 0x30,
	0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF0, 0x1F, 0xF0, 0x00, 0x30, 0x00, 0x30,
	0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x04, 0x00, 0x0B,
},

#define TK_MAC_XCURSOR_watch 75
[TK_MAC_XCURSOR_watch] = {
	0x07, 0xE0, 0x07, 0xE0, 0x07, 0xE0, 0x07, 0xE0, 0x08, 0x10, 0x10, 0x88, 0x10, 0x88, 0x10, 0x8C,
	0x13, 0x8C, 0x10, 0x08, 0x10, 0x08, 0x08, 0x10, 0x07, 0xE0, 0x07, 0xE0, 0x07, 0xE0, 0x07, 0xE0,
	0x07, 0xE0, 0x07, 0xE0, 0x07, 0xE0, 0x07, 0xE0, 0x0F, 0xF0, 0x1F, 0xF8, 0x1F, 0xF8, 0x1F, 0xFC,
	0x1F, 0xFC, 0x1F, 0xF8, 0x1F, 0xF8, 0x0F, 0xF0, 0x07, 0xE0, 0x07, 0xE0, 0x07, 0xE0, 0x07, 0xE0,
	0x00, 0x08, 0x00, 0x0D,
},

#define TK_MAC_XCURSOR_xterm 76
[TK_MAC_XCURSOR_xterm] = {
	0x0C, 0x60, 0x02, 0x80, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00,
	0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x02, 0x80, 0x0C, 0x60,
	0x0C, 0x60, 0x02, 0x80, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00,
	0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x02, 0x80, 0x0C, 0x60,
	0x00, 0x0B, 0x00, 0x07,
},

};