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
extern int fn_82E077A0();
extern int fn_83082610();


int fn_82E07928(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int aiStack_20 [2];
  
  fn_82E077A0(aiStack_20,param_1,param_2);
  if (aiStack_20[0] != 0) {
    fn_83082610(aiStack_20);
    uVar1 = fn_82CEAC20();
    uVar2 = fn_82CEAC20(0xffffffff8323f2bc);
    iVar3 = fn_82CFBC28(uVar2,uVar1);
    if (iVar3 == 0) {
      if (aiStack_20[0] == 0) {
        return 0;
      }
      fn_82CE4118();
      return aiStack_20[0];
    }
    if (aiStack_20[0] != 0) {
      fn_82CE4118();
    }
  }
  return 0;
}

