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
extern unsigned int *auStack_60;
extern int fn_8262F6A8();
extern int fn_82811400();
extern int fn_82813428();
extern unsigned int iStack_68;
extern unsigned int uStack_50;
extern U64 storeWordConditionalIndexed();


void fn_82813858(longlong param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  uint *puVar10;
  char in_RESERVE;
  byte bVar11;
  longlong lStack_70;
  int iStack_68;
  longlong *plStack_64;
  undefined1 auStack_60 [16];
  undefined4 uStack_50;
  
  plStack_64 = (longlong *)((int)param_1 + 8);
  lVar8 = *plStack_64;
  lStack_70 = ((((U64)(lStack_70)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((undefined4)((ulonglong)lVar8 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
  uVar4 = (((U64)(lStack_70) >> 0) & 0xFFFFFFFF);
  iStack_68 = (((U64)(lStack_70) >> 0) & 0xFFFFFFFF);
  if (*param_2 == **(longlong **)((int)param_2 + 0xc)) {
    lVar9 = param_1 + 0x18;
    bVar3 = false;
    do {
      puVar10 = (uint *)lVar9;
      uVar1 = *puVar10;
      if (uVar1 != 0) {
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed((ulonglong)uVar1,0,lVar9);
          *puVar10 = uVar2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(1,0,lVar9);
        *puVar10 = uVar2;
        bVar3 = true;
      }
    } while (!bVar3);
    if (uVar1 == 0) {
      bVar11 = (lVar8 != *plStack_64) << 1;
      if (lVar8 == *plStack_64) {
        lStack_70 = lVar8;
        fn_82811400(auStack_60,0x10);
        uStack_50 = 8;
        piVar5 = (int *)fn_8262F6A8();
        iVar6 = (**(code **)(*piVar5 + 0xc))(piVar5,0x404,auStack_60);
        *(undefined4 *)(iVar6 + 0x400) = uVar4;
        piVar5 = (int *)(iVar6 + 0x3e0);
        lVar8 = 0x3f;
        do {
          *piVar5 = (int)(piVar5 + 4);
          piVar5 = piVar5 + -4;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
        do {
          do {
            *param_2 = **(longlong **)((int)param_2 + 0xc);
            *(undefined4 *)(param_2 + 1) = *(undefined4 *)param_2;
            *(undefined4 *)(iVar6 + 0x3f0) = *(undefined4 *)param_2;
          } while (*param_2 != **(longlong **)((int)param_2 + 0xc));
          if (*(longlong *)((int)param_1 + 0x10) == 0) {
            sync(1);
          }
          *(int *)(param_2 + 1) = iVar6;
          cVar7 = fn_82813428(param_2);
          bVar11 = (cVar7 == '\0') << 1;
        } while (cVar7 == '\0');
        iStack_68 = iVar6;
        fn_82813428(&lStack_70);
      }
      do {
        if (*puVar10 != 1) {
          if (in_RESERVE == '\0') {
            return;
          }
          uVar1 = storeWordConditionalIndexed((ulonglong)*puVar10,0,lVar9);
          *puVar10 = uVar1;
          return;
        }
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(0,0,lVar9);
          *puVar10 = uVar1;
          bVar11 = 2;
        }
      } while (!(bool)(bVar11 >> 1 & 1));
    }
  }
  return;
}

