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
extern int fn_82FEBF78();
extern int fn_82FEED68();
extern int fn_82FF3468();
extern int fn_82FF5BF8();
extern int fn_8300D840();
extern int fn_8300FB78();
extern int fn_830121C0();
extern int fn_8301B5E0();
extern unsigned int lbl_832642F4;
extern unsigned int lbl_832642F8;
extern int (*lbl_83264330)();
extern unsigned int lbl_832645D0;


void fn_830131C8(int param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  RtlEnterCriticalSection(0xffffffff8326434c);
  fn_830121C0(param_1);
  uVar2 = fn_82FEBF78();
  uVar1 = uVar2 & 0xffffffff;
  while (uVar1 != 0) {
    fn_8300FB78(param_1);
    if (lbl_83264330 != (code *)0x0) {
      (*lbl_83264330)();
    }
    lVar3 = (ulonglong)*(uint *)(param_1 + 0x90) + 1;
    fn_82FF5BF8(lbl_832642F4,lVar3);
    fn_8301B5E0(lbl_832642F8,lVar3);
    RtlLeaveCriticalSection(0xffffffff8326434c);
    fn_82FEED68();
    RtlEnterCriticalSection(0xffffffff8326434c);
    fn_82FF3468();
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
    uVar2 = uVar2 - 1;
    uVar1 = uVar2;
  }
  if (lbl_832645D0 != 0) {
    fn_8300D840();
  }
  RtlLeaveCriticalSection(0xffffffff8326434c);
  return;
}

