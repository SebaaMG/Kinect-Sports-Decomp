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
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


double fn_822F91D8(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar5;
  longlong lVar4;
  double dVar6;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x844);
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x83c);
  uVar5 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  fVar1 = *(float *)((iVar2 + 0x23) * 4 + iVar3);
  lVar4 = (longlong)(int)uVar5 * 0x19660d + 0x3c6ef35f;
  lbl_83265A28 = (int)lVar4;
  dVar6 = (double)((*(float *)((iVar2 + 0x28) * 4 + iVar3) - fVar1) *
                   ((float)(uVar5 & 0x7fffff | 0x3f800000) - lbl_821CA460) + fVar1);
  if (lVar4 < 1) {
    dVar6 = -dVar6;
  }
  return dVar6;
}

