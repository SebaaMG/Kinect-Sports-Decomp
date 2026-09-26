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
extern int fn_82862130();
extern int fn_82862150();
extern int fn_828641C8();
extern int fn_828644D0();
extern unsigned int lbl_832116B4;


void fn_828645C8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  short sVar3;
  
  fn_828644D0();
  iVar1 = fn_82862130(param_1,lbl_832116B4);
  iVar2 = fn_82862150(iVar1,lbl_832116B4);
  if (*(short *)(iVar1 + 8) == 0) {
    sVar3 = 0;
  }
  else {
    fn_828641C8(iVar1,0,*(undefined4 *)(iVar2 + 4));
    sVar3 = *(short *)(iVar1 + 8) + 2;
  }
  *(short *)(iVar2 + 8) = sVar3;
  return;
}

