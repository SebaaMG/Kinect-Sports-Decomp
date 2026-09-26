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
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern unsigned int lbl_82005710;
extern unsigned int lbl_821AAD20;


int fn_82CF16D0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0x80000000;
  *(int *)(param_1 + 0x48) = param_2;
  *(undefined4 *)(param_1 + 0x4c) = param_3;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = param_4;
  if (param_2 != 0) {
    iVar2 = fn_82CE5410();
    if (*(uint *)(param_2 + 0x34) == (*(uint *)(param_2 + 0x38) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
      fn_82CE63B0(*(undefined4 *)(iVar2 + 0x10),(int *)(param_2 + 0x30),4);
    }
    *(int *)(*(int *)(param_2 + 0x34) * 4 + *(int *)(param_2 + 0x30)) = param_1;
    *(int *)(param_2 + 0x34) = *(int *)(param_2 + 0x34) + 1;
  }
  uVar1 = lbl_821AAD20;
  puVar4 = (undefined4 *)(param_1 + -4);
  puVar3 = (undefined2 *)(param_1 + 0x1e);
  lVar5 = 8;
  do {
    puVar4 = puVar4 + 1;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    *puVar3 = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  *(undefined8 *)(param_1 + 0x40) = lbl_82005710;
  return param_1;
}

