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
extern int fn_823B78E0();
extern int fn_824CC9E8();
extern int fn_824CD030();
extern int fn_82F4EC30();
extern int fn_82F52C20();
extern unsigned int lbl_821B5BEC;
extern unsigned int lbl_821C0C34;
extern unsigned int lbl_821C0C6C;
extern unsigned int lbl_821C0C90;


void fn_824CF0C8(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  *param_1 = &lbl_821C0C6C;
  param_1[0x3c] = &lbl_821C0C90;
  uVar3 = 0;
  iVar2 = fn_824CD030();
  if (iVar2 != 0) {
    uVar3 = fn_82F4EC30(param_1[10]);
  }
  if (param_1[0x3f] != 0) {
    fn_82F52C20(uVar3,param_1[0x3f],1);
    param_1[0x3f] = 0;
  }
  if (param_1[0x40] != 0) {
    fn_82F52C20(uVar3,param_1[0x40],1);
    param_1[0x40] = 0;
  }
  puVar1 = (undefined4 *)param_1[0x58];
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[0x3c] = &lbl_821B5BEC;
  if (param_1[0x3d] != 0) {
    fn_823B78E0(param_1[0x3d],param_1 + 0x3c);
  }
  *param_1 = &lbl_821C0C34;
  fn_824CC9E8(param_1);
  return;
}

