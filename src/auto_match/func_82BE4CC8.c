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
#define CONCAT24(h,l) ((U64)((((U16)(h)) << 32) | ((U32)(l))))
#define CONCAT26(h,l) ((U64)((((U16)(h)) << 48) | ((U64)(l))))
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define _uStack_38 ((*(U64*)&uStack_38))
extern int fn_82BE4690();
extern int fn_82BE5050();
extern int fn_82BE9140();
extern int fn_82BE9168();
extern unsigned int uStack_20;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


void fn_82BE4CC8(int param_1)

{
  undefined2 uVar1;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  longlong lStack_28;
  undefined4 uStack_20;
  
  fn_82BE4690();
  if (*(int *)(param_1 + 0xd0) != 0) {
    uStack_20 = 0;
    lStack_28 = (ulonglong)*(uint *)(param_1 + 0xd8) << 0x20;
    uStack_30 = (ulonglong)*(uint *)(param_1 + 0xdc);
    uStack_40 = 0;
    _uStack_38 = CONCAT44(1,*(undefined4 *)(param_1 + 0xd4));
    uVar1 = fn_82BE9168();
    uStack_30 = ((((U64)(uStack_30)) & (~(((U64)0xFFFFFFFFFFFF) << 16))) | ((((U64)(CONCAT24(uVar1,(((U64)(uStack_30) >> 32) & 0xFFFFFFFF)))) & ((U64)0xFFFFFFFFFFFF)) << 16));
    uVar1 = fn_82BE9140();
    uStack_30 = CONCAT26(uVar1,(((U64)(uStack_30) >> 16) & 0xFFFFFFFFFFFF));
    fn_82BE5050(param_1,&uStack_40);
  }
  return;
}

