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
extern int fn_82D438E0();
extern unsigned int lbl_821388B0;
extern unsigned int lbl_821388C0;
extern unsigned int lbl_821388E4;
extern unsigned int lbl_82138924;


undefined4 * fn_82D3B3E8(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (param_1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  fn_82D438E0();
  *param_1 = &lbl_821388E4;
  param_1[4] = &lbl_821388C0;
  if (param_2 != 0) {
    iVar2 = 0;
    if (0 < (int)param_1[0x2e]) {
      iVar4 = 0;
      iVar3 = 0;
      do {
        iVar6 = iVar3 + param_1[0x2d];
        if (*(undefined4 **)(iVar4 + param_1[0x3c]) != (undefined4 *)0x0) {
          **(undefined4 **)(iVar4 + param_1[0x3c]) = &lbl_82138924;
        }
        iVar1 = *(int *)(iVar4 + param_1[0x3c]);
        *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(iVar1 + 8);
        if (*(char *)(iVar6 + 0x48) == '\x01') {
          uVar5 = *(undefined4 *)(iVar1 + 0x14);
        }
        else if (*(char *)(iVar6 + 0x48) == '\x02') {
          uVar5 = *(undefined4 *)(iVar1 + 0x20);
        }
        else {
          uVar5 = *(undefined4 *)(iVar1 + 0x2c);
        }
        *(undefined4 *)(iVar6 + 0x40) = uVar5;
        if (*(char *)(iVar6 + 1) == '\x01') {
          uVar5 = *(undefined4 *)(iVar1 + 0x38);
        }
        else {
          uVar5 = *(undefined4 *)(iVar1 + 0x5c);
        }
        *(undefined4 *)(iVar6 + 4) = uVar5;
        if (*(int *)(iVar1 + 0x54) == 0) {
          uVar5 = *(undefined4 *)(iVar1 + 0x44);
        }
        else {
          uVar5 = *(undefined4 *)(iVar1 + 0x50);
        }
        *(undefined4 *)(iVar6 + 0xc) = uVar5;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x60;
        iVar4 = iVar4 + 4;
      } while (iVar2 < (int)param_1[0x2e]);
    }
    iVar2 = 0;
    if (0 < (int)param_1[0x31]) {
      iVar4 = 0;
      iVar3 = 0;
      do {
        iVar6 = iVar3 + param_1[0x30];
        if (*(undefined4 **)(iVar4 + param_1[0x3f]) != (undefined4 *)0x0) {
          **(undefined4 **)(iVar4 + param_1[0x3f]) = &lbl_821388B0;
        }
        iVar1 = *(int *)(iVar4 + param_1[0x3f]);
        if (*(char *)(iVar6 + 1) == '\x01') {
          uVar5 = *(undefined4 *)(iVar1 + 8);
        }
        else {
          uVar5 = *(undefined4 *)(iVar1 + 0x20);
        }
        *(undefined4 *)(iVar6 + 4) = uVar5;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x40;
        iVar4 = iVar4 + 4;
        *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(iVar1 + 0x14);
      } while (iVar2 < (int)param_1[0x31]);
    }
  }
  return param_1;
}

