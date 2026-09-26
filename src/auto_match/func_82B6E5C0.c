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
extern int fn_82AB15D0();
extern int fn_82B6B340();


int * fn_82B6E5C0(undefined8 param_1,code *param_2,int param_3,undefined8 param_4,
                   ulonglong param_5)

{
  int *piVar2;
  ulonglong uVar1;
  undefined4 uVar3;
  int iVar4;
  
  piVar2 = (int *)(*param_2)(param_1,0x18);
  if (piVar2 == (int *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da3a8,0xffffffff820da300,0x1e0);
  }
  piVar2[1] = (int)param_1;
  piVar2[2] = (int)param_2;
  piVar2[3] = param_3;
  piVar2[4] = (int)param_4;
  piVar2[5] = (int)param_5;
  uVar1 = (*param_2)(param_1,(param_5 & 0x3fffffff) << 2);
  *piVar2 = (int)uVar1;
  if ((uVar1 & 0xffffffff) == 0) {
    fn_82AB15D0(uVar1,0xffffffff820d2ea4,0xffffffff820da390,0xffffffff820da300,0x1ed);
  }
  if ((param_5 & 0xffffffff) != 0) {
    iVar4 = 0;
    do {
      uVar3 = fn_82B6B340(param_4);
      *(undefined4 *)(*piVar2 + iVar4) = uVar3;
      if (*(int *)(*piVar2 + iVar4) == 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da374,0xffffffff820da300,500);
      }
      param_5 = param_5 - 1;
      iVar4 = iVar4 + 4;
    } while (param_5 != 0);
  }
  return piVar2;
}

