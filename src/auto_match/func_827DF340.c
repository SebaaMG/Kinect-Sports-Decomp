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
extern int fn_827DF0B0();
extern int fn_827DF148();
extern int fn_827DF1D0();
extern int fn_827E2610();


void fn_827DF340(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5,code *param_6)

{
  int iVar2;
  undefined8 uVar1;
  int *piVar3;
  code *pcVar4;
  
  RtlEnterCriticalSection(param_1 + 400);
  if ((param_2 & 0xffffffff) == 0) {
    iVar2 = fn_827DF148(param_1,param_3,param_4);
    if (iVar2 == 0) {
      iVar2 = fn_827DF0B0(param_1,param_3,param_4);
      goto LAB_827df3ac;
    }
  }
  else {
    iVar2 = fn_827DF1D0(param_1,param_2);
LAB_827df3ac:
    piVar3 = (int *)0x0;
    pcVar4 = param_5;
    if (iVar2 == 0) goto LAB_827df400;
  }
  (*param_5)(iVar2,param_6);
  uVar1 = fn_827E2610(iVar2);
  (*param_5)(uVar1,param_6);
  piVar3 = (int *)fn_827E2610(iVar2);
  pcVar4 = *(code **)(*piVar3 + 0x10);
  param_6 = param_5;
LAB_827df400:
  (*pcVar4)(piVar3,param_6);
  RtlLeaveCriticalSection(param_1 + 400);
  return;
}

