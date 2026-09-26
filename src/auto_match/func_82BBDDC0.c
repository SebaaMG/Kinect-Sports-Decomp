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
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_820288C0;
extern unsigned int lbl_8202EE48;
extern unsigned int lbl_821AAD20;


uint fn_82BBDDC0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_1;
  fVar2 = lbl_821AAD20;
  if ((lbl_821AAD20 <= fVar1) && (fVar2 = fVar1, lbl_82002AE0 < fVar1)) {
    fVar2 = lbl_82002AE0;
  }
  fVar1 = param_1[1];
  fVar4 = lbl_821AAD20;
  if ((lbl_821AAD20 <= fVar1) && (fVar4 = fVar1, lbl_82002AE0 < fVar1)) {
    fVar4 = lbl_82002AE0;
  }
  fVar1 = param_1[2];
  fVar3 = lbl_821AAD20;
  if ((lbl_821AAD20 <= fVar1) && (fVar3 = lbl_82002AE0, fVar1 <= lbl_82002AE0)) {
    fVar3 = fVar1;
  }
  return (((int)(fVar2 * lbl_8202EE48 + lbl_82002C5C) << 6 |
          (int)(fVar4 * lbl_820288C0 + lbl_82002C5C)) << 5 |
         (int)(fVar3 * lbl_8202EE48 + lbl_82002C5C)) & 0xffff;
}

