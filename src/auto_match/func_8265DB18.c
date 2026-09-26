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
extern int fn_8265DDA0();
extern int fn_8265DDD8();
extern int fn_8265DED8();
extern int fn_82663F28();
extern unsigned int iStack00000014;
extern unsigned int iStack0000001c;
extern unsigned int lbl_821961F0;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack_20;


int fn_8265DB18(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar3;
  int iVar4;
  char cVar5;
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar6;
  int iStack00000014;
  int iStack0000001c;
  uint uStack00000024;
  uint uStack0000002c;
  uint uStack_20;
  
  iStack00000014 = param_1;
  iStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  uVar3 = fn_8265DED8(param_2);
  if (uVar3 < uStack00000024) {
    fn_82663F28(iStack00000014);
  }
  iVar4 = fn_8265DED8(iStack0000001c);
  uStack_20 = iVar4 - uStack00000024;
  if (uStack0000002c < uStack_20) {
    uStack_20 = uStack0000002c;
  }
  if (iStack00000014 == iStack0000001c) {
    fn_8265DDD8(iStack00000014,(ulonglong)uStack00000024 + (ulonglong)uStack_20,lbl_821961F0);
    fn_8265DDD8(iStack00000014,0,uStack00000024);
  }
  else {
    cVar5 = fn_8265DC30(iStack00000014,uStack_20,0);
    if (cVar5 != '\0') {
      lVar1 = fn_8265DDA0(iStack0000001c);
      uVar6 = (ulonglong)uStack00000024;
      uVar2 = fn_8265DDA0(iStack00000014);
      fn_822300F0(uVar2,lVar1 + uVar6,uStack_20);
      fn_8265DAB8(iStack00000014,uStack_20);
    }
  }
  return iStack00000014;
}

