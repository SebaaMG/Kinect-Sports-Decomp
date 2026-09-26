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
extern unsigned int lbl_821CA460;
extern unsigned int lbl_8327F894;


void fn_825F8A48(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  uVar2 = lbl_821CA460;
  if (param_2 != 0) {
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x22c)) {
      piVar4 = (int *)(param_1 + 0x214);
      do {
        if ('\0' < *(char *)((*piVar4 + 1) * 0x2c + param_1)) {
          iVar5 = (*piVar4 + 1) * 0x2c;
          *(char *)(iVar5 + param_1) = *(char *)(iVar5 + param_1) + -1;
          if (*(char *)((*piVar4 + 1) * 0x2c + param_1) == '\0') {
            iVar5 = *piVar4 * 0x2c + param_1;
            uVar1 = *(undefined4 *)(*piVar4 * 0x2c + param_1 + 0x14);
            *(undefined4 *)(iVar5 + 0x24) = uVar2;
            *(undefined4 *)(iVar5 + 0x1c) = uVar1;
            *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar5 + 0x10);
            *(undefined4 *)(iVar5 + 0x20) = lbl_8327F894;
          }
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x22c));
    }
  }
  if (param_3 == 0) {
    return;
  }
  iVar3 = 0;
  if (*(int *)(param_1 + 0x248) < 1) {
    return;
  }
  piVar4 = (int *)(param_1 + 0x230);
  do {
    if ('\0' < *(char *)((*piVar4 + 1) * 0x2c + param_1)) {
      iVar5 = (*piVar4 + 1) * 0x2c;
      *(char *)(iVar5 + param_1) = *(char *)(iVar5 + param_1) + -1;
      if (*(char *)((*piVar4 + 1) * 0x2c + param_1) == '\0') {
        iVar5 = *piVar4 * 0x2c + param_1;
        *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)(*piVar4 * 0x2c + param_1 + 0x14);
        *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar5 + 0x10);
        *(undefined4 *)(iVar5 + 0x24) = uVar2;
        *(undefined4 *)(iVar5 + 0x20) = lbl_8327F894;
      }
    }
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar3 < *(int *)(param_1 + 0x248));
  return;
}

