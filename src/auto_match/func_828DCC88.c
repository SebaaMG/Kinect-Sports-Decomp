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


void fn_828DCC88(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined2 *puVar7;
  longlong lVar8;
  
  uVar1 = param_1[1];
  if ((uVar1 <= param_2) || (bVar4 = true, param_2 < *param_1)) {
    bVar4 = false;
  }
  if (bVar4) {
    uVar2 = *param_1;
    if (uVar1 == param_1[2]) {
      fn_828DCA60(param_1,1);
    }
    puVar3 = (undefined4 *)param_1[1];
    iVar6 = ((int)(param_2 - uVar2) / 0x34) * 0x34 + *param_1;
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = &lbl_82024D24;
      puVar5 = (undefined2 *)(iVar6 + 6);
      puVar7 = (undefined2 *)((int)puVar3 + 6);
      puVar3[1] = *(undefined4 *)(iVar6 + 4);
      lVar8 = 0x15;
      do {
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
        *puVar7 = *puVar5;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  else {
    if (uVar1 == param_1[2]) {
      fn_828DCA60(param_1,1);
    }
    puVar3 = (undefined4 *)param_1[1];
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = &lbl_82024D24;
      puVar5 = (undefined2 *)(param_2 + 6);
      puVar7 = (undefined2 *)((int)puVar3 + 6);
      lVar8 = 0x15;
      puVar3[1] = *(undefined4 *)(param_2 + 4);
      do {
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
        *puVar7 = *puVar5;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  param_1[1] = param_1[1] + 0x34;
  return;
}

