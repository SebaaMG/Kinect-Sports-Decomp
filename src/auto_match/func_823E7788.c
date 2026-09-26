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
extern int fn_82368C30();
extern int fn_823E7368();


void fn_823E7788(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 in_register_00010020;
  undefined4 in_register_00010024;
  undefined4 in_register_00010028;
  undefined4 in_vr2;
  undefined4 in_register_00010030;
  undefined4 in_register_00010034;
  undefined4 in_register_00010038;
  undefined4 in_vr3;
  
  fn_823E7368();
  puVar1 = (undefined4 *)(param_2 + 0x50U & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  puVar1 = (undefined4 *)(param_2 + 0x60U & 0xfffffff0);
  *puVar1 = in_register_00010020;
  puVar1[1] = in_register_00010024;
  puVar1[2] = in_register_00010028;
  puVar1[3] = in_vr2;
  puVar1 = (undefined4 *)(param_2 + 0x70U & 0xfffffff0);
  *puVar1 = in_register_00010030;
  puVar1[1] = in_register_00010034;
  puVar1[2] = in_register_00010038;
  puVar1[3] = in_vr3;
  iVar2 = *(int *)(param_1 + 0x41c);
  if (((((iVar2 == 2) || (iVar2 == 8)) || (iVar2 == 9)) || ((iVar2 == 6 || (iVar2 == 7)))) &&
     (iVar2 = fn_82368C30(param_1), iVar2 != 0)) {
    iVar2 = fn_82368C30(param_1);
    uVar3 = *(undefined4 *)(iVar2 + 0x2c);
  }
  else {
    uVar3 = 0xffffffff;
  }
  *(undefined4 *)(param_2 + 0x80) = uVar3;
  return;
}

