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
extern int fn_82CE6820();
extern int fn_82D757E8();
extern int fn_82DD9828();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82139018;


undefined4 *
fn_82D5C050(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_70 [112];
  
  fn_82D757E8();
  *param_1 = &lbl_82139018;
  param_1[0x20] = *param_4;
  *(undefined1 *)(param_1 + 0x21) = 1;
  *(undefined1 *)((int)param_1 + 0x85) = 0;
  uVar1 = *param_2;
  uVar2 = *param_3;
  fn_82CE6820(auStack_70,param_2[2],param_3[2]);
  fn_82DD9828(param_1 + 3,uVar1,uVar2,auStack_70);
  uVar1 = lbl_8200133C;
  param_1[0xb] = lbl_8200133C;
  param_1[6] = uVar1;
  return param_1;
}

