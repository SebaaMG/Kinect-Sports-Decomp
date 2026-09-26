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
extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_82704C38();
extern int fn_82797870();
extern int fn_827979F8();
extern unsigned int lbl_831E7E64;


void fn_8272A868(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    fn_8267C498();
  }
  uVar1 = lbl_831E7E64;
  uVar2 = fn_8267B890(lbl_831E7E64,0x50,0);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_82704C38(uVar2,uVar1,1);
  }
  uVar3 = fn_8267B890(uVar1,0x24,0);
  if ((uVar3 & 0xffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_82797870(uVar3,uVar2);
  }
  *(int *)(param_1 + 0x1c) = (int)uVar4;
  fn_827979F8(param_2,uVar4,0,0xffffffffffffffff);
  if ((uVar2 & 0xffffffff) != 0) {
    fn_8267C498(uVar2);
  }
  return;
}

