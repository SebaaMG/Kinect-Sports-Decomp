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
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8327F894;


void fn_825F88A8(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  uVar2 = lbl_821CC160;
  uVar1 = lbl_821CA460;
  if (param_2 == 0) {
    iVar3 = param_4 * 0x2c + param_1;
    *(undefined1 *)(iVar3 + 0x2a) = 0;
  }
  else {
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x22c)) {
      piVar5 = (int *)(param_1 + 0x210);
      do {
        if (*(char *)((piVar5[1] + 1) * 0x2c + param_1) == '\0') {
          iVar4 = piVar5[1] * 0x2c + param_1;
          *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(iVar4 + 0x10);
          iVar4 = piVar5[1] * 0x2c + param_1;
          *(undefined4 *)(iVar4 + 0x18) = *(undefined4 *)(iVar4 + 0x10);
          *(undefined4 *)(iVar4 + 0x24) = uVar1;
          *(undefined4 *)(iVar4 + 0x1c) = uVar2;
          *(undefined4 *)(iVar4 + 0x20) = lbl_8327F894;
        }
        piVar5 = piVar5 + 1;
        iVar3 = iVar3 + 1;
        iVar4 = (*piVar5 + 1) * 0x2c;
        *(char *)(iVar4 + param_1) = *(char *)(iVar4 + param_1) + '\x01';
      } while (iVar3 < *(int *)(param_1 + 0x22c));
    }
    iVar3 = param_4 * 0x2c + param_1;
    *(undefined1 *)(iVar3 + 0x2a) = 1;
  }
  if (param_3 == 0) {
    *(undefined1 *)(iVar3 + 0x2b) = 0;
  }
  else {
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x248)) {
      piVar5 = (int *)(param_1 + 0x22c);
      do {
        if (*(char *)((piVar5[1] + 1) * 0x2c + param_1) == '\0') {
          iVar6 = piVar5[1] * 0x2c + param_1;
          if (*(float *)(iVar6 + 0x24) <= *(float *)(iVar6 + 0x20)) {
            iVar6 = piVar5[1] * 0x2c + param_1;
            *(undefined4 *)(iVar6 + 0x14) = *(undefined4 *)(iVar6 + 0x10);
          }
          iVar6 = piVar5[1] * 0x2c + param_1;
          *(undefined4 *)(iVar6 + 0x24) = uVar1;
          *(undefined4 *)(iVar6 + 0x1c) = uVar2;
          *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(iVar6 + 0x10);
          *(undefined4 *)(iVar6 + 0x20) = lbl_8327F894;
        }
        piVar5 = piVar5 + 1;
        iVar4 = iVar4 + 1;
        iVar6 = (*piVar5 + 1) * 0x2c;
        *(char *)(iVar6 + param_1) = *(char *)(iVar6 + param_1) + '\x01';
      } while (iVar4 < *(int *)(param_1 + 0x248));
    }
    *(undefined1 *)(iVar3 + 0x2b) = 1;
  }
  return;
}

