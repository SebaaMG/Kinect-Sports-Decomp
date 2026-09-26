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
extern int fn_82F68CC0();
extern int fn_82FDFF78();
extern int fn_82FE03B0();
extern int fn_82FE0490();
extern int fn_82FE04F8();
extern int fn_82FE05A8();
extern int fn_82FE0B88();
extern int fn_82FE0D90();
extern int fn_82FE2A88();
extern unsigned int lbl_821AAD20;


void fn_82FE2D48(int param_1,undefined8 param_2,int *param_3,longlong param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  char cVar3;
  int iVar2;
  
  uVar1 = *param_5;
  *(int *)(param_1 + 0xe0) = (int)param_4;
  *(undefined4 *)(param_1 + 200) = uVar1;
  fn_82F68CC0(param_1 + 0xe4,param_4 + 4,0xbc);
  *(int *)(param_1 + 0x1a0) = (int)param_2;
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x14c);
  cVar3 = (**(code **)(*param_3 + 4))(param_3);
  *(char *)(param_1 + 0xd1) = cVar3;
  if (cVar3 != '\0') {
    *(undefined4 *)(param_1 + 0x128) = lbl_821AAD20;
  }
  fn_82F68CC0(param_1 + 0x1a4,param_1 + 0xe4,0x50);
  *(byte *)(param_1 + 0xd0) = -(*(char *)(param_1 + 0x171) != '\0') & 2;
  if ((param_5[1] & 0xffffc000) == 0x20000) {
    *(undefined1 *)(param_1 + 0xd0) = 0;
  }
  fn_82FDFF78(param_1);
  iVar2 = fn_82FE0B88();
  if ((((iVar2 == 1) && (iVar2 = fn_82FE2A88(param_1,param_2), iVar2 == 1)) &&
      (iVar2 = fn_82FE03B0(param_1,param_2), iVar2 == 1)) &&
     ((iVar2 = fn_82FE0490(param_1,param_2), iVar2 == 1 &&
      (iVar2 = fn_82FE05A8(param_1,param_2), iVar2 == 1)))) {
    iVar2 = fn_82FE04F8(param_1,param_2,(uint)param_5[1] >> 0xe);
    if ((iVar2 == 1) && (iVar2 = fn_82FE0D90(param_1,param_2), iVar2 == 1)) {
      *(undefined1 *)(param_1 + 0xd2) = 0;
      *(undefined4 *)(param_1 + 0xbc) = 0;
    }
  }
  return;
}

