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
extern int fn_8267C498();
extern int fn_8269CEE0();


undefined8 fn_826FC178(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  int aiStack_30 [12];
  
  fn_8269CEE0(aiStack_30,param_1);
  iVar1 = aiStack_30[0];
  if (aiStack_30[0] != 0) {
    *(int *)(aiStack_30[0] + 4) = *(int *)(aiStack_30[0] + 4) + 1;
    fn_8267C498(aiStack_30[0]);
  }
  fn_8269CEE0(aiStack_30,param_1 + 4);
  if (aiStack_30[0] != 0) {
    *(int *)(aiStack_30[0] + 4) = *(int *)(aiStack_30[0] + 4) + 1;
    fn_8267C498(aiStack_30[0]);
  }
  if (((iVar1 == aiStack_30[0]) && ((iVar1 != 0 || ((*(byte *)(param_1 + 0x20) & 0x80) != 0)))) &&
     ((aiStack_30[0] != 0 || ((*(byte *)(param_1 + 0x20) & 0x40) != 0)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  if (aiStack_30[0] != 0) {
    fn_8267C498(aiStack_30[0]);
  }
  if (iVar1 != 0) {
    fn_8267C498(iVar1);
  }
  return uVar2;
}

