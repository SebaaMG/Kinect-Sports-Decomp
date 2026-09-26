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
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_82F4F010();
extern int fn_82F53548();
extern int fn_82F535C8();
extern int fn_82F538A0();
extern int fn_82F59BD8();
extern int fn_82F59E08();
extern int fn_82F59F48();
extern int fn_82F5A0A0();
extern int fn_82F5A258();
extern int fn_82F6DA1C();
extern int fn_82F6DCB4();
extern int fn_8306ED30();
extern unsigned int lbl_82165844;
extern unsigned int lbl_831BAAD4;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82F4F448(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 uVar1;
  double dVar2;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [144];
  
  uVar1 = fn_82F6DA1C();
  fn_82F538A0(auStack_a0,uVar1);
  fn_82F538A0(auStack_90,uVar1,param_2);
  fn_8306ED30();
  fn_82F53548();
  fn_82F59F48();
  if ((param_4 & 0xff) != 0) {
    fn_82F4F010();
    if ((lbl_831BAAD4 != '\0') && (dVar2 = (double)fn_82F535C8(), (double)lbl_82165844 < dVar2)) {
      fn_82F5A258(auStack_90);
      fn_82F5A0A0();
    }
    fn_82F59BD8();
  }
  fn_82F59E08();
  fn_82F6DCB4();
  return;
}

