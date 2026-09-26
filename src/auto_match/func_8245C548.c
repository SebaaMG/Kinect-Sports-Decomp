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
extern int fn_82A1DD38();


void fn_8245C548(undefined8 param_1,uint param_2,undefined8 param_3,int param_4)

{
  undefined1 uVar1;
  uint uVar2;
  
  uVar2 = 5 - *(int *)(param_4 + 0x698);
  if (param_2 <= uVar2) {
    uVar2 = param_2;
  }
  if (0 < (int)uVar2) {
    fn_82A1DD38(*(int *)(param_4 + 0x698) + param_4 + 0x692,param_1,uVar2);
    *(uint *)(param_4 + 0x698) = *(int *)(param_4 + 0x698) + uVar2;
    uVar1 = *(undefined1 *)(param_4 + 0x692);
    *(undefined1 *)(param_4 + 0x692) = *(undefined1 *)(param_4 + 0x693);
    *(undefined1 *)(param_4 + 0x693) = uVar1;
    uVar1 = *(undefined1 *)(param_4 + 0x694);
    *(undefined1 *)(param_4 + 0x694) = *(undefined1 *)(param_4 + 0x695);
    *(undefined1 *)(param_4 + 0x695) = uVar1;
  }
  return;
}

