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
extern int fn_827E43E0();
extern int fn_827E43E8();
extern int fn_827E82F8();


undefined8 fn_827E3778(uint *param_1,undefined8 param_2)

{
  int iVar3;
  ulonglong uVar1;
  undefined8 uVar2;
  
  iVar3 = fn_827E43E0(param_2);
  if (iVar3 < (int)(uint)*(byte *)(param_1 + 0x17)) {
    iVar3 = fn_827E43E0(param_2);
    if (iVar3 == -1) {
      fn_827E43E8(param_2,(ulonglong)*(byte *)(param_1 + 0x17) - 1);
    }
    uVar1 = fn_827E43E0(param_2);
    fn_827E82F8((uVar1 & 0x3ffffff) * 0x40 + (ulonglong)*param_1,param_2);
    uVar2 = 0;
  }
  else {
    uVar2 = 0x708;
  }
  return uVar2;
}

