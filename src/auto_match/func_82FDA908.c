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
extern unsigned int iStack_c;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8208ED48;
extern unsigned int lbl_8216C698;
extern unsigned int lbl_8216E498;
extern unsigned int lbl_8216E49C;
extern unsigned int lbl_821AAD20;


undefined8 fn_82FDA908(int param_1,ushort param_2,float *param_3)

{
  float fVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iStack_c;
  
  if ((param_3 == (float *)0x0) || (uVar2 = 1, 4 < param_2)) {
    return 0x1f;
  }
  if (param_2 == 1) {
    *(float *)(param_1 + 8) = *param_3;
    return uVar2;
  }
  if (param_2 != 2) {
    if (param_2 != 3) {
      if (param_2 == 0) {
        *(float *)(param_1 + 4) = *param_3;
        return uVar2;
      }
      *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)param_3;
      return uVar2;
    }
    fVar1 = *param_3;
    if (fVar1 <= lbl_8216C698) {
      *(float *)(param_1 + 0x10) = lbl_821AAD20;
      return uVar2;
    }
    if (lbl_821AAD20 <= fVar1) {
      *(float *)(param_1 + 0x10) = lbl_82002AE0;
      return uVar2;
    }
    uVar3 = (ulonglong)(fVar1 + lbl_8208ED48);
    iStack_c = (int)uVar3;
    fVar1 = (fVar1 + lbl_8208ED48) - (float)(uVar3 & 0xffffffff);
    *(float *)(param_1 + 0x10) =
         *(float *)(&lbl_8216E498 + iStack_c * 4) * (lbl_82002AE0 - fVar1) +
         *(float *)(&lbl_8216E49C + iStack_c * 4) * fVar1;
    return uVar2;
  }
  *(float *)(param_1 + 0xc) = *param_3;
  return uVar2;
}

