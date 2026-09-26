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
extern int fn_82AB18E8();
extern unsigned int lbl_821CE37C;
extern unsigned int lbl_821CE390;
extern unsigned int lbl_821CE398;
extern unsigned int lbl_821CE3A0;


void fn_82AB28A0(undefined8 param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = (int)param_2 >> 7 & 1;
  if (param_3 != 0) {
    fn_82AB18E8(param_1,0xffffffff821aa634);
  }
  uVar2 = 0xffffffff821ce384;
  if (uVar1 != 0) {
    fn_82AB18E8(param_1,0xffffffff821ce384);
  }
  fn_82AB18E8(param_1,0xffffffff821ce388,param_2 & 0x3f);
  fn_82AB18E8(param_1,0xffffffff821c27b4);
  if (param_4 != 0) {
    fn_82AB18E8(param_1,0xffffffff821c7f2c);
    fn_82AB18E8(param_1,0xffffffff821ce318,(&lbl_821CE37C)[param_4 & 3]);
    fn_82AB18E8(param_1,0xffffffff821ce318,(&lbl_821CE390)[(int)param_4 >> 2 & 3]);
    fn_82AB18E8(param_1,0xffffffff821ce318,(&lbl_821CE398)[(int)param_4 >> 4 & 3]);
    fn_82AB18E8(param_1,0xffffffff821ce318,(&lbl_821CE3A0)[(int)param_4 >> 6 & 3]);
  }
  if (uVar1 == 0) {
    uVar2 = 0xffffffff82196582;
  }
  fn_82AB18E8(param_1,uVar2);
  return;
}

