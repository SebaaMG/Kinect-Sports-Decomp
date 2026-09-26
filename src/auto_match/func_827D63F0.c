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
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern unsigned int *auStack_88;
extern unsigned int *auStack_90;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827D5158();
extern int fn_827D5850();
extern int fn_827E3048();
extern int fn_82811438();
extern unsigned int iStack_7c;
extern unsigned int lbl_83156AA0;
extern unsigned int uStack_80;


undefined8
fn_827D63F0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined4 uStack_80;
  int iStack_7c;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [112];
  
  fn_827D5158(&uStack_80);
  fn_82811438(auStack_70,auStack_90,0x10);
  lVar1 = (**(code **)(*(int *)lbl_83156AA0 + 4))(lbl_83156AA0,0x48,auStack_70,param_6);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    fn_82517978(auStack_78,uStack_80,iStack_7c,0);
    uVar2 = fn_827E3048(lVar1,param_2,param_3,param_4,param_5,param_6,auStack_78);
  }
  fn_82517978(auStack_88,uStack_80,iStack_7c,0);
  uVar2 = fn_827D5850(param_1,uVar2,auStack_88,0);
  if (iStack_7c != 0) {
    fn_822315A0();
  }
  return uVar2;
}

