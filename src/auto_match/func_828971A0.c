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
extern unsigned int *auStack_20;
extern int fn_8224ED20();
extern int fn_825089A0();
extern int fn_8265CA20();
extern int fn_82825F40();
extern int fn_82887890();
extern int fn_8288E4B0();
extern int fn_828957B0();
extern int fn_828960C0();
extern int fn_82896D88();
extern int fn_828B22F0();
extern int fn_828C5F28();
extern unsigned int lbl_8202396C;


void fn_828971A0(undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined1 auStack_20 [8];
  
  *param_1 = &lbl_8202396C;
  fn_82825F40(auStack_20,param_1 + 0x30,*(undefined4 *)param_1[0x31]);
  fn_8265CA20(param_1[0x31]);
  fn_828C5F28(param_1 + 0x29);
  fn_828960C0(auStack_20,param_1 + 0x25,*(undefined4 *)param_1[0x26]);
  fn_8265CA20(param_1[0x26]);
  fn_828957B0(auStack_20,param_1 + 0x1f,*(undefined4 *)param_1[0x20]);
  uVar1 = param_1[0x20];
  piVar2 = (int *)fn_825089A0();
  (**(code **)(*piVar2 + 0x28))(piVar2,uVar1);
  fn_82887890(auStack_20,param_1 + 0x1b,*(undefined4 *)param_1[0x1c]);
  fn_8265CA20(param_1[0x1c]);
  fn_8288E4B0(auStack_20,param_1 + 0x17,*(undefined4 *)param_1[0x18]);
  fn_8265CA20(param_1[0x18]);
  fn_828B22F0(param_1 + 0x14);
  fn_8265CA20(param_1[0x14]);
  fn_828B22F0(param_1 + 0x11);
  fn_8265CA20(param_1[0x11]);
  fn_82896D88(auStack_20,param_1 + 0xd,*(undefined4 *)param_1[0xe]);
  fn_8265CA20(param_1[0xe]);
  fn_8224ED20(auStack_20,param_1 + 9,*(undefined4 *)param_1[10]);
  fn_8265CA20(param_1[10]);
  fn_82896D88(auStack_20,param_1 + 5,*(undefined4 *)param_1[6]);
  fn_8265CA20(param_1[6]);
  fn_8224ED20(auStack_20,param_1 + 1,*(undefined4 *)param_1[2]);
  fn_8265CA20(param_1[2]);
  return;
}

