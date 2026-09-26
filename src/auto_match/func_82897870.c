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
extern int fn_8288A398();
extern int fn_82897F68();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();


void fn_82897870(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar2;
  int *piVar6;
  
  fn_8288A398();
  iVar3 = fn_8288A398();
  iVar3 = *(int *)(iVar3 + 0x3c);
  iVar4 = fn_828E9DA8(param_3);
  iVar5 = fn_828E9D90(param_3);
  if (iVar4 - iVar5 < iVar3) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_828E9FF8(param_3,iVar3);
  }
  piVar6 = (int *)0x0;
  if ((uVar2 & 0xffffffff) != 0) {
    piVar6 = (int *)fn_8288A398();
    piVar6 = (int *)(**(code **)(*piVar6 + 0x18))(piVar6,uVar2);
  }
  (**(code **)(*piVar6 + 4))(piVar6,param_2,param_3);
  if (param_4 == 0) {
    if ((uVar2 & 0xffffffff) == 0) {
      return;
    }
    uVar1 = piVar6[1];
  }
  else {
    *(undefined4 *)(param_4 + 4) = 8;
    fn_82897F68(param_4 + 8,0);
    fn_82897F68(param_4 + 8,piVar6);
    uVar1 = piVar6[1];
  }
  piVar6[1] = (int)((ulonglong)uVar1 - 1);
  if ((ulonglong)uVar1 - 1 == 0) {
    (**(code **)(*piVar6 + 0x14))(piVar6,1);
  }
  return;
}

