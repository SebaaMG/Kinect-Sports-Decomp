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
extern unsigned int lbl_8208DD78;
extern unsigned int lbl_8208DD7C;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82E33170(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  iVar3 = 3;
  param_1[0x1d9c] = 5;
  param_1[0x1d9d] = 3;
  param_1[0x1d9e] = 2;
  if (*(int *)(iVar2 + 0xd4) == 0) {
    param_1[0x1d9c] = 1;
    param_1[0x1d9d] = 1;
    param_1[0x1d9e] = 1;
    return;
  }
  fVar1 = *(float *)(iVar2 + 0x30);
  if (*(int *)(iVar2 + 0xd8) == 0) {
    if (lbl_8208DD7C < fVar1) {
      if (lbl_8208DD78 < fVar1) {
        param_1[0x1d9d] = 5;
        param_1[0x1d9e] = 5;
        param_1[0x1d9c] = 6;
        return;
      }
      param_1[0x1d9d] = 6;
      param_1[0x1d9c] = 7;
      param_1[0x1d9e] = 6;
      return;
    }
code_r0x82e33218:
    param_1[0x1d9c] = 5;
    param_1[0x1d9d] = 3;
    param_1[0x1d9e] = 2;
    return;
  }
  if (lbl_8208DD7C < fVar1) {
    if (lbl_8208DD78 < fVar1) goto code_r0x82e33218;
  }
  else {
    iVar3 = 4;
  }
  param_1[0x1d9c] = 5;
  param_1[0x1d9d] = iVar3;
  param_1[0x1d9e] = iVar3;
  return;
}

