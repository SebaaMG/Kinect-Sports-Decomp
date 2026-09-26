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
extern unsigned int *auStack_20;
extern int fn_8251F720();
extern int fn_82520158();
extern unsigned int lbl_821CAD0C;
extern unsigned int lbl_821CC160;


undefined4 * fn_826192B0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [8];
  
  param_1[1] = param_2;
  param_1[0x3f2] = param_3;
  param_1[0x3ed] = 0;
  param_1[0x3f3] = lbl_821CC160;
  *param_1 = &lbl_821CAD0C;
  param_1[0x3ee] = 0;
  param_1[0x3ef] = 0;
  param_1[0x3f0] = 0;
  param_1[0x3f4] = 0xffffffff;
  if (param_3 == 0) {
    param_1[0x3f5] = 0;
  }
  else {
    iVar1 = fn_82520158(0xffffffff821c9120,auStack_20,0);
    if (iVar1 == 0) {
      param_1[0x3f5] = 0;
    }
    else {
      uVar2 = fn_8251F720(auStack_20,0);
      param_1[0x3f5] = uVar2;
    }
    iVar1 = fn_82520158(0xffffffff821c53d4,auStack_20,0);
    if (iVar1 != 0) {
      uVar2 = fn_8251F720(auStack_20,0);
      param_1[0x3f6] = uVar2;
      return param_1;
    }
  }
  param_1[0x3f6] = 0;
  return param_1;
}

