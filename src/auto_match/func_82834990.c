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
extern unsigned int *auStack_2c;
extern int fn_828301D0();
extern int fn_82834328();
extern unsigned int uStack_30;


uint * fn_82834990(uint *param_1,int param_2,undefined8 param_3)

{
  ulonglong uVar1;
  char cVar2;
  uint *puVar3;
  uint uStack_30;
  uint auStack_2c [11];
  
  uVar1 = fn_82834328(param_2,param_3);
  auStack_2c[0] = *(uint *)(param_2 + 4);
  uStack_30 = (uint)uVar1;
  if (((uVar1 & 0xffffffff) == (ulonglong)auStack_2c[0]) ||
     (cVar2 = fn_828301D0(param_2,param_3,uVar1 + 0xc), cVar2 != '\0')) {
    puVar3 = auStack_2c;
  }
  else {
    puVar3 = &uStack_30;
  }
  *param_1 = *puVar3;
  return param_1;
}

