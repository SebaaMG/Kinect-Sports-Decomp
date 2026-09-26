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
extern int fn_8267C4F0();
extern int fn_826E4608();
extern int fn_826E47B0();
extern int fn_826F3458();


undefined8 fn_826E4A58(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int aiStack_30 [12];
  
  if ((param_2 & 0xffffffff) != 0) {
    fn_826F3458();
  }
  aiStack_30[0] = 0;
  uVar2 = fn_826E47B0(param_1,param_2,param_3,aiStack_30,0,0,param_4,0);
  iVar1 = aiStack_30[0];
  if ((uVar2 & 0xffffffff) == 0) {
    if (aiStack_30[0] != 0) {
      fn_8267C4F0();
    }
    uVar3 = 0;
  }
  else {
    uVar3 = fn_826E4608(uVar2,aiStack_30[0],param_1,param_3,0);
    if (iVar1 != 0) {
      fn_8267C4F0(iVar1);
    }
  }
  return uVar3;
}

