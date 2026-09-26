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


/* WARNING: Removing unreachable block (ram,0x82c27be4) */

undefined8 fn_82C27B90(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  param_2[2] = 0;
  param_2[3] = 0;
  piVar2 = *(int **)(iVar1 + 0x94);
  if (*(int **)(iVar1 + 0x94) == (int *)0x0) {
    *(int **)(iVar1 + 0x94) = param_2;
    return 0;
  }
  do {
    piVar3 = piVar2;
    if (*(ulonglong *)(*piVar3 + 8) <= *(ulonglong *)(*param_2 + 8)) {
      param_2[2] = (int)piVar3;
      param_2[3] = piVar3[3];
      if (piVar3[3] != 0) {
        *(int **)(piVar3[3] + 8) = param_2;
        piVar3[3] = (int)param_2;
        return 0;
      }
      *(int **)(iVar1 + 0x94) = param_2;
      piVar3[3] = (int)param_2;
      return 0;
    }
    piVar2 = (int *)piVar3[2];
  } while ((int *)piVar3[2] != (int *)0x0);
  param_2[3] = (int)piVar3;
  param_2[2] = 0;
  piVar3[2] = (int)param_2;
  return 0;
}

