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
extern unsigned int *auStack_50;
extern int fn_827EFC70();
extern int fn_827EFC80();
extern int fn_827F3AB0();
extern int fn_827F3B90();
extern int fn_82811080();
extern int fn_82811438();
extern U64 storeWordConditionalIndexed();


undefined8 fn_8255EF20(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char in_RESERVE;
  byte in_cr0;
  undefined4 auStack_50 [4];
  undefined1 auStack_40 [64];
  
  uVar3 = fn_827F3AB0();
  uVar5 = 0;
  if ((uVar3 & 0xffffffff) < 0x19001) {
    uVar4 = fn_827EFC80();
    do {
      iVar1 = *(int *)uVar4;
      if (in_RESERVE != '\0') {
        iVar2 = storeWordConditionalIndexed(1,0,uVar4);
        *(int *)uVar4 = iVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (iVar1 == 0) {
      uVar5 = 1;
      uVar4 = fn_827EFC70();
      goto LAB_8255efac;
    }
  }
  auStack_50[0] = 0;
  fn_82811438(auStack_40,auStack_50,0x10);
  uVar4 = fn_82811080(0xffffffff8320a3e0,uVar3,auStack_40);
LAB_8255efac:
  fn_827F3B90(param_1,uVar4,uVar3);
  return uVar5;
}

