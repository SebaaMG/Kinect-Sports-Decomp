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
extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_826CBFF0();
extern int fn_826CD330();
extern unsigned int lbl_8200BD9C;
extern unsigned int lbl_831E7E64;


void fn_826D06C8(int param_1,ulonglong param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *apuStack_50 [20];
  
  if (*(int *)(param_1 + 0x1b4) == 0) {
    puVar2 = (undefined4 *)fn_8267B890(lbl_831E7E64,0x24,0);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      *puVar2 = 100;
      puVar2[1] = 0;
    }
    *(undefined4 **)(param_1 + 0x1b4) = puVar2;
  }
  uVar3 = 0;
  if (*(int *)(*(int *)(param_1 + 0x1b4) + 0xc) != 0) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1b4) + 8);
      if ((ulonglong)*(uint *)(*(int *)(iVar4 + iVar1) + 8) == (param_2 & 0xffffffff)) {
        iVar4 = *(int *)(uVar3 * 4 + iVar1);
        if (iVar4 != 0) {
          *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
        }
        puVar2 = *(undefined4 **)(uVar3 * 4 + iVar1);
        if (puVar2 != (undefined4 *)0x0) goto LAB_826d0840;
        break;
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (uVar3 < *(uint *)(*(int *)(param_1 + 0x1b4) + 0xc));
  }
  puVar2 = (undefined4 *)fn_8267B890(lbl_831E7E64,0x14,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 1;
    *puVar2 = &lbl_8200BD9C;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
  }
  apuStack_50[0] = puVar2;
  if ((param_2 & 0xffffffff) != 0) {
    fn_8267C4C8(param_2);
  }
  if (puVar2[2] != 0) {
    fn_8267C4F0();
  }
  puVar2[2] = (int)param_2;
  fn_826CD330((ulonglong)*(uint *)(param_1 + 0x1b4) + 8,apuStack_50);
  fn_826CBFF0(param_1,*(undefined4 *)(param_1 + 0xa0));
LAB_826d0840:
  puVar2[3] = param_3;
  puVar2[4] = param_4;
  if (param_4 != 0) {
    *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
    fn_8267C4C8(puVar2[4]);
  }
  fn_8267C498(puVar2);
  return;
}

