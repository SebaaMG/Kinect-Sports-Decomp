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
extern int fn_8223D428();
extern int fn_822462B0();
extern int fn_8265DDA0();
extern unsigned int iStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


ulonglong fn_82666A30(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  int iVar3;
  char cVar5;
  longlong lVar2;
  uint uVar4;
  int iStack00000014;
  undefined4 uStack0000001c;
  uint uStack00000024;
  uint uStack0000002c;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  
  if (param_4 == 0) {
    uStack_1c = param_3;
    if (*(uint *)(param_1 + 0x10) <= param_3) {
      uStack_1c = *(uint *)(param_1 + 0x10);
    }
    uVar1 = (ulonglong)uStack_1c;
  }
  else {
    if (param_4 <= *(uint *)(param_1 + 0x10)) {
      uStack_18 = param_3;
      if (*(int *)(param_1 + 0x10) - param_4 <= param_3) {
        uStack_18 = *(int *)(param_1 + 0x10) - param_4;
      }
      iStack00000014 = param_1;
      uStack0000001c = param_2;
      uStack00000024 = param_3;
      uStack0000002c = param_4;
      iVar3 = fn_8265DDA0(param_1);
      uStack_20 = iVar3 + uStack_18;
      while( true ) {
        cVar5 = fn_8223D428(uStack_20,uStack0000001c);
        if ((cVar5 != '\0') &&
           (iVar3 = fn_822462B0(uStack_20,uStack0000001c,uStack0000002c), iVar3 == 0)) {
          lVar2 = fn_8265DDA0(iStack00000014);
          return (ulonglong)uStack_20 - lVar2;
        }
        uVar4 = fn_8265DDA0(iStack00000014);
        if (uStack_20 == uVar4) break;
        uStack_20 = uStack_20 - 1;
      }
    }
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}

