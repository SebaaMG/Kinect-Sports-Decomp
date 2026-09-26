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
#define TBLr 0
extern unsigned int *auStack_30f0;
extern unsigned int fStack_d0;
extern int fn_82D7D528();
extern int fn_82DB61C8();
extern unsigned int iStack_30fc;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_82134508;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8323B4A0;
extern unsigned int lbl_8323B520;
extern unsigned int uStack_80;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


void fn_82DB6A90(undefined8 param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  double dVar11;
  undefined1 *puStack_3100;
  int iStack_30fc;
  undefined1 auStack_30f0 [12320];
  float fStack_d0;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_80;
  
  iVar6 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar6 + 4);
  if (puVar1 < *(undefined4 **)(iVar6 + 0xc)) {
    *puVar1 = "TtNarrowPhase";
    uVar4 = TBLr;
    puVar1[1] = (int)uVar4;
    *(undefined4 **)(iVar6 + 4) = puVar1 + 3;
  }
  iVar6 = 0;
  dVar11 = (double)lbl_82134508;
  fStack_d0 = lbl_82134508;
  uStack_b0 = lbl_821AAD20;
  uStack_ac = lbl_821AAD20;
  iStack_30fc = param_2;
  if (0 < *(int *)(param_2 + 0x60)) {
    iVar8 = 0;
    do {
      iVar6 = iVar6 + 1;
      uVar10 = (ulonglong)*(uint *)(*(int *)(param_2 + 0x5c) + iVar8);
      iVar8 = iVar8 + 4;
      if (iVar6 == *(int *)(param_2 + 0x60)) {
        uVar9 = uVar10 + *(uint *)(param_2 + 0x58);
      }
      else {
        uVar9 = uVar10 + 0x200;
      }
      if (uVar10 < (uVar9 & 0xffffffff)) {
        do {
          iVar5 = (int)uVar10;
          uVar2 = *(undefined4 *)(iVar5 + 0x10);
          uVar3 = *(undefined4 *)(iVar5 + 0x14);
          dataCacheBlockTouch((ulonglong)*(uint *)(iVar5 + 8));
          dataCacheBlockTouch(uVar10 + 0x80);
          puStack_3100 = auStack_30f0;
          iVar7 = *(char *)(iVar5 + 0xc) * 0x40 + *param_3;
          param_3[0x18] = iVar7 + 0x1c20;
          fStack_d0 = (float)dVar11;
          param_3[5] = *(int *)(iVar7 + 0x1c30);
          uStack_80 = 0;
          fn_82D7D528(uVar10,param_3,&puStack_3100,*(undefined4 *)(iVar5 + 8));
          if (lbl_8323B520 == 1) goto LAB_82db6c54;
          if (puStack_3100 != auStack_30f0) {
            (**(code **)(**(int **)(iVar5 + 8) + 0x18))
                      (*(int **)(iVar5 + 8),uVar2,uVar3,param_3,&puStack_3100);
          }
          if ((double)fStack_d0 != dVar11) {
            fn_82DB61C8(param_1,&puStack_3100,uVar10);
          }
          uVar10 = *(byte *)(iVar5 + 3) + uVar10;
        } while ((uVar10 & 0xffffffff) < (uVar9 & 0xffffffff));
      }
    } while (iVar6 < *(int *)(param_2 + 0x60));
  }
LAB_82db6c54:
  iVar6 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar6 + 4);
  if (puVar1 < *(undefined4 **)(iVar6 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar4 = TBLr;
    puVar1[1] = (int)uVar4;
    *(undefined4 **)(iVar6 + 4) = puVar1 + 3;
  }
  return;
}

