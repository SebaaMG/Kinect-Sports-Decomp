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
extern int fn_8223A7A8();
extern int fn_8265C9E0();
extern int fn_828ABF58();
extern int fn_828E3508();
extern unsigned int lbl_82196BF8;
extern unsigned int lbl_82196E48;
extern unsigned int lbl_82198494;
extern unsigned int lbl_821B47F8;


undefined4 * fn_82390BF8(undefined4 *param_1)

{
  undefined4 *puVar3;
  ulonglong uVar1;
  undefined8 uVar2;
  
  fn_828E3508();
  param_1[0x12] = 0;
  param_1[0x18] = 0;
  *param_1 = &lbl_82196BF8;
  puVar3 = (undefined4 *)fn_8265C9E0(8);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 0;
    *puVar3 = &lbl_82196E48;
  }
  fn_8223A7A8(param_1 + 0x1a,puVar3);
  puVar3 = (undefined4 *)fn_8265C9E0(8);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 0;
    *puVar3 = &lbl_82196E48;
  }
  fn_8223A7A8(param_1 + 0x1c,puVar3);
  puVar3 = (undefined4 *)fn_8265C9E0(8);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 0;
    *puVar3 = &lbl_82196E48;
  }
  fn_8223A7A8(param_1 + 0x1e,puVar3);
  puVar3 = (undefined4 *)fn_8265C9E0(8);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 0;
    *puVar3 = &lbl_82198494;
  }
  fn_8223A7A8(param_1 + 0x20,puVar3);
  uVar1 = fn_8265C9E0(0x18);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_828ABF58(uVar1,1,0,0xffffffffffffffff);
  }
  fn_8223A7A8(param_1 + 0x22,uVar2);
  puVar3 = (undefined4 *)fn_8265C9E0(8);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 0;
    *puVar3 = &lbl_821B47F8;
  }
  fn_8223A7A8(param_1 + 0x24,puVar3);
  uVar1 = fn_8265C9E0(0x18);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_828ABF58(uVar1,1,0,0xffffffffffffffff);
  }
  fn_8223A7A8(param_1 + 0x26,uVar2);
  puVar3 = (undefined4 *)fn_8265C9E0(8);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 0;
    *puVar3 = &lbl_82198494;
  }
  fn_8223A7A8(param_1 + 0x28,puVar3);
  return param_1;
}

