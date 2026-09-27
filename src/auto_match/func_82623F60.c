typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_825E4C20();
extern float lbl_8218E8E8;
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821961F0;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8326B850;
extern unsigned int lbl_8326B85C;
extern unsigned int lbl_8326B860;
extern unsigned int lbl_8326B86C;
extern unsigned int lbl_8326B874;
extern unsigned int lbl_8326B878;
extern unsigned int lbl_8326B87C;
extern unsigned int lbl_8326B8E8;
extern unsigned int lbl_83274AEC;
extern unsigned int lbl_83274AFC;
extern unsigned int uRam8326b854;
extern unsigned int uRam8326b858;
extern unsigned int uRam8326b864;
extern unsigned int uRam8326b868;
extern unsigned int uRam8326b870;


void fn_82623F60(void)

{
  lbl_83274AEC = 0;
  uRam8326b854 = 0;
  fn_825E4C20();
  lbl_8326B850 = 0;
  uRam8326b864 = 0;
  uRam8326b858 = lbl_821961F0;
  lbl_8326B85C = lbl_821CA460;
  lbl_8326B860 = lbl_821CA460;
  lbl_8326B874 = *(float *)(lbl_8326B8E8 + 0x10) * lbl_8218E8E8;
  uRam8326b868 = lbl_821CC160;
  lbl_8326B878 = *(float *)(lbl_8326B8E8 + 0x10) * lbl_8218E8E8;
  uRam8326b870 = lbl_821916FC;
  lbl_8326B87C = lbl_821CC160;
  lbl_8326B86C = lbl_821CC160;
  lbl_83274AFC = lbl_821CA460;
  return;
}

