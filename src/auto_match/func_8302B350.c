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
extern int fn_82FFFA70();
extern int fn_830160B0();
extern unsigned int lbl_832642E0;


void fn_8302B350(int param_1)

{
  undefined4 uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)lbl_832642E0;
  if ((*(uint *)(param_1 + 0x28) & 0x40000000) == 0) {
    fn_830160B0(uVar2 + 0x328,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0xc));
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    RtlEnterCriticalSection(uVar2 + 0x350);
    fn_82FFFA70(uVar2 + 0x36c,uVar1);
    RtlLeaveCriticalSection(uVar2 + 0x350);
  }
  return;
}

