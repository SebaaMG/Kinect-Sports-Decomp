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
extern int fn_823400C8();
extern int fn_828EA608();


void fn_82340AF0(int *param_1,int param_2,int param_3)

{
  char cVar2;
  int iVar1;
  int iVar3;
  int *piVar4;
  
  iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(*param_1 + 0x10) + 0x1a0) + 0xc) + 0xa0);
  if ((iVar3 == 0) || (*(int *)(iVar3 + 0x40) != 1)) {
    iVar3 = *(int *)(*(int *)(*param_1 + 0x10) + 0x74);
    if ((iVar3 == 0) || (cVar2 = fn_828EA608(iVar3), cVar2 == '\0')) {
      iVar3 = 0;
    }
    if (iVar3 != 0) {
      for (piVar4 = *(int **)*param_1;
          (piVar4 != (int *)((undefined4 *)*param_1)[1] && (*piVar4 != param_2));
          piVar4 = piVar4 + 7) {
      }
      piVar4[6] = piVar4[6] + param_3;
      if (*(int *)(*param_1 + 0x1c) == 0) {
        iVar1 = fn_823400C8(piVar4);
      }
      else {
        iVar1 = piVar4[5];
      }
      if (*(int *)(iVar1 * 4 + *(int *)(iVar3 + 0x100)) != piVar4[6]) {
        *(int *)(iVar1 * 4 + *(int *)(iVar3 + 0x100)) = piVar4[6];
      }
    }
  }
  return;
}

