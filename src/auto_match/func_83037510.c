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
extern int fn_82FEC7F0();


undefined8 fn_83037510(int *param_1,ushort param_2,uint param_3)

{
  int iVar2;
  undefined8 uVar1;
  uint uVar3;
  
  iVar2 = 0;
  for (uVar3 = param_3; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
    iVar2 = iVar2 + 1;
  }
  iVar2 = fn_82FEC7F0(((longlong)(int)(uint)param_2 * (longlong)iVar2 & 0x3fffffffU) << 2);
  if (iVar2 == 0) {
    uVar1 = 0x34;
  }
  else {
    *param_1 = iVar2;
    uVar1 = 1;
    *(ushort *)(param_1 + 3) = param_2;
    param_1[1] = param_3;
    *(undefined2 *)((int)param_1 + 0xe) = 0;
  }
  return uVar1;
}

