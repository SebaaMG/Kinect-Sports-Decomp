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
extern int fn_8240D928();
extern int fn_82898430();
extern int fn_828997F0();


undefined8 fn_82899F38(int param_1,int param_2)

{
  int iVar3;
  int *piVar4;
  undefined8 uVar1;
  char cVar5;
  longlong lVar2;
  
  if ((*(int **)(param_1 + 0x20) == (int *)0x0) ||
     (iVar3 = (**(code **)(**(int **)(param_1 + 0x20) + 4))(), iVar3 == 0)) {
    if ((*(int **)(param_1 + 0x20) == (int *)0x0) ||
       (iVar3 = (**(code **)(**(int **)(param_1 + 0x20) + 0x14))(), iVar3 == 0)) {
      return 0;
    }
    if (*(int **)(param_1 + 0x20) == (int *)0x0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (**(code **)(**(int **)(param_1 + 0x20) + 0x14))();
    }
    if (*(char *)(param_2 + 0x26) == '\0') {
      uVar1 = fn_8240D928(param_2);
      cVar5 = fn_82898430(param_1,param_2);
      if ((cVar5 == '\0') &&
         (cVar5 = fn_828997F0(lVar2 + 0x28,uVar1,lVar2 + 0xc,uVar1), cVar5 != '\0')) {
        return 1;
      }
      return 0;
    }
  }
  else {
    if (*(int **)(param_1 + 0x20) == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 4))();
    }
    if (*(char *)(param_2 + 0x26) == '\0') {
      uVar1 = fn_8240D928(param_2);
      cVar5 = fn_82898430(param_1,param_2);
      if ((cVar5 == '\0') &&
         (cVar5 = (**(code **)(*piVar4 + 0x5c))(piVar4,uVar1,param_1 + 4), cVar5 != '\0')) {
        return 1;
      }
      return 0;
    }
  }
  return 1;
}

