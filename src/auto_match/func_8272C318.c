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


void fn_8272C318(int *param_1,undefined8 param_2,char param_3)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar2 = *(ushort *)(param_1 + 0x32);
  uVar1 = uVar2 >> 1 & 1;
  if ((param_3 == '\0') || (uVar1 != 0)) {
    if ((param_3 != '\0') || (uVar1 == 0)) goto LAB_8272c350;
    uVar2 = uVar2 & 0xfffd;
  }
  else {
    uVar2 = uVar2 | 2;
  }
  *(ushort *)(param_1 + 0x32) = uVar2;
LAB_8272c350:
                    /* WARNING: Could not recover jumptable at 0x8272c360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1ac))();
  return;
}

