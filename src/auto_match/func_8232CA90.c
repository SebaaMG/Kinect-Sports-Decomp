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
extern unsigned int uStack_3c;


void fn_8232CA90(int *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  
  if (0x1fffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  if ((uint)(param_1[2] - *param_1 >> 3) < param_2) {
    puVar4 = (undefined4 *)0x0;
    if (param_2 != 0) {
      puVar4 = (undefined4 *)fn_8265C9E0(((ulonglong)param_2 & 0x1fffffff) << 3);
      if (puVar4 == (undefined4 *)0x0) {
        uStack_3c = 0;
        ppuStack_40 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
        fn_82230040(&ppuStack_40);
      }
    }
    puVar1 = (undefined4 *)param_1[1];
    puVar5 = puVar4;
    for (puVar7 = (undefined4 *)*param_1; puVar7 != puVar1; puVar7 = puVar7 + 2) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0;
        puVar5[1] = 0;
        if (puVar5 != puVar7) {
          puVar5[1] = puVar7[1];
          puVar7[1] = 0;
          uVar2 = *puVar5;
          *puVar5 = *puVar7;
          *puVar7 = uVar2;
        }
      }
      puVar5 = puVar5 + 2;
    }
    iVar8 = *param_1;
    iVar3 = param_1[1];
    iVar6 = iVar3 - iVar8;
    if (iVar8 != 0) {
      for (; iVar8 != iVar3; iVar8 = iVar8 + 8) {
        if (*(int *)(iVar8 + 4) != 0) {
          fn_822315A0();
        }
      }
      fn_8265CA20(*param_1);
    }
    *param_1 = (int)puVar4;
    param_1[2] = (int)(puVar4 + param_2 * 2);
    param_1[1] = (int)(puVar4 + (iVar6 >> 3) * 2);
  }
  return;
}

