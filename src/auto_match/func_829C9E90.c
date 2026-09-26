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
extern int fn_829C9C30();


undefined8 fn_829C9E90(uint *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  uVar2 = KfAcquireSpinLock(0xffffffff8321506c);
  uVar1 = *param_1;
  *param_1 = uVar1 & 0xfffffffd;
  if ((uVar1 & 4) == 0) {
    uVar3 = fn_829C9C30(param_1);
  }
  KfReleaseSpinLock(0xffffffff8321506c,uVar2);
  return uVar3;
}

