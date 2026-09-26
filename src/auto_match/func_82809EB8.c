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
extern unsigned int lbl_8201DF98;
extern unsigned int lbl_8201DF9C;
extern unsigned int lbl_8201DFA0;
extern unsigned int lbl_8201DFA4;
extern unsigned int lbl_8201DFA8;
extern unsigned int lbl_8201DFAC;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double fn_82809EB8(byte param_1)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  
  bVar3 = param_1 & 0xe0;
  fVar1 = (float)(longlong)(char)(param_1 << 2);
  fVar2 = fVar1 * fVar1;
  if ((param_1 & 0xe0) != 0) {
    if ((bVar3 == 0x20) || (bVar3 == 0x40)) {
      return -(double)(((fVar2 * lbl_8201DFAC - lbl_8201DFA8) * fVar2 + lbl_8201DFA4) * fVar1);
    }
    if ((bVar3 == 0x60) || (bVar3 == 0x80)) {
      return -(double)((-(fVar2 * lbl_8201DFA0 - lbl_8201DF9C) * fVar2 - lbl_8201DF98) * fVar2 +
                      lbl_82002AE0);
    }
    if (bVar3 != 0xe0) {
      return (double)(((fVar2 * lbl_8201DFAC - lbl_8201DFA8) * fVar2 + lbl_8201DFA4) * fVar1);
    }
  }
  return (double)((-(fVar2 * lbl_8201DFA0 - lbl_8201DF9C) * fVar2 - lbl_8201DF98) * fVar2 +
                 lbl_82002AE0);
}

