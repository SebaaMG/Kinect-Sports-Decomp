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
extern int fn_8265DB18();
extern int fn_8265DC30();
extern int fn_8265DD28();
extern int fn_8265DDA0();
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;


ulonglong fn_8265DA00(uint param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar6;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint uStack00000014;
  uint uStack0000001c;
  undefined4 uStack00000024;
  
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  cVar6 = fn_8265DD28(param_1,param_2);
  uVar2 = uStack00000024;
  if (cVar6 == '\0') {
    cVar6 = fn_8265DC30(uStack00000014,uStack00000024,0);
    uVar2 = uStack00000024;
    uVar1 = uStack0000001c;
    if (cVar6 != '\0') {
      uVar5 = fn_8265DDA0(uStack00000014);
      fn_822300F0(uVar5,uVar1,uVar2);
      fn_8265DAB8(uStack00000014,uStack00000024);
    }
    uVar4 = (ulonglong)uStack00000014;
  }
  else {
    lVar3 = fn_8265DDA0(uStack00000014);
    uVar4 = fn_8265DB18(uStack00000014,uStack00000014,(ulonglong)uStack0000001c - lVar3,uVar2)
    ;
  }
  return uVar4;
}

