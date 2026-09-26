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


undefined8 fn_8278B850(int param_1,int param_2)

{
  int iVar1;
  
  if (((((*(ushort *)(param_1 + 0x2a) >> 2 & 1) != 0) &&
       ((*(ushort *)(param_2 + 0x2a) >> 2 & 1) != 0)) &&
      (iVar1 = thunk_FUN_82f65ac0(((ulonglong)*(uint *)(param_1 + 8) & 0xfffffffc) + 8,
                                  ((ulonglong)*(uint *)(param_2 + 8) & 0xfffffffc) + 8), iVar1 == 0)
      ) || ((((*(ushort *)(param_1 + 0x2a) >> 0xb & 1) != 0 &&
             ((*(ushort *)(param_2 + 0x2a) >> 0xb & 1) != 0)) &&
            (*(int *)(param_1 + 0x1c) == *(int *)(param_2 + 0x1c))))) {
    if ((((*(byte *)(param_1 + 0x28) ^ *(byte *)(param_2 + 0x28)) & 1) == 0) &&
       (((*(byte *)(param_1 + 0x28) ^ *(byte *)(param_2 + 0x28)) & 2) == 0)) {
      return 1;
    }
  }
  return 0;
}

