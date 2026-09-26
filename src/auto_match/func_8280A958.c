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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005C8C;
extern unsigned int lbl_8201DF74;
extern unsigned int lbl_8201DF78;
extern unsigned int lbl_8201DF7C;
extern unsigned int lbl_8201DF80;
extern unsigned int lbl_8201DF84;
extern unsigned int lbl_8201DF88;
extern unsigned int lbl_8201DF8C;
extern unsigned int lbl_8201DF90;
extern unsigned int lbl_8201DF94;
extern unsigned int lbl_821AAD20;


double fn_8280A958(double param_1)

{
  float fVar1;
  
  if (param_1 <= (double)lbl_821AAD20) {
    return (double)lbl_82005C8C;
  }
  fVar1 = (float)((uint)(float)param_1 & 0x7fffff | 0x3f800000) - lbl_82002AE0;
  return (double)(((((((-(fVar1 * lbl_8201DF94 - lbl_8201DF90) * fVar1 - lbl_8201DF8C) * fVar1 +
                      lbl_8201DF88) * fVar1 - lbl_8201DF84) * fVar1 + lbl_8201DF80) * fVar1 -
                   lbl_8201DF7C) * fVar1 + lbl_8201DF78) * fVar1 + lbl_8201DF74 +
                 (float)(longlong)(short)(((ushort)((uint)(float)param_1 >> 0x17) & 0xff) - 0x7f));
}

