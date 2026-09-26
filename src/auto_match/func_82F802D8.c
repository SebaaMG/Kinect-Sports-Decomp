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
extern int fn_82F6FA38();
extern int fn_82F81260();


undefined8 fn_82F802D8(undefined4 *param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*(uint *)*param_1 + 0x1fbcbcae;
  if ((uVar2 != 0) && ((uVar2 & 0xffffffff) != 0xbfb)) {
    if ((uVar2 & 0xffffffff) != 0x2a3011) {
      return 0;
    }
    iVar1 = fn_82F6FA38();
    *(undefined4 *)(iVar1 + 0x84) = 0;
    fn_82F81260();
  }
  iVar1 = fn_82F6FA38();
  if (0 < *(int *)(iVar1 + 0x84)) {
    iVar1 = fn_82F6FA38();
    *(int *)(iVar1 + 0x84) = *(int *)(iVar1 + 0x84) + -1;
  }
  return 0;
}

