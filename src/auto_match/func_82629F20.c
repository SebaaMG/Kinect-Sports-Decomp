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
extern int fn_82526AF8();
extern int fn_825D04D0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265988;
extern unsigned int lbl_83265A28;
extern unsigned int lbl_83265A38;
extern unsigned int lbl_83265A3C;


undefined8 fn_82629F20(int *param_1,int param_2)

{
  ushort *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar6;
  int iVar5;
  
  iVar5 = *param_1;
  iVar4 = *(int *)(iVar5 + 4);
  if (iVar4 == 0x57) {
    lVar3 = fn_82526AF8((ulonglong)lbl_83265A38 - 1,(ulonglong)lbl_83265A3C + 4,iVar5 + 8);
    uVar6 = -(ulonglong)(lVar3 != -1) & lVar3 + 1U;
    if ((uVar6 != 0) &&
       (uVar2 = (uint)uVar6,
       *(uint *)(iVar5 + 0x48) ==
       (uint)(((uint)*(byte *)(*(int *)(*(int *)(lbl_83265988 + 0xf0) + 8) + (uVar2 >> 3)) &
              1 << (uVar2 & 7)) != 0))) {
      return 3;
    }
  }
  else if (iVar4 != 0x58) {
    if (iVar4 == 0x59) {
      return 3;
    }
    if (iVar4 == 0x6d) {
      puVar1 = *(ushort **)(param_2 + 2000);
      if (*(uint *)(iVar5 + 8) <
          (uint)((*(int *)(puVar1 + 4) - *(int *)(puVar1 + 2)) / (int)(uint)*puVar1)) {
        return 3;
      }
    }
    else {
      if (iVar4 != 0x89) {
        return 4;
      }
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      if ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460 <= *(float *)(iVar5 + 8)) {
        return 3;
      }
      iVar5 = *param_1;
    }
  }
  iVar4 = fn_825D04D0(iVar5);
  *param_1 = iVar4;
  return 3;
}

