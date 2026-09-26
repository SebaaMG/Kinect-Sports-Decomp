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
extern unsigned int lbl_83175B5C;


ulonglong fn_82C10CC0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  byte bVar2;
  code *pcVar3;
  
  pcVar3 = (code *)0x0;
  uVar1 = 0xffffffff80500003;
  bVar2 = 0;
  do {
    if (*(code **)(&lbl_83175B5C)[(char)bVar2] != (code *)0x0) {
      uVar1 = (**(code **)(&lbl_83175B5C)[(char)bVar2])(param_1,param_2,param_3,param_4);
      if ((int)uVar1 < 0) {
        if ((uVar1 & 0xffffffff) != 0x80500003) {
          return uVar1;
        }
      }
      else {
        if ((int)uVar1 != 0x500000) {
          return uVar1;
        }
        if (pcVar3 == (code *)0x0) {
          pcVar3 = *(code **)(&lbl_83175B5C)[(char)bVar2];
        }
      }
    }
    bVar2 = bVar2 + 1;
  } while (bVar2 < 3);
  if (pcVar3 != (code *)0x0) {
    uVar1 = (*pcVar3)(param_1,param_2,param_3,param_4);
  }
  return uVar1;
}

