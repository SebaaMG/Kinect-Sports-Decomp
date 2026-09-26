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
extern int fn_82C53370();
extern int fn_82C75268();
extern int fn_82C9CDC8();
extern int fn_82C9CF48();
extern int fn_82C9D6E0();
extern int fn_82C9D898();
extern int fn_82C9D938();
extern int fn_82C9DAC8();
extern int fn_82CA2398();
extern int fn_82CAECC8();
extern int fn_82CB49E0();
extern int fn_82CB5E78();
extern int fn_82CB7520();
extern int fn_82CB7B10();
extern int fn_82CB83B8();
extern int fn_82CB8A40();
extern int fn_82CB92E8();


void fn_82C53488(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  code *pcVar4;
  
  iVar1 = fn_82C53370(param_1,1);
  *(undefined4 *)(iVar1 + 0x72c) = *(undefined4 *)(iVar1 + 0x728);
  *(undefined4 *)(iVar1 + 0x740) = *(undefined4 *)(iVar1 + 0x730);
  *(undefined4 *)(iVar1 + 0x744) = *(undefined4 *)(iVar1 + 0x734);
  *(undefined4 *)(iVar1 + 0x748) = *(undefined4 *)(iVar1 + 0x74c);
  if (*(int *)(iVar1 + 0x700) != 0) {
    *(undefined4 *)(iVar1 + 0x708) = 1;
    *(undefined4 *)(iVar1 + 0x72c) = *(undefined4 *)(iVar1 + 0x724);
    *(undefined4 *)(iVar1 + 0x740) = *(undefined4 *)(iVar1 + 0x738);
    *(undefined4 *)(iVar1 + 0x744) = *(undefined4 *)(iVar1 + 0x73c);
    *(undefined4 *)(iVar1 + 0x748) = *(undefined4 *)(iVar1 + 0x750);
  }
  fn_82CA2398(param_1,*(undefined4 *)(param_1 + 0x5118));
  if (*(int *)(param_1 + 0x708) == 0) {
    *(undefined4 *)(param_1 + 0x784) = 0;
    *(undefined4 *)(param_1 + 0x780) = 8;
    *(undefined4 *)(param_1 + 0x788) = 3;
    *(undefined4 *)(param_1 + 0x78c) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x780) = 0;
    *(undefined4 *)(param_1 + 0x784) = 8;
    *(undefined4 *)(param_1 + 0x788) = 0;
    *(undefined4 *)(param_1 + 0x78c) = 3;
  }
  uVar2 = fn_82C9D898();
  *(undefined4 *)(param_1 + 0x108) = uVar2;
  *(code **)(param_1 + 0xc54) = fn_82CB92E8;
  *(code **)(param_1 + 0xc34) = fn_82CB7520;
  *(code **)(param_1 + 0xc38) = fn_82CB7B10;
  *(code **)(param_1 + 0xc3c) = fn_82CB83B8;
  *(code **)(param_1 + 0xc40) = fn_82CB8A40;
  *(code **)(param_1 + 0xc4c) = fn_82CB49E0;
  *(code **)(param_1 + 0xc50) = fn_82CB5E78;
  if (*(int *)(param_1 + 0xfac) == 0) {
    pcVar4 = fn_82C9CDC8;
    pcVar3 = fn_82C9CF48;
  }
  else {
    pcVar4 = fn_82C9D938;
    pcVar3 = fn_82C9DAC8;
  }
  *(code **)(param_1 + 0x3e3c) = pcVar3;
  *(code **)(param_1 + 0x3e38) = pcVar4;
  *(code **)(param_1 + 0xbac) = fn_82C9D6E0;
  *(code **)(param_1 + 0x3e34) = fn_82C75268;
  fn_82CAECC8(param_1);
  return;
}

