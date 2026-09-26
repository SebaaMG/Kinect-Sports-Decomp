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
extern int fn_822300F0();
extern int fn_8265DAB8();
extern int fn_8265DC30();
extern int fn_8265DD28();
extern int fn_8265DDA0();
extern int fn_8265E080();
extern int fn_82666808();
extern unsigned int iStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;


int fn_82666928(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar4;
  longlong lVar3;
  int iVar5;
  int iStack00000014;
  uint uStack0000001c;
  uint uStack00000024;
  
  iStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  cVar4 = fn_8265DD28(param_1,param_2);
  uVar1 = uStack00000024;
  if (cVar4 == '\0') {
    if (0xffffffffU - *(int *)(iStack00000014 + 0x10) <= uStack00000024) {
      fn_8265E080(iStack00000014);
    }
    if (uStack00000024 != 0) {
      iVar5 = *(int *)(iStack00000014 + 0x10) + uStack00000024;
      cVar4 = fn_8265DC30(iStack00000014,iVar5,0);
      uVar2 = uStack00000024;
      uVar1 = uStack0000001c;
      if (cVar4 != '\0') {
        lVar3 = fn_8265DDA0(iStack00000014);
        fn_822300F0(lVar3 + (ulonglong)*(uint *)(iStack00000014 + 0x10),uVar1,uVar2);
        fn_8265DAB8(iStack00000014,iVar5);
      }
    }
  }
  else {
    lVar3 = fn_8265DDA0(iStack00000014);
    iStack00000014 =
         fn_82666808(iStack00000014,iStack00000014,(ulonglong)uStack0000001c - lVar3,uVar1);
  }
  return iStack00000014;
}

