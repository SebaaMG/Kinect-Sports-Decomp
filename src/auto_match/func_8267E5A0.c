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
extern int fn_8267CF60();
extern int fn_8267D9C0();


undefined4 fn_8267E5A0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x18;
  fn_8267C8D8(iVar2);
  if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14) + param_2) {
    do {
      fn_8267CF60(param_1 + 0x2c,iVar2,0xffffffffffffffff);
    } while (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14) + param_2);
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_2;
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  fn_8267D9C0(iVar2);
  return uVar1;
}

