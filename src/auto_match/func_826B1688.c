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
extern unsigned int *auStack_70;
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_82695750();
extern int fn_82696330();
extern int fn_826A1CC8();
extern int fn_826B14D8();
extern int fn_826C3560();
extern unsigned int iStack_64;
extern unsigned int iStack_68;


void fn_826B1688(undefined8 param_1,int *param_2,int *param_3,undefined1 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_70 [8];
  int iStack_68;
  int iStack_64;
  byte bStack_60;
  undefined1 auStack_50 [80];
  
  uVar1 = *(undefined4 *)(*param_2 + 0x288);
  uVar3 = fn_826B14D8(*param_2,7);
  iVar2 = *param_3;
  while (iVar2 != 0) {
    auStack_70[0] = param_4;
    uVar4 = fn_8267B890(uVar1,0x34,0);
    if ((uVar4 & 0xffffffff) == 0) {
      iStack_68 = 0;
    }
    else {
      iStack_68 = fn_826C3560(uVar4,param_2,uVar3,param_3[1]);
    }
    bStack_60 = 0;
    iStack_64 = 0;
    fn_82695750(auStack_50,&iStack_68);
    fn_826A1CC8(param_1,param_2,*param_3,auStack_50,auStack_70);
    fn_82696330(auStack_50);
    if (((bStack_60 & 2) == 0) && (iStack_68 != 0)) {
      fn_826824B0();
    }
    iStack_68 = 0;
    if (((bStack_60 & 1) == 0) && (iStack_64 != 0)) {
      fn_826824B0();
    }
    param_3 = param_3 + 2;
    iVar2 = *param_3;
    iStack_64 = 0;
  }
  return;
}

