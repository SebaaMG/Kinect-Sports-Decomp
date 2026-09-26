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
extern unsigned int *auStack_68;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827D9D98();
extern int fn_827DAB30();
extern int fn_827DADC8();
extern int fn_827E58F0();
extern int fn_827E5BE8();
extern unsigned int iStack_5c;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_60;


undefined8
fn_827DB6D0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [8];
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  fn_827DADC8(&uStack_60,param_1,param_4,param_5,param_6,0);
  lVar1 = fn_827E58F0(0x34);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uStack_58 = 0;
    uStack_54 = 0;
    fn_82517978(&uStack_58,uStack_60,iStack_5c,0);
    uVar2 = fn_827D9D98(param_2);
    uVar2 = fn_827E5BE8(lVar1,0,param_2,uVar2,param_3,param_4,param_5,&uStack_58);
  }
  fn_82517978(auStack_68,uStack_60,iStack_5c,0);
  uVar2 = fn_827DAB30(param_1,uVar2,param_6,auStack_68,0);
  if (iStack_5c != 0) {
    fn_822315A0();
  }
  return uVar2;
}

