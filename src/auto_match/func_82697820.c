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
extern int fn_826944C8();
extern int fn_826959C8();
extern int fn_82697248();


void fn_82697820(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar2;
  longlong lVar1;
  int aiStack_20 [4];
  
  fn_82697248(aiStack_20,param_1,param_2,param_3);
  fn_826959C8(param_1);
  *param_1 = 5;
  *(int *)(param_1 + 4) = aiStack_20[0];
  uVar2 = *(int *)(aiStack_20[0] + 8) + 1;
  *(uint *)(aiStack_20[0] + 8) = uVar2;
  lVar1 = (ulonglong)uVar2 - 1;
  *(int *)(aiStack_20[0] + 8) = (int)lVar1;
  if (lVar1 == 0) {
    fn_826944C8();
  }
  return;
}

