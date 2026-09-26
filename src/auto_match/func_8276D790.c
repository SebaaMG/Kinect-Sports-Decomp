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
#define CONCAT22(h,l) ((U32)((((U16)(h)) << 16) | ((U16)(l))))
#define _uStack_10 ((*(U64*)&uStack_10))
extern int fn_8276B280();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_10;
extern unsigned int uStack_e;


double fn_8276D790(longlong param_1,undefined2 param_2,undefined2 param_3)

{
  float fVar1;
  int iVar2;
  undefined2 uStack_10;
  undefined2 uStack_e;
  
  _uStack_10 = CONCAT22(param_2,param_3);
  iVar2 = fn_8276B280(param_1 + 0x3c,&uStack_10);
  fVar1 = lbl_821AAD20;
  if (iVar2 != 0) {
    fVar1 = *(float *)(iVar2 + 4);
  }
  return (double)fVar1;
}

