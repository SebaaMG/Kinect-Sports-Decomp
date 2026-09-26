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
extern int fn_8225C590();
extern int fn_82526358();


void fn_8247B5D8(int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  
  if (param_2 != 0) {
    if (**(int **)(param_1 + 4) != 0) {
      iVar1 = fn_8225C590();
      for (piVar3 = *(int **)(iVar1 + 0x10); piVar3 != *(int **)(iVar1 + 0x14); piVar3 = piVar3 + 1)
      {
        if (param_2 == *piVar3) {
          if (*(char *)(param_2 + 0xd8) != '\0') {
            return;
          }
          uVar2 = 3;
          goto LAB_8247b63c;
        }
      }
    }
    if (*(char *)(param_2 + 0xd8) == '\0') {
      uVar2 = 0;
LAB_8247b63c:
      fn_82526358(param_2,0x8001,uVar2);
    }
  }
  return;
}

