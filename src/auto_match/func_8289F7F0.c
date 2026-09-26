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
extern int fn_82880A10();
extern int fn_8289E440();
extern int fn_8289EE00();
extern int fn_8289F160();


void fn_8289F7F0(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int aiStack_50 [2];
  int aiStack_48 [18];
  
  iVar4 = param_2[3];
  iVar5 = param_1 + 0x1fc;
  aiStack_50[0] = iVar4;
  fn_8289F160(aiStack_48,iVar5,aiStack_50);
  if (aiStack_48[0] != *(int *)(param_1 + 0x200)) {
    fn_8289E440(aiStack_48,iVar5);
    iVar1 = fn_8289EE00(iVar5);
    if ((undefined4 *)(iVar1 + 0xc) != (undefined4 *)0x0) {
      *(undefined4 *)(iVar1 + 0xc) = param_3;
      *(int **)(iVar1 + 0x10) = param_2;
    }
    fn_82880A10(aiStack_48,iVar5,iVar1,0);
  }
  iVar5 = param_1 + 0x21c;
  aiStack_48[0] = iVar4;
  piVar2 = (int *)fn_8289F160(aiStack_50,iVar5,aiStack_48);
  if (*piVar2 != *(int *)(param_1 + 0x220)) {
    fn_8289E440(aiStack_48,iVar5);
    iVar1 = fn_8289EE00(iVar5);
    if ((undefined4 *)(iVar1 + 0xc) != (undefined4 *)0x0) {
      *(undefined4 *)(iVar1 + 0xc) = param_3;
      *(int **)(iVar1 + 0x10) = param_2;
    }
    fn_82880A10(aiStack_48,iVar5,iVar1,0);
  }
  iVar5 = param_1 + 0x20c;
  aiStack_48[0] = iVar4;
  fn_8289F160(aiStack_50,iVar5,aiStack_48);
  if (aiStack_50[0] != *(int *)(param_1 + 0x210)) {
    fn_8289E440(aiStack_48,iVar5);
    uVar3 = (**(code **)(*param_2 + 0xc))(param_2);
    iVar1 = fn_8289EE00(iVar5);
    if ((undefined4 *)(iVar1 + 0xc) != (undefined4 *)0x0) {
      *(undefined4 *)(iVar1 + 0xc) = param_3;
      *(undefined4 *)(iVar1 + 0x10) = uVar3;
    }
    fn_82880A10(aiStack_48,iVar5,iVar1,0);
  }
  iVar5 = param_1 + 0x22c;
  aiStack_48[0] = iVar4;
  piVar2 = (int *)fn_8289F160(aiStack_50,iVar5,aiStack_48);
  if (*piVar2 != *(int *)(param_1 + 0x230)) {
    fn_8289E440(aiStack_48,iVar5);
    uVar3 = (**(code **)(*param_2 + 0xc))(param_2);
    iVar4 = fn_8289EE00(iVar5);
    if ((undefined4 *)(iVar4 + 0xc) != (undefined4 *)0x0) {
      *(undefined4 *)(iVar4 + 0xc) = param_3;
      *(undefined4 *)(iVar4 + 0x10) = uVar3;
    }
    fn_82880A10(aiStack_48,iVar5,iVar4,0);
  }
  return;
}

