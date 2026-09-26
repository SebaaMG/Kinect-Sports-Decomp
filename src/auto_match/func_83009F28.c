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
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832645AC;
extern unsigned int uStack_1c;


void fn_83009F28(void)

{
  int *piVar1;
  int *piStack_20;
  uint uStack_1c;
  
  RtlEnterCriticalSection(0xffffffff832645b4);
  piVar1 = lbl_832645AC;
  if (lbl_832645AC != (int *)0x0) {
    piStack_20 = lbl_832645AC;
    uStack_1c = uStack_1c & 0x3fffffff | 0x80000000;
    *(byte *)(lbl_832645AC + 0x28) = *(byte *)(lbl_832645AC + 0x28) | 8;
    (**(code **)(*piVar1 + 0x44))((double)lbl_821AAD20,piVar1,uStack_1c,&piStack_20,1);
  }
  RtlLeaveCriticalSection(0xffffffff832645b4);
  return;
}

