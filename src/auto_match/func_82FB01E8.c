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


undefined8 fn_82FB01E8(int *param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar3 = 1;
  if ((*(short *)(param_1 + 6) != 0) || (bVar2 = false, *(short *)((int)param_1 + 0x1a) != 0)) {
    bVar2 = true;
  }
  if (bVar2) {
    if (*(char *)((int)param_2 + 0x15) != '\0') {
      (**(code **)(*param_1 + 0xa0))(param_1,*param_2 == 2);
    }
    iVar4 = param_1[0x1f];
    if (iVar4 != param_1[0x20]) {
      do {
        piVar1 = *(int **)(iVar4 + 4);
        if (((*(char *)(param_2 + 5) == '\0') || (piVar1[5] == 0)) &&
           (uVar3 = (**(code **)(*piVar1 + 0x1c))(piVar1,param_2), (int)uVar3 != 1)) {
          return uVar3;
        }
        iVar4 = iVar4 + 8;
      } while (iVar4 != param_1[0x20]);
    }
  }
  return uVar3;
}

