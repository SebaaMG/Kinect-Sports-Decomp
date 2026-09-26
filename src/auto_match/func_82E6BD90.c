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
extern unsigned int uStack00000038;


ulonglong fn_82E6BD90(int param_1,int *param_2,ulonglong param_3,int param_4,uint param_5,
                       undefined8 param_6)

{
  int iVar1;
  ulonglong uVar2;
  uint uStack00000038;
  
  for (iVar1 = *(int *)((*param_2 + 1) * 4 + param_4); iVar1 <= (param_1 << (param_5 & 0x3f)) >> 6;
      iVar1 = *(int *)((iVar1 + 2) * 4 + param_4)) {
    iVar1 = *param_2;
    *param_2 = iVar1 + 1;
  }
  uStack00000038 = (uint)((ulonglong)param_6 >> 0x20);
  if (*param_2 < (int)uStack00000038) {
    iVar1 = *(int *)((*param_2 + 1) * 4 + param_4);
    if ((int)param_5 < 7) {
      uVar2 = (ulonglong)(uint)(iVar1 << (6 - param_5 & 0x3f));
    }
    else {
      uVar2 = (ulonglong)((1 << (param_5 - 7 & 0x3f)) + iVar1 >> (param_5 - 6 & 0x3f));
    }
    if ((int)param_3 < (int)uVar2) {
      return param_3;
    }
    return uVar2;
  }
  return (ulonglong)uStack00000038;
}

