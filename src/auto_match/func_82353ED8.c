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
extern unsigned int *auStack_820;
extern unsigned int *auStack_a20;
extern unsigned int *auStack_a60;
extern unsigned int *auStack_aa0;
extern int fn_8229DCA8();
extern int fn_8229E410();
extern int fn_82528BF8();
extern int fn_8265C9E0();
extern unsigned int lbl_821A8C90;
extern unsigned int lbl_83276730;


void fn_82353ED8(int *param_1)

{
  int iVar1;
  undefined1 auStack_aa0 [64];
  undefined1 auStack_a60 [64];
  undefined1 auStack_a20 [512];
  undefined1 auStack_820 [2056];
  
  fn_82528BF8(lbl_83276730,0xffffffff82196330,auStack_a20,0x100,0,1);
  fn_82528BF8(lbl_83276730,0xffffffff821b22e4,auStack_820,0x400,0,1);
  fn_82528BF8(lbl_83276730,0xffffffff82196344,auStack_aa0,0x20,0,1);
  fn_82528BF8(lbl_83276730,0xffffffff821a9874,auStack_a60,0x20,0,1);
  if (*param_1 == 0) {
    iVar1 = fn_8265C9E0(0x434);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      *(undefined ***)(iVar1 + 0x41c) = &lbl_821A8C90;
      fn_8229DCA8(iVar1,auStack_a20,auStack_820,auStack_aa0,auStack_a60,0xffffffff82354128,
                        param_1,1);
    }
    *param_1 = iVar1;
    fn_8229E410();
  }
  return;
}

