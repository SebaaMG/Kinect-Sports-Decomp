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
extern unsigned int *auStack_34;
extern unsigned int *auStack_40;
extern int fn_822462F0();
extern int fn_8284A410();
extern int fn_8284A658();
extern int fn_82BA02A8();
extern unsigned int iStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_38;


uint * fn_8284A7C0(uint *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint *puStack00000014;
  int iStack0000001c;
  undefined4 uStack00000024;
  uint auStack_40 [2];
  uint uStack_38;
  uint auStack_34 [3];
  undefined4 uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint *puStack_18;
  
  puStack00000014 = param_1;
  iStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack_28 = fn_8284A658(param_2,param_3);
  fn_8284A410(auStack_40,uStack_28,iStack0000001c);
  uStack_38 = *(uint *)(iStack0000001c + 4);
  uStack_24 = uStack_38;
  fn_82BA02A8(&uStack_38,iStack0000001c);
  if (uStack_38 != auStack_40[0]) {
    uStack_20 = auStack_40[0];
    uVar1 = fn_822462F0(uStack00000024,(ulonglong)auStack_40[0] + 0xc);
    if ((int)LZCOUNT(uVar1) != 0) {
      puStack_18 = auStack_40;
      goto LAB_8284a89c;
    }
  }
  auStack_34[0] = *(uint *)(iStack0000001c + 4);
  uStack_1c = auStack_34[0];
  fn_82BA02A8(auStack_34,iStack0000001c);
  puStack_18 = auStack_34;
LAB_8284a89c:
  *puStack00000014 = *puStack_18;
  return puStack00000014;
}

