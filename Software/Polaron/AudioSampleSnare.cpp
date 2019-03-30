/*
* to create these files (on mac), use sox to create a 22khz, 16bit mono raw file:
* sox source.wav --bits 16 --encoding signed-integer --rate 22050 -t raw destination.raw
* 
* use hexdump to create the data for the array below (dont forget to adjust the length of the array with number of entries)
* hexdump -v -e '16/2 "0x%04X," "\n"' 1_1.raw
*/
#include "AudioSampleSnare.h"

// 16-bit / 22050 Hz / mono raw
uint16_t AudioSampleSnare[AudioSampleSnareLength] = {
0x001F,0x0010,0x0012,0x0028,0xFFD2,0xFEFF,0xFD40,0xFC16,0xF992,0xF882,0xF4D0,0xF3AF,0xEEC1,0xEE02,0xEA84,0xEB02,
0xE6EC,0xEC64,0xEDC2,0xD9E1,0xDA54,0xE8E6,0xF03C,0xFB4B,0xFE0D,0x15BB,0x2A29,0xFA55,0xFBEB,0x2191,0x372B,0x4663,
0x4BEB,0x5381,0x625B,0x78CE,0x4773,0x2446,0x63F1,0x73DB,0x4A15,0x3CD1,0x65E4,0x636C,0x57CF,0x4F90,0x4C0F,0x3D2B,
0x3C66,0x2ACF,0x4648,0x608B,0xC076,0xDDC4,0x100E,0xEA5A,0xC9E3,0xD313,0xEE59,0xE03E,0xE3CB,0xCC27,0xC499,0xB952,
0xBAC9,0xB31D,0xB546,0xAF84,0xB43E,0xAF27,0xB727,0xB2C9,0xD14A,0xFADE,0xA18D,0x8582,0xBA61,0xFEBA,0xD482,0xCFBA,
0xFC6C,0xF0F8,0x4682,0x1B44,0xECB6,0xCD0A,0xE501,0x2F25,0x392B,0x4880,0x416A,0x451D,0x4714,0x3F98,0x4238,0x4596,
0x5791,0x6BE5,0x0E24,0x315C,0x4E1B,0x3ECE,0x732F,0x2579,0xE2F1,0x4531,0x5805,0xFE95,0x188C,0x5DE7,0x2801,0xDC0E,
0xE37F,0xEE5E,0xF3C9,0xC7EC,0xE66F,0xF059,0xE776,0xDE4E,0xCD13,0xCA49,0xBC32,0xBD3D,0xB1F4,0xBAB5,0xABBB,0xC309,
0xA320,0xD3EE,0xD02A,0x8001,0xC941,0x9C86,0xA63A,0xBF00,0xCC1D,0xE6EE,0xCFEC,0xDD3D,0xD926,0x23D4,0xD27C,0xB12B,
0xF84A,0xFCA3,0x23B0,0x29B8,0x17E6,0x0732,0x0B8D,0xFDF4,0xF55E,0x23FD,0x4544,0x49CE,0x4B2A,0x4048,0x6AB5,0x55CF,
0xFD8F,0xF066,0x4B18,0x66E6,0x1D43,0x2A9C,0x0CFA,0x226F,0x2ADA,0x2C27,0x7028,0xFDE7,0x07FD,0x18F8,0xED70,0x060C,
0x1808,0x0961,0x2645,0xF9AB,0xAC95,0xD405,0xEA50,0xF492,0xF936,0x09FE,0xCAD6,0xBA85,0x0FFB,0xEF10,0x8D2A,0xBEF2,
0xDCBB,0xEFE9,0xEBA4,0xF030,0xE2A0,0xEFB1,0xE04F,0x15CF,0x0AA5,0xA968,0xD606,0x1F0F,0x3924,0xBFF9,0xDCDF,0x075D,
0x1B37,0x2385,0x1F01,0x239D,0x1A5F,0x1ADD,0x1A20,0x0DDC,0x1B53,0x233D,0x2422,0x1D7A,0x21BD,0x2AE5,0x1BC6,0x0368,
0x4D0F,0x2C42,0xD7A4,0x319B,0xEF1D,0xD852,0xF716,0x3D1D,0x068A,0xDE84,0x012C,0xF8F2,0x00DA,0xF098,0xF246,0xE44B,
0xE8F9,0xDBCE,0xE3C9,0xD93D,0x15F6,0xDB72,0x81DB,0xDF27,0xD28D,0xB4FE,0x0E32,0xE6C6,0x9ED1,0xBF42,0xE574,0xF5C5,
0xEFF3,0xDCCC,0xE0BE,0xEDF4,0xE860,0xF294,0xF2F6,0x056C,0xF2BC,0xEFF9,0xFEAB,0x032F,0x0ED4,0x0CD8,0x458A,0x1420,
0xF206,0xF0FB,0xF291,0x5C32,0x2E19,0x0E0F,0x1AF5,0x07B0,0x0983,0x2F25,0x335E,0x3BA9,0x4E9E,0x041A,0xF20D,0x3854,
0x34AA,0xF6D1,0x05E1,0x1C44,0x2009,0x1E86,0x4638,0xED4B,0xFE41,0x18FC,0xD903,0x0343,0xFBF3,0xDEC0,0xF316,0x057C,
0x277B,0x12D7,0xB6B7,0xECFF,0xEF75,0xE407,0xFAF7,0x12D9,0xFCEB,0xB5AD,0xCADE,0xED40,0xFCF7,0xF533,0x09D3,0x21DA,
0xD32E,0xBE9E,0xF966,0x2201,0xF506,0xD474,0xEFFC,0x032A,0x0B24,0x04CE,0x096D,0x0E16,0x2F71,0xE50C,0xE412,0x1EF2,
0x0505,0xFF93,0x0C75,0x281D,0x1FCE,0xFC7B,0xEB9C,0xEAE6,0x0706,0x13CC,0x1C1C,0x3445,0xE619,0x0582,0x0957,0xD35D,
0xFCF6,0x006B,0x0C9B,0x01EB,0x03A6,0xF73D,0x223E,0xEF53,0xBDFE,0xF7EB,0xF4CC,0xF18F,0xDAB1,0xE064,0xED34,0xEFDB,
0xE125,0xF9F5,0xEBF3,0xE7CC,0x01FC,0xE443,0xF89A,0xDF61,0xCED9,0xFAB5,0xF6D0,0x184E,0x12F4,0xD17B,0xE40F,0xFB2C,
0x02B4,0x0783,0x05EC,0x0827,0x0646,0x07E7,0x0C45,0x0A2E,0x08B3,0x0B59,0x13A5,0x180D,0x0FB6,0x0B55,0x411D,0x138E,
0xD668,0x04B9,0x1761,0x21B5,0x1FE7,0x1C41,0x1E96,0x17DA,0x0A5B,0x0F8D,0x186C,0x0E47,0x0080,0x0D4F,0x11A1,0x446B,
0xE5C3,0xDD97,0x124C,0xE62B,0x1E83,0xFEF6,0xDC53,0x1A41,0x1457,0xD123,0xF099,0xF821,0x2A85,0x0094,0xBF1D,0xE7A6,
0xF38A,0xFF27,0xFB98,0xFB03,0xF618,0xF480,0xF3FA,0xF1D6,0xF511,0xF30D,0xF75D,0xF424,0x066D,0x13B1,0xF2D0,0xD3A4,
0xCDFE,0x1105,0x085A,0xFBAF,0x0E19,0xF929,0xDFC2,0xF1A5,0x059C,0x26D5,0x097B,0xE79B,0x03C1,0x0858,0x2F53,0xEA2A,
0xE2D4,0xFB9D,0x08A9,0x09A8,0x0ABA,0x0A6E,0x0CF7,0x132A,0xD357,0xEAAF,0xF801,0x2478,0x0AA0,0xDAFD,0xEBA5,0x13F0,
0x11E3,0xD5CC,0xF22D,0x0F64,0x1291,0xDE91,0xF3C6,0xF859,0xEC2D,0xFDA9,0xE5CC,0xF26C,0x040E,0x0078,0x0341,0x0E2E,
0xFFEA,0xEF8B,0xE148,0x006E,0xFFCA,0xF3FF,0xF12A,0xFD53,0x0C6F,0x0893,0x0C8D,0x06FA,0x0692,0x059C,0x0828,0x2679,
0xFB5A,0xE27D,0x0A25,0x0543,0x2E94,0x12B4,0xED99,0x08B1,0x2FF2,0xF9CE,0xFE42,0x2A83,0xF0C0,0xF8B5,0x0DAF,0x13DC,
0x1569,0x0F9C,0x0F7B,0x095D,0x0980,0x05BC,0x0D03,0x26E8,0xECFB,0xDF84,0x01CE,0xFF14,0x0E5D,0xFD38,0x1BE1,0x0CC1,
0xD5F3,0xF319,0xF7BB,0x176C,0xF3FF,0xE412,0x1131,0xFBBC,0xDD1F,0xDA3D,0xFB9E,0xFC7F,0x05E2,0x0B3C,0xFA13,0xE01B,
0xEEF1,0xF384,0x0800,0x1D37,0xD9DF,0xD46A,0x036B,0x0744,0xE5C7,0x0B4B,0x1312,0xD8EF,0xE919,0xFC9E,0x03D0,0x0DD8,
0xFF38,0xF5D1,0x060C,0xFDFD,0xFA41,0x02E6,0x0660,0x0A40,0x0BC2,0xE695,0xE7A3,0x0948,0xFA5C,0x1A1D,0x04D3,0xE612,
0x114D,0x0EA3,0xF649,0xFF7E,0xFB51,0xED4D,0xFB43,0xFCE5,0x01B0,0x2426,0x0CE8,0xEE03,0xF095,0xFCD1,0xF706,0x03D0,
0x039A,0xF092,0x08A4,0xFB27,0xF498,0x008E,0x0527,0x0727,0x1D2A,0xF70F,0xE554,0x0041,0xFE18,0x1B55,0x0C81,0xE486,
0x0B58,0x0E10,0xEE5B,0xFB4E,0x1363,0x120E,0xEEC4,0xFDDC,0x0958,0x0DB9,0x0AA6,0x05CE,0x09F5,0x0AC2,0x26B8,0x0469,
0xEAAA,0x0710,0xEDBB,0x0B57,0x15A2,0xF2FE,0x06C0,0x0904,0x0FBA,0x0ACF,0x1B49,0x15C1,0xEFF0,0xE748,0xEDCC,0x1570,
0x132B,0x0450,0xF328,0xEA1D,0x06EB,0x10D8,0xF40E,0xF87B,0xFD7A,0x07FA,0x096C,0xE5AF,0xF0DB,0xF468,0x00BF,0xFB2B,
0x041B,0x01FC,0x0AD5,0xF097,0xDCD3,0xF445,0xEADE,0xF5E3,0x0D30,0x0ABF,0xE629,0xED0A,0x095E,0xFD7C,0xE87D,0x0751,
0x0138,0xF28C,0xF138,0xF815,0xFDCC,0xFB68,0xFE84,0x0F84,0x086E,0xF9FE,0xFC89,0xE72B,0xEEA5,0xFE1A,0x09FD,0x08DC,
0x013C,0x03BC,0x002F,0x0A79,0x15A4,0xFA6A,0xE106,0x08D8,0x104B,0xF9C2,0x0426,0xFB38,0xFB29,0xFFBB,0x032C,0xF7CF,
0x02DF,0x05A6,0x0652,0x0724,0x04C5,0x054F,0x0063,0x0295,0x012F,0xFFCE,0x0078,0x00D3,0x0185,0x0137,0x0835,0x20B0,
0xF0C1,0xDFA1,0xF937,0x02E3,0x0A7E,0x0718,0x08F0,0x0205,0x06B1,0xFFC4,0x16D5,0x1688,0xE288,0xEA41,0xFB3F,0x0AE2,
0x07EB,0x1B62,0x1091,0xE7D2,0xF9D6,0x0209,0x07CA,0x0789,0x05CA,0x0596,0x04A4,0x1304,0x11E0,0xE51E,0xEA83,0x0225,
0x09E2,0x0263,0x03EF,0x1B60,0x07CC,0xEBA2,0xE6A5,0xF3CC,0x04E1,0x053E,0x06C7,0x025C,0x0118,0xFD4B,0xFC1A,0xFCF9,
0x0049,0x19B0,0xE972,0xDD40,0xF470,0xFCAE,0x00B0,0x00A1,0xFD43,0xFE06,0xF82F,0x0CB9,0x046A,0xDB29,0xF211,0xF413,
0x0BD0,0x0622,0xEC41,0xF408,0x0FCA,0xFD96,0xF7B7,0xF846,0xF476,0xF626,0xEDB3,0xFA51,0x0411,0x064E,0x074B,0x148B,
0xF1FB,0xEE9C,0xFE90,0xFF47,0x0514,0x00E2,0x037F,0x010D,0x025F,0xFF55,0x05D0,0x1A54,0xFE02,0xE328,0xF3E7,0x0437,
0x02E1,0x1847,0x0733,0xEEFD,0xFCFA,0x058D,0x0538,0x12B0,0x1264,0xEBFF,0xF758,0x0967,0x0858,0x0D55,0x0671,0xEAE8,
0xFA6E,0x0099,0x076D,0x0800,0x0759,0x1175,0x056F,0xF15C,0x01D8,0x0F54,0xED6F,0xF8F3,0x010C,0x18D9,0xFDBE,0xFA70,
0x0AF4,0xF54B,0xFC40,0x0ED2,0x0DA6,0xFEDB,0xF131,0xF0FD,0x0328,0x05B6,0x0877,0x03E6,0x048D,0x0347,0x15CD,0xEFB6,
0xF732,0x0436,0xF3BA,0xFF48,0x0174,0x0497,0x04E8,0x1069,0xF99B,0xFBE4,0xF730,0xF4C2,0xF446,0x000B,0x1626,0xF862,
0xF45B,0xF8DC,0x0B82,0x1062,0xF0CF,0xE9C9,0xFEC8,0x09DD,0xF153,0xF509,0xFC6C,0x01EA,0xFF1B,0x11AF,0x0201,0xEF09,
0xF1F6,0xF2C7,0x07C6,0xF51D,0xF280,0xFB5F,0xFEE6,0x02B9,0x0154,0xFE5C,0xFC34,0xFE30,0xFC28,0x01A5,0x01EB,0xF6FF,
0x0A47,0xF41B,0xEFE5,0xFE73,0x0AA3,0x0735,0xED0E,0x04E1,0x0B03,0x0014,0xFAC5,0xF548,0x033D,0x0FD7,0xFEDA,0xF564,
0xF9FC,0x02F7,0x0715,0x06DB,0x0998,0x063B,0xFD85,0x0155,0x0110,0x047E,0x0244,0x053A,0x0192,0x12E1,0x0639,0xEAD3,
0xFCA8,0x060B,0x1350,0xFB4D,0xF775,0x0261,0x0538,0x0661,0x114D,0xFC58,0xFE41,0x073D,0xFEE7,0xFD58,0xFBFD,0x0C7A,
0xFED7,0xFC93,0xF88E,0xFF7B,0x0387,0x08B2,0x0977,0x086A,0xF58D,0x01E3,0x0544,0xFE53,0xFA99,0xF1A7,0x0A02,0x0551,
0x01FB,0xF589,0xFDD2,0x08CF,0xFECA,0xF96B,0x0B5D,0xFE44,0xFA04,0xF9D4,0xF657,0x01EE,0x01BF,0x03FE,0xFFA9,0x006C,
0x009E,0x0C8A,0xF1EE,0xF1FD,0xFB47,0xFE74,0x0105,0xFF7A,0x0016,0xFD73,0xFF39,0xFC33,0xFF15,0xFD53,0x120D,0xF820,
0xEE8A,0xEF4C,0x00E7,0x059C,0xF3EC,0xFE74,0xFDA4,0x030B,0xFC99,0x0103,0xFD1B,0x0276,0xFECB,0x0AE2,0xFBDD,0xF3DD,
0xFA35,0xF2FA,0x05A5,0xFB29,0xFAAA,0x051C,0x0C79,0xFC85,0xF45A,0xFD83,0x00A6,0x0746,0x1119,0xFF0E,0xF3EC,0xF884,
0xFC57,0x0E15,0x0B5B,0xFD10,0xF5F1,0xFCC5,0x03AB,0x133B,0x02CD,0xF51B,0xFCF9,0x0A90,0x0F93,0x0070,0xF8BB,0xF821,
0x0A24,0xFE0A,0x00AF,0x0BC3,0x01BE,0xFE99,0x0270,0x0329,0x0566,0x077C,0xFFE7,0xFE8E,0x0118,0x01BF,0x035D,0x05BF,
0x0C48,0x02D7,0xF559,0xF504,0xFB01,0x0CD4,0xFEB6,0xFBAE,0x020B,0x050C,0x0E71,0x0350,0xF660,0xF375,0xF92E,0x0707,
0x0C1E,0x005E,0xF947,0xF7A1,0xFE3F,0x08DB,0xFC32,0xFACF,0x07C3,0x013E,0xFEEE,0xF379,0xF806,0x0A64,0x01F5,0xF928,
0xF844,0x024E,0xFBE7,0xFF0F,0x0791,0xFE6D,0xF96E,0xF3CC,0xFD51,0xFE78,0x06C4,0x0014,0x01B6,0x02FA,0xF61C,0xF546,
0xF665,0x00A9,0x0066,0x026C,0xFFA4,0x002C,0xFE29,0xFEC6,0xFE34,0xFE2C,0xFE46,0xFFAC,0x0B82,0xFB5E,0xEDA2,0xFA74,
0xFDCE,0x0ADE,0x057C,0xF3E2,0xFB2B,0xFDC6,0x02E1,0x003B,0x031E,0xFEF3,0x05FB,0x0651,0xF722,0xF920,0x03DA,0x0A3D,
0xFD2F,0xF5B3,0x04A1,0x08D4,0xFCCB,0xFE67,0xFC31,0x0300,0xFD92,0x010B,0x0729,0xFE97,0x017B,0x0463,0x03EE,0x0AC1,
0x064D,0xFC62,0xF9CB,0xF8AB,0x0187,0x0C08,0x07B0,0xF85D,0x00E7,0x012E,0x057E,0x0A3E,0xFE21,0xFC05,0x0787,0x0891,
0xFB95,0xF658,0xFCFB,0x09E3,0xFFAC,0xFD86,0x01A7,0x0562,0x0AE9,0xF799,0xFFC9,0xFFE2,0xFC92,0x094C,0xFB16,0xF704,
0xFED4,0x024B,0xFFB4,0x013D,0x0069,0x0092,0xFF81,0xFFD0,0xFF33,0x01E1,0x0A54,0xF949,0xF3CF,0xF7D8,0xFB28,0x0586,
0xFE9A,0xFC8B,0xFF58,0xFF33,0x0028,0xFF90,0x0908,0xFD54,0xF225,0xFAB4,0xFED4,0x0A43,0x01B9,0xF6E3,0xF516,0xFB1E,
0x0035,0x009D,0x01C6,0x007C,0x0944,0xFB8F,0xF5A3,0xFBEB,0xFEEE,0x007D,0x09EE,0xFEBC,0xF919,0x020F,0xF69C,0xFB18,
0xFE15,0x01C9,0x00C0,0x0BCD,0x031D,0xF706,0xF621,0x0367,0x030E,0xFCCA,0x072B,0xF89C,0x003A,0xFEA3,0x06D9,0x04C3,
0x0239,0x00F8,0xFBD0,0x01F9,0xFD68,0xFDBC,0xFE96,0x0551,0xFEEE,0xFD6E,0x0626,0x0A70,0xFECA,0xFE6B,0xFEDC,0xFBCE,
0x097F,0x0511,0x0238,0x011F,0xFA96,0xFD2F,0x01C8,0x02CA,0x0467,0x02CD,0x0361,0x0168,0x05FD,0x0A46,0xF7B5,0xFA48,
0xFE7C,0x0932,0x04A2,0xFDA6,0xFCBF,0xFB39,0x01D5,0x0207,0x0359,0x036D,0x0B97,0xFDC8,0xFBC2,0xF997,0x009B,0xFF17,
0xFB18,0x03BC,0xFF87,0x00F3,0x0092,0x0140,0x0028,0xFFE8,0xFEA3,0xFF5C,0xFFC7,0xFFAA,0xFDD8,0x004F,0x0708,0xFBA8,
0xF814,0xFF56,0xFD0D,0xFACA,0xFE62,0x07BC,0xFB9E,0xFE97,0x001A,0xFE45,0xFB90,0xFAA9,0x028E,0xFC3D,0x0237,0xFFAF,
0xFFD8,0xFB53,0xF98C,0xFF98,0xFFD8,0x0446,0x06AA,0xF995,0xF995,0xFECC,0xFEE2,0x01D7,0xFF13,0x012E,0xFE52,0x0880,
0xFE81,0xF64C,0xFCE1,0x0105,0x0073,0x0321,0x05F1,0xF82A,0xFD94,0xFF3E,0x01E7,0x007B,0x03E8,0x0772,0xFF35,0xFAB5,
0xFAC4,0xFF46,0x0600,0x08ED,0xFBB4,0xFB07,0xFF25,0x0282,0x09E7,0x041D,0xF850,0x0037,0x01A6,0xFF95,0x0720,0x033A,
0xFD6F,0xFB7B,0xFF0A,0x033F,0x0369,0x01F3,0x0750,0x07FE,0xF98B,0xFA16,0xFFB9,0x0191,0x03EA,0x0224,0x096B,0x0029,
0xFF64,0xFB80,0xFCAB,0x0075,0x0587,0x080C,0xFE56,0xFDC9,0xF9AD,0x0078,0x0153,0x02BF,0x0092,0x06BA,0x01F8,0xFF56,
0xFD41,0xF88F,0xFF03,0x03D1,0x0006,0xFD08,0x007F,0x003C,0x062B,0xFD2C,0xFAF4,0xFE36,0xFF94,0x0011,0x0082,0xFFE5,
0x05A3,0x01AE,0xF8D3,0xF950,0xFCB8,0xFFEA,0xFD71,0x01CF,0x00DC,0xFDED,0x0017,0xFBED,0xFDD6,0x01F2,0xFE5F,0xFD53,
0xFA5B,0x0422,0x00F8,0xFAC9,0xFE39,0xFF73,0x0079,0x004C,0xFFCC,0xFFB0,0xFF2B,0x00EA,0x043E,0xFB2E,0x0152,0xFEA9,
0xF9A0,0x00D4,0xFD01,0xFC78,0x00F2,0x00EC,0x0526,0x03E6,0xFBC7,0xFD45,0xFF67,0x0139,0x0384,0xFF78,0xFE8C,0x0286,
0x0495,0x00A4,0xFB04,0xFBB7,0x0211,0x0737,0xFFD8,0x000C,0xFF13,0x01C4,0x00CD,0xFF8B,0xFF05,0x003A,0x04EF,0xFED9,
0x0182,0xFF70,0xFF58,0x0127,0x0225,0x020C,0x0262,0x016A,0x06B6,0x0352,0xFC5F,0xFE3F,0xFE16,0x0120,0xFF98,0x0072,
0xFE4C,0x021D,0x05A6,0x004A,0xFCDF,0xFE91,0x0124,0x0191,0x01A2,0x0133,0x0236,0x0609,0xFEBE,0xF9DA,0xFD31,0x000D,
0x04D2,0xFE4C,0x0036,0xFFF6,0xFB3D,0xFF19,0xFFCC,0x0161,0x0021,0x0305,0x03FB,0xFA18,0xFE2C,0x016E,0xFC8D,0xFC73,
0x01B8,0x04AD,0xFB81,0xFC68,0x01EF,0xFF67,0xFBAB,0xFEC7,0x0002,0x00C2,0x00FE,0xFAE6,0xFDDA,0x00C0,0x0147,0xFDCA,
0xFCF6,0x0293,0xFF37,0xFD87,0xFF76,0xFDF7,0xFE65,0x001A,0x00AB,0xFF2D,0xFD1A,0xFFB3,0x006E,0xFF60,0x00C5,0xFFCE,
0x01BC,0x0127,0xFD8F,0xFBDA,0xFD9E,0x00B6,0x0100,0x01BB,0x00AA,0x0128,0x0056,0x0573,0x0193,0xFAE1,0xFBC6,0xFF88,
0x00E9,0x0396,0x05C1,0xFCA0,0xFDE4,0x01AB,0x049B,0xFE03,0xFD68,0x0020,0x0425,0x05A4,0xFE00,0xFCB6,0xFF7B,0x0146,
0x022A,0x01B3,0x0317,0x0534,0xFF8F,0x013C,0xFDD2,0xFE79,0xFD87,0x0036,0x021C,0x0318,0x0753,0xFF0F,0xFE9A,0xFEAF,
0xFE52,0x0062,0x0526,0x00DB,0xFD15,0x0031,0xFFC2,0x013D,0x00E5,0x01E9,0x05C9,0x0003,0xF9D4,0x0138,0x0013,0x0074,
0xFFAB,0xFE93,0x01D4,0xFCE3,0xFE6F,0xFF7E,0x01AA,0x007E,0x039E,0x039B,0xFD97,0xFBB3,0xFBE5,0xFF7A,0x0070,0x04BC,
0x00FE,0xFCBB,0xFD11,0xFE90,0xFF36,0x02C6,0x0070,0xFFDD,0x0027,0xFC61,0xFFDE,0xFC70,0xFF5C,0x008F,0xFF92,0x001D,
0xFFF5,0x0051,0xFEDC,0xFE7C,0xFCA0,0xFEF3,0x0072,0x0091,0x00C8,0x0006,0x0360,0x00D1,0xFB91,0xFE2B,0x0324,0x0115,
0xFDCF,0xFE37,0xFC88,0xFF1F,0x0351,0x0419,0xFCCD,0xFFC5,0x0059,0xFE45,0x0028,0x01FD,0x044D,0xFD4E,0xFFAC,0x000F,
0x0246,0x0337,0xFFCD,0xFD3B,0x0019,0x017A,0x020C,0x00DB,0xFF12,0x0205,0xFD59,0x009F,0x0089,0x04C6,0x0399,0x001D,
0xFF15,0xFD2E,0xFFFB,0x00CB,0x0256,0x014B,0x0368,0x01E1,0x018A,0x0003,0x00B8,0xFF19,0xFF8C,0x00AF,0xFDFB,0x006B,
0x014C,0x01BA,0x0174,0x00D3,0x030F,0x0382,0xFE5B,0xFC08,0xFF71,0x0334,0x00BB,0xFEEF,0xFE75,0xFF38,0x0410,0x02C7,
0xFE86,0xFD00,0xFEAE,0x0243,0x00C1,0xFFE1,0xFFA4,0xFD3F,0xFEA3,0x0088,0x006C,0x037D,0x0082,0xFF2D,0x001B,0xFDD9,
0xFE76,0xFF43,0xFF1C,0xFEDB,0x0162,0xFE5F,0xFE04,0xFF98,0x003E,0x03A3,0x0084,0xFE0A,0xFF53,0xFC9A,0xFE1E,0xFF25,
0x0073,0x0048,0x007A,0xFFE7,0x00BE,0x0296,0xFD2C,0xFD85,0xFE9D,0xFFE0,0xFFFE,0x03DE,0xFF02,0xFE82,0x00FA,0xFC70,
0xFE0F,0xFFA9,0x020B,0xFF83,0x0060,0x0157,0x0169,0x00DD,0xFF3A,0xFEB8,0xFF80,0xFEDB,0xFE5F,0x0085,0x012B,0x038E,
0x017D,0xFE14,0x0141,0xFFAB,0xFF79,0x02B5,0x0211,0xFFAA,0xFD56,0xFF44,0x00A7,0x047F,0x01D0,0xFDF6,0x0131,0xFF4A,
0xFE90,0x02D3,0x0239,0xFEB9,0x0022,0x0020,0x0051,0x041B,0x00A0,0xFF88,0x00A8,0xFF7E,0x00A0,0xFE71,0x0066,0x028E,
0x015D,0x01AC,0xFDF9,0xFEAA,0xFFEB,0x01D8,0x0314,0xFED3,0x0017,0x003C,0x0011,0xFEA6,0xFECE,0x0047,0x02C6,0x00E3,
0xFDFE,0xFF6C,0x0208,0x0161,0xFF01,0xFF45,0xFD55,0xFEE4,0x01E2,0x0183,0xFF38,0xFE42,0xFD9F,0x012C,0x0159,0xFE0F,
0x00C5,0x01C3,0xFEB0,0xFDA0,0xFF85,0xFFE0,0xFE68,0x00D9,0xFFCD,0xFE87,0x001F,0x01A5,0xFEE3,0xFE05,0x009C,0xFE17,
0xFEF5,0x0083,0xFE8E,0xFFF6,0x0242,0xFEF9,0x0034,0xFEF5,0xFDE8,0xFFF2,0xFED0,0xFFE8,0x010F,0x007B,0x019E,0x00B8,
0xFE08,0xFF15,0xFE24,0xFECD,0x01BF,0x0055,0xFF34,0x0092,0x02AF,0x00EA,0xFE2B,0xFFE8,0xFF07,0xFECB,0x0078,0x00A6,
0x01F2,0x02DA,0xFF73,0x002A,0x0130,0xFEA6,0xFFE0,0x0076,0x0082,0xFFD1,0x004F,0x01B2,0x0104,0x0065,0xFFF9,0xFF1D,
0xFFB6,0x00EA,0x0121,0x0210,0x019B,0xFFC2,0x001C,0x0048,0x021A,0x0257,0xFF67,0xFE9F,0xFEEC,0x01B1,0x00F0,0xFEC0,
0x0081,0x02A3,0x00D2,0x0020,0x003C,0xFF4E,0xFFC4,0xFFC0,0xFF96,0x006C,0x0323,0xFFE5,0xFE93,0xFF81,0x00C8,0x00A9,
0x0217,0x0048,0xFDBD,0x0144,0x001D,0xFF8D,0xFDF8,0x0052,0x0032,0x00AA,0x0064,0xFEC2,0x0107,0xFFA3,0xFF8F,0xFEAD,
0xFEBC,0x019D,0x0059,0xFF67,0x004D,0x0003,0xFF27,0xFE6A,0x00C5,0xFFF7,0xFF58,0x00AE,0xFEDD,0xFEF4,0x0133,0xFFB1,
0xFE8E,0xFF87,0x0024,0x004F,0x00FC,0xFFDA,0x00D5,0x006A,0xFEA2,0xFF81,0xFF0A,0xFFBE,0xFECA,0xFF98,0x0066,0x00CE,
0x0238,0x0108,0xFEFE,0xFE5B,0xFF9D,0x01E5,0xFFDE,0xFF32,0x0014,0xFFE9,0x00B9,0x005C,0x00C9,0x0048,0x0207,0x0217,
0xFEF2,0xFE48,0xFEFB,0x01B2,0x026C,0xFFA2,0xFFB5,0xFF51,0xFFA0,0x009C,0x00FC,0x010C,0x01BE,0x033B,0x0034,0xFEA8,
0xFEB9,0xFFDC,0x00D4,0x0163,0x0259,0x01A5,0xFF61,0xFEEA,0x0070,0x01F7,0x0163,0xFE86,0x00BC,0x0100,0x0098,0x0043,
0xFFB2,0x010C,0x0050,0x0029,0x0090,0xFFF6,0x006C,0x01B7,0x001B,0xFFC2,0x003D,0xFF7A,0xFF72,0x00D8,0x01A8,0x002F,
0x0069,0xFFA3,0xFEF8,0xFF3D,0x00F2,0x01E3,0xFF20,0x007D,0xFFAF,0xFFF5,0x008E,0xFED1,0xFF35,0xFF9E,0x0050,0x0060,
0x005C,0x01D1,0x014A,0xFE85,0xFF1F,0xFE08,0xFF0F,0xFFC9,0x0124,0x021C,0xFF17,0xFFC8,0xFFA4,0xFF53,0xFF99,0xFFAA,
0xFEFF,0xFFFD,0x0180,0xFF93,0xFF09,0xFF47,0x0147,0x00F1,0xFED2,0xFF3A,0x0101,0x0077,0xFF47,0x0050,0xFEEF,0xFFC5,
0xFFDB,0x00EA,0x0120,0x0083,0x00F0,0xFEFD,0xFFCA,0xFFF5,0xFFCF,0xFF23,0xFF8E,0x0085,0x00BA,0x0189,0x00BF,0xFFB0,
0x0031,0x01B4,0x0056,0x0026,0x001F,0xFF26,0xFF49,0x00EF,0x020D,0xFF6E,0xFFC5,0x0023,0x0184,0x023D,0x000D,0xFFCD,
0xFFBD,0xFF42,0xFFDC,0x0093,0x0101,0x0112,0x0077,0x00E7,0x00A3,0x000D,0x0038,0x0190,0xFFDA,0xFFD7,0x015F,0x006B,
0xFFDC,0xFFD0,0xFF24,0x0053,0x00AC,0x0073,0x00F6,0xFF60,0xFFCD,0xFFBF,0x006A,0x0063,0x00B1,0x0067,0x01B0,0x006E,
0xFE84,0x008F,0xFFED,0xFF52,0xFF55,0xFEFD,0x0067,0x0199,0x0075,0xFF62,0xFEC5,0x00B7,0x0039,0xFF44,0xFFA7,0xFF1A,
0x001E,0x008C,0xFFC0,0xFF9B,0xFFEA,0x0177,0x0033,0xFF13,0xFEC8,0xFE9F,0x0110,0x0032,0xFFC4,0xFF2B,0xFF39,0x00BB,
0xFF2E,0xFF9C,0x005D,0xFF90,0xFFC7,0xFFEE,0x001E,0x0003,0x0195,0xFFE4,0xFF63,0x002E,0xFE5B,0xFF2E,0xFFC6,0x006C,
0x01B5,0xFFE0,0xFF95,0x006D,0xFEC4,0x0067,0xFFA8,0xFFBA,0x001E,0x005D,0x006E,0x00BF,0x0210,0xFF52,0xFFFF,0xFF7C,
0xFF61,0x012E,0xFFF9,0xFFD8,0x0078,0xFF5C,0xFFEC,0x0055,0x00BA,0x0087,0x0176,0x0160,0xFF9B,0x00DB,0xFF8F,0xFF99,
0x0039,0x0054,0x00A2,0x0008,0xFFBD,0x0078,0x0048,0x000A,0x0083,0x0068,0x00AF,0x0066,0x012E,0x0179,0xFFFF,0xFF4E,
0xFFC1,0xFF67,0x0051,0x0149,0xFFE2,0xFF56,0xFFF8,0x005C,0x007E,0x01D6,0x00F8,0xFF5E,0xFFC5,0xFF14,0xFF90,0xFFE4,
0x005E,0x0076,0x0098,0x01BB,0xFFC1,0xFEE3,0xFF85,0xFFE0,0x0038,0x0030,0x006D,0x00FA,0x0134,0xFF48,0xFEAB,0xFEC0,
0x006C,0x00D9,0xFF19,0x002E,0xFFAD,0x00A1,0x0044,0xFF4A,0x00E3,0x001A,0xFF70,0xFF55,0xFF25,0x0081,0x0136,0xFF60,
0xFF5B,0xFFC4,0x0001,0x0061,0x0031,0x0015,0x0086,0x0187,0xFFDC,0xFEC8,0xFEC0,0xFFEB,0x00F4,0xFFEA,0x007F,0x005F,
0xFFC7,0x0017,0xFFD0,0x0039,0x0027,0xFF93,0x011C,0x00BB,0xFF82,0xFFB6,0x0019,0xFFEF,0x013D,0x0176,0xFF73,0xFF7C,
0x001D,0x005D,0x00FF,0x018B,0xFFD7,0xFF9A,0xFFFB,0x016F,0x0155,0xFFB3,0xFF8B,0x0043,0x0014,0x002D,0x00E0,0x00D9,
0x0047,0x002E,0x018D,0x003E,0xFFE7,0x0078,0x0028,0x0010,0x00D9,0x0011,0xFFC2,0x0051,0x008E,0x00B9,0x00A1,0x00A1,
0x006F,0x0071,0x007E,0x01C1,0x00BF,0xFF05,0xFF15,0xFFBD,0x004C,0x007F,0x01A4,0x008B,0xFF5F,0xFFF0,0xFF90,0x004F,
0x0021,0x0038,0x005E
};