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
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_823F2E20();
extern int fn_8256BE68();
extern int fn_827DF1D0();
extern int fn_827E2598();
extern int fn_827E2790();
extern unsigned int iStack_44;


void fn_827DF230(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [4];
  int iStack_44;
  
  RtlEnterCriticalSection(param_1 + 400);
  lVar1 = fn_827DF1D0(param_1,param_2);
  if (lVar1 == 0) {
    *param_3 = 0;
    fn_8256BE68(auStack_50,0);
    fn_823F2E20(param_4,auStack_50);
  }
  else {
    uVar3 = fn_827E2598(lVar1);
    *param_3 = uVar3;
    uVar2 = fn_827E2790(auStack_48,lVar1);
    fn_823F2E20(param_4,uVar2);
    if (iStack_44 != 0) {
      fn_822315A0();
    }
  }
  RtlLeaveCriticalSection(param_1 + 400);
  return;
}

