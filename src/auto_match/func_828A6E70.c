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
extern int fn_8289FA30();
extern int fn_828A6468();
extern int fn_828A6C40();
extern int fn_828E3AF0();
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


longlong fn_828A6E70(int param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  char cVar3;
  undefined8 uVar2;
  uint auStack_40 [4];
  undefined4 uStack_30;
  undefined1 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar1 = fn_828E3AF0();
  if (((uVar1 & 0xffffffff) == (ulonglong)*(uint *)(param_1 + 4)) ||
     (cVar3 = fn_8289FA30(param_2,uVar1 + 0xc), cVar3 != '\0')) {
    uStack_30 = *param_2;
    uStack_2c = *(char *)(param_2 + 1) != '\0';
    if ((bool)uStack_2c) {
      uStack_28 = param_2[2];
    }
    uStack_24 = 0;
    uVar2 = fn_828A6468(param_1,&uStack_30);
    fn_828A6C40(auStack_40,param_1,uVar1,uVar2);
    uVar1 = (ulonglong)auStack_40[0];
  }
  return uVar1 + 0x18;
}

