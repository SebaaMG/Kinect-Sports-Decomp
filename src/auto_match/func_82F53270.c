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
extern int fn_82F52B50();
extern int fn_82F52FA0();
extern int fn_82F53208();


int fn_82F53270(int param_1,undefined8 param_2,undefined4 *param_3,char param_4)

{
  int iVar3;
  char cVar4;
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar5;
  
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    uVar5 = 0;
    iVar3 = (**(code **)(**(int **)(param_1 + 8) + 0x20))();
    if (iVar3 != 0) {
      do {
        iVar3 = (**(code **)(**(int **)(param_1 + 8) + 0x24))(*(int **)(param_1 + 8),uVar5);
        if ((param_4 == '\0') && (cVar4 = fn_82F52B50(iVar3,param_2,param_3), cVar4 != '\0'))
        {
          *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
          return iVar3;
        }
        uVar5 = uVar5 + 1;
        uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x20))();
      } while ((uVar5 & 0xffffffff) < (uVar1 & 0xffffffff));
    }
    uVar2 = fn_82F53208();
    iVar3 = fn_82F52FA0(uVar2,param_2);
    if (iVar3 != 0) {
      (**(code **)(**(int **)(param_1 + 8) + 0xc))(*(int **)(param_1 + 8),iVar3);
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      *(undefined4 *)(iVar3 + 4) = *param_3;
      return iVar3;
    }
  }
  return 0;
}

