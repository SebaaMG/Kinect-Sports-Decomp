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
extern int fn_8250C3B0();
extern int fn_8250C540();
extern int fn_8250C6A0();
extern int fn_827F3C20();
extern int fn_827F3C28();
extern int fn_827F3C48();
extern int fn_827F4868();
extern int fn_827F7210();
extern unsigned int lbl_821CA460;


void fn_8250DD60(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  short sVar5;
  double dVar6;
  
  fn_827F3C48(param_1,0);
  uVar2 = fn_827F3C28();
  fn_827F3C48(param_1,1);
  uVar3 = fn_827F3C28();
  uVar4 = fn_827F3C20(param_1);
  dVar6 = (double)fn_827F4868(param_1);
  uVar1 = *(undefined4 *)(param_1 + 0xe8);
  sVar5 = fn_827F7210(uVar2);
  if (sVar5 != 0) {
    fn_8250C6A0(dVar6,uVar2,uVar3,uVar4,param_4,uVar1);
  }
  fn_8250C540((double)(float)((double)lbl_821CA460 - dVar6),dVar6,uVar2,uVar3,uVar4);
  fn_8250C3B0(uVar2,uVar3,uVar4);
  return;
}

