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
extern int fn_82670230();


int fn_826894B0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*param_2 + 8))(param_2);
    if (*(int *)(param_1 + 0xc) != 0) {
      fn_82670230(*(int *)(param_1 + 0xc));
    }
    *(int *)(param_1 + 0xc) = iVar2;
    if (iVar2 != 0) {
      cVar3 = (**(code **)(*(int *)(param_1 + 8) + 8))(param_1 + 8,param_2);
      piVar1 = *(int **)(param_1 + 0xc);
      if (cVar3 == '\0') {
        if (piVar1 != (int *)0x0) {
          fn_82670230();
        }
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
      else {
        (**(code **)(*piVar1 + 0x2c))(piVar1,param_1 + 8);
      }
    }
    iVar2 = *(int *)(param_1 + 0xc);
  }
  return iVar2;
}

