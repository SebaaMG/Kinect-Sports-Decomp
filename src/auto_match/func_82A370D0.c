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
extern unsigned int *__imp__XboxHardwareInfo;
extern unsigned int *auStack_40;
extern int fn_82A27F98();
extern unsigned int lbl_8329EB44;
extern unsigned int uStack_48;


bool fn_82A370D0(void)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uStack_48;
  undefined4 auStack_40 [12];
  
  if ((*__imp__XboxHardwareInfo & 0x10) == 0) {
    uVar1 = (ulonglong)lbl_8329EB44;
  }
  else {
    puVar2 = &uStack_48;
    lVar3 = 6;
    do {
      puVar2 = puVar2 + 1;
      *puVar2 = 0;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    uVar1 = (ulonglong)lbl_8329EB44;
    auStack_40[0] = 0x30;
    if (uVar1 == 0) {
      uVar1 = fn_82A27F98(0xc1002,0,0x100000,0x1000,0,auStack_40);
      lbl_8329EB44 = (uint)uVar1;
    }
  }
  return uVar1 != 0;
}

