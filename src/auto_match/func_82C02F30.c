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
extern unsigned int *auStack_50;
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern int fn_829E4B18();
extern int fn_82C00450();
extern int fn_82C00458();
extern int fn_82C00460();
extern int fn_82C005B0();
extern int fn_82C005B8();
extern int fn_82C005C0();
extern int fn_82C09EB8();
extern int fn_82C0A1A0();
extern int fn_82C0A230();
extern int fn_82C0A260();
extern unsigned int lbl_821AAD20;


/* WARNING: Removing unreachable block (ram,0x82c03064) */
/* WARNING: Removing unreachable block (ram,0x82c03078) */
/* WARNING: Removing unreachable block (ram,0x82c030b4) */
/* WARNING: Removing unreachable block (ram,0x82c031d4) */

undefined8 fn_82C02F30(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  int *piVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [80];
  
  (**(code **)(*param_2 + 4))(param_2);
  (**(code **)(*param_1 + 0x4c))(param_1);
  param_1[0xd] = (int)param_2;
  piVar4 = param_1 + 0xa8;
  uVar1 = fn_82C0A1A0(piVar4);
  if (uVar1 == 0) {
    *(int **)(*piVar4 + 0x250) = param_1;
    iVar2 = (**(code **)(*param_2 + 0x24))(param_2);
    if (iVar2 != 0) {
      (**(code **)(*param_2 + 0x28))(param_2,auStack_58);
    }
    uVar1 = fn_82C0A230(*piVar4,0);
  }
  if (uVar1 == 0) {
    uVar1 = fn_82C0A260(*piVar4,0,0,0,0,0,auStack_50,param_1[0xa5] & 0xffff);
  }
  if (uVar1 == 0) {
    piVar5 = param_1 + 0x1f;
    (**(code **)(param_1[0x1f] + 0x24))(piVar5,1);
    (**(code **)(param_1[0x1f] + 0x28))(piVar5,6);
    fn_829E4B18(piVar5,0);
    fn_82C00450(piVar5,0);
    fn_82C005B0(piVar5,0);
    fn_82C00458(piVar5,0);
    (**(code **)(param_1[0x1f] + 0x2c))(piVar5,0);
    fn_82C00460(piVar5,0);
    fn_82C005C0((double)lbl_821AAD20,piVar5);
    fn_82C005B8(piVar5,0);
    uVar1 = fn_82C09EB8(*piVar4,auStack_60);
    if (uVar1 == 0) {
      uVar1 = 1;
    }
  }
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else if ((uVar1 < 0xc) || (0xe < uVar1)) {
    uVar3 = 0xffffffff80004005;
  }
  else {
    uVar3 = 0xffffffffc00d28b0;
  }
  return uVar3;
}

