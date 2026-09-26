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


void fn_82D49AC0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  *param_2 = *(int *)(*(int *)(param_1 + 0x18) + 0x24) + *param_2;
  param_2[1] = *(int *)(*(int *)(param_1 + 0x18) + 0x24) + param_2[1];
  iVar3 = *(int *)(*(int *)(param_1 + 0x18) + 0x18);
  if (0 < iVar3) {
    iVar2 = 0;
    do {
      iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x18) + 0x14) + iVar2) * 4 +
                      *(int *)(*(int *)(param_1 + 0x18) + 8));
      *param_2 = *param_2 + iVar3;
      if (iVar3 < param_2[3]) {
        iVar3 = param_2[3];
      }
      param_2[3] = iVar3;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
      iVar3 = *(int *)(*(int *)(param_1 + 0x18) + 0x18);
    } while (iVar1 < iVar3);
  }
  iVar1 = param_2[1];
  param_2[1] = iVar1 + iVar3;
  param_2[2] = (int)((float)(longlong)*param_2 / (float)(longlong)(iVar1 + iVar3));
  return;
}

