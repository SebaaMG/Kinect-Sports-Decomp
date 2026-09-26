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
extern unsigned int *auStack_40;
extern unsigned int *auStack_5e;
extern int fn_8267B890();
extern int fn_82681728();
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_82696330();
extern int fn_826A4BB0();
extern int fn_826A8330();
extern int fn_826B10D8();
extern int fn_826B1150();
extern unsigned int iStack_54;
extern unsigned int iStack_58;
extern unsigned int iStack_5c;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_5f;
extern unsigned int uStack_60;


void fn_826B2290(uint param_1,char param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 auStack_5e [2];
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  uint uStack_50;
  undefined1 uStack_4c;
  undefined1 auStack_40 [64];
  
  if (param_2 == '\0') {
    if (*(int *)(param_1 + 0x2a0) != 0) {
      fn_826824B0();
    }
    *(undefined4 *)(param_1 + 0x2a0) = 0;
  }
  else {
    uVar1 = fn_8267B890(*(undefined4 *)(param_1 + 0x288),0x34,0);
    if ((uVar1 & 0xffffffff) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = fn_826A8330(uVar1,param_1);
    }
    uStack_4c = 8;
    uStack_50 = param_1;
    fn_82681728(&iStack_54,param_1 + 0x254,0xffffffff82007a14);
    fn_82681728(&iStack_58,(ulonglong)uStack_50 + 0x254,0xffffffff82007a08);
    fn_82681728(&iStack_5c,(ulonglong)uStack_50 + 0x254,0xffffffff82007a00);
    auStack_40[0] = 0;
    (**(code **)(*(int *)(*(int *)(param_1 + 0x2a0) + 0x10) + 0x2c))
              (*(int *)(param_1 + 0x2a0) + 0x10,&uStack_50,&iStack_54,auStack_40);
    uStack_60 = 0;
    iVar4 = iVar2 + 0x10;
    (**(code **)(*(int *)(iVar2 + 0x10) + 0x28))(iVar4,&uStack_50,&iStack_54,auStack_40,&uStack_60);
    (**(code **)(*(int *)(*(int *)(param_1 + 0x2a0) + 0x10) + 0x2c))
              (*(int *)(param_1 + 0x2a0) + 0x10,&uStack_50,&iStack_58,auStack_40);
    uStack_5f = 0;
    (**(code **)(*(int *)(iVar2 + 0x10) + 0x28))(iVar4,&uStack_50,&iStack_58,auStack_40,&uStack_5f);
    (**(code **)(*(int *)(*(int *)(param_1 + 0x2a0) + 0x10) + 0x2c))
              (*(int *)(param_1 + 0x2a0) + 0x10,&uStack_50,&iStack_5c,auStack_40);
    auStack_5e[0] = 0;
    (**(code **)(*(int *)(iVar2 + 0x10) + 0x28))(iVar4,&uStack_50,&iStack_5c,auStack_40,auStack_5e);
    *(uint *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1U & 0x8fffffff;
    if (*(int *)(param_1 + 0x2a0) != 0) {
      fn_826824B0();
    }
    *(int *)(param_1 + 0x2a0) = iVar2;
    fn_82696330(auStack_40);
    lVar3 = (ulonglong)*(uint *)(iStack_5c + 8) - 1;
    *(int *)(iStack_5c + 8) = (int)lVar3;
    if (lVar3 == 0) {
      fn_826944C8(iStack_5c);
    }
    lVar3 = (ulonglong)*(uint *)(iStack_58 + 8) - 1;
    *(int *)(iStack_58 + 8) = (int)lVar3;
    if (lVar3 == 0) {
      fn_826944C8(iStack_58);
    }
    lVar3 = (ulonglong)*(uint *)(iStack_54 + 8) - 1;
    *(int *)(iStack_54 + 8) = (int)lVar3;
    if (lVar3 == 0) {
      fn_826944C8(iStack_54);
    }
    fn_826824B0(iVar2);
  }
  fn_826B1150(param_1 + 0x27c);
  fn_826B10D8(param_1 + 0x280);
  fn_826A4BB0(param_1 + 0x278);
  *(undefined4 *)(param_1 + 0x284) = 0;
  return;
}

