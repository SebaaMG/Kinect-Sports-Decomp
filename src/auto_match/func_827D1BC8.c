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


undefined8 fn_827D1BC8(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x1c), iVar1 != 0)) && ((int)param_2 < 0x11)) {
    uVar2 = *(uint *)(iVar1 + 0x3c);
    uVar3 = uVar2 + param_2;
    if (uVar3 < 0x21) {
      *(uint *)(iVar1 + 0x3c) = uVar3;
      *(uint *)(iVar1 + 0x38) =
           (((1 << (param_2 & 0x3f)) - 1U & param_3) << (uVar2 & 0x3f)) + *(int *)(iVar1 + 0x38);
      return 0;
    }
  }
  return 0xfffffffffffffffe;
}

