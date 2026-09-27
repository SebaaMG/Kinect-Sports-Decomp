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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_8305CFA8();
extern int fn_8305E0F8();
extern int fn_8305EC98();
extern int fn_83060380();
extern int fn_830603C0();
extern int fn_830603D0();
extern int fn_83060CB0();
extern int fn_83060CD0();
extern int fn_83061508();
extern int fn_83061548();
extern int fn_83061F30();
extern int fn_83065E50();


void fn_8305D038(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar3;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [48];
  
  fn_83061508(auStack_50);
  fn_83060380(auStack_70,param_3);
  fn_83060CB0(auStack_70);
  while( true ) {
    cVar3 = fn_830603C0(auStack_70);
    if (cVar3 != '\0') break;
    uVar1 = fn_830603D0(auStack_70);
    fn_8305CFA8(param_1,param_2,uVar1,auStack_50);
    fn_83060CD0(auStack_70);
  }
  fn_83061548(param_3,0);
  fn_83060380(auStack_60,auStack_50);
  fn_83060CB0(auStack_60);
  while( true ) {
    cVar3 = fn_830603C0(auStack_60);
    if (cVar3 != '\0') break;
    uVar1 = fn_83065E50();
    fn_8305E0F8(uVar1,param_3);
    uVar2 = fn_830603D0(auStack_60);
    fn_8305EC98(uVar1,uVar2);
    fn_83060CD0(auStack_60);
  }
  fn_83061548(auStack_50,0);
  fn_83061F30(auStack_50);
  return;
}

