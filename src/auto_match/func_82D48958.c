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
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_821386D0;
extern unsigned int lbl_8323B4A0;


char * fn_82D48958(char *param_1,int param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar5;
  longlong lVar4;
  int *piVar6;
  longlong lVar7;
  int *piVar8;
  char acStack_260 [16];
  undefined1 auStack_250 [592];
  
  iVar5 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar5 + 4);
  if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
    *puVar1 = &lbl_821386D0;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar5 + 4) = puVar1 + 3;
  }
  piVar8 = (int *)(param_2 + 0x14);
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  lVar7 = -1;
  lVar4 = (**(code **)(*piVar8 + 8))(piVar8);
  iVar5 = (int)lVar4;
  while (iVar5 != -1) {
    piVar6 = (int *)(**(code **)(*piVar8 + 0x14))(piVar8,lVar4,auStack_250);
    (**(code **)(*piVar6 + 0x20))(acStack_260,piVar6,param_3,param_4);
    if (acStack_260[0] != '\0') {
      lVar7 = lVar4;
    }
    lVar4 = (**(code **)(*piVar8 + 0xc))(piVar8,lVar4);
    iVar5 = (int)lVar4;
  }
  iVar5 = *(int *)(param_4 + 0x40);
  *(int *)(param_4 + 0x40) = iVar5 + -1;
  if ((int)lVar7 != -1) {
    *(int *)((iVar5 + 7) * 4 + param_4) = (int)lVar7;
  }
  uVar3 = lbl_8323B4A0;
  lVar4 = -lVar7 + -1;
  *param_1 = (char)lVar4 - ((char)-lVar7 + -2 + (lVar4 == 0));
  iVar5 = KeTlsGetValue(uVar3);
  puVar1 = *(undefined4 **)(iVar5 + 4);
  if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar5 + 4) = puVar1 + 3;
  }
  return param_1;
}

