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
extern int fn_82FA8948();
extern int fn_82FA8A88();
extern int fn_82FB4CB8();


void fn_82FB5068(int param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  
  iVar3 = (int)param_2;
  if (((*(uint *)(param_1 + 0x30) & 0x80000000) != 0) &&
     (*(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x20) < iVar3)) {
    fn_82FA8948(*(undefined4 *)(param_1 + 0x1c),param_1 + 0x24);
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0x7fffffff;
  }
  if (((*(char *)(param_1 + 0x44) != '\0') && (*(int *)(param_1 + 0x40) != 0)) &&
     (*(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x34) < iVar3)) {
    fn_82FA8A88(*(int *)(param_1 + 0x40),param_1 + 0x38);
    *(undefined1 *)(param_1 + 0x44) = 0;
  }
  piVar2 = *(int **)(param_1 + 0x1c);
  if (piVar2 != (int *)0x0) {
    iVar1 = *(int *)(param_1 + 0x48);
    if (iVar1 < 0) {
      pcVar4 = *(code **)(*piVar2 + 0x10);
    }
    else {
      pcVar4 = *(code **)(*piVar2 + 0x14);
      if (iVar3 <= iVar1) {
        (*pcVar4)(piVar2,iVar1,param_2);
        goto LAB_82fb5184;
      }
      (*pcVar4)(piVar2,iVar1,iVar1);
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x74) =
           **(undefined4 **)(*(int *)(param_1 + 0x14) + 0x74);
      fn_82FB4CB8();
      piVar2 = *(int **)(param_1 + 0x1c);
      param_2 = param_2 - (ulonglong)*(uint *)(param_1 + 0x48);
      pcVar4 = *(code **)(*piVar2 + 0x10);
    }
    (*pcVar4)(piVar2,param_2);
  }
LAB_82fb5184:
  if (-0x7ffffc00 < *(int *)(param_1 + 0x48)) {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) - iVar3;
  }
  return;
}

