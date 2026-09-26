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
extern int fn_822BD338();
extern int fn_822C72E0();
extern unsigned int lbl_821CC160;


void fn_822BB9D0(int param_1)

{
  int iVar1;
  double dVar2;
  char cVar3;
  undefined4 uVar4;
  double dVar5;
  
  iVar1 = **(int **)(param_1 + 0x238);
  dVar5 = (double)lbl_821CC160;
  dVar2 = dVar5;
  if (*(int *)(iVar1 + 0x2b30) != 0) {
    dVar2 = (double)*(float *)(iVar1 + 0x614);
  }
  if ((((dVar2 < (double)*(float *)(iVar1 + 0x2bb8)) || (dVar5 < (double)*(float *)(iVar1 + 0x2b24))
       ) && (cVar3 = fn_822BD338((ulonglong)*(uint *)(*(int *)(param_1 + 0x114) + 0x20) + 4,
                                       0xffffffff821aca44), cVar3 == '\0')) &&
     (*(int *)(param_1 + 0x410) == 0)) {
    fn_822C72E0(*(undefined4 *)(*(int *)(param_1 + 0x114) + 0x20),0xffffffff821aca44);
  }
  iVar1 = **(int **)(param_1 + 0x238);
  dVar2 = dVar5;
  if (*(int *)(iVar1 + 0x2b30) != 0) {
    dVar2 = (double)*(float *)(iVar1 + 0x614);
  }
  if ((dVar2 < (double)*(float *)(iVar1 + 0x2bb8)) ||
     (uVar4 = 0, dVar5 < (double)*(float *)(iVar1 + 0x2b24))) {
    uVar4 = 1;
  }
  *(undefined4 *)(param_1 + 0x410) = uVar4;
  return;
}

