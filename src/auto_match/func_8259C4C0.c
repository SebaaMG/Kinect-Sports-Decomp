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
extern int fn_82A277E0();
extern unsigned int lbl_832767CC;


longlong fn_8259C4C0(int param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int *piVar4;
  
  if (lbl_832767CC == 0) {
    fn_82522838();
  }
  lVar3 = 0;
  piVar4 = (int *)(lbl_832767CC + 0x3c);
  do {
    if (*piVar4 != 0) {
      iVar1 = fn_82A277E0(*piVar4,0,param_1);
      if (iVar1 == -1) {
        uVar2 = 0xff;
      }
      else {
        uVar2 = (uint)*(byte *)(iVar1 + param_1 + -2);
      }
      if (uVar2 == piVar4[-1]) {
        return lVar3;
      }
    }
    lVar3 = lVar3 + 1;
    piVar4 = piVar4 + 0xe;
    if (3 < (int)lVar3) {
      return -1;
    }
  } while( true );
}

