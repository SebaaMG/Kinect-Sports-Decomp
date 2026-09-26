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
extern unsigned int lbl_832179FC;


ulonglong fn_829D4E70(int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  piVar1 = (int *)((param_1 + 0x11e7c) * 8 + lbl_832179FC);
  uVar2 = (ulonglong)(uint)piVar1[1];
  if (uVar2 == 0) {
    return 0;
  }
  trapWord(6,uVar2,0);
  return (uint)(*piVar1 * 10) / uVar2 & 0xff;
}

