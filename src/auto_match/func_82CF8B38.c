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


void fn_82CF8B38(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    iVar3 = param_1 + 4;
    RtlEnterCriticalSection(iVar3);
    if (param_3 < 0x221) {
      puVar2 = *(undefined4 **)(((param_3 + 0xf >> 4) + 0x3c) * 4 + param_1);
      iVar1 = puVar2[10];
      puVar2[10] = iVar1 + 1;
      *param_2 = *puVar2;
      *puVar2 = param_2;
      *(int *)(param_1 + 0x20) = (puVar2[10] - iVar1) * puVar2[1] + *(int *)(param_1 + 0x20);
      RtlLeaveCriticalSection(iVar3);
    }
    else {
      (**(code **)(*(int *)(param_1 + 0x2c) + 8))(param_1 + 0x2c,param_2);
      RtlLeaveCriticalSection(iVar3);
    }
  }
  return;
}

