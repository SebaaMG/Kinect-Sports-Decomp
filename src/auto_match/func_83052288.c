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
extern int fn_82FA5190();
extern unsigned int lbl_831BC978;


void fn_83052288(int param_1,char param_2,char param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  char cVar4;
  int *piVar5;
  int *piVar6;
  
  RtlEnterCriticalSection(param_1 + 0x5c);
  piVar5 = (int *)0x0;
  piVar6 = (int *)0x0;
  piVar1 = *(int **)(param_1 + 0x58);
  if (piVar1 != (int *)0x0) {
    do {
      if (((uint)piVar1[0x1d] >> 0x1b & 1) == 0) {
        if (((param_2 != '\0') &&
            (((piVar5 == (int *)0x0 || (*(char *)(piVar1 + 0x1c) < *(char *)(piVar5 + 0x1c))) &&
             (*(char *)(piVar1 + 0x1c) < param_3)))) && (((uint)piVar1[0x1d] >> 0x18 & 1) != 0)) {
          piVar5 = piVar1;
        }
LAB_830523dc:
        piVar2 = (int *)piVar1[3];
        piVar6 = piVar1;
      }
      else {
        cVar4 = (**(code **)(*piVar1 + 4))(piVar1);
        if (cVar4 == '\0') goto LAB_830523dc;
        piVar2 = (int *)piVar1[3];
        if (piVar1 == *(int **)(param_1 + 0x58)) {
          *(int **)(param_1 + 0x58) = piVar2;
        }
        else {
          piVar6[3] = (int)piVar2;
        }
        uVar3 = lbl_831BC978;
        if (piVar1 != (int *)0x0) {
          (**(code **)*piVar1)(piVar1,0);
          fn_82FA5190(uVar3,piVar1);
        }
      }
      piVar1 = piVar2;
    } while (piVar2 != (int *)0x0);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))(piVar5);
    }
  }
  RtlLeaveCriticalSection(param_1 + 0x5c);
  return;
}

