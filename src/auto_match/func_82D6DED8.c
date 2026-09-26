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
extern unsigned int lbl_8202CF7C;
extern unsigned int lbl_82138FF8;
extern unsigned int lbl_8323B4A0;


void fn_82D6DED8(int param_1,int *param_2,int *param_3,int *param_4,int param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined **ppuStack_70;
  char cStack_6c;
  int aiStack_60 [3];
  int *piStack_54;
  
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar4 + 4);
  if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar1 = "LthkpBvAgent";
    puVar1[3] = "StcheckBvShape";
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar4 + 4) = puVar1 + 4;
  }
  aiStack_60[2] = param_2[2];
  iVar4 = *param_2;
  aiStack_60[0] = *(int *)(iVar4 + 0x10);
  aiStack_60[1] = 0xffffffff;
  ppuStack_70 = &lbl_82138FF8;
  cStack_6c = '\0';
  piStack_54 = param_2;
  (**(code **)(**(int **)(param_1 + 0xc) + 0xc))
            (*(int **)(param_1 + 0xc),aiStack_60,param_3,param_4,&ppuStack_70);
  if (cStack_6c == '\0') {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x1c))(piVar2,*(undefined4 *)(param_5 + 4));
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
  }
  else {
    iVar5 = KeTlsGetValue(lbl_8323B4A0);
    puVar1 = *(undefined4 **)(iVar5 + 4);
    if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
      *puVar1 = "Stchild";
      uVar3 = TBLr;
      puVar1[1] = (int)uVar3;
      *(undefined4 **)(iVar5 + 4) = puVar1 + 3;
    }
    aiStack_60[0] = *(int *)(iVar4 + 0x18);
    aiStack_60[1] = 0;
    if (*(int *)(param_1 + 0x10) == 0) {
      iVar4 = *param_4;
      iVar5 = iVar4 + 0x5a0;
      if (param_4[5] == 0) {
        iVar5 = iVar4 + 0x1a0;
      }
      uVar6 = (**(code **)((uint)*(byte *)(*(int *)(aiStack_60[0] + 0xc) * 0x20 + iVar5 +
                                          *(int *)(*param_3 + 0xc)) * 0x14 + iVar4 + 0x9a0))
                        (aiStack_60,param_3,param_4,*(undefined4 *)(param_1 + 8));
      *(undefined4 *)(param_1 + 0x10) = uVar6;
    }
    (**(code **)(**(int **)(param_1 + 0x10) + 0x18))
              (*(int **)(param_1 + 0x10),aiStack_60,param_3,param_4,param_5);
  }
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar4 + 4);
  if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar1 = &lbl_8202CF7C;
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
  }
  return;
}

