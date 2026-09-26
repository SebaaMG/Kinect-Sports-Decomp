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


ulonglong fn_82E76450(undefined8 param_1,char param_2,ushort *param_3,int *param_4)

{
  ulonglong uVar1;
  int iVar2;
  
  if (param_2 == '\x01') {
    uVar1 = (ulonglong)*(byte *)param_3;
    iVar2 = *param_4 + 1;
  }
  else if (param_2 == '\x02') {
    iVar2 = *param_4 + 2;
    uVar1 = ((ulonglong)*param_3 & 0xff) << 8 | (ulonglong)(*param_3 >> 8);
  }
  else {
    if (param_2 != '\x03') {
      return 0;
    }
    uVar1 = (ulonglong)*(byte *)((int)param_3 + 3) << 0x18 |
            (ulonglong)*(byte *)(param_3 + 1) << 0x10 | (ulonglong)(byte)*param_3 << 8 |
            (ulonglong)*(byte *)param_3;
    iVar2 = *param_4 + 4;
  }
  *param_4 = iVar2;
  return uVar1;
}

