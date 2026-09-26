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


void fn_8257DF30(int param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_2 + 0xc);
  bVar3 = false;
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x11c);
  if (iVar2 != 0) {
    do {
      piVar4 = (int *)(iVar2 + -0x10);
      if (iVar2 == 0) {
        piVar4 = (int *)0x0;
      }
      if ((piVar4[iVar1 + 0xc] != 0) && (*(char *)((int)piVar4 + param_3 + 0x48) != '\0')) {
        if (!bVar3) {
          (**(code **)(*piVar4 + 0xc))(piVar4,param_2,param_4);
          bVar3 = true;
        }
        (**(code **)(*piVar4 + 0x10))(piVar4,param_2,param_3);
      }
      iVar2 = *(int *)(iVar2 + 4);
    } while (iVar2 != 0);
  }
  return;
}

