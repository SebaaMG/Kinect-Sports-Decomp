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
extern int fn_82FEFD50();
extern int fn_8300D348();
extern int fn_8300DB40();
extern int fn_83036A08();
extern int fn_83036ED0();


void fn_8300E018(undefined8 param_1,int param_2)

{
  int iVar1;
  int *piVar4;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined4 uVar5;
  
  iVar1 = *(int *)(*(int *)(param_2 + 4) + 0x14);
  if (iVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0xfc) + 8);
  }
  piVar4 = (int *)fn_82FEFD50(uVar5);
  if ((piVar4 != (int *)0x0) &&
     (uVar2 = fn_8300DB40(param_1,*(undefined4 *)(*piVar4 + 0xc)), (uVar2 & 0xffffffff) != 0))
  {
    uVar3 = fn_8300D348(param_1,uVar5);
    if (*(char *)(param_2 + 0x3a4) == '\0') {
      if (*(int *)(param_2 + 0x3a0) != 0) {
        fn_83036A08(uVar2,param_2,uVar3);
      }
    }
    else {
      fn_83036ED0(uVar2,param_2);
    }
  }
  return;
}

