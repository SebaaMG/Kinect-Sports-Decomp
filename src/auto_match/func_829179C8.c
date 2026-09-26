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


undefined8 fn_829179C8(int param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  *(int *)(param_1 + 0x20) = (int)param_2;
  uVar4 = 0;
  if (*(short *)(*(int *)(param_1 + 0x18) + 10) != 0) {
    iVar1 = *(int *)(param_1 + 0x38);
    iVar5 = 0;
    do {
      fn_829179C8(*(undefined4 *)(iVar5 + iVar1),param_2);
      iVar1 = *(int *)(param_1 + 0x38);
      iVar3 = 1;
      if (*(short *)(*(int *)(iVar5 + iVar1) + 8) != 0) {
        iVar3 = 4;
      }
      piVar2 = (int *)(iVar5 + iVar1);
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 4;
      param_2 = ((longlong)
                 (int)((uint)*(ushort *)(*(int *)(*piVar2 + 0x18) + 8) * *(int *)(*piVar2 + 0x2c)) *
                 (longlong)iVar3 & 0x3fffffffU) * 4 + param_2;
    } while (uVar4 < *(ushort *)(*(int *)(param_1 + 0x18) + 10));
  }
  return 0;
}

