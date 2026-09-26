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
extern int fn_82AA1C90();
extern int fn_82AA2720();
extern int fn_82AA4498();
extern unsigned int lbl_8315FF90;


undefined8
fn_82AA4860(ulonglong param_1,int param_2,uint *param_3,uint param_4,undefined8 param_5)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_4 < 0x24) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    fn_82AA4498(param_5,(&lbl_8315FF90)[param_2]);
    fn_82AA2720(param_5,0xffffffff821ce7a4);
    fn_82AA1C90(param_5,0xffffffff821cc86c);
    uVar1 = *param_3 >> 5 & 1;
    if ((((param_1 & 0xffffffff) >> 7 & 1) != 0) || (uVar1 != 0)) {
      fn_82AA4498(param_5,0xffffffff8202f634);
      if (uVar1 == 0) {
        uVar2 = 0xffffffff82196f10;
      }
      else {
        uVar2 = 0xffffffff82196f18;
      }
      fn_82AA1C90(param_5,0xffffffff820d3a78,uVar2);
      fn_82AA2720(param_5,0xffffffff821ce7a4);
      fn_82AA1C90(param_5,0xffffffff821cc86c);
    }
    uVar2 = 0;
  }
  return uVar2;
}

