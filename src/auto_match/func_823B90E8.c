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
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F622A8();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_4c;


void fn_823B90E8(int *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  int *piVar9;
  int iVar10;
  undefined **ppuStack_50;
  undefined4 uStack_4c;
  
  if (0xfffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  if ((uint)(param_1[2] - *param_1 >> 4) < param_2) {
    iVar4 = 0;
    if (param_2 != 0) {
      iVar4 = fn_8265C9E0(((ulonglong)param_2 & 0xfffffff) << 4);
      if (iVar4 == 0) {
        uStack_4c = 0;
        ppuStack_50 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
        fn_82230040(&ppuStack_50);
      }
    }
    puVar6 = (undefined8 *)*param_1;
    puVar1 = (undefined8 *)param_1[1];
    if (puVar6 != puVar1) {
      puVar8 = (undefined8 *)(iVar4 + 8);
      puVar5 = puVar6 + 1;
      do {
        if (puVar8 != (undefined8 *)0x8) {
          puVar8[-1] = *puVar6;
          *(undefined4 *)puVar8 = 0;
          *(undefined4 *)((int)puVar8 + 4) = 0;
          if (puVar8 != puVar5) {
            *(undefined4 *)((int)puVar8 + 4) = *(undefined4 *)((int)puVar5 + 4);
            *(undefined4 *)((int)puVar5 + 4) = 0;
            uVar2 = *(undefined4 *)puVar8;
            *(undefined4 *)puVar8 = *(undefined4 *)puVar5;
            *(undefined4 *)puVar5 = uVar2;
          }
        }
        puVar6 = puVar6 + 2;
        puVar8 = puVar8 + 2;
        puVar5 = puVar5 + 2;
      } while (puVar6 != puVar1);
    }
    iVar10 = *param_1;
    iVar3 = param_1[1];
    iVar7 = iVar3 - iVar10;
    if (iVar10 != 0) {
      if (iVar10 != iVar3) {
        piVar9 = (int *)(iVar10 + 0xc);
        do {
          if (*piVar9 != 0) {
            fn_822315A0();
          }
          iVar10 = iVar10 + 0x10;
          piVar9 = piVar9 + 4;
        } while (iVar10 != iVar3);
      }
      fn_8265CA20(*param_1);
    }
    *param_1 = iVar4;
    param_1[2] = param_2 * 0x10 + iVar4;
    param_1[1] = (iVar7 >> 4) * 0x10 + iVar4;
  }
  return;
}

