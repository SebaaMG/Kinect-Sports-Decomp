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
extern int fn_829E6480();
extern int fn_829E65C0();
extern int fn_829E7640();
extern int fn_82A28568();
extern unsigned int lbl_832179FC;


undefined8 fn_829E6208(undefined4 *param_1)

{
  int iVar3;
  ulonglong uVar1;
  undefined8 uVar2;
  
  fn_829E7640();
  iVar3 = fn_82A28568(*(undefined4 *)(lbl_832179FC + 0x8f4cc),0,0x1c);
  if (iVar3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_829E6480();
  }
  *param_1 = (int)uVar1;
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0xffffffff8007000e;
  }
  else {
    uVar2 = fn_829E65C0(uVar1,0);
  }
  return uVar2;
}

