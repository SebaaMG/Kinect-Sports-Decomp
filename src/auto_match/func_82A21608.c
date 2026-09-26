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
extern int fn_82A21458();


int fn_82A21608(int param_1,uint *param_2)

{
  int iVar1;
  
  RtlEnterCriticalSection();
  while( true ) {
    if (param_2[1] == 0xffffffff) {
      if (*param_2 == 0xffffffff) {
        *param_2 = 0;
      }
      else {
        *param_2 = *param_2 + 1;
      }
      param_2[1] = 0;
    }
    else {
      param_2[1] = param_2[1] + 1;
    }
    if (*(uint *)(param_1 + 0x20) <= *param_2) break;
    iVar1 = *(int *)(*param_2 * 4 + *(int *)(param_1 + 0x1c));
    if (param_2[1] < (uint)*(ushort *)(iVar1 + 8)) {
      iVar1 = (uint)*(byte *)((param_2[1] - (uint)*(ushort *)(iVar1 + 0xc)) * 4 +
                              (uint)*(ushort *)(iVar1 + 4) + iVar1) *
              (*(uint *)(iVar1 + 4) & 0xffff) + iVar1 + 0x14;
      fn_82A21458(param_1,iVar1);
LAB_82a216a0:
      RtlLeaveCriticalSection(param_1);
      return iVar1;
    }
    param_2[1] = 0xffffffff;
  }
  iVar1 = 0;
  goto LAB_82a216a0;
}

