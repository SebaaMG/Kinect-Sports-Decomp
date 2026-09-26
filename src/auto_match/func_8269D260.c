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


int fn_8269D260(int *param_1,int *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = param_3 * 0x24 + *param_1;
  piVar4 = (int *)(iVar3 + 8);
  if ((*piVar4 != -2) && (iVar2 = param_3, *(int *)(iVar3 + 0xc) == param_3)) {
    while( true ) {
      if (piVar4[1] == param_3) {
        if ((piVar4[2] == *(uint *)*param_2) &&
           (((piVar4[2] & 0x20000U) == 0 ||
            (*(short *)(piVar4 + 4) == *(short *)((uint *)*param_2 + 2))))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          return iVar2;
        }
      }
      iVar2 = *piVar4;
      if (iVar2 == -1) break;
      piVar4 = (int *)(iVar2 * 0x24 + *param_1 + 8);
    }
  }
  return -1;
}

