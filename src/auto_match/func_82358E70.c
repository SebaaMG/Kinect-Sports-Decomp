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
extern int fn_822ABA88();
extern int fn_8288B760();


undefined8 fn_82358E70(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  
  piVar3 = *(int **)(param_1 + 8);
  *param_2 = 0;
  *param_3 = 0;
  uVar4 = 0;
  iVar5 = 0;
  if ((piVar3[1] - *piVar3 & 0xfffffffcU) != 0) {
    iVar6 = 0;
    do {
      uVar7 = 0;
      piVar3 = *(int **)(iVar6 + *piVar3);
      iVar1 = *(int *)(piVar3[4] * 4 + *piVar3);
      if (*(int *)(iVar1 + 8) != 0) {
        do {
          iVar1 = fn_822ABA88(iVar1,uVar7);
          if (*(int *)(iVar1 + 0x74) != 0) {
            if (*(int *)(iVar1 + 0x168) == 0) {
              uVar2 = *(uint *)(iVar1 + 0x16c);
            }
            else {
              uVar2 = fn_8288B760();
              uVar2 = uVar2 & 0xff;
            }
            if (uVar2 != 0) {
              if (*param_2 == 0) {
                *param_2 = iVar1;
                uVar4 = 1;
              }
              else {
                *param_3 = iVar1;
                uVar4 = 2;
              }
            }
          }
          uVar7 = uVar7 + 1;
          iVar1 = *(int *)(piVar3[4] * 4 + *piVar3);
        } while ((uVar7 & 0xffffffff) < (ulonglong)*(uint *)(iVar1 + 8));
      }
      piVar3 = *(int **)(param_1 + 8);
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar5 < piVar3[1] - *piVar3 >> 2);
  }
  return uVar4;
}

