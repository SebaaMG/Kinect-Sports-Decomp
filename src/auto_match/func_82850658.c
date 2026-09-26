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
extern int fn_8284F9B8();
extern int fn_8284FA10();
extern int fn_8284FBD0();
extern int fn_8285A840();
extern int fn_8285A848();
extern int fn_8285A8F8();
extern int fn_8285C608();
extern int fn_82F691F0();
extern unsigned int iStack_3c;


void fn_82850658(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  code *pcStack_40;
  int iStack_3c;
  
  if (*(int *)(param_1 + 0x90) == 0) {
    return;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x90) + 0x1c);
  if (iVar2 != 0) {
    if (iVar2 != 1) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(*(undefined4 *)(param_2 + 0x1c),0,*(undefined4 *)(param_1 + 0x94));
  }
  iVar2 = *(int *)(param_1 + 0x90);
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_2 + 4);
  }
  uVar1 = *(undefined4 *)(iVar3 + 0x14);
  if (*(int *)(iVar3 + 0x10) == 0) {
    pcStack_40 = fn_8284F9B8;
    iStack_3c = param_1;
    fn_8285A8F8(iVar2,uVar1,&pcStack_40);
  }
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  fn_8284FBD0(iVar2,uVar1,param_1,param_2);
  lVar4 = 0;
  iVar3 = fn_8285A840(iVar2,uVar1);
  if (0 < iVar3) {
    do {
      fn_8285A848(iVar2,uVar1,lVar4);
      fn_8285C608(iVar2,uVar1);
      lVar4 = lVar4 + 1;
      iVar3 = fn_8285A840(iVar2,uVar1);
    } while ((int)lVar4 < iVar3);
  }
  fn_8284FA10(iVar2,uVar1,param_1,param_2);
  return;
}

