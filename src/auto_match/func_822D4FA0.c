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
extern int fn_82230218();
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_8223B688();
extern int fn_822C7578();
extern int fn_82376640();
extern int fn_8265C9E0();
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821ADE58;
extern unsigned int lbl_821AFA08;


void fn_822D4FA0(undefined8 param_1,uint *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined4 *puVar2;
  undefined8 uVar1;
  char cVar3;
  undefined4 *puVar4;
  undefined4 *puStack_50;
  undefined4 *puStack_4c;
  
  puVar2 = (undefined4 *)fn_8265C9E0(0x38);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar4 = puVar2 + 3;
    puVar2[1] = 1;
    *puVar2 = &lbl_821AD588;
    puVar2[2] = 1;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = &lbl_821AFA08;
      fn_8223B688(puVar2 + 4,param_1);
      puVar2[0xb] = param_4;
      puVar2[0xc] = param_3;
      puVar2[0xd] = param_5;
      *puVar4 = &lbl_821ADE58;
    }
  }
  uVar1 = fn_822C7578((ulonglong)*param_2 + 0x40,param_1);
  fn_82230218(uVar1,param_1,0,0xffffffffffffffff);
  puStack_50 = (undefined4 *)0x0;
  puStack_4c = (undefined4 *)0x0;
  if ((puVar2 != (undefined4 *)0x0) && (cVar3 = fn_8223AAC0(puVar2), cVar3 != '\0')) {
    puStack_50 = puVar2 + 3;
    puStack_4c = puVar2;
  }
  fn_82376640((ulonglong)*param_2 + 0x30,&puStack_50);
  if (puStack_4c != (undefined4 *)0x0) {
    fn_822315A0();
  }
  if (puVar2 != (undefined4 *)0x0) {
    fn_822315A0(puVar2);
  }
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  return;
}

