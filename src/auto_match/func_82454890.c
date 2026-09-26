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
extern int fn_82230040();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F622A8();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B9BC8;
extern unsigned int uStack_3c;


void fn_82454890(int *param_1,ulonglong param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  
  if (0x5555555 < (param_2 & 0xffffffff)) {
    fn_82F622A8(0xffffffff82196fd4);
  }
  if ((ulonglong)(uint)((param_1[2] - *param_1) / 0x30) < (param_2 & 0xffffffff)) {
    iVar4 = 0;
    if ((param_2 & 0xffffffff) != 0) {
      iVar4 = fn_8265C9E0(param_2 * 0x30);
      if (iVar4 == 0) {
        uStack_3c = 0;
        ppuStack_40 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
        fn_82230040(&ppuStack_40);
      }
    }
    iVar5 = *param_1;
    iVar1 = param_1[1];
    if (iVar5 != iVar1) {
      puVar6 = (undefined4 *)(iVar4 + 8);
      do {
        if (puVar6 != (undefined4 *)0x8) {
          puVar6[-2] = &lbl_821B9BC8;
          puVar6[-1] = *(undefined4 *)(iVar5 + 4);
          puVar6[-2] = &lbl_821B9BC8;
          *puVar6 = *(undefined4 *)(iVar5 + 8);
          puVar6[1] = *(undefined4 *)(iVar5 + 0xc);
          puVar2 = (undefined4 *)(iVar5 + 0x10U & 0xfffffff0);
          uVar7 = puVar2[1];
          uVar8 = puVar2[2];
          uVar9 = puVar2[3];
          puVar3 = (undefined4 *)((uint)(puVar6 + 2) & 0xfffffff0);
          *puVar3 = *puVar2;
          puVar3[1] = uVar7;
          puVar3[2] = uVar8;
          puVar3[3] = uVar9;
          puVar6[6] = *(undefined4 *)(iVar5 + 0x20);
          *(undefined1 *)(puVar6 + 7) = *(undefined1 *)(iVar5 + 0x24);
        }
        iVar5 = iVar5 + 0x30;
        puVar6 = puVar6 + 0xc;
      } while (iVar5 != iVar1);
    }
    puVar6 = (undefined4 *)*param_1;
    puVar2 = (undefined4 *)param_1[1];
    iVar5 = (int)puVar2 - (int)puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      for (; puVar6 != puVar2; puVar6 = puVar6 + 0xc) {
        (**(code **)*puVar6)(puVar6,0);
      }
      fn_8265CA20(*param_1);
    }
    *param_1 = iVar4;
    param_1[2] = (int)param_2 * 0x30 + iVar4;
    param_1[1] = (iVar5 / 0x30) * 0x30 + iVar4;
  }
  return;
}

