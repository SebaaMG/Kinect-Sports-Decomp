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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_340;
extern unsigned int *auStack_34c;
extern unsigned int fStack_3ac;
extern unsigned int iStack_384;
extern unsigned int iStack_3a0;
extern unsigned int lbl_82134508;
extern unsigned int lbl_82187C8C;
extern unsigned int uStack_388;
extern unsigned int uStack_39c;
extern U64 storeWordConditionalIndexed();


void fn_8309A2A0(int param_1,int *param_2,int param_3,longlong param_4)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  int *piVar11;
  char in_RESERVE;
  byte in_cr0;
  double dVar12;
  undefined **ppuStack_3b0;
  float fStack_3ac;
  undefined4 *puStack_3a8;
  undefined4 *puStack_3a4;
  int iStack_3a0;
  uint uStack_39c;
  int aiStack_390 [2];
  undefined4 uStack_388;
  int iStack_384;
  undefined4 auStack_34c [3];
  undefined4 auStack_340 [208];
  
  aiStack_390[0] = *param_2;
  iStack_384 = param_2[3];
  uStack_388 = *(undefined4 *)(param_1 + 0x20);
  dVar12 = (double)lbl_82134508;
  if (0 < (int)param_4) {
    piVar11 = (int *)(param_3 + 0xc);
    do {
      puStack_3a8 = auStack_340;
      puStack_3a4 = auStack_340;
      iStack_3a0 = *piVar11;
      fStack_3ac = (float)dVar12;
      ppuStack_3b0 = &lbl_82187C8C;
      uStack_39c = 0;
      (**(code **)((uint)*(byte *)((*(int *)(*(int *)piVar11[-3] + 0xc) + 0xd) * 0x20 +
                                   *(int *)(*(int *)piVar11[-2] + 0xc) + *param_2) * 0x14 + *param_2
                  + 0x9a8))((int *)piVar11[-3],(int *)piVar11[-2],aiStack_390,&ppuStack_3b0);
      puVar2 = (uint *)piVar11[2];
      if (ZEXT48(puVar2) == 0) {
        uVar9 = (ulonglong)(uint)piVar11[-1];
LAB_8309a398:
        if ((uVar9 & 0xffffffff) != 0) {
          uVar5 = (ulonglong)uStack_39c & 0xffff;
          iVar7 = (int)uVar5;
          piVar11[1] = iVar7;
          if (iVar7 != 0) {
            lVar6 = uVar5 + ((ulonglong)uStack_39c & 0xffff) * 2;
            puVar8 = auStack_34c;
            lVar10 = uVar9 + 8;
            do {
              puVar4 = (undefined4 *)lVar10;
              puVar4[-2] = puVar8[3];
              puVar8 = puVar8 + 4;
              puVar4[-1] = *puVar8;
              *puVar4 = *(undefined4 *)((int)auStack_340 + -(int)uVar9 + (int)puVar4);
              puVar4[1] = *(undefined4 *)((int)auStack_340 + -(int)uVar9 + 4 + (int)puVar4);
              lVar10 = lVar10 + 0x10;
              lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
          }
        }
      }
      else {
        do {
          uVar1 = *puVar2;
          if (in_RESERVE != '\0') {
            uVar3 = storeWordConditionalIndexed
                              ((ulonglong)uStack_39c + (ulonglong)uVar1,0,ZEXT48(puVar2));
            *puVar2 = uVar3;
            in_cr0 = 2;
          }
        } while (!(bool)(in_cr0 >> 1 & 1));
        if ((int)(uVar1 + uStack_39c) <= *piVar11) {
          uVar9 = ((ulonglong)uVar1 + ((ulonglong)uVar1 & 0x7fffffff) * 2 & 0xfffffff) * 0x10 +
                  (ulonglong)(uint)piVar11[-1];
          goto LAB_8309a398;
        }
        puVar2 = (uint *)piVar11[2];
        do {
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed
                              ((ulonglong)*puVar2 - (ulonglong)uStack_39c,0,ZEXT48(puVar2));
            *puVar2 = uVar1;
            in_cr0 = 2;
          }
        } while (!(bool)(in_cr0 >> 1 & 1));
      }
      param_4 = param_4 + -1;
      in_cr0 = (param_4 == 0) << 1;
      piVar11 = piVar11 + 8;
    } while (param_4 != 0);
  }
  return;
}

