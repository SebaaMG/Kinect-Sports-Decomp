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
extern int fn_82B843F0();


longlong fn_82B1F248(undefined8 param_1,undefined4 param_2,uint *param_3,int param_4,char param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar4 = 0;
  for (uVar1 = *(uint *)(param_4 + 4); ((uVar1 & 1) == 0 && (uVar1 != 0));
      uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 0x28)) {
    if ((param_5 == '\0') || ((*(uint *)(uVar1 + 8) >> 0x1a & 1) != 0)) {
      uVar3 = fn_82B843F0(param_1,uVar1);
      uVar2 = uVar3 & 0xfffffffe;
      *(short *)(uVar3 + 0xe) = (short)*(undefined4 *)(uVar1 + 0xc);
      *(uint *)(uVar1 + 0x20) = uVar3;
      *(uint *)(uVar3 + 0x20) = uVar1;
      lVar4 = lVar4 + 1;
      *(uint *)(uVar2 + 0x24) = *param_3;
      *(uint *)(*param_3 & 0xfffffffe) = uVar2;
      *(uint *)(uVar2 + 0x28) = (uint)(param_3 + -9) | 1;
      *param_3 = uVar2 + 0x28;
      *(undefined4 *)(uVar3 + 0x1c) = param_2;
    }
  }
  return lVar4;
}

