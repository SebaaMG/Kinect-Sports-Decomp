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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005748;
extern unsigned int lbl_8200D898;
extern unsigned int lbl_82089FC0;
extern unsigned int lbl_8217E1C4;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_c;


undefined8 fn_83056DE8(int param_1,ushort param_2,float *param_3)

{
  float fVar1;
  undefined8 uVar2;
  undefined4 uStack_c;
  
  if (param_3 == (float *)0x0) {
    return 0x1f;
  }
  uVar2 = 1;
  if (param_2 < 5) {
    if (param_2 == 1) {
      fVar1 = *param_3;
      *(float *)(param_1 + 8) = fVar1;
      if ((fVar1 < lbl_8217E1C4) || (lbl_821AAD20 < fVar1)) {
        *(float *)(param_1 + 8) = lbl_821AAD20;
        *(undefined1 *)(param_1 + 0x18) = 1;
        return uVar2;
      }
    }
    else if (param_2 == 2) {
      fVar1 = *param_3;
      *(float *)(param_1 + 0xc) = fVar1;
      if ((fVar1 < lbl_821AAD20) || (lbl_82005748 < fVar1)) {
        *(float *)(param_1 + 0xc) = lbl_821AAD20;
        *(undefined1 *)(param_1 + 0x18) = 1;
        return uVar2;
      }
    }
    else if (param_2 == 3) {
      fVar1 = *param_3;
      *(float *)(param_1 + 0x10) = fVar1;
      if ((fVar1 < lbl_82002AE0) || (lbl_82089FC0 < fVar1)) {
        *(undefined4 *)(param_1 + 0x10) = lbl_8200D898;
        *(undefined1 *)(param_1 + 0x18) = 1;
        return uVar2;
      }
    }
    else if (param_2 == 0) {
      fVar1 = *param_3;
      *(float *)(param_1 + 4) = fVar1;
      if ((fVar1 < lbl_8217E1C4) || (lbl_821AAD20 < fVar1)) {
        *(float *)(param_1 + 4) = lbl_821AAD20;
        *(undefined1 *)(param_1 + 0x18) = 1;
        return uVar2;
      }
    }
    else {
      uStack_c = (int)(longlong)*param_3;
      *(int *)(param_1 + 0x14) = uStack_c;
      if ((uStack_c < 0) || (5 < uStack_c)) {
        *(undefined4 *)(param_1 + 0x14) = 0;
        *(undefined1 *)(param_1 + 0x18) = 1;
        return uVar2;
      }
    }
  }
  else {
    uVar2 = 0x1f;
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  return uVar2;
}

