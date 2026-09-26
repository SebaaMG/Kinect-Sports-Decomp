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
extern int fn_82FB7980();
extern int fn_82FB8288();


void fn_82FB8358(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  int *piVar4;
  
  sVar3 = 0;
  for (piVar4 = *(int **)(*(int *)(param_2 + 4) + 0x10);
      (piVar4 != *(int **)(*(int *)(param_2 + 4) + 0x14) && (*piVar4 != param_2));
      piVar4 = piVar4 + 1) {
    sVar3 = sVar3 + 1;
  }
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 8) + -0xc) + 0x1c);
  if ((iVar2 == 1) || (iVar2 == 3)) {
    iVar2 = fn_82FB7980();
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 8) + -4);
  }
  if (iVar2 != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 8) + -0xc);
    if (((*(ushort *)(param_1 + 0x28) & 0x8000) != 0) && (iVar2 == *(int *)(iVar1 + 0x20))) {
      fn_82FB8288(param_1,iVar1,iVar2);
    }
    *(short *)(iVar2 + 0xe) = sVar3;
  }
  return;
}

