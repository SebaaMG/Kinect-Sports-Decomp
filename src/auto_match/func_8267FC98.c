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


void fn_8267FC98(int *param_1,uint param_2,uint param_3,ulonglong param_4)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  
  if ((uint)param_1[1] <= param_2) {
    return;
  }
  if ((uint)param_1[2] <= param_3) {
    return;
  }
  iVar1 = *param_1;
  if (9 < iVar1) {
    return;
  }
  iVar2 = param_1[3] * param_3 + param_1[4];
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      puVar3 = (undefined1 *)(param_2 * 3 + iVar2);
      *puVar3 = (char)param_4;
      puVar3[1] = (char)(param_4 >> 8);
      puVar3[2] = (char)(param_4 >> 0x10);
      return;
    }
    if (iVar1 != 8) {
      if (iVar1 != 9) {
        return;
      }
      *(char *)(iVar2 + param_2) = (char)(param_4 >> 0x18);
      return;
    }
    *(char *)(iVar2 + param_2) = (char)param_4;
    return;
  }
  *(uint *)(param_2 * 4 + iVar2) =
       ((uint)(param_4 >> 0x10) & 0xffff | (uint)((param_4 >> 8 & 0xffffffffffff00) << 8)) >> 8 &
       0xffff | (uint)(((param_4 & 0xffff) << 0x10 | param_4 & 0xffff) << 8) & 0xffff0000;
  return;
}

