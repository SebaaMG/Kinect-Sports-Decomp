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
extern unsigned int *auStack_50;
extern int fn_8251E530();
extern int fn_825A2D10();
extern int fn_825A2EE0();
extern unsigned int lbl_82192734;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_825A2920(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined8 in_r0;
  int iVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 auStack_50 [80];
  
  uVar5 = *(uint *)(param_1 + 0x234);
  uVar6 = *(uint *)(param_1 + 0x230);
  if ((uVar6 != uVar5) && (uVar6 < uVar5)) {
    dVar7 = (double)lbl_82192734;
    do {
      if (*(int *)(uVar6 + 0x30) == 0) {
LAB_825a29a0:
        iVar4 = *(int *)(*(int *)(*(int *)(((int)*(uint *)(uVar6 + 0x34) >> 8 & 0xffU) * 4 +
                                          param_2 + 0x7fc) + 4) +
                        (*(uint *)(uVar6 + 0x34) & 0xff) * 4);
        if (*(int *)(iVar4 + 0x240) == 0) {
          if (*(short *)(iVar4 + 8) == *(short *)(iVar4 + 6)) {
            bVar3 = true;
          }
          else if (((double)*(float *)(iVar4 + 0xc) != dVar7) ||
                  (bVar3 = true, *(short *)(iVar4 + 4) != *(short *)(iVar4 + 8))) goto LAB_825a29fc;
        }
        else {
LAB_825a29fc:
          bVar3 = false;
        }
        if (bVar3) {
          *(float *)(iVar4 + 0xc) = (float)dVar7;
          *(uint *)(iVar4 + 0x20) = *(uint *)(iVar4 + 0x20) | 8;
          goto LAB_825a2984;
        }
        fn_825A2EE0(param_1,uVar6,auStack_50,&uStack_60);
        if ((*(uint *)(uVar6 + 0x40) & 1) != 0) {
          puVar1 = (undefined4 *)((uint)(auStack_50 + (int)in_r0) & 0xfffffff0);
          uVar8 = puVar1[1];
          uVar9 = puVar1[2];
          uVar10 = puVar1[3];
          puVar2 = (undefined4 *)(iVar4 + 0x30U & 0xfffffff0);
          *puVar2 = *puVar1;
          puVar2[1] = uVar8;
          puVar2[2] = uVar9;
          puVar2[3] = uVar10;
        }
        if ((*(uint *)(uVar6 + 0x40) & 2) != 0) {
          *(undefined4 *)(iVar4 + 0x94) = uStack_60;
          *(undefined4 *)(iVar4 + 0x98) = uStack_5c;
          *(undefined4 *)(iVar4 + 0x9c) = uStack_58;
        }
      }
      else {
        iVar4 = fn_825A2D10(param_1,uVar6);
        if (iVar4 != 0) {
          *(undefined4 *)(uVar6 + 0x30) = 0;
          goto LAB_825a29a0;
        }
LAB_825a2984:
        fn_8251E530(param_1 + 0x230,uVar6);
        uVar6 = uVar6 - 0x60;
        uVar5 = uVar5 - 0x60;
      }
      uVar6 = uVar6 + 0x60;
    } while (uVar6 < uVar5);
  }
  return;
}

