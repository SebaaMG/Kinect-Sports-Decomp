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
extern int fn_826BD928();
extern unsigned int lbl_82021544;


double fn_826C53D0(int param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  if (*(int *)(param_1 + 0x1b4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x1b4) + 4);
  }
  dVar3 = (double)lbl_82021544;
  dVar4 = (double)(float)((double)(longlong)iVar2 * dVar3);
  for (iVar2 = *(int *)(param_1 + 0x20); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x20)) {
    iVar1 = (**(code **)(*(int *)(iVar2 + 0x68) + 8))(iVar2 + 0x68);
    if (iVar1 == 2) {
      iVar1 = fn_826BD928(iVar2 + 0x68);
      if (*(int *)(iVar1 + 0x1b4) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(iVar1 + 0x1b4) + 4);
      }
      dVar4 = (double)(float)((double)(float)((double)(longlong)iVar1 * dVar4) * dVar3);
    }
  }
  return dVar4;
}

