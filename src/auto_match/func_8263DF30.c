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
extern int fn_8263D7F0();
extern unsigned int iStack_14;
extern unsigned int iStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_8263DF30(int param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  int iStack_14;
  
  if (param_3 == (undefined4 *)0x0) {
    iVar1 = *(int *)(param_1 + 0x3148);
    iVar3 = iVar1;
    if (iVar1 == 0) {
      iVar3 = *(int *)(param_1 + 0x3158);
    }
    uStack_20 = 0;
    uStack_1c = 0;
    iStack_18 = (*(uint *)(iVar3 + 0x24) >> 0x12) + 1;
    iStack_14 = (*(uint *)(iVar3 + 0x24) >> 3 & 0x7fff) + 1;
    if ((*(byte *)(param_1 + 0x2abc) & 0x10) == 0) {
      if (((((*(byte *)(param_1 + 0x2abc) & 0x20) == 0) ||
           ((*(int *)(param_1 + 0x3268) != iVar1 && (iVar1 != 0)))) ||
          ((*(int *)(param_1 + 0x326c) != *(int *)(param_1 + 0x314c) &&
           (*(int *)(param_1 + 0x314c) != 0)))) ||
         ((((*(int *)(param_1 + 0x3270) != *(int *)(param_1 + 0x3150) &&
            (*(int *)(param_1 + 0x3150) != 0)) ||
           ((*(int *)(param_1 + 0x3274) != *(int *)(param_1 + 0x3154) &&
            (*(int *)(param_1 + 0x3154) != 0)))) ||
          ((*(int *)(param_1 + 0x3278) != *(int *)(param_1 + 0x3158) &&
           (*(int *)(param_1 + 0x3158) != 0)))))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      iStack_18 = *(int *)(param_1 + 0x342c);
      iStack_14 = *(int *)(param_1 + 0x3430);
    }
    param_3 = &uStack_20;
  }
  fn_8263D7F0(param_1,param_2,param_3);
  return;
}

