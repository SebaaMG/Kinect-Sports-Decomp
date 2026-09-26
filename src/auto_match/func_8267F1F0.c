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
extern int fn_8267C8D8();
extern int fn_8267CB08();
extern int fn_8267D7C8();
extern int fn_8267D9C0();
extern int fn_8267EC58();
extern int fn_8267ECD0();


undefined4 fn_8267F1F0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int aiStack_20 [2];
  
  fn_8267C8D8(param_1 + 0x18);
  if (0 < *(int *)(param_1 + 0x14)) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
  }
  fn_8267CB08(param_1 + 0x2c);
  aiStack_20[0] = 0;
  fn_8267D7C8(param_1,aiStack_20);
  fn_8267D9C0(param_1 + 0x18);
  iVar2 = aiStack_20[0];
  if (aiStack_20[0] != 0) {
    fn_8267ECD0(aiStack_20[0]);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  if (iVar2 != 0) {
    fn_8267EC58(iVar2);
  }
  return uVar1;
}

