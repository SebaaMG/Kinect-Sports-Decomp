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
extern int fn_8223C3D0();
extern int fn_8265CA20();
extern int fn_82881B88();
extern int fn_82884498();
extern int fn_82F68CC0();


void fn_82884568(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int aiStack_40 [16];
  
  aiStack_40[0] = 0;
  aiStack_40[1] = 0;
  aiStack_40[2] = 0;
  fn_82884498(param_1 + 4,aiStack_40);
  if (aiStack_40[0] != 0) {
    fn_8265CA20();
  }
  piVar2 = (int *)fn_82881B88(aiStack_40,param_1 + 4);
  piVar4 = (int *)0x0;
  if (((int *)*piVar2 != (int *)0x0) &&
     (puVar1 = *(undefined4 **)*piVar2, puVar1 != (undefined4 *)0x0)) {
    piVar4 = (int *)*puVar1;
  }
  iVar3 = 0;
  iVar5 = piVar2[2] + -1;
  if (piVar4 != (int *)0x0) {
    iVar3 = *piVar4;
  }
  if (*(uint *)(iVar3 + 8) <= piVar2[2] - 1U) {
    iVar5 = iVar5 - *(uint *)(iVar3 + 8);
  }
  puVar1 = *(undefined4 **)(*(int *)(iVar3 + 4) + iVar5 * 4);
  fn_8223C3D0(puVar1,param_3);
  fn_82F68CC0(*puVar1,param_2,param_3);
  return;
}

