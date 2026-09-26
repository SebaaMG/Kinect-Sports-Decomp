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
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827DAB30();
extern int fn_827DADC8();
extern int fn_827E7B18();
extern int fn_827E7CD8();
extern unsigned int iStack_54;
extern unsigned int uStack_58;


undefined8
fn_827DC0A0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined4 uStack_58;
  int iStack_54;
  undefined1 auStack_50 [80];
  
  fn_827DADC8(&uStack_58,param_1,param_2,param_3,param_4,0);
  lVar1 = fn_827E7B18(0x34);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    fn_82517978(auStack_50,uStack_58,iStack_54,0);
    uVar2 = fn_827E7CD8(lVar1,param_2,param_3,auStack_50,param_1);
  }
  fn_82517978(auStack_60,uStack_58,iStack_54,0);
  uVar2 = fn_827DAB30(param_1,uVar2,param_4,auStack_60,1);
  if (iStack_54 != 0) {
    fn_822315A0();
  }
  return uVar2;
}

