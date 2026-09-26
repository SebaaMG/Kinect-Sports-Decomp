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
extern unsigned int *auStack_20;
extern int fn_82A1E658();
extern int fn_82BFB8C0();
extern int fn_82BFBAF0();
extern U64 storeWordConditionalIndexed();


void fn_82BFE830(ulonglong param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char in_RESERVE;
  byte in_cr0;
  undefined4 auStack_20 [4];
  
  if ((param_1 & 0xffffffff) != 0) {
    do {
      piVar3 = (int *)(param_1 + 0x38);
      iVar1 = *piVar3;
      if (in_RESERVE != '\0') {
        iVar2 = storeWordConditionalIndexed(0,0,param_1 + 0x38);
        *piVar3 = iVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (iVar1 == 0x4c665374) {
      iVar1 = (int)param_1;
      if (*(int *)(iVar1 + 0x14) != 0) {
        fn_82A1E658();
      }
      if (*(int *)(iVar1 + 0x1c) != 0) {
        fn_82A1E658();
      }
      auStack_20[0] = *(undefined4 *)(iVar1 + 0x34);
      fn_82BFBAF0(*(undefined4 *)(iVar1 + 0x40),param_1 + 0x20,auStack_20);
      fn_82BFB8C0(*(undefined4 *)(iVar1 + 0x40),*(undefined4 *)(iVar1 + 0x3c),auStack_20);
      sync(1);
    }
  }
  return;
}

