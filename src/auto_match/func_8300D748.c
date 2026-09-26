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
extern unsigned int lbl_832642E4;


void fn_8300D748(int *param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  
  cVar3 = '\0';
  uVar4 = 0;
  piVar2 = param_1;
  if (*(char *)((int)param_1 + 0x4d) != '\0') {
    do {
      piVar7 = piVar2 + 3;
      if (cVar3 != '\0') break;
      uVar5 = 0;
      if (piVar2[4] - *piVar7 >> 3 != 0) {
        iVar6 = 0;
        do {
          if (cVar3 != '\0') break;
          piVar1 = *(int **)(*piVar7 + iVar6 + 4);
          if (piVar1 != (int *)0x0) {
            cVar3 = (**(code **)(*piVar1 + 0x30))(piVar1);
          }
          uVar5 = uVar5 + 1;
          iVar6 = iVar6 + 8;
        } while (uVar5 < (uint)(piVar2[4] - *piVar7 >> 3));
      }
      uVar4 = uVar4 + 1;
      piVar2 = piVar7;
    } while (uVar4 < *(byte *)((int)param_1 + 0x4d));
  }
  if (cVar3 != '\0') {
    if ((param_1[0x12] == 0) || (8 < (uint)(*(int *)(lbl_832642E4 + 0x90) - param_1[0x12]))) {
      param_1[0x12] = *(int *)(lbl_832642E4 + 0x90);
    }
  }
  return;
}

