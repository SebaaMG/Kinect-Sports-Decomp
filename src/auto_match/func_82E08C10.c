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


undefined8 fn_82E08C10(int param_1,ulonglong param_2,uint *param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      if (*(char *)(param_1 + 8) == '\x01') {
        iVar1 = (int)((param_2 + (param_2 & 0x7fffffff) * 2 & 0x3fffffff) << 2);
        *param_3 = *(uint *)(iVar1 + *(int *)(param_1 + 0x18));
        *param_4 = *(uint *)(iVar1 + *(int *)(param_1 + 0x18) + 4);
        *param_5 = *(uint *)(iVar1 + *(int *)(param_1 + 0x18) + 8);
        return 1;
      }
      if (*(char *)(param_1 + 8) == '\x02') {
        iVar1 = (int)((param_2 & 0xffffffff) << 2);
        *param_3 = *(uint *)(iVar1 + *(int *)(param_1 + 0x18));
        *param_4 = *(uint *)(iVar1 + *(int *)(param_1 + 0x18) + 4);
        *param_5 = *(uint *)((int)((param_2 + 2 & 0xffffffff) << 2) + *(int *)(param_1 + 0x18));
        return 1;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 8) == '\x01') {
      iVar1 = (int)((param_2 + (param_2 & 0x7fffffff) * 2 & 0x7fffffff) << 1);
      *param_3 = (uint)*(ushort *)(*(int *)(param_1 + 0xc) + iVar1);
      *param_4 = (uint)*(ushort *)(*(int *)(param_1 + 0xc) + iVar1 + 2);
      *param_5 = (uint)*(ushort *)(*(int *)(param_1 + 0xc) + iVar1 + 4);
      return 1;
    }
    if (*(char *)(param_1 + 8) == '\x02') {
      iVar1 = (int)((param_2 & 0xffffffff) << 1);
      *param_3 = (uint)*(ushort *)(*(int *)(param_1 + 0xc) + iVar1);
      *param_4 = (uint)*(ushort *)(*(int *)(param_1 + 0xc) + iVar1 + 2);
      *param_5 = (uint)*(ushort *)((int)((param_2 + 2 & 0xffffffff) << 1) + *(int *)(param_1 + 0xc))
      ;
      return 1;
    }
  }
  *param_3 = 0xffffffff;
  *param_4 = 0xffffffff;
  *param_5 = 0xffffffff;
  return 0;
}

