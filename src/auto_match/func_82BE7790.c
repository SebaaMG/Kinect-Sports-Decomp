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
extern unsigned int *auStack_20;
extern int fn_82BE5240();
extern int fn_82BE56B0();
extern int fn_82BF2DC8();
extern int fn_82D7E470();
extern unsigned int lbl_831751CC;
extern unsigned int lbl_83175308;
extern unsigned int lbl_8322B1DC;


ulonglong fn_82BE7790(void)

{
  int iVar2;
  ulonglong uVar1;
  ulonglong uVar3;
  undefined4 auStack_20 [4];
  
  uVar3 = 0;
  auStack_20[0] = 0;
  iVar2 = fn_82D7E470(auStack_20);
  if (iVar2 == 0) {
    uVar1 = fn_82BE56B0(0x1c);
    if ((uVar1 & 0xffffffff) != 0) {
      uVar3 = fn_82BF2DC8(uVar1,lbl_83175308,1);
    }
  }
  else {
    uVar1 = fn_82BE56B0(0x1c);
    if ((uVar1 & 0xffffffff) != 0) {
      uVar3 = fn_82BF2DC8(uVar1,auStack_20[0],1);
    }
    (*(code *)lbl_831751CC)(auStack_20[0]);
  }
  if (((uVar3 & 0xffffffff) == 0) && (lbl_8322B1DC != 0)) {
    fn_82BE5240(lbl_8322B1DC,0x65,0xffffffff820e99bc);
  }
  return uVar3;
}

