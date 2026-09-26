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
extern int fn_822300F8();
extern int fn_8265DAB8();
extern int fn_8265DDA0();
extern int fn_82663F28();
extern unsigned int iStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;


int fn_8265DDD8(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iStack00000014;
  uint uStack0000001c;
  uint uStack00000024;
  
  iStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  if (*(uint *)(param_1 + 0x10) < param_2) {
    fn_82663F28(param_1);
  }
  if (*(int *)(iStack00000014 + 0x10) - uStack0000001c < uStack00000024) {
    uStack00000024 = *(int *)(iStack00000014 + 0x10) - uStack0000001c;
  }
  if (uStack00000024 != 0) {
    uVar1 = *(uint *)(iStack00000014 + 0x10);
    uVar4 = (ulonglong)uStack0000001c;
    uVar5 = (ulonglong)uStack00000024;
    lVar2 = fn_8265DDA0(iStack00000014);
    uVar7 = (ulonglong)uStack0000001c;
    uVar6 = (ulonglong)uStack00000024;
    lVar3 = fn_8265DDA0(iStack00000014);
    fn_822300F8(lVar3 + (ulonglong)uStack0000001c,lVar2 + uVar7 + uVar6,(uVar1 - uVar4) - uVar5);
    fn_8265DAB8(iStack00000014,*(int *)(iStack00000014 + 0x10) - uStack00000024);
  }
  return iStack00000014;
}

