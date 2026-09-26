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
extern unsigned int *auStack_80;
extern int fn_82230110();
extern int fn_82230218();
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_822C7578();
extern int fn_822C8B40();
extern int fn_822DD8B0();
extern int fn_82365BD8();
extern int fn_8265C9E0();
extern unsigned int lbl_821A8D8C;


void fn_822D47D0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,uint *param_8)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 *puStack_90;
  undefined4 *puStack_8c;
  undefined1 auStack_80 [128];
  
  puStack_8c = (undefined4 *)fn_8265C9E0(0xb0);
  if (puStack_8c == (undefined4 *)0x0) {
    puStack_8c = (undefined4 *)0x0;
  }
  else {
    puStack_8c[1] = 1;
    *puStack_8c = &lbl_821A8D8C;
    puStack_8c[2] = 1;
    if (puStack_8c + 4 != (undefined4 *)0x0) {
      uVar1 = fn_82365BD8(&puStack_90,param_8);
      fn_822DD8B0(puStack_8c + 4,param_2,param_3,param_4,param_5,param_6,uVar1);
    }
  }
  puStack_90 = puStack_8c + 4;
  puVar2 = puStack_8c + 0x14;
  uVar1 = fn_822C7578(puVar2,(ulonglong)*param_8 + 4);
  fn_82230218(uVar1,param_7,0,0xffffffffffffffff);
  fn_82230110(auStack_80,0xffffffff821ad2f4);
  uVar1 = fn_822C7578(puVar2,auStack_80);
  fn_82230218(uVar1,param_7,0,0xffffffffffffffff);
  fn_82230300(auStack_80,1,0);
  fn_822C8B40(param_1,&puStack_90);
  if (puStack_8c != (undefined4 *)0x0) {
    fn_822315A0();
  }
  if (param_8[1] != 0) {
    fn_822315A0();
  }
  return;
}

