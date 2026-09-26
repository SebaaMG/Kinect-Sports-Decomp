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
extern int fn_829C9B88();
extern unsigned int lbl_8315C3E8;
extern unsigned int uStack_10;
extern unsigned int uStack_1c;


ulonglong fn_829C9BB0(int param_1)

{
  ulonglong uVar1;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  undefined4 ***pppuStack_18;
  undefined4 ***pppuStack_14;
  uint uStack_10;
  
  auStack_20[0] = 0;
  pppuStack_18 = &pppuStack_18;
  *(undefined1 **)(param_1 + 0x10) = auStack_20;
  pppuStack_14 = &pppuStack_18;
  *(code **)(param_1 + 0x14) = fn_829C9B88;
  uStack_1c = 0;
  uVar1 = (*(code *)lbl_8315C3E8)();
  if ((int)uVar1 == 0x103) {
    KeWaitForSingleObject(auStack_20,3,0,0,0);
    uVar1 = (ulonglong)uStack_10;
  }
  return uVar1;
}

