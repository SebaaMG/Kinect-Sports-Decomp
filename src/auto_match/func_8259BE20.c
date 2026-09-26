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
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F622A8();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_4c;


void fn_8259BE20(int *param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined **ppuStack_50;
  undefined4 uStack_4c;
  
  if (0xccccccc < (param_2 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  if ((ulonglong)(uint)((param_1[2] - *param_1) / 0x14) < (param_2 & 0xffffffff)) {
    iVar3 = 0;
    if ((param_2 & 0xffffffff) != 0) {
      iVar3 = fn_8265C9E0(param_2 * 0x14);
      if (iVar3 == 0) {
        uStack_4c = 0;
        ppuStack_50 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
        fn_82230040(&ppuStack_50);
      }
    }
    puVar7 = (undefined4 *)*param_1;
    puVar1 = (undefined4 *)param_1[1];
    if (puVar7 != puVar1) {
      puVar6 = (undefined4 *)(iVar3 + 4);
      do {
        if (puVar6 != (undefined4 *)0x4) {
          puVar6[-1] = *puVar7;
          *puVar6 = 0;
          puVar6[1] = 0;
          fn_82517978(puVar6,puVar7[1],puVar7[2],0);
          puVar6[2] = puVar7[3];
          puVar6[3] = puVar7[4];
        }
        puVar7 = puVar7 + 5;
        puVar6 = puVar6 + 5;
      } while (puVar7 != puVar1);
    }
    iVar8 = *param_1;
    iVar2 = param_1[1];
    iVar4 = iVar2 - iVar8;
    if (iVar8 != 0) {
      if (iVar8 != iVar2) {
        piVar5 = (int *)(iVar8 + 8);
        do {
          if (*piVar5 != 0) {
            fn_822315A0();
          }
          iVar8 = iVar8 + 0x14;
          piVar5 = piVar5 + 5;
        } while (iVar8 != iVar2);
      }
      fn_8265CA20(*param_1);
    }
    *param_1 = iVar3;
    param_1[2] = (int)param_2 * 0x14 + iVar3;
    param_1[1] = (iVar4 / 0x14) * 0x14 + iVar3;
  }
  return;
}

