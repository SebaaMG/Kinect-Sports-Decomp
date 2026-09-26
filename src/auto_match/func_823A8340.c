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
extern int fn_8223A7A8();
extern int fn_8265C9E0();
extern int fn_828ABF58();
extern int fn_828AC0A0();
extern int fn_828E3508();
extern unsigned int lbl_82196E94;
extern unsigned int lbl_8219735C;
extern unsigned int lbl_82198494;
extern unsigned int lbl_821B47F8;


undefined4 * fn_823A8340(undefined4 *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  fn_828E3508();
  param_1[0x12] = 0;
  param_1[0x18] = 0;
  *param_1 = &lbl_8219735C;
  uVar1 = fn_8265C9E0(0x18);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_828ABF58(uVar1,1,0,0xffffffffffffffff);
  }
  fn_8223A7A8(param_1 + 0x1a,uVar2);
  puVar3 = (undefined4 *)fn_8265C9E0(8);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 0;
    *puVar3 = &lbl_821B47F8;
  }
  fn_8223A7A8(param_1 + 0x1c,puVar3);
  puVar3 = (undefined4 *)fn_8265C9E0(8);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 0;
    *puVar3 = &lbl_82198494;
  }
  fn_8223A7A8(param_1 + 0x1e,puVar3);
  uVar1 = fn_8265C9E0(0x18);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_828AC0A0(uVar1,1,0xffffffff80000000,0x7fffffff);
  }
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  puVar5 = (undefined4 *)fn_8265C9E0(0x10);
  puVar3 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar5[3] = uVar4;
    puVar5[1] = 1;
    *puVar5 = &lbl_82196E94;
    puVar5[2] = 1;
    puVar3 = puVar5;
  }
  if (param_1[0x21] != 0) {
    fn_822315A0();
  }
  param_1[0x21] = puVar3;
  param_1[0x20] = uVar4;
  return param_1;
}

