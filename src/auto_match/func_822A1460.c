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
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_822997C8();
extern int fn_82299948();
extern int fn_8229A7B8();
extern int fn_8229AE10();
extern int fn_8229F4F8();
extern int fn_8229F618();
extern int fn_8265C9E0();
extern int fn_82672C20();
extern unsigned int iStack_3c;
extern unsigned int lbl_821ABEB0;


undefined4 *
fn_822A1460(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,int param_6,int param_7)

{
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar1;
  undefined4 *puVar4;
  char cVar5;
  byte bVar6;
  undefined1 auStack_40 [4];
  int iStack_3c;
  
  fn_8229A7B8();
  param_1[0xb] = param_4;
  param_1[0xc] = param_5;
  *param_1 = &lbl_821ABEB0;
  iVar2 = fn_8265C9E0(0x1230);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_822997C8();
  }
  param_1[0xd] = uVar3;
  uVar1 = fn_8265C9E0(0x1230);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_82299948(uVar1,4,0);
  }
  param_1[0xe] = uVar3;
  if (param_1[0xb] == 0) {
    if (param_7 == 0) {
      bVar6 = (-(param_1[0xc] != 0) & 9U) + 8;
    }
    else {
      bVar6 = -(param_1[0xc] != 0) & 9;
    }
    fn_8229F4F8(param_1[3],bVar6);
    if (param_1[0xc] != 0) {
      puVar4 = (undefined4 *)fn_8229AE10(auStack_40,param_1);
      fn_82672C20(*puVar4,0xffffffff821abe90,0,0);
      if (iStack_3c != 0) {
        fn_822315A0();
      }
    }
  }
  else if ((uint)param_1[0xb] < 3) {
    bVar6 = -(param_1[0xc] != 0) & 9;
    cVar5 = bVar6 + 3;
    if (param_6 == 0) {
      cVar5 = bVar6 + 4;
    }
    fn_8229F4F8(param_1[3],cVar5);
  }
  fn_8229F618(param_1[3]);
  return param_1;
}

