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
extern int fn_82C5E098();
extern int fn_82C5E568();
extern int fn_82C5F038();
extern int fn_82C64FC0();
extern int fn_82C65130();
extern int fn_82C65408();
extern int fn_82C65578();
extern int fn_82C66FC0();
extern int fn_82C68D68();
extern int fn_82C7AA08();
extern int fn_82C902D0();
extern int fn_82C91F40();
extern int fn_82C9A740();
extern int fn_82CA50F8();
extern int fn_82CA7BC0();
extern int fn_82CAFB90();
extern int fn_82CB0840();
extern int fn_82CB1DF0();
extern int fn_82CB34C0();
extern int fn_82D7EA10();
extern unsigned int lbl_820FC6D8;
extern unsigned int lbl_820FC718;
extern unsigned int lbl_820FC758;
extern unsigned int lbl_820FC7C0;
extern unsigned int lbl_820FC800;
extern unsigned int lbl_820FC868;
extern unsigned int lbl_820FC8D0;
extern unsigned int lbl_820FC910;
extern unsigned int lbl_820FCB38;
extern unsigned int lbl_820FCB5C;
extern unsigned int lbl_820FCB80;
extern unsigned int lbl_820FCBA4;
extern unsigned int lbl_820FCBC8;
extern unsigned int lbl_820FCBDC;
extern unsigned int lbl_820FCBF0;
extern unsigned int lbl_820FCC30;
extern unsigned int lbl_820FCCA8;
extern unsigned int lbl_820FCCE8;
extern unsigned int lbl_82C85178;


void fn_82C53608(int param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  
  iVar1 = *(int *)(param_1 + 0x3cb0);
  *(undefined4 *)(param_1 + 0x3ce0) = 1;
  if ((iVar1 == 5) || (5 < iVar1)) {
    *(undefined **)(param_1 + 0x730) = &lbl_820FCB38;
    *(undefined **)(param_1 + 0x734) = &lbl_820FCB5C;
    *(undefined **)(param_1 + 0x738) = &lbl_820FCB80;
    *(undefined **)(param_1 + 0x73c) = &lbl_820FCBA4;
    *(undefined **)(param_1 + 0x74c) = &lbl_820FCBC8;
    *(undefined **)(param_1 + 0x750) = &lbl_820FCBDC;
    if (iVar1 == 7) {
      *(undefined **)(param_1 + 0x748) = &lbl_820FCBDC;
    }
    if (iVar1 == 5) {
      *(undefined4 *)(param_1 + 0x1b4) = 1;
      *(undefined4 *)(param_1 + 0x1bc) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x1b4) = 0;
      *(undefined4 *)(param_1 + 0x1bc) = 0;
    }
  }
  if (iVar1 < 4) {
    *(undefined **)(param_1 + 0x70c) = &lbl_820FCC30;
    *(undefined **)(param_1 + 0x718) = &lbl_820FCBF0;
    *(undefined **)(param_1 + 0x710) = &lbl_820FCCA8;
    *(undefined **)(param_1 + 0x714) = &lbl_820FCCE8;
    *(undefined **)(param_1 + 0x71c) = &lbl_820FCCE8;
    *(undefined **)(param_1 + 0x720) = &lbl_820FCCA8;
    *(undefined **)(param_1 + 0x724) = &lbl_820FCBF0;
    *(undefined **)(param_1 + 0x728) = &lbl_820FCC30;
    *(code **)(param_1 + 0xc20) = fn_82C68D68;
  }
  else {
    *(undefined **)(param_1 + 0x70c) = &lbl_820FC868;
    *(undefined **)(param_1 + 0xc20) = &fn_82CB1DF0;
    *(undefined **)(param_1 + 0x718) = &lbl_820FC758;
    *(undefined **)(param_1 + 0x710) = &lbl_820FC8D0;
    *(undefined **)(param_1 + 0x714) = &lbl_820FC910;
    *(undefined **)(param_1 + 0x71c) = &lbl_820FC6D8;
    *(undefined **)(param_1 + 0x720) = &lbl_820FC718;
    *(undefined **)(param_1 + 0x724) = &lbl_820FC7C0;
    *(undefined **)(param_1 + 0x728) = &lbl_820FC800;
    fn_82C5E098(param_1);
  }
  uVar2 = *(uint *)(param_1 + 0x3cb0);
  if (uVar2 == 7) {
    *(undefined4 *)(param_1 + 0x740) = *(undefined4 *)(param_1 + 0x730);
    *(undefined4 *)(param_1 + 0x744) = *(undefined4 *)(param_1 + 0x734);
    *(undefined4 *)(param_1 + 0x748) = *(undefined4 *)(param_1 + 0x74c);
    *(undefined4 *)(param_1 + 0x708) = 0;
    *(undefined4 *)(param_1 + 0x72c) = *(undefined4 *)(param_1 + 0x728);
    *(undefined4 *)(param_1 + 0x5110) = *(undefined4 *)(param_1 + 0x710);
    *(undefined4 *)(param_1 + 0x5114) = *(undefined4 *)(param_1 + 0x714);
    if (*(int *)(param_1 + 0x700) != 0) {
      *(undefined4 *)(param_1 + 0x708) = 1;
      *(undefined4 *)(param_1 + 0x72c) = *(undefined4 *)(param_1 + 0x724);
      *(undefined4 *)(param_1 + 0x740) = *(undefined4 *)(param_1 + 0x738);
      *(undefined4 *)(param_1 + 0x744) = *(undefined4 *)(param_1 + 0x73c);
      *(undefined4 *)(param_1 + 0x748) = *(undefined4 *)(param_1 + 0x750);
      *(undefined4 *)(param_1 + 0x5110) = *(undefined4 *)(param_1 + 0x71c);
      *(undefined4 *)(param_1 + 0x5114) = *(undefined4 *)(param_1 + 0x720);
    }
  }
  *(code **)(param_1 + 0x3ddc) = fn_82C5E568;
  *(code **)(param_1 + 0x3de0) = fn_82C5F038;
  *(code **)(param_1 + 0xc18) = fn_82CB0840;
  if ((int)uVar2 < 6) {
    *(code **)(param_1 + 0xc14) = fn_82D7EA10;
  }
  else {
    *(code **)(param_1 + 0x3de0) = fn_82C9A740;
    *(code **)(param_1 + 0xc14) = fn_82C91F40;
    *(code **)(param_1 + 0xc1c) = fn_82C902D0;
  }
  if (uVar2 == 0) {
    *(undefined4 *)(param_1 + 0x794) = 1;
    *(undefined4 *)(param_1 + 0x3cac) = *(undefined4 *)(param_1 + 0x8c);
    *(code **)(param_1 + 0xc78) = fn_82C66FC0;
    *(code **)(param_1 + 0xc24) = fn_82C65408;
    *(code **)(param_1 + 0xc28) = fn_82C65578;
    *(undefined **)(param_1 + 0x50f4) = &lbl_82C85178;
  }
  else {
    *(uint *)(param_1 + 0x790) = ((int)uVar2 >> 0x1f) + (uint)(2 < uVar2);
    *(uint *)(param_1 + 0x794) = ((int)uVar2 >> 0x1f) + (uint)(3 < uVar2);
    if (*(code **)(param_1 + 0xc80) == fn_82C7AA08) {
      pcVar3 = fn_82CAFB90;
    }
    else {
      pcVar3 = fn_82CB34C0;
    }
    *(code **)(param_1 + 0xc78) = pcVar3;
    if ((int)uVar2 < 3) {
      *(code **)(param_1 + 0xc24) = fn_82C64FC0;
      *(code **)(param_1 + 0xc28) = fn_82C65130;
      *(undefined **)(param_1 + 0x50f4) = &lbl_82C85178;
    }
    else {
      *(code **)(param_1 + 0xc24) = fn_82CA7BC0;
      *(code **)(param_1 + 0xc28) = fn_82CA50F8;
      *(undefined **)(param_1 + 0x50f4) = &lbl_82C85178;
    }
  }
  return;
}

