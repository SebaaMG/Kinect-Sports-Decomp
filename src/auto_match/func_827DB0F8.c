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
extern unsigned int *auStack_78;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827DAB30();
extern int fn_827DADC8();
extern int fn_827E4A58();
extern int fn_827E4BD0();
extern unsigned int iStack_6c;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_70;


undefined8
fn_827DB0F8(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [8];
  undefined4 uStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  fn_827DADC8(&uStack_70,param_1,param_6,param_7,param_8,0);
  lVar1 = fn_827E4A58(0x13c);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uStack_68 = 0;
    uStack_64 = 0;
    fn_82517978(&uStack_68,uStack_70,iStack_6c,0);
    uVar2 = (**(code **)(*param_2 + 0x40))(param_2);
    uVar2 = fn_827E4BD0(lVar1,uVar2,param_4,param_3,param_5,param_6,param_7,&uStack_68);
  }
  fn_82517978(auStack_78,uStack_70,iStack_6c,0);
  uVar2 = fn_827DAB30(param_1,uVar2,param_8,auStack_78,0);
  if (iStack_6c != 0) {
    fn_822315A0();
  }
  return uVar2;
}

