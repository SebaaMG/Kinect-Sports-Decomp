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
extern int fn_826944C8();
extern int fn_82694610();
extern int fn_82694700();
extern int fn_826A9168();


int * fn_826A98D8(int param_1,undefined4 *param_2,ulonglong param_3)

{
  char cVar1;
  int *piVar3;
  longlong lVar2;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  char *pcVar8;
  int aiStack_50 [20];
  
  if (((undefined4 *)*param_2)[4] == 0) {
    piVar3 = (int *)0x0;
    if ((*(byte *)(param_1 + 0xc6) & 0x40) == 0) {
      piVar3 = *(int **)(param_1 + 0x74);
    }
  }
  else {
    pcVar8 = *(char **)*param_2;
    piVar3 = *(int **)(param_1 + 0x74);
    aiStack_50[0] = *(int *)(*(int *)(param_1 + 0x78) + 8);
    *(int *)(aiStack_50[0] + 8) = *(int *)(aiStack_50[0] + 8) + 1;
    if (*pcVar8 == '/') {
      piVar3 = (int *)(**(code **)(*piVar3 + 0x54))(piVar3,0);
      pcVar8 = pcVar8 + 1;
    }
    uVar7 = 1;
LAB_826a996c:
    cVar1 = *pcVar8;
    pcVar6 = pcVar8;
    while (cVar1 != '\0') {
      if (*pcVar6 == '.') {
        pcVar5 = pcVar6 + 1;
        if (pcVar6[1] != '.') goto LAB_826a99c0;
      }
      else {
        pcVar5 = pcVar6;
        if (*pcVar6 == '/') goto LAB_826a99c0;
      }
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar6;
    }
    pcVar6 = (char *)0x0;
LAB_826a99c0:
    if (pcVar6 != pcVar8) {
      lVar2 = (ulonglong)*(uint *)(param_1 + 0x78) + 0x254;
      if (pcVar6 == (char *)0x0) {
        iVar4 = fn_82694700(lVar2,pcVar8);
      }
      else {
        iVar4 = fn_82694610(lVar2,pcVar8,(int)pcVar6 - (int)pcVar8);
      }
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 2;
      lVar2 = (ulonglong)*(uint *)(aiStack_50[0] + 8) - 1;
      *(int *)(aiStack_50[0] + 8) = (int)lVar2;
      if (lVar2 == 0) {
        fn_826944C8(aiStack_50[0]);
      }
      lVar2 = (ulonglong)*(uint *)(iVar4 + 8) - 1;
      *(int *)(iVar4 + 8) = (int)lVar2;
      aiStack_50[0] = iVar4;
      if (lVar2 == 0) {
        fn_826944C8(iVar4);
      }
      if (*(int *)(aiStack_50[0] + 0x10) != 0) {
        piVar3 = (int *)(**(code **)(*piVar3 + 0xec))(piVar3,aiStack_50,uVar7);
      }
      if ((piVar3 == (int *)0x0) || (pcVar6 == (char *)0x0)) goto LAB_826a9ab4;
      pcVar8 = pcVar6 + 1;
      uVar7 = 0;
      goto LAB_826a996c;
    }
    if ((param_3 & 4) == 0) {
      fn_826A9168(param_1,0xffffffff820072ec,*(undefined4 *)*param_2);
    }
LAB_826a9ab4:
    lVar2 = (ulonglong)*(uint *)(aiStack_50[0] + 8) - 1;
    *(int *)(aiStack_50[0] + 8) = (int)lVar2;
    if (lVar2 == 0) {
      fn_826944C8(aiStack_50[0]);
    }
  }
  return piVar3;
}

