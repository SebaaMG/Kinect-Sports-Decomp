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
extern int fn_82230300();
extern int fn_822980B0();
extern int fn_82522ED8();
extern int fn_82552B50();
extern int fn_8265CA20();
extern unsigned int lbl_821B96BC;


void fn_8243CFD0(undefined4 *param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  uint uVar4;
  longlong lVar3;
  int iVar5;
  
  *param_1 = &lbl_821B96BC;
  uVar4 = 0;
  if ((((int *)param_1[1])[1] - *(int *)param_1[1]) / 0x30 != 0) {
    iVar5 = 0;
    do {
      if (*(int *)(*(int *)param_1[1] + iVar5 + 0x2c) != 0) {
        fn_82522ED8();
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x30;
    } while (uVar4 < (uint)((((int *)param_1[1])[1] - *(int *)param_1[1]) / 0x30));
  }
  uVar4 = 0;
  if ((*(int *)(param_1[1] + 0x18) - *(int *)(param_1[1] + 0x14)) / 0xc != 0) {
    lVar3 = 0;
    do {
      fn_82552B50((ulonglong)*(uint *)(param_1[1] + 0x14) + lVar3,1);
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0xc;
    } while (uVar4 < (uint)((*(int *)(param_1[1] + 0x18) - *(int *)(param_1[1] + 0x14)) / 0xc));
  }
  puVar1 = (uint *)param_1[1];
  if (puVar1 != (uint *)0x0) {
    uVar4 = puVar1[5];
    if (uVar4 != 0) {
      for (; uVar4 != puVar1[6]; uVar4 = uVar4 + 0xc) {
      }
      fn_8265CA20();
    }
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    uVar2 = (ulonglong)*puVar1;
    if (uVar2 != 0) {
      uVar4 = puVar1[1];
      if (uVar2 != uVar4) {
        do {
          fn_822980B0(uVar2 + 0x1c);
          fn_82230300(uVar2,1,0);
          uVar2 = uVar2 + 0x30;
        } while ((uVar2 & 0xffffffff) != (ulonglong)uVar4);
      }
      fn_8265CA20(*puVar1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    fn_8265CA20(puVar1);
  }
  return;
}

