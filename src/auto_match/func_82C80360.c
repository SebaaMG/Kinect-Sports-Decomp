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


longlong fn_82C80360(int *param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  iVar1 = *(int *)(*param_1 + 0x10);
  uVar4 = (uint)*(ushort *)(*param_1 + 0xe);
  if ((((iVar1 != 0x56555949) && (iVar1 != 0x30323449)) && (iVar1 != 0x32315659)) &&
     (iVar1 != 0x31313450)) {
    uVar4 = uVar4 * param_2;
    uVar4 = ((int)uVar4 >> 3) + (uint)((int)uVar4 < 0 && (uVar4 & 7) != 0) + 3;
    uVar3 = ((longlong)(int)(((int)uVar4 >> 2) + (uint)((int)uVar4 < 0 && (uVar4 & 3) != 0)) *
             (longlong)param_3 & 0x3fffffffU) << 2;
    uVar2 = (ulonglong)((int)uVar3 >> 0x1f);
    return (uVar3 ^ uVar2) - uVar2;
  }
  uVar4 = uVar4 * param_2 * param_3;
  uVar3 = (longlong)((int)uVar4 >> 3) + (ulonglong)((int)uVar4 < 0 && (uVar4 & 7) != 0);
  uVar2 = (ulonglong)((int)uVar3 >> 0x1f);
  return (uVar3 ^ uVar2) - uVar2;
}

