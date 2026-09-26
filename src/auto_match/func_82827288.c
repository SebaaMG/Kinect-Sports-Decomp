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
extern int fn_828223C8();
extern int fn_828267E0();


void fn_82827288(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int aiStack_30 [12];
  
  iVar1 = *(int *)(param_1 + 0x24);
  if ((*(uint *)(param_1 + 0x3e4) != 0) && (*(uint *)(param_1 + 0x3e4) <= param_2)) {
    param_2 = param_2 + 1;
  }
  iVar2 = param_1 + 0x2fc;
  while (iVar3 = iVar2, fn_828223C8(iVar3,aiStack_30), iVar1 == *(int *)(param_1 + 0x24)) {
    iVar2 = aiStack_30[0];
    if (*(uint *)(aiStack_30[0] + 0x10) == param_2) {
      fn_828267E0(param_1,aiStack_30[0]);
      iVar2 = iVar3;
    }
  }
  return;
}

