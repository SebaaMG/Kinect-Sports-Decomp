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
extern int fn_82BD7F18();


undefined8 fn_82BD7B10(int param_1,longlong param_2,ulonglong param_3)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  piVar3 = (int *)(param_1 + 0x10);
  uVar4 = 0;
  while ((piVar3[-2] == 0 || (*piVar3 != 1))) {
    uVar4 = uVar4 + 1;
    piVar3 = piVar3 + 1;
    if (1 < uVar4) {
      bVar2 = false;
LAB_82bd7b5c:
      uVar6 = param_2 - param_3;
      if ((int)param_3 != -1) {
        piVar3 = *(int **)(*(int *)(param_1 + 4) + 8);
        while (((uVar6 & 0xffffffff) != 0 && (uVar6 = uVar6 - 1, piVar3 != (int *)0x0))) {
          *(undefined4 *)*piVar3 = 0;
          *(undefined4 *)(*piVar3 + 4) = *(undefined4 *)(*piVar3 + 0xc);
          piVar3 = (int *)fn_82BD7F18(*(undefined4 *)(param_1 + 4));
        }
      }
      if (bVar2) {
        pcVar1 = *(code **)(*(int *)(param_1 + 0x18) + 8);
        if (pcVar1 == (code *)0x0) {
          uVar5 = 1;
        }
        else {
          uVar5 = (*pcVar1)(param_1,param_3);
        }
      }
      else {
        piVar3 = *(int **)(*(int *)(param_1 + 4) + 8);
        while (((param_3 & 0xffffffff) != 0 && (param_3 = param_3 - 1, piVar3 != (int *)0x0))) {
          *(undefined4 *)*piVar3 = 0;
          *(undefined4 *)(*piVar3 + 4) = *(undefined4 *)(*piVar3 + 0xc);
          piVar3 = (int *)fn_82BD7F18(*(undefined4 *)(param_1 + 4));
        }
      }
      return uVar5;
    }
  }
  bVar2 = true;
  goto LAB_82bd7b5c;
}

