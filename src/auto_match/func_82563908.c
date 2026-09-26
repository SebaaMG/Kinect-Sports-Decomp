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
extern unsigned int *auStack_100;
extern unsigned int *auStack_f0;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern int fn_82CE5410();
extern int fn_82D8B168();
extern int fn_82D8C258();
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_56;
extern unsigned int uStack_59;
extern unsigned int uStack_5c;


void fn_82563908(double param_1,double param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int in_r0;
  int iVar2;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 in_register_00010020;
  undefined4 in_register_00010024;
  undefined4 in_register_00010028;
  undefined4 in_vr2;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [128];
  float fStack_70;
  float fStack_6c;
  undefined1 uStack_5c;
  undefined1 uStack_59;
  undefined1 uStack_56;
  
  fn_82D8B168(&uStack_110);
  uStack_110 = 1;
  uStack_5c = 5;
  puVar1 = (undefined4 *)((uint)(auStack_100 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  uStack_59 = 0;
  puVar1 = (undefined4 *)((uint)(auStack_f0 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010020;
  puVar1[1] = in_register_00010024;
  puVar1[2] = in_register_00010028;
  puVar1[3] = in_vr2;
  fStack_70 = (float)param_1;
  uStack_56 = 2;
  fStack_6c = (float)param_2;
  uStack_10c = param_3;
  iVar2 = fn_82CE5410();
  iVar2 = (**(code **)(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),0x220);
  *(undefined2 *)(iVar2 + 4) = 0x220;
  iVar2 = fn_82D8C258(iVar2,&uStack_110);
  *(undefined4 *)(iVar2 + 0xc) = param_4;
  return;
}

