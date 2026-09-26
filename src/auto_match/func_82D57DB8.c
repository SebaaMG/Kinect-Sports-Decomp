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
extern unsigned int *auStack_260;
extern unsigned int *auStack_464;
extern unsigned int *auStack_4b0;
extern unsigned int *auStack_4d0;
extern unsigned int *auStack_4f0;
extern int fn_82CE5410();
extern int fn_82CE6820();
extern unsigned int iStack_46c;
extern unsigned int iStack_4e0;
extern unsigned int lbl_8202CF7C;
extern unsigned int lbl_82138C54;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_468;
extern unsigned int uStack_4d8;
extern unsigned int uStack_4dc;


void fn_82D57DB8(int *param_1,undefined4 *param_2,int *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 auStack_4f0 [16];
  int iStack_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 *puStack_4d4;
  undefined1 auStack_4d0 [32];
  undefined1 auStack_4b0 [64];
  undefined4 *puStack_470;
  int iStack_46c;
  uint uStack_468;
  undefined4 auStack_464 [129];
  undefined1 auStack_260 [608];
  
  iVar2 = KeTlsGetValue(lbl_8323B4A0);
  puVar5 = *(undefined4 **)(iVar2 + 4);
  if (puVar5 < *(undefined4 **)(iVar2 + 0xc)) {
    *puVar5 = &lbl_82138C54;
    puVar5[3] = "StQueryTree";
    uVar1 = TBLr;
    puVar5[1] = (int)uVar1;
    *(undefined4 **)(iVar2 + 4) = puVar5 + 4;
  }
  fn_82CE6820(auStack_4b0,param_2[2],param_1[2]);
  (**(code **)(*(int *)*param_1 + 0x1c))((double)(float)param_3[2],(int *)*param_1,auStack_4b0);
  puStack_470 = auStack_464;
  uStack_468 = 0x80000080;
  iStack_46c = 0;
  piVar3 = (int *)*param_2;
  (**(code **)(*piVar3 + 0x30))(piVar3,auStack_4d0,&puStack_470);
  iVar2 = KeTlsGetValue(lbl_8323B4A0);
  puVar6 = puStack_470;
  puVar5 = *(undefined4 **)(iVar2 + 4);
  if (puVar5 < *(undefined4 **)(iVar2 + 0xc)) {
    *puVar5 = "StNarrowPhase";
    uVar1 = TBLr;
    puVar5[1] = (int)uVar1;
    *(undefined4 **)(iVar2 + 4) = puVar5 + 3;
  }
  uStack_4d8 = param_2[2];
  iVar2 = *(int *)(*param_1 + 0xc);
  puVar5 = puStack_470 + iStack_46c;
  puStack_4d4 = param_2;
  piVar3 = (int *)(**(code **)(*piVar3 + 0x10))(piVar3);
  for (; puVar6 != puVar5; puVar6 = puVar6 + 1) {
    pcVar4 = (char *)(**(code **)(*(int *)(param_3[3] + 0xc) + 4))
                               (auStack_4f0,param_3[3] + 0xc,param_3,param_1,param_2,piVar3,*puVar6)
    ;
    if (*pcVar4 != '\0') {
      iStack_4e0 = (**(code **)(*piVar3 + 0x14))(piVar3,*puVar6,auStack_260);
      uStack_4dc = *puVar6;
      (**(code **)((uint)*(byte *)((iVar2 + 0xd) * 0x20 + *(int *)(iStack_4e0 + 0xc) + *param_3) *
                   0x14 + *param_3 + 0x9a8))(param_1,&iStack_4e0,param_3,param_4);
    }
  }
  iVar2 = KeTlsGetValue(lbl_8323B4A0);
  puVar5 = *(undefined4 **)(iVar2 + 4);
  if (puVar5 < *(undefined4 **)(iVar2 + 0xc)) {
    *puVar5 = &lbl_8202CF7C;
    uVar1 = TBLr;
    puVar5[1] = (int)uVar1;
    *(undefined4 **)(iVar2 + 4) = puVar5 + 3;
  }
  iVar2 = fn_82CE5410();
  iStack_46c = 0;
  if ((uStack_468 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar2 + 0x10) + 0x10))
              (*(int **)(iVar2 + 0x10),puStack_470,uStack_468 & 0x3fffffff,4);
  }
  return;
}

