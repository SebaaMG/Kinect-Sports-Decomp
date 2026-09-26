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
extern unsigned int *auStack_250;
extern unsigned int *auStack_25e;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;


char * fn_82D48E80(char *param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  int iVar5;
  longlong lVar4;
  int *piVar6;
  char *pcVar7;
  longlong lVar8;
  int *piVar9;
  char cStack_260;
  char cStack_25f;
  undefined1 auStack_25e [14];
  undefined1 auStack_250 [592];
  
  iVar5 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar5 + 4);
  if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
    *puVar1 = "TtrcShpCollect";
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar5 + 4) = puVar1 + 3;
  }
  piVar9 = (int *)(param_2 + 0x10);
  lVar8 = -1;
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  pcVar2 = *(code **)(*(int *)(param_2 + 0x10) + 8);
  if (*(int *)(param_3 + 0x24) == 0) {
    lVar4 = (*pcVar2)(piVar9);
    iVar5 = (int)lVar4;
    while (iVar5 != -1) {
      piVar6 = (int *)(**(code **)(*piVar9 + 0x14))(piVar9,lVar4,auStack_250);
      (**(code **)(*piVar6 + 0x20))(&cStack_25f,piVar6,param_3,param_4);
      if (cStack_25f != '\0') {
        lVar8 = lVar4;
      }
      lVar4 = (**(code **)(*piVar9 + 0xc))(piVar9,lVar4);
      iVar5 = (int)lVar4;
    }
  }
  else {
    lVar4 = (*pcVar2)(piVar9);
    iVar5 = (int)lVar4;
    while (iVar5 != -1) {
      pcVar7 = (char *)(**(code **)**(undefined4 **)(param_3 + 0x24))
                                 (auStack_25e,*(undefined4 **)(param_3 + 0x24),param_3,param_2,
                                  piVar9,lVar4);
      if (*pcVar7 != '\0') {
        piVar6 = (int *)(**(code **)(*piVar9 + 0x14))(piVar9,lVar4,auStack_250);
        (**(code **)(*piVar6 + 0x20))(&cStack_260,piVar6,param_3,param_4);
        if (cStack_260 != '\0') {
          lVar8 = lVar4;
        }
      }
      lVar4 = (**(code **)(*piVar9 + 0xc))(piVar9,lVar4);
      iVar5 = (int)lVar4;
    }
  }
  iVar5 = *(int *)(param_4 + 0x40);
  *(int *)(param_4 + 0x40) = iVar5 + -1;
  if ((int)lVar8 != -1) {
    *(int *)((iVar5 + 7) * 4 + param_4) = (int)lVar8;
  }
  iVar5 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar5 + 4);
  if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar5 + 4) = puVar1 + 3;
  }
  lVar4 = -lVar8 + -1;
  *param_1 = (char)lVar4 + (-(lVar4 == 0) - ((char)-lVar8 + -2));
  return param_1;
}

