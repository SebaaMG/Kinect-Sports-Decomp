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
extern unsigned int lbl_82193D04;
extern unsigned int lbl_82195738;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8326B4D8;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint fn_8261FF40(int param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  uint uVar2;
  
  if (param_3 != 0) {
    fVar1 = lbl_821CC160;
    if (lbl_8326B4D8 == 0) {
      fVar1 = *(float *)(*(int *)(param_3 + 0x10) * 0x28 + param_3 + 0x30);
    }
    if (param_4 == 1) {
      if ((lbl_82193D04 < fVar1) && (*(float *)(param_1 + 0x1d0) < lbl_82193D04)) {
        return 1;
      }
    }
    else if (param_4 == 2) {
      if ((fVar1 < lbl_82195738) && (lbl_82195738 < *(float *)(param_1 + 0x1d0))) {
        return 1;
      }
    }
    else {
      if (param_4 == 3) {
        return *(uint *)(param_1 + 0x1d8);
      }
      if (param_4 == 4) {
        if (lbl_8326B4D8 == 0) {
          uVar2 = *(uint *)(*(int *)(param_3 + 0x10) * 0x28 + param_3 + 0x14) &
                  *(uint *)(param_2 + 0x10);
        }
        else {
          uVar2 = 0;
        }
        return (uint)(uVar2 != 0);
      }
      if (param_4 == 5) {
        if (lbl_8326B4D8 == 0) {
          uVar2 = *(uint *)(*(int *)(param_3 + 0x10) * 0x28 + param_3 + 0x14) &
                  *(uint *)(param_2 + 0x10);
        }
        else {
          uVar2 = 0;
        }
        if (uVar2 == 0) {
          if (lbl_8326B4D8 == 0) {
            uVar2 = *(uint *)(*(int *)(param_3 + 0x10) * 0x28 + param_3 + 0x14) &
                    *(uint *)(param_2 + 0x14);
          }
          else {
            uVar2 = 0;
          }
          if (uVar2 == 0) {
            return 0;
          }
        }
        return 1;
      }
    }
  }
  return 0;
}

