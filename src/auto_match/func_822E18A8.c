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
extern int fn_822D01E8();
extern int fn_82365BD8();
extern int fn_82520158();
extern unsigned int lbl_821ADD98;


undefined4 *
fn_822E18A8(undefined4 *param_1,undefined8 param_2,undefined8 param_3,int param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_40 [64];
  
  uVar1 = fn_82365BD8(auStack_40,param_4);
  fn_822D01E8(param_1,param_2,param_3,2,uVar1,param_5);
  param_1[0xd] = 0xffffffff;
  *param_1 = &lbl_821ADD98;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  fn_82520158(0xffffffff821add10,param_1 + 0x19,0);
  fn_82520158(0xffffffff821add30,param_1 + 0x1a,0);
  fn_82520158(0xffffffff821add54,param_1 + 0x1b,0);
  fn_82520158(0xffffffff821add70,param_1 + 0x1c,0);
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  if (*(int *)(param_4 + 4) != 0) {
    fn_822315A0();
  }
  return param_1;
}

