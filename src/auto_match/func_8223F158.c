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
extern unsigned int *auStack_30;
extern int fn_8223F0D8();
extern int fn_82F62DF8();
extern int fn_82F64258();


void fn_8223F158(int param_1,undefined8 param_2,char param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined8 auStack_30 [6];
  
  puVar1 = (undefined4 *)fn_82F64258();
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_3 == '\0') {
    uVar3 = (ulonglong)(uint)puVar1[2];
  }
  else {
    uVar3 = 0xffffffff82196582;
  }
  auStack_30[0] = fn_82F62DF8();
  uVar2 = fn_8223F0D8(uVar3,0,auStack_30);
  *(undefined4 *)(param_1 + 8) = uVar2;
  auStack_30[0] = fn_82F62DF8();
  uVar2 = fn_8223F0D8(0xffffffff82196f10,0,auStack_30);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  auStack_30[0] = fn_82F62DF8();
  uVar2 = fn_8223F0D8(0xffffffff82196f18,0,auStack_30);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  fn_82F62DF8();
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)*puVar1;
  fn_82F62DF8();
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)puVar1[1];
  if (param_3 != '\0') {
    fn_82F62DF8();
    *(undefined1 *)(param_1 + 0xc) = 0x2e;
    fn_82F62DF8();
    *(undefined1 *)(param_1 + 0xd) = 0x2c;
  }
  return;
}

