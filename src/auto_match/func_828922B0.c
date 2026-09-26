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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_40;
extern int fn_8288B918();
extern int fn_8288FCA8();
extern int fn_82891250();
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_828922B0(uint *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [64];
  
  uVar1 = *param_1;
  uStack_4c = 0;
  uStack_50 = uVar1;
  if (param_1[4] != 0) {
    fn_8288B918(&uStack_50);
  }
  uStack_44 = 0;
  uStack_48 = uVar1;
  fn_8288FCA8(auStack_40,param_1,(ulonglong)uVar1 << 0x20,CONCAT44(uStack_50,uStack_4c));
  uStack_48 = *param_1;
  uStack_44 = 0;
  fn_82891250(param_1,(ulonglong)uStack_48 << 0x20,param_2,param_3);
  return;
}

