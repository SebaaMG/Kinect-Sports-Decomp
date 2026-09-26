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


undefined8 fn_82759708(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = (uint)*(ushort *)(param_1 + 10);
  if ((((uVar2 != *(ushort *)(param_2 + 10)) || (*(char *)(param_1 + 9) != *(char *)(param_2 + 9)))
      || (*(float *)(param_1 + 0x10) != *(float *)(param_2 + 0x10))) ||
     (*(char *)(param_1 + 8) != *(char *)(param_2 + 8))) {
    return 0;
  }
  uVar3 = 0;
  if (uVar2 != 0) {
    iVar4 = 0;
    do {
      if ((*(char *)(iVar4 + *(int *)(param_1 + 0xc)) != *(char *)(iVar4 + *(int *)(param_2 + 0xc)))
         || (bVar1 = true,
            *(int *)(iVar4 + *(int *)(param_1 + 0xc) + 4) !=
            *(int *)(iVar4 + *(int *)(param_2 + 0xc) + 4))) {
        bVar1 = false;
      }
      if (!bVar1) {
        return 0;
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 8;
    } while (uVar3 < uVar2);
  }
  return 1;
}

