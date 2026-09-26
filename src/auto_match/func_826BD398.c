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


void fn_826BD398(int param_1,int *param_2,ulonglong param_3)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  
  if ((param_3 & 0xffffffff) < 0x80) {
    iVar5 = *param_2;
  }
  else {
    if ((param_3 & 0xffffffff) < 0x800) {
      uVar3 = param_3 & 0xffffffff;
      param_3 = param_3 & 0xffffffff0000003f | 0xffffff80;
      *(byte *)(*param_2 + param_1) = (byte)(uVar3 >> 6) & 0x3f | 0xc0;
    }
    else if ((param_3 & 0xffffffff) < 0x10000) {
      *(byte *)(*param_2 + param_1) = (byte)((param_3 & 0xffffffff) >> 0xc) & 0x1f | 0xe0;
      iVar5 = *param_2;
      *param_2 = iVar5 + 1;
      *(byte *)(iVar5 + 1 + param_1) = (byte)((param_3 & 0xffffffff) >> 6) & 0x3f | 0x80;
      param_3 = param_3 & 0xffffffff0000003f | 0xffffff80;
    }
    else if ((param_3 & 0xffffffff) < 0x200000) {
      uVar3 = param_3 & 0xffffffff;
      *(byte *)(*param_2 + param_1) = (byte)((param_3 & 0xffffffff) >> 0x12) & 0xf | 0xf0;
      uVar4 = param_3 & 0xffffffff;
      param_3 = param_3 & 0xffffffff0000003f | 0xffffff80;
      iVar5 = *param_2;
      *param_2 = iVar5 + 1;
      *(byte *)(iVar5 + 1 + param_1) = (byte)(uVar4 >> 0xc) & 0x3f | 0x80;
      iVar5 = *param_2;
      *param_2 = iVar5 + 1;
      *(byte *)(iVar5 + 1 + param_1) = (byte)(uVar3 >> 6) & 0x3f | 0x80;
    }
    else {
      bVar2 = (byte)(param_3 >> 0x18);
      if ((param_3 & 0xffffffff) < 0x4000000) {
        bVar1 = (byte)((param_3 & 0xffffffff) >> 6);
        *(byte *)(*param_2 + param_1) = bVar2 & 7 | 0xf8;
        iVar5 = *param_2;
        *param_2 = iVar5 + 1;
        *(byte *)(iVar5 + 1 + param_1) = (byte)((param_3 & 0xffffffff) >> 0x12) & 0x3f | 0x80;
        iVar5 = *param_2;
        *param_2 = iVar5 + 1;
        *(byte *)(iVar5 + 1 + param_1) = (byte)((param_3 & 0xffffffff) >> 0xc) & 0x3f | 0x80;
      }
      else {
        if (0x7fffffff < (param_3 & 0xffffffff)) {
          return;
        }
        bVar1 = (byte)((param_3 & 0xffffffff) >> 6);
        *(byte *)(*param_2 + param_1) = bVar2 >> 6 | 0xfc;
        iVar5 = *param_2;
        *param_2 = iVar5 + 1;
        *(byte *)(iVar5 + 1 + param_1) = bVar2 & 0x3f | 0x80;
        iVar5 = *param_2;
        *param_2 = iVar5 + 1;
        *(byte *)(iVar5 + 1 + param_1) = (byte)((param_3 & 0xffffffff) >> 0x12) & 0x3f | 0x80;
        iVar5 = *param_2;
        *param_2 = iVar5 + 1;
        *(byte *)(iVar5 + 1 + param_1) = (byte)((param_3 & 0xffffffff) >> 0xc) & 0x3f | 0x80;
      }
      param_3 = param_3 & 0xffffffff0000003f | 0xffffff80;
      iVar5 = *param_2;
      *param_2 = iVar5 + 1;
      *(byte *)(iVar5 + 1 + param_1) = bVar1 & 0x3f | 0x80;
    }
    iVar5 = *param_2 + 1;
    *param_2 = iVar5;
  }
  *(char *)(iVar5 + param_1) = (char)param_3;
  *param_2 = *param_2 + 1;
  return;
}

