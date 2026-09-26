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
extern int fn_82CE4118();
extern int fn_82CEAC20();
extern int fn_82CFBC28();
extern int fn_82E04770();
extern int fn_83082610();


int fn_82E04828(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int aiStack_20 [2];
  
  if (((param_2 & 0xffffffff) == 0) ||
     (fn_82E04770(aiStack_20,param_1,param_2), aiStack_20[0] == 0)) {
LAB_82e048bc:
    iVar4 = 0;
  }
  else {
    iVar4 = aiStack_20[0];
    if ((param_3 & 0xffffffff) != 0) {
      fn_83082610(aiStack_20);
      uVar1 = fn_82CEAC20();
      uVar2 = fn_82CEAC20(param_3);
      iVar3 = fn_82CFBC28(uVar2,uVar1);
      iVar4 = aiStack_20[0];
      if (iVar3 != 0) {
        if (aiStack_20[0] != 0) {
          fn_82CE4118();
        }
        goto LAB_82e048bc;
      }
    }
    if (iVar4 != 0) {
      fn_82CE4118();
    }
  }
  return iVar4;
}

