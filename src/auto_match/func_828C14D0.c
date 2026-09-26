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
extern int fn_825089A0();
extern int fn_8265C9E0();
extern int fn_828C0B08();
extern int fn_828C11D0();
extern int fn_828C1398();


void fn_828C14D0(int param_1,ulonglong param_2,ulonglong *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar5;
  undefined8 uVar3;
  undefined8 *puVar6;
  ulonglong uVar4;
  int *piVar7;
  undefined4 **ppuVar8;
  undefined4 *puStack_40;
  undefined4 *apuStack_3c [15];
  
  piVar5 = *(int **)(param_1 + 0x2c);
  piVar7 = (int *)*piVar5;
  if (piVar7 != piVar5) {
    do {
      if ((*(ulonglong *)(piVar7[2] + 8) == *param_3) &&
         ((ulonglong)*(uint *)(piVar7[2] + 0x48) == (param_2 & 0xffffffff))) {
        return;
      }
      piVar7 = (int *)*piVar7;
    } while (piVar7 != piVar5);
  }
  piVar5 = (int *)fn_825089A0();
  uVar3 = (**(code **)(*piVar5 + 0xc))();
  puStack_40 = *(undefined4 **)(param_1 + 0x3c);
  if (*(char *)((int)puStack_40[1] + 0x21) == '\0') {
    puVar1 = (undefined4 *)puStack_40[1];
    do {
      if (*(ulonglong *)(puVar1 + 4) < *param_3) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puStack_40 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x21) == '\0');
  }
  if ((puStack_40 == *(undefined4 **)(param_1 + 0x3c)) ||
     (*param_3 < *(ulonglong *)(puStack_40 + 4))) {
    ppuVar8 = apuStack_3c;
    apuStack_3c[0] = *(undefined4 **)(param_1 + 0x3c);
  }
  else {
    ppuVar8 = &puStack_40;
  }
  if (*ppuVar8 == *(undefined4 **)(param_1 + 0x3c)) {
    puVar6 = (undefined8 *)fn_828C1398(param_1 + 0x38,param_3);
    *puVar6 = uVar3;
    if (*(uint *)(param_1 + 0x30) < 5) {
      uVar4 = fn_8265C9E0(0x50);
      if ((uVar4 & 0xffffffff) == 0) {
        puStack_40 = (undefined4 *)0x0;
      }
      else {
        puStack_40 = (undefined4 *)fn_828C11D0(uVar4,param_2,param_3,param_4);
      }
      fn_828C0B08((undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x2c),&puStack_40);
    }
  }
  return;
}

