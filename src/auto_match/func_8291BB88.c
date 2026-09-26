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
extern unsigned int *auStack_40;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82917920();
extern int fn_82917D90();
extern int fn_8291B958();
extern int fn_82F691F0();
extern unsigned int iStack_30;
extern unsigned int uStack_38;
extern unsigned int uStack_3a;
extern unsigned int uStack_44;


undefined4 * fn_8291BB88(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 uStack_44;
  undefined1 auStack_40 [6];
  undefined2 uStack_3a;
  ushort uStack_38;
  int iStack_30;
  
  uVar7 = (ulonglong)*(ushort *)(param_1[6] + 8);
  if (param_2 < uVar7) {
    if (uVar7 == 1) {
      return param_1;
    }
    if (param_1[0xf] != 0) {
      iVar3 = param_2 * 4;
      if (*(int *)(iVar3 + param_1[0xf]) == 0) {
        if (param_1[0x10] == 0) {
          puVar4 = (undefined4 *)fn_8265C940(0x10,0x24810000);
          param_1[0x10] = puVar4;
          if (puVar4 == (undefined4 *)0x0) {
            return (undefined4 *)0x0;
          }
          puVar6 = (undefined4 *)param_1[6];
          *puVar4 = *puVar6;
          puVar4[1] = puVar6[1];
          puVar4[2] = puVar6[2];
          puVar4[3] = puVar6[3];
          *(undefined2 *)(param_1[0x10] + 8) = 1;
        }
        puVar6 = &uStack_44;
        lVar8 = 5;
        puVar4 = param_1;
        do {
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
          *puVar6 = *puVar4;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
        uVar1 = param_1[0xb];
        uVar7 = (longlong)(int)uVar1 * (longlong)(int)param_2 +
                (ulonglong)*(ushort *)((int)param_1 + 10);
        uStack_3a = (undefined2)uVar7;
        uStack_38 = (ushort)uVar1;
        uVar7 = ((ulonglong)*(ushort *)(param_1 + 3) - (uVar7 & 0xffff)) +
                (ulonglong)*(ushort *)((int)param_1 + 10);
        if ((int)uVar7 < (int)(uVar1 & 0xffff)) {
          uStack_38 = -(ushort)(uVar7 < 0xffffffff80000000) & (ushort)uVar7;
        }
        iVar5 = 1;
        if (*(short *)(param_1 + 2) != 0) {
          iVar5 = 4;
        }
        if (param_1[5] != 0) {
          iStack_30 = uVar1 * iVar5 * param_2 * 4 + param_1[5];
        }
        uVar2 = param_1[8];
        uVar7 = fn_8265C940(0x44,0x24810000);
        if ((uVar7 & 0xffffffff) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = fn_82917920(uVar7,*param_1,auStack_40,param_1[0x10],param_1[7],
                                ((longlong)(int)(uVar1 * iVar5) * (longlong)(int)param_2 &
                                0x3fffffffU) * 4 + (ulonglong)uVar2);
        }
        *(int *)(iVar3 + param_1[0xf]) = iVar5;
        if (iVar5 == 0) {
          return (undefined4 *)0x0;
        }
        iVar5 = fn_8291B958(*(undefined4 *)(iVar3 + param_1[0xf]));
        if (iVar5 < 0) {
          iVar5 = *(int *)(iVar3 + param_1[0xf]);
          if (iVar5 != 0) {
            fn_82917D90(iVar5);
            fn_8265C990(iVar5,0x24810000);
          }
          *(undefined4 *)(iVar3 + param_1[0xf]) = 0;
          return (undefined4 *)0x0;
        }
      }
      return *(undefined4 **)(iVar3 + param_1[0xf]);
    }
    uVar7 = fn_8265C940(uVar7 << 2,0x24810000);
    param_1[0xf] = (int)uVar7;
    if ((uVar7 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar7,0,(ulonglong)*(ushort *)(param_1[6] + 8) << 2);
    }
  }
  return (undefined4 *)0x0;
}

