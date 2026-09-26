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
extern unsigned int *auStack_40;
extern int fn_828647C0();
extern int fn_82878538();


undefined8 fn_82877D00(int param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar3;
  undefined8 uVar2;
  ulonglong uVar4;
  undefined1 auStack_40 [64];
  
  uVar1 = *(uint *)(param_1 + 8);
  for (uVar4 = (ulonglong)*(uint *)(param_1 + 4); (uVar4 & 0xffffffff) != (ulonglong)uVar1;
      uVar4 = uVar4 + 0x30) {
    cVar3 = fn_828647C0(uVar4 + 4,param_2);
    if (cVar3 != '\0') break;
  }
  if ((uVar4 & 0xffffffff) == (ulonglong)*(uint *)(param_1 + 8)) {
    uVar2 = 0xffffffffa0320000;
  }
  else {
    fn_82878538(auStack_40,param_1 + 4,uVar4);
    uVar2 = 0x20320000;
  }
  return uVar2;
}

