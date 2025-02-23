/*
 * Copyright (C) 2020 Linux Studio Plugins Project <https://lsp-plug.in/>
 *           (C) 2020 Vladimir Sadovnikov <sadko4u@gmail.com>
 *
 * This file is part of lsp-ws-lib
 * Created on: 8 сент. 2017 г.
 *
 * lsp-ws-lib is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * lsp-ws-lib is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with lsp-ws-lib. If not, see <https://www.gnu.org/licenses/>.
 */

#include <lsp-plug.in/common/types.h>

#ifdef USE_LIBX11

#include <lsp-plug.in/ws/keycodes.h>
#include <lsp-plug.in/ws/x11/decode.h>
#include <X11/Xlib.h>

namespace lsp
{
    namespace ws
    {
        namespace x11
        {
        #pragma pack(push, 1)
            typedef struct keymapping_t
            {
                uint16_t    keysym;
                uint16_t    unicode;
            } keymappint_t;
        #pragma pack(pop)

            keymapping_t keytable[] =
            {
                { 0x01a1, 0x0104 },
                { 0x01a2, 0x02d8 },
                { 0x01a3, 0x0141 },
                { 0x01a5, 0x013d },
                { 0x01a6, 0x015a },
                { 0x01a9, 0x0160 },
                { 0x01aa, 0x015e },
                { 0x01ab, 0x0164 },
                { 0x01ac, 0x0179 },
                { 0x01ae, 0x017d },
                { 0x01af, 0x017b },
                { 0x01b1, 0x0105 },
                { 0x01b2, 0x02db },
                { 0x01b3, 0x0142 },
                { 0x01b5, 0x013e },
                { 0x01b6, 0x015b },
                { 0x01b7, 0x02c7 },
                { 0x01b9, 0x0161 },
                { 0x01ba, 0x015f },
                { 0x01bb, 0x0165 },
                { 0x01bc, 0x017a },
                { 0x01bd, 0x02dd },
                { 0x01be, 0x017e },
                { 0x01bf, 0x017c },
                { 0x01c0, 0x0154 },
                { 0x01c3, 0x0102 },
                { 0x01c5, 0x0139 },
                { 0x01c6, 0x0106 },
                { 0x01c8, 0x010c },
                { 0x01ca, 0x0118 },
                { 0x01cc, 0x011a },
                { 0x01cf, 0x010e },
                { 0x01d0, 0x0110 },
                { 0x01d1, 0x0143 },
                { 0x01d2, 0x0147 },
                { 0x01d5, 0x0150 },
                { 0x01d8, 0x0158 },
                { 0x01d9, 0x016e },
                { 0x01db, 0x0170 },
                { 0x01de, 0x0162 },
                { 0x01e0, 0x0155 },
                { 0x01e3, 0x0103 },
                { 0x01e5, 0x013a },
                { 0x01e6, 0x0107 },
                { 0x01e8, 0x010d },
                { 0x01ea, 0x0119 },
                { 0x01ec, 0x011b },
                { 0x01ef, 0x010f },
                { 0x01f0, 0x0111 },
                { 0x01f1, 0x0144 },
                { 0x01f2, 0x0148 },
                { 0x01f5, 0x0151 },
                { 0x01f8, 0x0159 },
                { 0x01f9, 0x016f },
                { 0x01fb, 0x0171 },
                { 0x01fe, 0x0163 },
                { 0x01ff, 0x02d9 },
                { 0x02a1, 0x0126 },
                { 0x02a6, 0x0124 },
                { 0x02a9, 0x0130 },
                { 0x02ab, 0x011e },
                { 0x02ac, 0x0134 },
                { 0x02b1, 0x0127 },
                { 0x02b6, 0x0125 },
                { 0x02b9, 0x0131 },
                { 0x02bb, 0x011f },
                { 0x02bc, 0x0135 },
                { 0x02c5, 0x010a },
                { 0x02c6, 0x0108 },
                { 0x02d5, 0x0120 },
                { 0x02d8, 0x011c },
                { 0x02dd, 0x016c },
                { 0x02de, 0x015c },
                { 0x02e5, 0x010b },
                { 0x02e6, 0x0109 },
                { 0x02f5, 0x0121 },
                { 0x02f8, 0x011d },
                { 0x02fd, 0x016d },
                { 0x02fe, 0x015d },
                { 0x03a2, 0x0138 },
                { 0x03a3, 0x0156 },
                { 0x03a5, 0x0128 },
                { 0x03a6, 0x013b },
                { 0x03aa, 0x0112 },
                { 0x03ab, 0x0122 },
                { 0x03ac, 0x0166 },
                { 0x03b3, 0x0157 },
                { 0x03b5, 0x0129 },
                { 0x03b6, 0x013c },
                { 0x03ba, 0x0113 },
                { 0x03bb, 0x0123 },
                { 0x03bc, 0x0167 },
                { 0x03bd, 0x014a },
                { 0x03bf, 0x014b },
                { 0x03c0, 0x0100 },
                { 0x03c7, 0x012e },
                { 0x03cc, 0x0116 },
                { 0x03cf, 0x012a },
                { 0x03d1, 0x0145 },
                { 0x03d2, 0x014c },
                { 0x03d3, 0x0136 },
                { 0x03d9, 0x0172 },
                { 0x03dd, 0x0168 },
                { 0x03de, 0x016a },
                { 0x03e0, 0x0101 },
                { 0x03e7, 0x012f },
                { 0x03ec, 0x0117 },
                { 0x03ef, 0x012b },
                { 0x03f1, 0x0146 },
                { 0x03f2, 0x014d },
                { 0x03f3, 0x0137 },
                { 0x03f9, 0x0173 },
                { 0x03fd, 0x0169 },
                { 0x03fe, 0x016b },
                { 0x047e, 0x203e },
                { 0x04a1, 0x3002 },
                { 0x04a2, 0x300c },
                { 0x04a3, 0x300d },
                { 0x04a4, 0x3001 },
                { 0x04a5, 0x30fb },
                { 0x04a6, 0x30f2 },
                { 0x04a7, 0x30a1 },
                { 0x04a8, 0x30a3 },
                { 0x04a9, 0x30a5 },
                { 0x04aa, 0x30a7 },
                { 0x04ab, 0x30a9 },
                { 0x04ac, 0x30e3 },
                { 0x04ad, 0x30e5 },
                { 0x04ae, 0x30e7 },
                { 0x04af, 0x30c3 },
                { 0x04b0, 0x30fc },
                { 0x04b1, 0x30a2 },
                { 0x04b2, 0x30a4 },
                { 0x04b3, 0x30a6 },
                { 0x04b4, 0x30a8 },
                { 0x04b5, 0x30aa },
                { 0x04b6, 0x30ab },
                { 0x04b7, 0x30ad },
                { 0x04b8, 0x30af },
                { 0x04b9, 0x30b1 },
                { 0x04ba, 0x30b3 },
                { 0x04bb, 0x30b5 },
                { 0x04bc, 0x30b7 },
                { 0x04bd, 0x30b9 },
                { 0x04be, 0x30bb },
                { 0x04bf, 0x30bd },
                { 0x04c0, 0x30bf },
                { 0x04c1, 0x30c1 },
                { 0x04c2, 0x30c4 },
                { 0x04c3, 0x30c6 },
                { 0x04c4, 0x30c8 },
                { 0x04c5, 0x30ca },
                { 0x04c6, 0x30cb },
                { 0x04c7, 0x30cc },
                { 0x04c8, 0x30cd },
                { 0x04c9, 0x30ce },
                { 0x04ca, 0x30cf },
                { 0x04cb, 0x30d2 },
                { 0x04cc, 0x30d5 },
                { 0x04cd, 0x30d8 },
                { 0x04ce, 0x30db },
                { 0x04cf, 0x30de },
                { 0x04d0, 0x30df },
                { 0x04d1, 0x30e0 },
                { 0x04d2, 0x30e1 },
                { 0x04d3, 0x30e2 },
                { 0x04d4, 0x30e4 },
                { 0x04d5, 0x30e6 },
                { 0x04d6, 0x30e8 },
                { 0x04d7, 0x30e9 },
                { 0x04d8, 0x30ea },
                { 0x04d9, 0x30eb },
                { 0x04da, 0x30ec },
                { 0x04db, 0x30ed },
                { 0x04dc, 0x30ef },
                { 0x04dd, 0x30f3 },
                { 0x04de, 0x309b },
                { 0x04df, 0x309c },
                { 0x05ac, 0x060c },
                { 0x05bb, 0x061b },
                { 0x05bf, 0x061f },
                { 0x05c1, 0x0621 },
                { 0x05c2, 0x0622 },
                { 0x05c3, 0x0623 },
                { 0x05c4, 0x0624 },
                { 0x05c5, 0x0625 },
                { 0x05c6, 0x0626 },
                { 0x05c7, 0x0627 },
                { 0x05c8, 0x0628 },
                { 0x05c9, 0x0629 },
                { 0x05ca, 0x062a },
                { 0x05cb, 0x062b },
                { 0x05cc, 0x062c },
                { 0x05cd, 0x062d },
                { 0x05ce, 0x062e },
                { 0x05cf, 0x062f },
                { 0x05d0, 0x0630 },
                { 0x05d1, 0x0631 },
                { 0x05d2, 0x0632 },
                { 0x05d3, 0x0633 },
                { 0x05d4, 0x0634 },
                { 0x05d5, 0x0635 },
                { 0x05d6, 0x0636 },
                { 0x05d7, 0x0637 },
                { 0x05d8, 0x0638 },
                { 0x05d9, 0x0639 },
                { 0x05da, 0x063a },
                { 0x05e0, 0x0640 },
                { 0x05e1, 0x0641 },
                { 0x05e2, 0x0642 },
                { 0x05e3, 0x0643 },
                { 0x05e4, 0x0644 },
                { 0x05e5, 0x0645 },
                { 0x05e6, 0x0646 },
                { 0x05e7, 0x0647 },
                { 0x05e8, 0x0648 },
                { 0x05e9, 0x0649 },
                { 0x05ea, 0x064a },
                { 0x05eb, 0x064b },
                { 0x05ec, 0x064c },
                { 0x05ed, 0x064d },
                { 0x05ee, 0x064e },
                { 0x05ef, 0x064f },
                { 0x05f0, 0x0650 },
                { 0x05f1, 0x0651 },
                { 0x05f2, 0x0652 },
                { 0x06a1, 0x0452 },
                { 0x06a2, 0x0453 },
                { 0x06a3, 0x0451 },
                { 0x06a4, 0x0454 },
                { 0x06a5, 0x0455 },
                { 0x06a6, 0x0456 },
                { 0x06a7, 0x0457 },
                { 0x06a8, 0x0458 },
                { 0x06a9, 0x0459 },
                { 0x06aa, 0x045a },
                { 0x06ab, 0x045b },
                { 0x06ac, 0x045c },
                { 0x06ae, 0x045e },
                { 0x06af, 0x045f },
                { 0x06b0, 0x2116 },
                { 0x06b1, 0x0402 },
                { 0x06b2, 0x0403 },
                { 0x06b3, 0x0401 },
                { 0x06b4, 0x0404 },
                { 0x06b5, 0x0405 },
                { 0x06b6, 0x0406 },
                { 0x06b7, 0x0407 },
                { 0x06b8, 0x0408 },
                { 0x06b9, 0x0409 },
                { 0x06ba, 0x040a },
                { 0x06bb, 0x040b },
                { 0x06bc, 0x040c },
                { 0x06be, 0x040e },
                { 0x06bf, 0x040f },
                { 0x06c0, 0x044e },
                { 0x06c1, 0x0430 },
                { 0x06c2, 0x0431 },
                { 0x06c3, 0x0446 },
                { 0x06c4, 0x0434 },
                { 0x06c5, 0x0435 },
                { 0x06c6, 0x0444 },
                { 0x06c7, 0x0433 },
                { 0x06c8, 0x0445 },
                { 0x06c9, 0x0438 },
                { 0x06ca, 0x0439 },
                { 0x06cb, 0x043a },
                { 0x06cc, 0x043b },
                { 0x06cd, 0x043c },
                { 0x06ce, 0x043d },
                { 0x06cf, 0x043e },
                { 0x06d0, 0x043f },
                { 0x06d1, 0x044f },
                { 0x06d2, 0x0440 },
                { 0x06d3, 0x0441 },
                { 0x06d4, 0x0442 },
                { 0x06d5, 0x0443 },
                { 0x06d6, 0x0436 },
                { 0x06d7, 0x0432 },
                { 0x06d8, 0x044c },
                { 0x06d9, 0x044b },
                { 0x06da, 0x0437 },
                { 0x06db, 0x0448 },
                { 0x06dc, 0x044d },
                { 0x06dd, 0x0449 },
                { 0x06de, 0x0447 },
                { 0x06df, 0x044a },
                { 0x06e0, 0x042e },
                { 0x06e1, 0x0410 },
                { 0x06e2, 0x0411 },
                { 0x06e3, 0x0426 },
                { 0x06e4, 0x0414 },
                { 0x06e5, 0x0415 },
                { 0x06e6, 0x0424 },
                { 0x06e7, 0x0413 },
                { 0x06e8, 0x0425 },
                { 0x06e9, 0x0418 },
                { 0x06ea, 0x0419 },
                { 0x06eb, 0x041a },
                { 0x06ec, 0x041b },
                { 0x06ed, 0x041c },
                { 0x06ee, 0x041d },
                { 0x06ef, 0x041e },
                { 0x06f0, 0x041f },
                { 0x06f1, 0x042f },
                { 0x06f2, 0x0420 },
                { 0x06f3, 0x0421 },
                { 0x06f4, 0x0422 },
                { 0x06f5, 0x0423 },
                { 0x06f6, 0x0416 },
                { 0x06f7, 0x0412 },
                { 0x06f8, 0x042c },
                { 0x06f9, 0x042b },
                { 0x06fa, 0x0417 },
                { 0x06fb, 0x0428 },
                { 0x06fc, 0x042d },
                { 0x06fd, 0x0429 },
                { 0x06fe, 0x0427 },
                { 0x06ff, 0x042a },
                { 0x07a1, 0x0386 },
                { 0x07a2, 0x0388 },
                { 0x07a3, 0x0389 },
                { 0x07a4, 0x038a },
                { 0x07a5, 0x03aa },
                { 0x07a7, 0x038c },
                { 0x07a8, 0x038e },
                { 0x07a9, 0x03ab },
                { 0x07ab, 0x038f },
                { 0x07ae, 0x0385 },
                { 0x07af, 0x2015 },
                { 0x07b1, 0x03ac },
                { 0x07b2, 0x03ad },
                { 0x07b3, 0x03ae },
                { 0x07b4, 0x03af },
                { 0x07b5, 0x03ca },
                { 0x07b6, 0x0390 },
                { 0x07b7, 0x03cc },
                { 0x07b8, 0x03cd },
                { 0x07b9, 0x03cb },
                { 0x07ba, 0x03b0 },
                { 0x07bb, 0x03ce },
                { 0x07c1, 0x0391 },
                { 0x07c2, 0x0392 },
                { 0x07c3, 0x0393 },
                { 0x07c4, 0x0394 },
                { 0x07c5, 0x0395 },
                { 0x07c6, 0x0396 },
                { 0x07c7, 0x0397 },
                { 0x07c8, 0x0398 },
                { 0x07c9, 0x0399 },
                { 0x07ca, 0x039a },
                { 0x07cb, 0x039b },
                { 0x07cc, 0x039c },
                { 0x07cd, 0x039d },
                { 0x07ce, 0x039e },
                { 0x07cf, 0x039f },
                { 0x07d0, 0x03a0 },
                { 0x07d1, 0x03a1 },
                { 0x07d2, 0x03a3 },
                { 0x07d4, 0x03a4 },
                { 0x07d5, 0x03a5 },
                { 0x07d6, 0x03a6 },
                { 0x07d7, 0x03a7 },
                { 0x07d8, 0x03a8 },
                { 0x07d9, 0x03a9 },
                { 0x07e1, 0x03b1 },
                { 0x07e2, 0x03b2 },
                { 0x07e3, 0x03b3 },
                { 0x07e4, 0x03b4 },
                { 0x07e5, 0x03b5 },
                { 0x07e6, 0x03b6 },
                { 0x07e7, 0x03b7 },
                { 0x07e8, 0x03b8 },
                { 0x07e9, 0x03b9 },
                { 0x07ea, 0x03ba },
                { 0x07eb, 0x03bb },
                { 0x07ec, 0x03bc },
                { 0x07ed, 0x03bd },
                { 0x07ee, 0x03be },
                { 0x07ef, 0x03bf },
                { 0x07f0, 0x03c0 },
                { 0x07f1, 0x03c1 },
                { 0x07f2, 0x03c3 },
                { 0x07f3, 0x03c2 },
                { 0x07f4, 0x03c4 },
                { 0x07f5, 0x03c5 },
                { 0x07f6, 0x03c6 },
                { 0x07f7, 0x03c7 },
                { 0x07f8, 0x03c8 },
                { 0x07f9, 0x03c9 },
                { 0x08a1, 0x23b7 },
                { 0x08a2, 0x250c },
                { 0x08a3, 0x2500 },
                { 0x08a4, 0x2320 },
                { 0x08a5, 0x2321 },
                { 0x08a6, 0x2502 },
                { 0x08a7, 0x23a1 },
                { 0x08a8, 0x23a3 },
                { 0x08a9, 0x23a4 },
                { 0x08aa, 0x23a6 },
                { 0x08ab, 0x239b },
                { 0x08ac, 0x239d },
                { 0x08ad, 0x239e },
                { 0x08ae, 0x23a0 },
                { 0x08af, 0x23a8 },
                { 0x08b0, 0x23ac },
                { 0x08bc, 0x2264 },
                { 0x08bd, 0x2260 },
                { 0x08be, 0x2265 },
                { 0x08bf, 0x222b },
                { 0x08c0, 0x2234 },
                { 0x08c1, 0x221d },
                { 0x08c2, 0x221e },
                { 0x08c5, 0x2207 },
                { 0x08c8, 0x223c },
                { 0x08c9, 0x2243 },
                { 0x08cd, 0x21d4 },
                { 0x08ce, 0x21d2 },
                { 0x08cf, 0x2261 },
                { 0x08d6, 0x221a },
                { 0x08da, 0x2282 },
                { 0x08db, 0x2283 },
                { 0x08dc, 0x2229 },
                { 0x08dd, 0x222a },
                { 0x08de, 0x2227 },
                { 0x08df, 0x2228 },
                { 0x08ef, 0x2202 },
                { 0x08f6, 0x0192 },
                { 0x08fb, 0x2190 },
                { 0x08fc, 0x2191 },
                { 0x08fd, 0x2192 },
                { 0x08fe, 0x2193 },
                { 0x09e0, 0x25c6 },
                { 0x09e1, 0x2592 },
                { 0x09e2, 0x2409 },
                { 0x09e3, 0x240c },
                { 0x09e4, 0x240d },
                { 0x09e5, 0x240a },
                { 0x09e8, 0x2424 },
                { 0x09e9, 0x240b },
                { 0x09ea, 0x2518 },
                { 0x09eb, 0x2510 },
                { 0x09ec, 0x250c },
                { 0x09ed, 0x2514 },
                { 0x09ee, 0x253c },
                { 0x09ef, 0x23ba },
                { 0x09f0, 0x23bb },
                { 0x09f1, 0x2500 },
                { 0x09f2, 0x23bc },
                { 0x09f3, 0x23bd },
                { 0x09f4, 0x251c },
                { 0x09f5, 0x2524 },
                { 0x09f6, 0x2534 },
                { 0x09f7, 0x252c },
                { 0x09f8, 0x2502 },
                { 0x0aa1, 0x2003 },
                { 0x0aa2, 0x2002 },
                { 0x0aa3, 0x2004 },
                { 0x0aa4, 0x2005 },
                { 0x0aa5, 0x2007 },
                { 0x0aa6, 0x2008 },
                { 0x0aa7, 0x2009 },
                { 0x0aa8, 0x200a },
                { 0x0aa9, 0x2014 },
                { 0x0aaa, 0x2013 },
                { 0x0aae, 0x2026 },
                { 0x0aaf, 0x2025 },
                { 0x0ab0, 0x2153 },
                { 0x0ab1, 0x2154 },
                { 0x0ab2, 0x2155 },
                { 0x0ab3, 0x2156 },
                { 0x0ab4, 0x2157 },
                { 0x0ab5, 0x2158 },
                { 0x0ab6, 0x2159 },
                { 0x0ab7, 0x215a },
                { 0x0ab8, 0x2105 },
                { 0x0abb, 0x2012 },
                { 0x0abc, 0x2329 },
                { 0x0abe, 0x232a },
                { 0x0ac3, 0x215b },
                { 0x0ac4, 0x215c },
                { 0x0ac5, 0x215d },
                { 0x0ac6, 0x215e },
                { 0x0ac9, 0x2122 },
                { 0x0aca, 0x2613 },
                { 0x0acc, 0x25c1 },
                { 0x0acd, 0x25b7 },
                { 0x0ace, 0x25cb },
                { 0x0acf, 0x25af },
                { 0x0ad0, 0x2018 },
                { 0x0ad1, 0x2019 },
                { 0x0ad2, 0x201c },
                { 0x0ad3, 0x201d },
                { 0x0ad4, 0x211e },
                { 0x0ad6, 0x2032 },
                { 0x0ad7, 0x2033 },
                { 0x0ad9, 0x271d },
                { 0x0adb, 0x25ac },
                { 0x0adc, 0x25c0 },
                { 0x0add, 0x25b6 },
                { 0x0ade, 0x25cf },
                { 0x0adf, 0x25ae },
                { 0x0ae0, 0x25e6 },
                { 0x0ae1, 0x25ab },
                { 0x0ae2, 0x25ad },
                { 0x0ae3, 0x25b3 },
                { 0x0ae4, 0x25bd },
                { 0x0ae5, 0x2606 },
                { 0x0ae6, 0x2022 },
                { 0x0ae7, 0x25aa },
                { 0x0ae8, 0x25b2 },
                { 0x0ae9, 0x25bc },
                { 0x0aea, 0x261c },
                { 0x0aeb, 0x261e },
                { 0x0aec, 0x2663 },
                { 0x0aed, 0x2666 },
                { 0x0aee, 0x2665 },
                { 0x0af0, 0x2720 },
                { 0x0af1, 0x2020 },
                { 0x0af2, 0x2021 },
                { 0x0af3, 0x2713 },
                { 0x0af4, 0x2717 },
                { 0x0af5, 0x266f },
                { 0x0af6, 0x266d },
                { 0x0af7, 0x2642 },
                { 0x0af8, 0x2640 },
                { 0x0af9, 0x260e },
                { 0x0afa, 0x2315 },
                { 0x0afb, 0x2117 },
                { 0x0afc, 0x2038 },
                { 0x0afd, 0x201a },
                { 0x0afe, 0x201e },
                { 0x0ba3, 0x003c },
                { 0x0ba6, 0x003e },
                { 0x0ba8, 0x2228 },
                { 0x0ba9, 0x2227 },
                { 0x0bc0, 0x00af },
                { 0x0bc2, 0x22a5 },
                { 0x0bc3, 0x2229 },
                { 0x0bc4, 0x230a },
                { 0x0bc6, 0x005f },
                { 0x0bca, 0x2218 },
                { 0x0bcc, 0x2395 },
                { 0x0bce, 0x22a4 },
                { 0x0bcf, 0x25cb },
                { 0x0bd3, 0x2308 },
                { 0x0bd6, 0x222a },
                { 0x0bd8, 0x2283 },
                { 0x0bda, 0x2282 },
                { 0x0bdc, 0x22a2 },
                { 0x0bfc, 0x22a3 },
                { 0x0cdf, 0x2017 },
                { 0x0ce0, 0x05d0 },
                { 0x0ce1, 0x05d1 },
                { 0x0ce2, 0x05d2 },
                { 0x0ce3, 0x05d3 },
                { 0x0ce4, 0x05d4 },
                { 0x0ce5, 0x05d5 },
                { 0x0ce6, 0x05d6 },
                { 0x0ce7, 0x05d7 },
                { 0x0ce8, 0x05d8 },
                { 0x0ce9, 0x05d9 },
                { 0x0cea, 0x05da },
                { 0x0ceb, 0x05db },
                { 0x0cec, 0x05dc },
                { 0x0ced, 0x05dd },
                { 0x0cee, 0x05de },
                { 0x0cef, 0x05df },
                { 0x0cf0, 0x05e0 },
                { 0x0cf1, 0x05e1 },
                { 0x0cf2, 0x05e2 },
                { 0x0cf3, 0x05e3 },
                { 0x0cf4, 0x05e4 },
                { 0x0cf5, 0x05e5 },
                { 0x0cf6, 0x05e6 },
                { 0x0cf7, 0x05e7 },
                { 0x0cf8, 0x05e8 },
                { 0x0cf9, 0x05e9 },
                { 0x0cfa, 0x05ea },
                { 0x0da1, 0x0e01 },
                { 0x0da2, 0x0e02 },
                { 0x0da3, 0x0e03 },
                { 0x0da4, 0x0e04 },
                { 0x0da5, 0x0e05 },
                { 0x0da6, 0x0e06 },
                { 0x0da7, 0x0e07 },
                { 0x0da8, 0x0e08 },
                { 0x0da9, 0x0e09 },
                { 0x0daa, 0x0e0a },
                { 0x0dab, 0x0e0b },
                { 0x0dac, 0x0e0c },
                { 0x0dad, 0x0e0d },
                { 0x0dae, 0x0e0e },
                { 0x0daf, 0x0e0f },
                { 0x0db0, 0x0e10 },
                { 0x0db1, 0x0e11 },
                { 0x0db2, 0x0e12 },
                { 0x0db3, 0x0e13 },
                { 0x0db4, 0x0e14 },
                { 0x0db5, 0x0e15 },
                { 0x0db6, 0x0e16 },
                { 0x0db7, 0x0e17 },
                { 0x0db8, 0x0e18 },
                { 0x0db9, 0x0e19 },
                { 0x0dba, 0x0e1a },
                { 0x0dbb, 0x0e1b },
                { 0x0dbc, 0x0e1c },
                { 0x0dbd, 0x0e1d },
                { 0x0dbe, 0x0e1e },
                { 0x0dbf, 0x0e1f },
                { 0x0dc0, 0x0e20 },
                { 0x0dc1, 0x0e21 },
                { 0x0dc2, 0x0e22 },
                { 0x0dc3, 0x0e23 },
                { 0x0dc4, 0x0e24 },
                { 0x0dc5, 0x0e25 },
                { 0x0dc6, 0x0e26 },
                { 0x0dc7, 0x0e27 },
                { 0x0dc8, 0x0e28 },
                { 0x0dc9, 0x0e29 },
                { 0x0dca, 0x0e2a },
                { 0x0dcb, 0x0e2b },
                { 0x0dcc, 0x0e2c },
                { 0x0dcd, 0x0e2d },
                { 0x0dce, 0x0e2e },
                { 0x0dcf, 0x0e2f },
                { 0x0dd0, 0x0e30 },
                { 0x0dd1, 0x0e31 },
                { 0x0dd2, 0x0e32 },
                { 0x0dd3, 0x0e33 },
                { 0x0dd4, 0x0e34 },
                { 0x0dd5, 0x0e35 },
                { 0x0dd6, 0x0e36 },
                { 0x0dd7, 0x0e37 },
                { 0x0dd8, 0x0e38 },
                { 0x0dd9, 0x0e39 },
                { 0x0dda, 0x0e3a },
                { 0x0ddf, 0x0e3f },
                { 0x0de0, 0x0e40 },
                { 0x0de1, 0x0e41 },
                { 0x0de2, 0x0e42 },
                { 0x0de3, 0x0e43 },
                { 0x0de4, 0x0e44 },
                { 0x0de5, 0x0e45 },
                { 0x0de6, 0x0e46 },
                { 0x0de7, 0x0e47 },
                { 0x0de8, 0x0e48 },
                { 0x0de9, 0x0e49 },
                { 0x0dea, 0x0e4a },
                { 0x0deb, 0x0e4b },
                { 0x0dec, 0x0e4c },
                { 0x0ded, 0x0e4d },
                { 0x0df0, 0x0e50 },
                { 0x0df1, 0x0e51 },
                { 0x0df2, 0x0e52 },
                { 0x0df3, 0x0e53 },
                { 0x0df4, 0x0e54 },
                { 0x0df5, 0x0e55 },
                { 0x0df6, 0x0e56 },
                { 0x0df7, 0x0e57 },
                { 0x0df8, 0x0e58 },
                { 0x0df9, 0x0e59 },
                { 0x0ea1, 0x3131 },
                { 0x0ea2, 0x3132 },
                { 0x0ea3, 0x3133 },
                { 0x0ea4, 0x3134 },
                { 0x0ea5, 0x3135 },
                { 0x0ea6, 0x3136 },
                { 0x0ea7, 0x3137 },
                { 0x0ea8, 0x3138 },
                { 0x0ea9, 0x3139 },
                { 0x0eaa, 0x313a },
                { 0x0eab, 0x313b },
                { 0x0eac, 0x313c },
                { 0x0ead, 0x313d },
                { 0x0eae, 0x313e },
                { 0x0eaf, 0x313f },
                { 0x0eb0, 0x3140 },
                { 0x0eb1, 0x3141 },
                { 0x0eb2, 0x3142 },
                { 0x0eb3, 0x3143 },
                { 0x0eb4, 0x3144 },
                { 0x0eb5, 0x3145 },
                { 0x0eb6, 0x3146 },
                { 0x0eb7, 0x3147 },
                { 0x0eb8, 0x3148 },
                { 0x0eb9, 0x3149 },
                { 0x0eba, 0x314a },
                { 0x0ebb, 0x314b },
                { 0x0ebc, 0x314c },
                { 0x0ebd, 0x314d },
                { 0x0ebe, 0x314e },
                { 0x0ebf, 0x314f },
                { 0x0ec0, 0x3150 },
                { 0x0ec1, 0x3151 },
                { 0x0ec2, 0x3152 },
                { 0x0ec3, 0x3153 },
                { 0x0ec4, 0x3154 },
                { 0x0ec5, 0x3155 },
                { 0x0ec6, 0x3156 },
                { 0x0ec7, 0x3157 },
                { 0x0ec8, 0x3158 },
                { 0x0ec9, 0x3159 },
                { 0x0eca, 0x315a },
                { 0x0ecb, 0x315b },
                { 0x0ecc, 0x315c },
                { 0x0ecd, 0x315d },
                { 0x0ece, 0x315e },
                { 0x0ecf, 0x315f },
                { 0x0ed0, 0x3160 },
                { 0x0ed1, 0x3161 },
                { 0x0ed2, 0x3162 },
                { 0x0ed3, 0x3163 },
                { 0x0ed4, 0x11a8 },
                { 0x0ed5, 0x11a9 },
                { 0x0ed6, 0x11aa },
                { 0x0ed7, 0x11ab },
                { 0x0ed8, 0x11ac },
                { 0x0ed9, 0x11ad },
                { 0x0eda, 0x11ae },
                { 0x0edb, 0x11af },
                { 0x0edc, 0x11b0 },
                { 0x0edd, 0x11b1 },
                { 0x0ede, 0x11b2 },
                { 0x0edf, 0x11b3 },
                { 0x0ee0, 0x11b4 },
                { 0x0ee1, 0x11b5 },
                { 0x0ee2, 0x11b6 },
                { 0x0ee3, 0x11b7 },
                { 0x0ee4, 0x11b8 },
                { 0x0ee5, 0x11b9 },
                { 0x0ee6, 0x11ba },
                { 0x0ee7, 0x11bb },
                { 0x0ee8, 0x11bc },
                { 0x0ee9, 0x11bd },
                { 0x0eea, 0x11be },
                { 0x0eeb, 0x11bf },
                { 0x0eec, 0x11c0 },
                { 0x0eed, 0x11c1 },
                { 0x0eee, 0x11c2 },
                { 0x0eef, 0x316d },
                { 0x0ef0, 0x3171 },
                { 0x0ef1, 0x3178 },
                { 0x0ef2, 0x317f },
                { 0x0ef3, 0x3181 },
                { 0x0ef4, 0x3184 },
                { 0x0ef5, 0x3186 },
                { 0x0ef6, 0x318d },
                { 0x0ef7, 0x318e },
                { 0x0ef8, 0x11eb },
                { 0x0ef9, 0x11f0 },
                { 0x0efa, 0x11f9 },
                { 0x0eff, 0x20a9 },
                { 0x13a4, 0x20ac },
                { 0x13bc, 0x0152 },
                { 0x13bd, 0x0153 },
                { 0x13be, 0x0178 },
                { 0x20ac, 0x20ac }
            };

            #define XWSK(code) (WSK_ ## code - WSK_FIRST)

            uint8_t ctltable[] =
            {
                0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, // 0x00 - 0x07
                XWSK(BACKSPACE), // 0x08
                XWSK(TAB),  // 0x09
                XWSK(LINEFEED),  // 0x0a
                XWSK(CLEAR),  // 0x0b
                0xff,  // 0x0c
                XWSK(RETURN),  // 0x0d
                0xff, 0xff, 0xff, 0xff, 0xff, // 0x0e - 0x12
                XWSK(PAUSE), // 0x13
                XWSK(SCROLL_LOCK), // 0x14
                XWSK(SYS_REQ), // 0x15
                0xff, 0xff, 0xff, 0xff, 0xff, // 0x16 - 0x1a
                XWSK(ESCAPE), // 0x1b
                0xff, 0xff, 0xff, 0xff, // 0x1c - 0x1f
                0xff, 0xff, 0xff, 0xff,  0xff, 0xff, 0xff, 0xff,  0xff, 0xff, 0xff, 0xff,  0xff, 0xff, 0xff, 0xff, // 0x20 - 0x2f
                0xff, 0xff, 0xff, 0xff,  0xff, 0xff, 0xff, 0xff,  0xff, 0xff, 0xff, 0xff,  0xff, 0xff, 0xff, 0xff, // 0x30 - 0x3f
                0xff, 0xff, 0xff, 0xff,  0xff, 0xff, 0xff, 0xff,  0xff, 0xff, 0xff, 0xff,  0xff, 0xff, 0xff, 0xff, // 0x40 - 0x4f
                XWSK(HOME), // 0x50
                XWSK(LEFT), // 0x51
                XWSK(UP), // 0x52
                XWSK(RIGHT), // 0x53
                XWSK(DOWN), // 0x54
                XWSK(PAGE_UP), // 0x55
                XWSK(PAGE_DOWN), // 0x56
                XWSK(END), // 0x57
                XWSK(BEGIN), // 0x58
                0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, // 0x59 - 0x5f
                XWSK(SELECT), // 0x60
                XWSK(PRINT), // 0x61
                XWSK(EXECUTE), // 0x62
                XWSK(INSERT), // 0x63
                0xff, // 0x64
                XWSK(UNDO), // 0x65
                XWSK(REDO), // 0x66
                XWSK(MENU), // 0x67
                XWSK(FIND), // 0x68
                XWSK(CANCEL), // 0x69
                XWSK(HELP), // 0x6a
                XWSK(BREAK), // 0x6b
                0xff, 0xff, 0xff, 0xff, // 0x6c - 0x6f
                0xff, 0xff, 0xff, 0xff,  0xff, 0xff, 0xff, 0xff,  0xff, 0xff, 0xff, 0xff,  0xff, 0xff, // 0x70 - 0x7d
                XWSK(MODE_SWITCH), // 0x7e
                XWSK(NUM_LOCK), // 0x7f

                XWSK(KEYPAD_SPACE), // 0x80
                0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, // 0x81 - 0x88
                XWSK(KEYPAD_TAB), // 0x89
                0xff, 0xff, 0xff, // 0x8a - 0x8c
                XWSK(KEYPAD_ENTER), // 0x8d
                0xff, 0xff, 0xff, // 0x8e - 0x90
                XWSK(KEYPAD_F1), // 0x91
                XWSK(KEYPAD_F2), // 0x92
                XWSK(KEYPAD_F3), // 0x93
                XWSK(KEYPAD_F4), // 0x94
                XWSK(KEYPAD_HOME), // 0x95
                XWSK(KEYPAD_LEFT), // 0x96
                XWSK(KEYPAD_UP), // 0x97
                XWSK(KEYPAD_RIGHT), // 0x98
                XWSK(KEYPAD_DOWN), // 0x99
                XWSK(KEYPAD_PAGE_UP), // 0x9a
                XWSK(KEYPAD_PAGE_DOWN), // 0x9b
                XWSK(KEYPAD_END), // 0x9c
                XWSK(KEYPAD_BEGIN), // 0x9d
                XWSK(KEYPAD_INSERT), // 0x9e
                XWSK(KEYPAD_DELETE), // 0x9f

                0xff, 0xff, 0xff, 0xff,  0xff, 0xff, 0xff, 0xff,  0xff, 0xff, // 0xa0 - 0a9

                XWSK(KEYPAD_MULTIPLY), // 0xaa
                XWSK(KEYPAD_ADD), // 0xab
                XWSK(KEYPAD_SEPARATOR), // 0xac
                XWSK(KEYPAD_SUBTRACT), // 0xad
                XWSK(KEYPAD_DECIMAL), // 0xae
                XWSK(KEYPAD_DIVIDE), // 0xaf

                XWSK(KEYPAD_0), // 0xb0
                XWSK(KEYPAD_1), // 0xb1
                XWSK(KEYPAD_2), // 0xb2
                XWSK(KEYPAD_3), // 0xb3
                XWSK(KEYPAD_4), // 0xb4
                XWSK(KEYPAD_5), // 0xb5
                XWSK(KEYPAD_6), // 0xb6
                XWSK(KEYPAD_7), // 0xb7
                XWSK(KEYPAD_8), // 0xb8
                XWSK(KEYPAD_9), // 0xb9
                0xff, 0xff, 0xff, // 0xba - 0xbc

                XWSK(KEYPAD_EQUAL), // 0xbd
                XWSK(F1), // 0xbe
                XWSK(F2), // 0xbf
                XWSK(F3), // 0xc0
                XWSK(F4), // 0xc1
                XWSK(F5), // 0xc2
                XWSK(F6), // 0xc3
                XWSK(F7), // 0xc4
                XWSK(F8), // 0xc5
                XWSK(F9), // 0xc6
                XWSK(F10), // 0xc7
                XWSK(F11), // 0xc8
                XWSK(F12), // 0xc9
                XWSK(F13), // 0xca
                XWSK(F14), // 0xcb
                XWSK(F15), // 0xcc
                XWSK(F16), // 0xcd
                XWSK(F17), // 0xce
                XWSK(F18), // 0xcf
                XWSK(F19), // 0xd0
                XWSK(F20), // 0xd1
                XWSK(F21), // 0xd2
                XWSK(F22), // 0xd3
                XWSK(F23), // 0xd4
                XWSK(F24), // 0xd5
                XWSK(F25), // 0xd6
                XWSK(F26), // 0xd7
                XWSK(F27), // 0xd8
                XWSK(F28), // 0xd9
                XWSK(F29), // 0xda
                XWSK(F30), // 0xdb
                XWSK(F31), // 0xdc
                XWSK(F32), // 0xdd
                XWSK(F33), // 0xde
                XWSK(F34), // 0xdf
                XWSK(F35), // 0xe0

                XWSK(SHIFT_L), // 0xe1
                XWSK(SHIFT_R), // 0xe2
                XWSK(CONTROL_L), // 0xe3
                XWSK(CONTROL_R), // 0xe4
                XWSK(CAPS_LOCK), // 0xe5
                XWSK(SHIFT_LOCK), // 0xe6

                XWSK(META_L), // 0xe7
                XWSK(META_R), // 0xe8
                XWSK(ALT_L), // 0xe9
                XWSK(ALT_R), // 0xea
                XWSK(SUPER_L), // 0xeb
                XWSK(SUPER_R), // 0xec
                XWSK(HYPER_L), // 0xed
                XWSK(HYPER_R), // 0xee

                0xff, 0xff, 0xff, 0xff,  0xff, 0xff, 0xff, 0xff,  0xff, 0xff, 0xff, 0xff,  0xff, 0xff, 0xff, 0xff, // 0xef - 0xfe

                XWSK(DELETE) // 0xff
            };

            #undef XWSK

            mcb_t decode_mcb(size_t code)
            {
                if ((code >= 1) && (code <= 7))
                    return mcb_t(MCB_LEFT + code - 1);
                return MCB_NONE;
            }

            mcd_t decode_mcd(size_t code)
            {
                if ((code >= 4) && (code <= 7))
                    return mcd_t(MCD_UP + code - 4);
                return MCD_NONE;
            }

            size_t decode_state(size_t code)
            {
                size_t result = 0;
                #define DC(mask, flag)  \
                    if (code & mask) \
                        result |= flag; \

                DC(ShiftMask, MCF_SHIFT);
                DC(LockMask, MCF_LOCK);
                DC(ControlMask, MCF_CONTROL);
                DC(Mod1Mask, MCF_ALT);
                DC(Mod2Mask, MCF_MOD2);
                DC(Mod3Mask, MCF_MOD3);
                DC(Mod4Mask, MCF_MOD4);
                DC(Mod5Mask, MCF_MOD5);

                DC(Button1Mask, MCF_LEFT);
                DC(Button2Mask, MCF_MIDDLE);
                DC(Button3Mask, MCF_RIGHT);
                DC(Button4Mask, MCF_BUTTON4);
                DC(Button5Mask, MCF_BUTTON5);

                #undef DC

                return result;
            }

            code_t decode_keycode(unsigned long code)
            {
                /* FROM <x11/keysymdef.h>:
                 *
                 * For any future extension of the keysyms with characters already
                 * found in ISO 10646 / Unicode, the following algorithm shall be
                 * used. The new keysym code position will simply be the character's
                 * Unicode number plus 0x01000000. The keysym values in the range
                 * 0x01000100 to 0x0110ffff are reserved to represent Unicode
                 * characters in the range U+0100 to U+10FFFF.
                 *
                 * Before adding new keysyms, please do consider the following: In
                 * addition to the keysym names defined in this file, the
                 * XStringToKeysym() and XKeysymToString() functions will also handle
                 * any keysym string of the form "U0020" to "U007E" and "U00A0" to
                 * "U10FFFF" for all possible Unicode characters. In other words,
                 * every possible Unicode character has already a keysym string
                 * defined algorithmically, even if it is not listed here. Therefore,
                 * defining an additional keysym macro is only necessary where a
                 * non-hexadecimal mnemonic name is needed, or where the new keysym
                 * does not represent any existing Unicode character.
                 */
                if (code <= 0xff)
                {
                    if ((code >= 0x20) && (code <= 0x7e))
                        return code;
                    else if ((code >= 0xa0) && (code <= 0x00ff))
                        return code;
                }
                else if (code & 0xff000000)
                    return (code <= 0x0110ffff) ? (code & 0x00ffffff) : WSK_UNKNOWN;
                else if ((code & 0xffff00) == 0xff00)
                {
                    // Contol keys
                    code_t result = ctltable[code & 0xff];
                    return (result != 0xff) ? result + WSK_FIRST : WSK_UNKNOWN;
                }

                // Lookup character table
                size_t first = 0, last = sizeof(keytable) / sizeof(keymapping_t);
                while (first < last)
                {
                    size_t mid = (first + last) >> 1;
                    size_t keysym = keytable[mid].keysym;

                    if (code < keysym)
                        last    = mid;
                    else if (code > keysym)
                        first   = mid + 1;
                    else
                        return keytable[mid].unicode;
                }

                return WSK_UNKNOWN;
            }
        }
    }
}

#endif /* USE_LIBX11 */
