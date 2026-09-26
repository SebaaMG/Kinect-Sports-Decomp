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
extern int fn_82BC0088();
extern int fn_82BD06C0();
extern int fn_82BD0850();
extern int fn_82BD0948();
extern int fn_82BD0998();
extern unsigned int iStack_60;
extern unsigned int lbl_83223EC4;


void fn_82BD0A98(int *param_1,ulonglong param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iStack_60;
  int aiStack_5c [23];
  
  iVar5 = *(int *)(param_3 + 4);
  if ((param_2 & 0xffffffff) < (ulonglong)*(uint *)(iVar5 + 4)) {
    piVar3 = (int *)(*(int *)(iVar5 + 8) + (int)param_2 * 4);
  }
  else {
    piVar3 = (int *)fn_82BC0088(iVar5,param_2);
  }
  iVar5 = param_1[2];
  iVar1 = *piVar3;
  if (iVar5 == 0) {
    param_1[2] = *(int *)(iVar1 + 8);
  }
  else {
    while (piVar3 = (int *)(iVar5 + 0x1c), *piVar3 != 0) {
      iVar5 = *piVar3;
    }
    *piVar3 = *(int *)(iVar1 + 8);
  }
  fn_82BD06C0(param_1,&iStack_60,aiStack_5c);
  iVar5 = *(int *)(param_3 + 4);
  if ((param_2 & 0xffffffff) < (ulonglong)*(uint *)(iVar5 + 4)) {
    piVar3 = (int *)(*(int *)(iVar5 + 8) + (int)param_2 * 4);
  }
  else {
    piVar3 = (int *)fn_82BC0088(iVar5,param_2);
  }
  iVar5 = *piVar3;
  iVar8 = -1;
  iVar6 = 0;
  iVar7 = *(int *)(iVar5 + 8);
  if (0 < *(int *)(iVar5 + 4)) {
    do {
      iVar8 = iVar8 + 1;
      if (iVar8 == 7) {
        iVar7 = *(int *)(iVar7 + 0x1c);
        iVar8 = 0;
      }
      uVar2 = *(undefined4 *)(iVar8 * 4 + iVar7);
      cVar4 = fn_82BD0948(param_3,*(undefined4 *)(*param_1 * 4 + lbl_83223EC4),uVar2);
      if (cVar4 == '\0') {
        fn_82BD0850(param_1,&iStack_60,aiStack_5c,*(undefined4 *)(param_3 + 8));
        *(undefined4 *)(iStack_60 * 4 + aiStack_5c[0]) = uVar2;
        fn_82BD0998(param_3,*(undefined4 *)(*param_1 * 4 + lbl_83223EC4),uVar2);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(iVar5 + 4));
  }
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  return;
}

