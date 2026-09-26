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
extern unsigned int lbl_83215284;


uint * fn_829C9E18(void)

{
  uint *puVar1;
  undefined8 uVar2;
  uint *puVar3;
  
  uVar2 = KfAcquireSpinLock(0xffffffff8321506c);
  puVar1 = lbl_83215284;
  puVar3 = (uint *)0x0;
  if (lbl_83215284 != (uint *)0x0) {
    lbl_83215284 = (uint *)0x0;
    *puVar1 = *puVar1 & 0xfffffff9 | 2;
    puVar3 = puVar1;
  }
  KfReleaseSpinLock(0xffffffff8321506c,uVar2);
  return puVar3;
}

