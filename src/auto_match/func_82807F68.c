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
extern int fn_82807E08();
extern unsigned int uStack_a0;


void fn_82807F68(int param_1,int param_2,int param_3,int param_4,ushort *param_5,ushort *param_6,
                  int param_7,ulonglong param_8)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  uint uVar8;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  ushort uVar12;
  double dVar13;
  double dVar14;
  ushort uStack_a0;
  
  uStack_a0 = *param_5;
  uVar11 = (ulonglong)uStack_a0;
  uVar8 = (uint)*param_6;
  bVar2 = **(byte **)(param_2 + 0x24);
  uVar9 = 0x80;
  do {
    uVar12 = (ushort)uVar11;
    if (*(ushort *)(param_1 + 0x1e) <= uVar8) break;
    iVar10 = uVar8 * 4;
    dVar13 = (double)*(float *)(*(int *)(param_1 + 4) + iVar10);
    if ((bVar2 & uVar9) == 0) {
      *(undefined4 *)((int)(uVar11 << 2) + param_3) =
           *(undefined4 *)(iVar10 + *(int *)(param_1 + 8));
      *(undefined4 *)((uint)uStack_a0 * 4 + param_4) =
           *(undefined4 *)(iVar10 + *(int *)(param_1 + 8));
LAB_82808194:
      if ((param_8 & 0xffffffff) != 0) {
LAB_828081e4:
        uVar11 = (ulonglong)uStack_a0;
        goto LAB_828081e8;
      }
LAB_8280819c:
      if (((param_7 == 0) || (*(int *)(param_2 + 0x3c) == 0)) ||
         (pcVar5 = *(code **)(*(int *)(param_2 + 0x3c) + iVar10), pcVar5 == (code *)0x0))
      goto LAB_828081e4;
      (*pcVar5)((double)*(float *)(param_2 + 0x40),param_3,param_4);
      uVar11 = (ulonglong)uStack_a0;
    }
    else {
      if (((ulonglong)bVar2 & uVar9 >> 3) != 0) {
        if (*(char *)(param_1 + 0x26) == '\0') {
          lVar6 = (longlong)**(short **)(param_2 + 0x28);
          *(short **)(param_2 + 0x28) = *(short **)(param_2 + 0x28) + 1;
        }
        else {
          lVar6 = (longlong)**(int **)(param_2 + 0x2c);
          *(int **)(param_2 + 0x2c) = *(int **)(param_2 + 0x2c) + 1;
        }
        fVar1 = (float)((double)lVar6 * dVar13);
        *(float *)((int)(uVar11 << 2) + param_3) = fVar1;
LAB_82808160:
        *(float *)((uint)uStack_a0 * 4 + param_4) = fVar1;
        goto LAB_82808194;
      }
      if (*(char *)(param_1 + 0x26) == '\0') {
        lVar6 = (longlong)**(short **)(param_2 + 0x28);
        *(short **)(param_2 + 0x28) = *(short **)(param_2 + 0x28) + 1;
      }
      else {
        lVar6 = (longlong)**(int **)(param_2 + 0x2c);
        *(int **)(param_2 + 0x2c) = *(int **)(param_2 + 0x2c) + 1;
      }
      dVar14 = (double)lVar6;
      if (*(char *)(param_1 + 0x26) == '\0') {
        bVar4 = *(byte *)(param_2 + 0x45);
        bVar3 = **(byte **)(param_2 + 0x30);
        *(byte **)(param_2 + 0x30) = *(byte **)(param_2 + 0x30) + bVar4;
        bVar3 = bVar3 >> ((bVar4 & 0xf) << 2) & 0xf;
        *(bool *)(param_2 + 0x45) = bVar4 == 0;
      }
      else {
        bVar3 = **(byte **)(param_2 + 0x30);
        *(byte **)(param_2 + 0x30) = *(byte **)(param_2 + 0x30) + 1;
      }
      fn_82807E08(param_2,bVar3 + 1,param_8);
      if ((param_8 & 0xffffffff) == 0) {
        if (((*(int *)(param_2 + 0x38) == 0) ||
            (pcVar5 = *(code **)(*(int *)(param_2 + 0x38) + iVar10), pcVar5 == (code *)0x0)) &&
           (pcVar5 = *(code **)(param_2 + 0x34), pcVar5 == (code *)0x0)) {
          dVar14 = (double)(float)((double)*(uint *)(param_2 + 0x14) + dVar14);
          *(float *)((int)(uVar11 << 2) + param_3) = (float)(dVar14 * dVar13);
          fVar1 = (float)(dVar14 * dVar13);
          goto LAB_82808160;
        }
        (*pcVar5)((double)*(float *)(param_2 + 0x40),param_2 + 0x10);
        goto LAB_8280819c;
      }
LAB_828081e8:
      uVar7 = uVar11 + 1;
      uVar11 = uVar7 & 0xffff;
      uStack_a0 = (ushort)uVar7;
    }
    uVar12 = (ushort)uVar11;
    uVar9 = uVar9 >> 1;
    uVar8 = uVar8 + 1 & 0xffff;
  } while (uVar9 != 0x10);
  *param_5 = uVar12;
  *param_6 = (ushort)uVar8;
  return;
}

