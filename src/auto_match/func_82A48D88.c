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
extern int fn_82A3FF60();
extern int fn_82A47CE0();
extern int fn_82A48578();
extern int fn_82A4F4E0();


int fn_82A48D88(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  
  piVar7 = (int *)0x0;
  uVar6 = 0xffffffff;
  piVar5 = (int *)0x0;
  for (piVar4 = *(int **)(param_1 + 0xe8); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
    uVar1 = ((int *)*piVar4)[1];
    if ((param_2 <= uVar1) && (uVar1 < uVar6)) {
      piVar5 = piVar4;
      piVar7 = (int *)*piVar4;
      uVar6 = uVar1;
    }
    if (piVar4 == (int *)0x0) break;
  }
  fn_82A47CE0(param_1 + 0x7c,piVar5);
  iVar3 = fn_82A48578(param_1,piVar7);
  if (iVar3 != 0) {
    if (uVar6 == param_2) {
LAB_82a48e88:
      if (uVar6 == *(uint *)(param_1 + 0x104)) {
        piVar4 = *(int **)(param_1 + 0xe8);
        uVar6 = 0;
        while (*(uint *)(param_1 + 0x104) = uVar6, piVar4 != (int *)0x0) {
          if (piVar4 == (int *)0x0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *piVar4;
            piVar4 = (int *)piVar4[1];
          }
          uVar6 = *(uint *)(param_1 + 0x104);
          if (*(uint *)(param_1 + 0x104) <= *(uint *)(iVar3 + 4)) {
            uVar6 = *(uint *)(iVar3 + 4);
          }
        }
      }
      return *piVar7;
    }
    piVar7[1] = param_2;
    piVar4 = (int *)fn_82A3FF60(0xffffffff83219d50,8,0x20970000,0);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      iVar3 = piVar7[1];
      iVar2 = *piVar7;
      piVar4[1] = uVar6 - param_2;
      *piVar4 = iVar3 + iVar2;
    }
    if (piVar4 != (int *)0x0) {
      iVar3 = fn_82A48578(param_1 + 0x7c,piVar4);
      if (iVar3 != 0) goto LAB_82a48e88;
      fn_82A4F4E0(piVar4);
    }
  }
  return 0;
}

