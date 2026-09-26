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


void fn_82CD5D00(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  uint param_7,uint param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  uint in_stack_00000054;
  
  iVar7 = param_6 * 0x10000 + ((int)param_8 >> 4) + (uint)((int)param_8 < 0 && (param_8 & 0xf) != 0)
          + -0x8000;
  iVar9 = param_5 * 0x10000 + ((int)param_7 >> 4) + (uint)((int)param_7 < 0 && (param_7 & 0xf) != 0)
          + -0x8000;
  iVar8 = 0x8000;
  if (0x8000 < iVar7) {
    do {
      iVar2 = (iVar8 >> (in_stack_00000054 & 0x3f)) * param_3 + param_2;
      iVar3 = 0x8000;
      if (0x8000 < iVar9) {
        puVar10 = (uint *)(param_1 + 4);
        do {
          iVar1 = iVar3 >> (in_stack_00000054 & 0x3f);
          iVar4 = iVar3 + param_7;
          iVar5 = iVar4 + param_7;
          iVar6 = iVar5 + param_7;
          iVar3 = iVar6 + param_7;
          puVar10 = puVar10 + -1;
          *puVar10 = (uint)*(byte *)((iVar6 >> (in_stack_00000054 & 0x3f)) + iVar2) |
                     (uint)*(byte *)((iVar5 >> (in_stack_00000054 & 0x3f)) + iVar2) << 8 |
                     (uint)*(byte *)((iVar4 >> (in_stack_00000054 & 0x3f)) + iVar2) << 0x10 |
                     (uint)*(byte *)(iVar1 + iVar2) << 0x18;
        } while (iVar3 < iVar9);
      }
      iVar8 = iVar8 + param_8;
      param_1 = param_1 + param_4;
    } while (iVar8 < iVar7);
  }
  return;
}

