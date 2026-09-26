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
extern unsigned int *auStack_58;
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_82517A50();
extern int fn_827D5158();
extern int fn_827D5850();
extern int fn_827E2940();
extern int fn_82811438();
extern unsigned int iStack_5c;
extern unsigned int lbl_83156AA0;
extern unsigned int uStack_60;


undefined8 fn_827D5F30(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined4 uStack_60;
  int iStack_5c;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [80];
  
  fn_827D5158(&uStack_60);
  if ((param_4 & 0xffffffff) != 0) {
    fn_82517A50(param_4,&uStack_60);
  }
  fn_82811438(auStack_50,auStack_70,0x10);
  lVar1 = (**(code **)(*(int *)lbl_83156AA0 + 4))(lbl_83156AA0,0x14,auStack_50,param_3);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    fn_82517978(auStack_58,uStack_60,iStack_5c,0);
    uVar2 = fn_827E2940(lVar1,param_2,param_3,auStack_58);
  }
  fn_82517978(auStack_68,uStack_60,iStack_5c,0);
  uVar2 = fn_827D5850(param_1,uVar2,auStack_68,1);
  if (iStack_5c != 0) {
    fn_822315A0();
  }
  return uVar2;
}

