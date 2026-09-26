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
extern unsigned int *auStack_2c;
extern unsigned int *auStack_30;
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82520158();
extern int fn_8262FEC8();
extern int fn_82631830();
extern int fn_82631BF8();
extern int fn_826438C0();


int fn_82581270(int param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_30 [4];
  undefined4 auStack_2c [11];
  
  iVar4 = (param_2 + 2) * 4;
  if (*(int *)(iVar4 + param_1) != 0) {
    return *(int *)(iVar4 + param_1);
  }
  switch(param_2) {
  case 0:
    fn_82520158(0xffffffff821c5620,auStack_30,0);
    uVar1 = 0xffffffff831c0dc8;
    goto LAB_825812e4;
  case 1:
    fn_82520158(0xffffffff821c5648,auStack_30,0);
    uVar1 = 0xffffffff831c0e28;
    goto LAB_825812e4;
  case 2:
    fn_82520158(0xffffffff821c5670,auStack_30,0);
    uVar1 = 0xffffffff831c0e88;
LAB_825812e4:
    uVar1 = fn_82631BF8(uVar1);
    auStack_2c[0] = 0x58;
    goto LAB_825814f0;
  case 3:
    uVar1 = 0xffffffff821c56a0;
    goto LAB_82581340;
  case 4:
    uVar1 = 0xffffffff821c56c4;
    goto LAB_82581364;
  case 5:
    uVar1 = 0xffffffff821c56e4;
    break;
  case 6:
    uVar1 = 0xffffffff821c570c;
    goto LAB_825814d4;
  case 7:
    uVar1 = 0xffffffff821c5738;
    goto LAB_82581340;
  case 8:
    uVar1 = 0xffffffff821c5764;
    goto LAB_82581364;
  case 9:
    uVar1 = 0xffffffff821c578c;
    break;
  case 10:
    uVar1 = 0xffffffff821c57bc;
    goto LAB_825814d4;
  case 0xb:
    uVar1 = 0xffffffff821c57f0;
    goto LAB_82581364;
  case 0xc:
    uVar1 = 0xffffffff821c5818;
    break;
  case 0xd:
    uVar1 = 0xffffffff821c5848;
    goto LAB_825814d4;
  case 0xe:
    uVar1 = 0xffffffff821c587c;
    goto LAB_82581364;
  case 0xf:
    uVar1 = 0xffffffff821c58ac;
    break;
  case 0x10:
    uVar1 = 0xffffffff821c58e4;
    goto LAB_825814d4;
  case 0x11:
    uVar1 = 0xffffffff821c5920;
    break;
  case 0x12:
    uVar1 = 0xffffffff821c594c;
    break;
  case 0x13:
    uVar1 = 0xffffffff821c5980;
    goto LAB_82581340;
  case 0x14:
    uVar1 = 0xffffffff821c59ac;
    goto LAB_82581364;
  case 0x15:
    uVar1 = 0xffffffff821c59d4;
    break;
  case 0x16:
    uVar1 = 0xffffffff821c5a04;
    goto LAB_825814d4;
  case 0x17:
    uVar1 = 0xffffffff821c5a38;
    goto LAB_82581340;
  case 0x18:
    uVar1 = 0xffffffff821c5a6c;
    goto LAB_82581364;
  case 0x19:
    uVar1 = 0xffffffff821c5a9c;
    break;
  case 0x1a:
    uVar1 = 0xffffffff821c5ad4;
    goto LAB_825814d4;
  case 0x1b:
    uVar1 = 0xffffffff821c5b10;
LAB_82581340:
    fn_82520158(uVar1,auStack_30,0);
    uVar1 = 0xffffffff831c0bd4;
    goto LAB_825814e8;
  case 0x1c:
    uVar1 = 0xffffffff821c5b10;
LAB_82581364:
    fn_82520158(uVar1,auStack_30,0);
    uVar1 = 0xffffffff831c0cd8;
    goto LAB_8258137c;
  case 0x1d:
    uVar1 = 0xffffffff821c5b10;
    break;
  case 0x1e:
    uVar1 = 0xffffffff821c5b10;
LAB_825814d4:
    fn_82520158(uVar1,auStack_30,0);
    uVar1 = 0xffffffff831c0d68;
LAB_825814e8:
    uVar1 = fn_82631BF8(uVar1);
    auStack_2c[0] = 0x28;
    goto LAB_825814f0;
  default:
    return 0;
  }
  fn_82520158(uVar1,auStack_30,0);
  uVar1 = 0xffffffff831c0d20;
LAB_8258137c:
  uVar1 = fn_82631BF8(uVar1);
  auStack_2c[0] = 0x20;
LAB_825814f0:
  uVar2 = fn_8251F720(auStack_30,0);
  uVar3 = fn_82631830();
  *(undefined4 *)(iVar4 + param_1) = uVar3;
  fn_8251FA58(uVar2);
  if (*(int *)(iVar4 + param_1) != 0) {
    fn_826438C0(*(int *)(iVar4 + param_1),0,uVar1,auStack_2c,0);
  }
  fn_8262FEC8(uVar1);
  return *(int *)(iVar4 + param_1);
}

