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


undefined8 fn_8277BF50(int param_1,uint param_2,int param_3)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 0x3c);
  fVar1 = *(float *)(*(int *)((param_2 >> 8 & 0xfffffc) + iVar2) + (param_2 & 0x3ff) * 8 + 4);
  uVar3 = param_2 - 1;
  if ((int)param_2 < param_3) {
    if ((fVar1 < *(float *)(*(int *)((uVar3 >> 8 & 0xfffffc) + iVar2) + (uVar3 * 8 & 0x1ff8) + 4))
       && (fVar1 <= *(float *)(*(int *)((param_2 + 1 >> 8 & 0xfffffc) + iVar2) +
                               ((param_2 + 1) * 8 & 0x1ff8) + 4))) {
      return 1;
    }
  }
  else if (fVar1 < *(float *)(*(int *)((uVar3 >> 8 & 0xfffffc) + iVar2) + (uVar3 * 8 & 0x1ff8) + 4))
  {
    return 1;
  }
  return 0;
}

