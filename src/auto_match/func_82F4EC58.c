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
extern int fn_82F534D8();
extern int fn_82F53978();
extern int fn_82F59478();
extern unsigned int lbl_821AAD20;


int fn_82F4EC58(int param_1)

{
  undefined4 *puVar1;
  double dVar2;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  
  dVar2 = (double)lbl_821AAD20;
  fn_82F534D8(dVar2,dVar2,dVar2,dVar2);
  puVar1 = (undefined4 *)(param_1 + 0x50U & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  fn_82F53978(param_1 + 0x60);
  fn_82F53978(param_1 + 0x850);
  fn_82F53978(param_1 + 0x1040);
  *(float *)(param_1 + 0x1830) = (float)dVar2;
  fn_82F59478(dVar2,dVar2,dVar2,param_1 + 0x1834);
  *(undefined4 *)(param_1 + 0x1840) = 0;
  return param_1;
}

