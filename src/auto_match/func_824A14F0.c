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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_822DB5D0();
extern int fn_8245CCF8();
extern int fn_82579B78();
extern int fn_82579EF0();
extern int fn_8257A028();
extern int fn_8257A140();
extern int fn_8265CA20();
extern int fn_829C90F0();
extern int fn_829C9100();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82192754;
extern unsigned int lbl_821CC160;


void fn_824A14F0(void)

{
  int iVar2;
  undefined8 uVar1;
  double dVar3;
  int aiStack_60 [4];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  fn_82579B78(aiStack_60);
  iVar2 = fn_8257A140(aiStack_60);
  if (iVar2 == 0) {
    uVar1 = fn_82579EF0(aiStack_60,0xffffffff821bf4cc,1);
    fn_829C90F0(0,0,uVar1);
    fn_8257A028((double)lbl_82192754,aiStack_60,0xffffffff821bf4e0);
    fn_829C9100(0,0);
    fn_8257A028((double)lbl_821CC160,aiStack_60,0xffffffff821bf4f0);
    fn_829C9100(0,5);
    dVar3 = (double)lbl_821916FC;
    fn_8257A028(dVar3,aiStack_60,0xffffffff821bf510);
    fn_829C9100(0,6);
    fn_8257A028(dVar3,aiStack_60,0xffffffff821bf520);
    fn_829C9100(0,7);
    fn_8257A028(dVar3,aiStack_60,0xffffffff821bf530);
    fn_829C9100(0,8);
  }
  fn_8245CCF8(auStack_40);
  fn_822DB5D0(auStack_50);
  if (aiStack_60[0] != 0) {
    fn_8265CA20();
  }
  return;
}

