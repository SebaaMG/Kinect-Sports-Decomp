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
extern unsigned int *auStack_40;
extern int fn_8267BED0();
extern int fn_826EAF30();


undefined8
fn_826EB118(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar3;
  ulonglong uVar1;
  undefined8 uVar2;
  undefined4 auStack_40 [16];
  
  if ((param_2 != (int *)0x0) && (cVar3 = (**(code **)(*param_2 + 0xc))(param_2), cVar3 != '\0')) {
    auStack_40[0] = 2;
    uVar1 = fn_8267BED0(param_1,0x1f8,auStack_40);
    if ((uVar1 & 0xffffffff) != 0) {
      uVar2 = fn_826EAF30(uVar1,param_2,param_3,param_4,param_5);
      return uVar2;
    }
  }
  return 0;
}

