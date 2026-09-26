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
extern int fn_8267CB10();
extern int fn_8267D7C8();
extern int fn_8267D9C0();
extern int fn_8267EC58();
extern int fn_8267ECD0();


undefined8 fn_8267F420(int param_1)

{
  int iVar1;
  uint uVar2;
  int aiStack_30 [12];
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = *(uint *)(param_1 + 8);
  if (uVar2 != 0) {
    fn_8267C8D8(iVar1 + 0x18);
    if ((longlong)((ulonglong)*(uint *)(iVar1 + 0x14) - (ulonglong)uVar2) < 0) {
      *(undefined4 *)(iVar1 + 0x14) = 0;
    }
    else {
      *(uint *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) - uVar2;
    }
    if (uVar2 == 1) {
      fn_8267CB08();
    }
    else {
      fn_8267CB10(iVar1 + 0x2c);
    }
    aiStack_30[0] = 0;
    fn_8267D7C8(iVar1,aiStack_30);
    fn_8267D9C0(iVar1 + 0x18);
    iVar1 = aiStack_30[0];
    if (aiStack_30[0] != 0) {
      fn_8267ECD0(aiStack_30[0]);
      fn_8267EC58(iVar1);
    }
  }
  return 1;
}

