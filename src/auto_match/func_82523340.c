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
extern int fn_82523B00();
extern int fn_82524388();
extern int fn_8252DAB8();
extern int fn_82A1DD38();
extern int fn_82A81CC0();
extern int fn_82A81D40();
extern unsigned int lbl_821C2FA8;


int fn_82523340(int param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_50 [80];
  
  puVar2 = (undefined4 *)fn_8252DAB8();
  *puVar2 = &lbl_821C2FA8;
  puVar2[0xc660] = param_5;
  fn_82523B00();
  *(undefined4 *)(param_1 + 0x9c0) = param_6;
  *(undefined4 *)(param_1 + 0x9c8) = param_7;
  *(undefined1 *)(param_1 + 0xb64) = 1;
  iVar5 = param_1 + 0x1e0;
  *(uint *)(param_1 + 0x9b4) = (uint)LZCOUNT(param_8) >> 5;
  fn_82A1DD38(iVar5,param_2,1000);
  fn_82A1DD38(param_1 + 0x5c8,param_2,1000);
  if (param_3 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x9cc) = 0;
    *(undefined4 *)(param_1 + 0x9d0) = 0;
    *(undefined4 *)(param_1 + 0x9d4) = 0;
    *(undefined4 *)(param_1 + 0x9d8) = 0;
    *(undefined4 *)(param_1 + 0x9e8) = 0;
    *(undefined4 *)(param_1 + 0x9ec) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x9cc) = *param_3;
    *(undefined4 *)(param_1 + 0x9d0) = param_3[1];
    *(undefined4 *)(param_1 + 0x9d4) = param_3[2];
    *(undefined4 *)(param_1 + 0x9d8) = param_3[3];
    *(undefined4 *)(param_1 + 0x9e8) = param_3[7];
    *(undefined4 *)(param_1 + 0x9ec) = param_3[8];
  }
  if (param_4 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x9f0) = 0;
    *(undefined4 *)(param_1 + 0x9f4) = 0;
    *(undefined4 *)(param_1 + 0x9f8) = 0;
    *(undefined4 *)(param_1 + 0x9fc) = 0;
    *(undefined4 *)(param_1 + 0xa0c) = 0;
    *(undefined4 *)(param_1 + 0xa10) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x9f0) = *param_4;
    *(undefined4 *)(param_1 + 0x9f4) = param_4[1];
    *(undefined4 *)(param_1 + 0x9f8) = param_4[2];
    *(undefined4 *)(param_1 + 0x9fc) = param_4[3];
    *(undefined4 *)(param_1 + 0xa0c) = param_4[7];
    *(undefined4 *)(param_1 + 0xa10) = param_4[8];
  }
  cVar3 = fn_82A81CC0(iVar5);
  uVar6 = 0;
  if (cVar3 == '\x01') {
    if (*(int *)(param_1 + 0x9cc) != 0) {
      iVar7 = 0;
      do {
        piVar4 = (int *)(*(int *)(param_1 + 0x9d8) + iVar7);
        iVar1 = *piVar4;
        if (iVar1 != 0) {
          fn_82A81D40(iVar1,piVar4[1],0,auStack_50,iVar5);
        }
        uVar6 = uVar6 + 1;
        iVar7 = iVar7 + 8;
      } while (uVar6 < *(uint *)(param_1 + 0x9cc));
    }
    *(undefined4 *)(param_1 + 0x9b0) = 1;
  }
  else {
    if (*(int *)(param_1 + 0x9f0) != 0) {
      iVar7 = 0;
      do {
        piVar4 = (int *)(iVar7 + *(int *)(param_1 + 0x9fc));
        iVar1 = *piVar4;
        if (iVar1 != 0) {
          fn_82A81D40(iVar1,piVar4[1],0,auStack_50,iVar5);
        }
        uVar6 = uVar6 + 1;
        iVar7 = iVar7 + 8;
      } while (uVar6 < *(uint *)(param_1 + 0x9f0));
    }
    *(undefined4 *)(param_1 + 0x9b0) = 0;
  }
  fn_82524388(param_1);
  return param_1;
}

