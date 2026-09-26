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
extern unsigned int lbl_82138A3C;
extern unsigned int lbl_82138FF8;
extern unsigned int lbl_8323B4A0;


void fn_82D6EA18(int *param_1,int *param_2,int *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined **ppuStack_60;
  char cStack_5c;
  int aiStack_50 [3];
  int *piStack_44;
  
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar4 + 4);
  if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar1 = "LthkpBvAgent";
    puVar1[3] = "StcheckBvShape";
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar4 + 4) = puVar1 + 4;
  }
  aiStack_50[2] = param_1[2];
  iVar4 = *param_1;
  aiStack_50[0] = *(int *)(iVar4 + 0x10);
  aiStack_50[1] = 0xffffffff;
  iVar2 = *(int *)(*param_2 + 0xc);
  ppuStack_60 = &lbl_82138FF8;
  cStack_5c = '\0';
  piStack_44 = param_1;
  (**(code **)((uint)*(byte *)((*(int *)(aiStack_50[0] + 0xc) + 0xd) * 0x20 + *param_3 + iVar2) *
               0x14 + *param_3 + 0x9a4))(aiStack_50,param_2,param_3,&ppuStack_60);
  if (cStack_5c != '\0') {
    iVar5 = KeTlsGetValue(lbl_8323B4A0);
    puVar1 = *(undefined4 **)(iVar5 + 4);
    if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
      *puVar1 = "Stchild";
      uVar3 = TBLr;
      puVar1[1] = (int)uVar3;
      *(undefined4 **)(iVar5 + 4) = puVar1 + 3;
    }
    aiStack_50[0] = *(int *)(iVar4 + 0x18);
    aiStack_50[1] = 0;
    (**(code **)((uint)*(byte *)((*(int *)(aiStack_50[0] + 0xc) + 0xd) * 0x20 + *param_3 + iVar2) *
                 0x14 + *param_3 + 0x9a4))(aiStack_50,param_2,param_3,param_4);
  }
  ppuStack_60 = &lbl_82138A3C;
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

