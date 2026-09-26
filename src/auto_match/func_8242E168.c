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
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_8225F160();
extern int fn_8229EEA0();
extern int fn_823599A8();
extern int fn_82359C18();
extern int fn_8242E3E0();
extern int fn_82430D80();
extern int fn_82522588();
extern unsigned int iStack_44;
extern unsigned int lbl_821B90AC;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_8242E168(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 auStack_50 [2];
  undefined1 auStack_48 [4];
  int iStack_44;
  undefined **ppuStack_40;
  undefined4 *puStack_3c;
  undefined ***pppuStack_30;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x174) + 0x5c);
  iVar1 = **(int **)(iVar4 + 0x1e0);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1d0) == 1)) {
    *(undefined4 *)(iVar1 + 0x1d0) = 0;
  }
  *(undefined4 *)(*(int *)(iVar4 + 0x1e0) + 0x2c) = 1;
  for (uVar5 = (ulonglong)*(uint *)(param_1 + 0x30);
      (uVar5 & 0xffffffff) != (ulonglong)*(uint *)(param_1 + 0x34); uVar5 = uVar5 + 8) {
    puVar3 = (undefined4 *)fn_82522588(auStack_48,uVar5);
    fn_82430D80(*puVar3,0xc,2);
    if (iStack_44 != 0) {
      fn_822315A0();
    }
  }
  if (*(int *)(*(int *)(param_1 + 0x94) + 0x5c) != 0) {
    fn_8229EEA0();
  }
  *(undefined4 *)(*(int *)(param_1 + 0x174) + 0x120) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x174) + 0x170) = 0xffffffff;
  iVar4 = fn_8225F160();
  if (*(int *)(iVar4 + 8) == 1) {
    if (*(int *)(*(int *)(*(int *)(param_1 + 0x174) + 0x5c) + 0x1d4) == -1) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(param_1 + 0x174) + 0x5c);
      iVar4 = *(int *)(*(int *)(iVar4 + 0x1d4) * 4 + *(int *)(iVar4 + 0x1c4));
    }
    if ((*(int *)(*(int *)(iVar4 + 0x40) + 0xf8) != 0) &&
       (iVar4 = fn_8242E3E0(param_1), iVar4 == 0)) {
      auStack_50[0] = 0;
      puStack_3c = auStack_50;
      pppuStack_30 = &ppuStack_40;
      ppuStack_40 = &lbl_821B90AC;
      fn_823599A8(param_1,&ppuStack_40);
      fn_82359C18(&ppuStack_40);
    }
  }
  iVar4 = fn_8242E3E0(param_1);
  if ((iVar4 != 0) &&
     (iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x174) + 0x9c) + 0x93c), iVar4 != 0)) {
    *(undefined1 *)(iVar4 + 0x30) = 0;
    uVar2 = lbl_821CC160;
    *(undefined4 *)(iVar4 + 0x50) = lbl_821CA460;
    *(undefined4 *)(iVar4 + 0x54) = uVar2;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x174) + 300) = 1;
  *(undefined4 *)(*(int *)(param_1 + 0x174) + 0x11c) = 0;
  return;
}

