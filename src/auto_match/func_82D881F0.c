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
extern unsigned int *auStack_464;
extern unsigned int *auStack_490;
extern unsigned int *auStack_4a0;
extern int fn_82CE5410();
extern float lbl_82002C5C;
extern unsigned int lbl_8202CF7C;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_468;
extern unsigned int uStack_46c;


void fn_82D881F0(int param_1,int *param_2,int *param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_4a0 [16];
  undefined1 auStack_490 [32];
  undefined1 *puStack_470;
  uint uStack_46c;
  uint uStack_468;
  undefined1 auStack_464 [1076];
  
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar4 + 4);
  if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar1 = "LthkpWorld::getPenetrations";
    puVar1[3] = "Stbroadphase";
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar4 + 4) = puVar1 + 4;
  }
  dVar11 = -(double)(*(float *)(*(int *)(param_1 + 0x78) + 8) * lbl_82002C5C - (float)param_3[2]);
  dVar10 = (double)lbl_821AAD20;
  if (-dVar11 < 0.0) {
    dVar10 = dVar11;
  }
  (**(code **)(*(int *)*param_2 + 0x1c))(dVar10,(int *)*param_2,param_2[2]);
  puStack_470 = auStack_464;
  uStack_468 = 0x80000080;
  uStack_46c = 0;
  (**(code **)(**(int **)(param_1 + 0x58) + 0x44))
            (*(int **)(param_1 + 0x58),auStack_490,&puStack_470);
  puVar3 = puStack_470;
  iVar4 = *(int *)(*param_2 + 0xc);
  iVar5 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar5 + 4);
  if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
    *puVar1 = "Stnarrowphase";
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar5 + 4) = puVar1 + 3;
  }
  lVar7 = (ulonglong)uStack_46c - 1;
  if (-1 < lVar7) {
    piVar8 = (int *)(puVar3 + 4);
    do {
      piVar9 = (int *)((int)*(char *)(*piVar8 + 5) + *piVar8);
      if (((param_2 != piVar9) &&
          (pcVar6 = (char *)(**(code **)(*(int *)(*(int *)(param_1 + 0x7c) + 8) + 4))
                                      (auStack_4a0,*(int *)(param_1 + 0x7c) + 8,param_2,piVar9),
          *pcVar6 != '\0')) && (*piVar9 != 0)) {
        (**(code **)((uint)*(byte *)((iVar4 + 0xd) * 0x20 + *(int *)(*piVar9 + 0xc) + *param_3) *
                     0x14 + *param_3 + 0x9a4))(param_2,piVar9,param_3,param_4);
        if (*(char *)(param_4 + 4) != '\0') break;
      }
      lVar7 = lVar7 + -1;
      piVar8 = piVar8 + 2;
    } while (-1 < lVar7);
  }
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar4 + 4);
  if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar1 = &lbl_8202CF7C;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
  }
  iVar4 = fn_82CE5410();
  uStack_46c = 0;
  if ((uStack_468 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar4 + 0x10) + 0x10))
              (*(int **)(iVar4 + 0x10),puStack_470,uStack_468 & 0x3fffffff,8);
  }
  return;
}

