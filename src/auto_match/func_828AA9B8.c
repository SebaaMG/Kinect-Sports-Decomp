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
extern int fn_8224E9D8();
extern int fn_822CB340();
extern int fn_823AB478();
extern int fn_82895048();
extern int fn_828AA838();
extern int fn_828AAF70();
extern int fn_828AB150();
extern int fn_828B8F40();
extern int fn_828EA600();
extern int fn_828EA610();
extern int fn_828EA840();
extern int fn_82E1DAA0();
extern unsigned int lbl_820244C8;


undefined4 *
fn_828AA9B8(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  fn_82895048(param_1,param_2,1);
  param_1[0x1a] = (int)param_3;
  *param_1 = &lbl_820244C8;
  uVar1 = param_1[0xd];
  uVar2 = fn_828B8F40(param_3);
  fn_822CB340((ulonglong)uVar1 + 0x48,uVar2);
  uVar1 = param_1[0xd];
  uVar2 = fn_82E1DAA0(param_3);
  fn_8224E9D8((ulonglong)uVar1 + 0x9c,uVar2);
  uVar1 = param_1[0xd];
  uVar3 = fn_823AB478(param_3);
  fn_828AB150((ulonglong)uVar1 + 0xf0,uVar3);
  fn_828AAF70((ulonglong)(uint)param_1[0xd] + 0x198,param_4);
  uVar1 = param_1[0xd];
  uVar2 = fn_828EA600(param_3);
  fn_828AAF70((ulonglong)uVar1 + 0x1ec,uVar2);
  uVar1 = param_1[0xd];
  uVar2 = fn_828EA840(param_3);
  fn_828AAF70((ulonglong)uVar1 + 0x240,uVar2);
  uVar1 = param_1[0xd];
  uVar2 = fn_828EA610(param_3);
  fn_828AAF70((ulonglong)uVar1 + 0x294,uVar2);
  fn_828AA838(param_1);
  return param_1;
}

