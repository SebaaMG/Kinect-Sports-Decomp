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


int * fn_826F74F8(int param_1,int param_2,int param_3)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  
  piVar1 = *(int **)(param_2 * 0xc + param_1);
  if (piVar1 != (int *)0x0) {
    do {
      if ((((piVar1[1] == *(int *)(param_3 + 4)) && (piVar1[3] == *(int *)(param_3 + 0xc))) &&
          (piVar1[2] == *(int *)(param_3 + 8))) &&
         ((piVar1[0xb] == *(int *)(param_3 + 0x2c) && (piVar1[8] == *(int *)(param_3 + 0x20))))) {
        if ((piVar1[4] == *(uint *)(param_3 + 0x10)) &&
           (((piVar1[4] & 0x20000U) == 0 || (*(short *)(piVar1 + 6) == *(short *)(param_3 + 0x18))))
           ) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        bVar3 = true;
        if (!bVar2) goto code_r0x826f7598;
      }
      else {
code_r0x826f7598:
        bVar3 = false;
      }
      if (bVar3) {
        return piVar1;
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)0x0);
  }
  return (int *)0x0;
}

