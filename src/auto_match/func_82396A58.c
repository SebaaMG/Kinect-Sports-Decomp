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
extern int fn_822ABA88();
extern int fn_822E51A8();
extern int fn_82397028();
extern int fn_823AEC68();


void fn_82396A58(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  
  if (*(int *)(param_2 + 0x298) == 0) {
    fn_82397028();
  }
  piVar3 = *(int **)(param_2 + 8);
  iVar4 = 0;
  if ((piVar3[1] - *piVar3 & 0xfffffffcU) != 0) {
    iVar5 = 0;
    do {
      uVar6 = 0;
      piVar3 = *(int **)(*piVar3 + iVar5);
      iVar2 = *(int *)(piVar3[4] * 4 + *piVar3);
      if (*(int *)(iVar2 + 8) != 0) {
        do {
          fn_822ABA88(param_1,iVar2,uVar6);
          fn_822E51A8();
          uVar6 = uVar6 + 1;
          iVar2 = *(int *)(piVar3[4] * 4 + *piVar3);
        } while ((uVar6 & 0xffffffff) < (ulonglong)*(uint *)(iVar2 + 8));
      }
      piVar3 = *(int **)(param_2 + 8);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar4 < piVar3[1] - *piVar3 >> 2);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x1a8);
  for (puVar7 = *(undefined4 **)(param_2 + 0x1a4); puVar7 != puVar1; puVar7 = puVar7 + 1) {
    fn_823AEC68(param_1,*puVar7);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x1c8);
  for (puVar7 = *(undefined4 **)(param_2 + 0x1c4); puVar7 != puVar1; puVar7 = puVar7 + 1) {
    fn_823AEC68(param_1,*puVar7);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x1b8);
  for (puVar7 = *(undefined4 **)(param_2 + 0x1b4); puVar7 != puVar1; puVar7 = puVar7 + 1) {
    fn_823AEC68(param_1,*puVar7);
  }
  if (*(int *)(param_2 + 0x1e4) != 0) {
    fn_823AEC68(param_1);
  }
  return;
}

