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
extern int fn_822315A0();
extern int fn_82233428();
extern int fn_8223A7A8();
extern int fn_8265C9E0();
extern int fn_828ABF58();
extern int fn_828E2688();
extern int fn_828E3508();
extern unsigned int lbl_821968A4;
extern unsigned int lbl_82196E94;
extern unsigned int lbl_82198468;
extern unsigned int lbl_82198484;
extern unsigned int lbl_82198494;
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821B1688;
extern unsigned int lbl_821B16A0;


undefined4 * fn_8233E460(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 *puVar5;
  
  fn_82233428();
  *param_1 = &lbl_82198484;
  puVar5 = param_1 + 0xc;
  param_1[10] = &lbl_821968A4;
  fn_828E3508(puVar5);
  param_1[0x1e] = 0;
  param_1[0x24] = 0;
  param_1[0xc] = &lbl_82198468;
  puVar2 = (undefined4 *)fn_8265C9E0(8);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0;
    *puVar2 = &lbl_82198494;
  }
  fn_8223A7A8(param_1 + 0x26,puVar2);
  puVar2 = (undefined4 *)fn_8265C9E0(8);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0;
    *puVar2 = &lbl_821B16A0;
  }
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  puVar3 = (undefined4 *)fn_8265C9E0(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[3] = puVar2;
    puVar3[1] = 1;
    puVar3[2] = 1;
    *puVar3 = &lbl_82196E94;
  }
  if (param_1[0x29] != 0) {
    fn_822315A0();
  }
  param_1[0x29] = puVar3;
  param_1[0x28] = puVar2;
  *puVar5 = &lbl_82198468;
  puVar2 = (undefined4 *)fn_8265C9E0(0x2c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 1;
    puVar2[2] = 1;
    *puVar2 = &lbl_821AD588;
    if (puVar2 + 3 != (undefined4 *)0x0) {
      puVar2[4] = 0;
      puVar2[3] = &lbl_821B1688;
      fn_828ABF58(puVar2 + 5,0,0,7);
    }
  }
  cVar4 = fn_828E2688(puVar5);
  puVar5 = puVar2;
  if (cVar4 == '\0') {
    iVar1 = param_1[0x29];
    puVar5 = (undefined4 *)0x0;
    param_1[0x29] = puVar2;
    param_1[0x28] = puVar2 + 3;
    if (iVar1 == 0) {
      return param_1;
    }
    fn_822315A0();
  }
  if (puVar5 != (undefined4 *)0x0) {
    fn_822315A0(puVar5);
  }
  return param_1;
}

