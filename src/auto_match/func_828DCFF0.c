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
extern int fn_828DCA60();
extern unsigned int lbl_82024D24;


void fn_828DCFF0(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  bool bVar4;
  uint *puVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  
  puVar5 = (uint *)(param_1 + 0x88);
  uVar1 = *(uint *)(param_1 + 0x8c);
  if ((uVar1 <= param_2) || (bVar4 = true, param_2 < *puVar5)) {
    bVar4 = false;
  }
  if (bVar4) {
    uVar2 = *puVar5;
    if (uVar1 == *(uint *)(param_1 + 0x90)) {
      fn_828DCA60(puVar5,1);
    }
    puVar3 = *(undefined4 **)(param_1 + 0x8c);
    iVar7 = ((int)(param_2 - uVar2) / 0x34) * 0x34 + *puVar5;
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = &lbl_82024D24;
      puVar6 = (undefined2 *)(iVar7 + 6);
      puVar8 = (undefined2 *)((int)puVar3 + 6);
      puVar3[1] = *(undefined4 *)(iVar7 + 4);
      lVar9 = 0x15;
      do {
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
        *puVar8 = *puVar6;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
  }
  else {
    if (uVar1 == *(uint *)(param_1 + 0x90)) {
      fn_828DCA60(puVar5,1);
    }
    puVar3 = *(undefined4 **)(param_1 + 0x8c);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = &lbl_82024D24;
      puVar6 = (undefined2 *)(param_2 + 6);
      puVar8 = (undefined2 *)((int)puVar3 + 6);
      lVar9 = 0x15;
      puVar3[1] = *(undefined4 *)(param_2 + 4);
      do {
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
        *puVar8 = *puVar6;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
  }
  *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 0x34;
  return;
}

