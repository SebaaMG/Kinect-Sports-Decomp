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
extern int fn_8265CA60();
extern int fn_82A1E658();
extern int fn_82A29D80();
extern int fn_82A29DE8();


undefined8 fn_830B3498(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0x10c) == 0) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    if (*(int *)(param_1 + 0xec) != 0) {
      fn_82A1E658();
    }
    puVar4 = (undefined4 *)(param_1 + 0xfc);
    if (0xf < *(uint *)(param_1 + 0x110)) {
      puVar4 = (undefined4 *)*puVar4;
    }
    uVar1 = fn_82A29DE8(puVar4,0xffffffff80000000,0,0,3,0,0);
    *(int *)(param_1 + 0xec) = (int)uVar1;
    if ((int)uVar1 == -1) {
      uVar1 = 0xffffffff80040002;
    }
    else {
      iVar2 = fn_82A29D80(uVar1,0);
      if (iVar2 == -1) {
        uVar1 = 0xffffffff80040003;
      }
      else {
        if (iVar2 != 0) {
          *(int *)(param_1 + 0xf8) = iVar2;
          if (*(int *)(param_1 + 0xf0) == 0) {
            uVar3 = fn_8265CA60(*(undefined4 *)(param_1 + 0xf4));
            *(undefined4 *)(param_1 + 0xf0) = uVar3;
          }
          return 0;
        }
        uVar1 = 0xffffffff80040004;
      }
      fn_82A1E658(*(undefined4 *)(param_1 + 0xec));
      *(undefined4 *)(param_1 + 0xec) = 0;
    }
  }
  return uVar1;
}

