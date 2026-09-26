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
extern unsigned int lbl_820E7F9E;


undefined8 fn_82BA9178(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 1;
  iVar2 = (**(code **)(*param_1 + 4))();
  if (0 < iVar2) {
    piVar4 = param_1 + 0x3b;
    do {
      if (param_2 == *(int *)(*piVar4 + 0x38)) {
        if (((&lbl_820E7F9E)[*(int *)(*piVar4 + 0x50) * 0xc] == 0) ||
           (bVar1 = true, 4 < (byte)(&lbl_820E7F9E)[*(int *)(*piVar4 + 0x50) * 0xc])) {
          bVar1 = false;
        }
        if (!bVar1) {
          return 1;
        }
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
      iVar2 = (**(code **)(*param_1 + 4))(param_1);
    } while (iVar3 <= iVar2);
  }
  return 0;
}

