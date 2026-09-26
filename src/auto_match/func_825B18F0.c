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
extern int fn_82522838();
extern int fn_8259C458();
extern int fn_8259C4C0();
extern int fn_82A1F220();
extern int fn_82A277E0();
extern unsigned int lbl_832767CC;


longlong fn_825B18F0(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  
  if ((param_2 & 0x80000000) == 0) {
    if (lbl_832767CC == 0) {
      fn_82522838();
    }
    fn_8259C4C0(param_1);
    iVar2 = fn_8259C458();
    lVar1 = fn_82A277E0(*(undefined4 *)(iVar2 + 0x24),0,param_1);
    lVar1 = lVar1 + -4;
  }
  else {
    lVar1 = fn_82A1F220();
  }
  return lVar1;
}

