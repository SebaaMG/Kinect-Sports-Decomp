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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82C038C8();
extern int fn_82F691F0();


undefined8 fn_82C14C30(longlong *param_1,ulonglong param_2,ulonglong param_3)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  byte *apbStack_9c [39];
  
  lVar7 = (param_3 & 0xffffffff) + *param_1;
  apbStack_9c[0] = (byte *)0x0;
  lVar6 = lVar7 + 0x18;
  if (*(int *)(param_1 + 0x1d) == 0) {
    if (((param_2 & 0xffffffff) + lVar6) - 0x18 < lVar7 + 0x1aU) {
      uVar8 = 6;
    }
    else {
      iVar3 = fn_82C038C8(param_1,lVar6,2,apbStack_9c);
      if (iVar3 == 2) {
        lVar6 = (ulonglong)apbStack_9c[0][1] * 0x100 + (ulonglong)*apbStack_9c[0];
        if (lVar6 == 0) goto LAB_82c15144;
        apbStack_9c[0] = apbStack_9c[0] + 2;
        puVar4 = (undefined2 *)fn_8265C940(8,0x248c8000);
        *(undefined2 **)(param_1 + 0x1d) = puVar4;
        if (puVar4 == (undefined2 *)0x0) {
          uVar8 = 5;
        }
        else {
          *puVar4 = (short)lVar6;
          uVar5 = fn_8265C940(lVar6 * 0x14,0x248c8000);
          *(undefined4 *)(*(int *)(param_1 + 0x1d) + 4) = uVar5;
          if (*(int *)(*(int *)(param_1 + 0x1d) + 4) != 0) {
                    /* WARNING: Subroutine does not return */
            fn_82F691F0(*(int *)(*(int *)(param_1 + 0x1d) + 4),0,lVar6 * 0x14);
          }
          uVar8 = 5;
        }
      }
      else {
        uVar8 = 3;
      }
    }
    psVar1 = *(short **)(param_1 + 0x1d);
    if (psVar1 != (short *)0x0) {
      iVar3 = *(int *)(psVar1 + 2);
      if (iVar3 != 0) {
        if (*psVar1 != 0) {
          uVar9 = 0;
          do {
            iVar2 = uVar9 * 0x14 + iVar3;
            fn_8265C990(*(undefined4 *)(iVar2 + 0xc),0x248c8000);
            fn_8265C990(*(undefined4 *)(iVar2 + 0x10),0x248c8000);
            uVar9 = uVar9 + 1 & 0xffff;
          } while (uVar9 < **(ushort **)(param_1 + 0x1d));
        }
        fn_8265C990(*(undefined4 *)(*(int *)(param_1 + 0x1d) + 4),0x248c8000);
      }
      fn_8265C990(*(undefined4 *)(param_1 + 0x1d),0x248c8000);
      *(undefined4 *)(param_1 + 0x1d) = 0;
    }
  }
  else {
LAB_82c15144:
    uVar8 = 0;
  }
  return uVar8;
}

