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
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8252CF08();
extern int fn_8252D108();
extern int fn_8252D240();
extern int fn_825A23C0();
extern int fn_8265C9E0();


void fn_8252CDB8(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  piVar8 = (int *)(param_1 + 0x180);
  if (*(int *)(param_2 + 0xe4) != 0) {
    if (*piVar8 != 0) {
      if (*(int *)(param_1 + 0x184) != 0) {
        fn_8251FA58();
      }
      *piVar8 = 0;
    }
    piVar2 = (int *)fn_8251F720(param_2 + 0xe4,0);
    *piVar8 = (int)piVar2;
    *(undefined4 *)(param_1 + 0x184) = 1;
    if (piVar2 != (int *)0x0) {
      iVar4 = 0;
      iVar6 = 0;
      if (0 < *piVar2) {
        iVar7 = 0;
        do {
          cVar1 = *(char *)(iVar7 + piVar2[1] + 0x5b);
          if (iVar4 <= cVar1) {
            iVar4 = (int)cVar1;
          }
          iVar6 = iVar6 + 1;
          iVar7 = iVar7 + 0x5c;
        } while (iVar6 < *piVar2);
      }
      *(int *)(param_1 + 0x1a4) = iVar4 + 1;
      fn_8252D108(param_1);
    }
  }
  uVar3 = fn_825A23C0(0x40,3);
  *(undefined4 *)(param_1 + 0x188) = uVar3;
  if ((*(int *)(param_2 + 0xdc) != 0) &&
     (iVar4 = fn_8252D240(param_1,param_2 + 0xdc,param_2 + 0xe0), iVar4 == 0)) {
    fn_8252CF08(param_1);
  }
  *(undefined4 *)(param_1 + 0x19c) = 1;
  puVar5 = (undefined4 *)fn_8265C9E0(0x14);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *(undefined1 *)(puVar5 + 4) = 0;
    *(undefined1 *)((int)puVar5 + 0x11) = 0;
    *(undefined1 *)((int)puVar5 + 0x12) = 0;
  }
  *(undefined4 **)(param_1 + 0x1ac) = puVar5;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  return;
}

