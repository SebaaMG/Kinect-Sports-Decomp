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
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_820162A0;
extern unsigned int lbl_8201DFF4;
extern unsigned int lbl_8201FBC0;
extern unsigned int lbl_82021534;
extern unsigned int lbl_82028814;
extern unsigned int lbl_820579A8;
extern unsigned int lbl_82057B54;
extern unsigned int lbl_8207F528;
extern unsigned int lbl_8208DDB4;
extern unsigned int lbl_8208ED5C;
extern unsigned int lbl_820A80BC;
extern unsigned int lbl_82186E74;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_82A7CC90(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  iVar2 = *(int *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x28) = 1;
  fVar1 = lbl_82002C5C;
  fVar3 = (float)(longlong)iVar2 * lbl_82002C5C;
  *(float *)(param_1 + 0x18c) = fVar3;
  fVar4 = lbl_8201DFF4;
  if (*(int *)(param_1 + 0x3c) == 1) {
    if (iVar2 != 0x5622) {
      if (iVar2 != 0xac44) {
        if (iVar2 == 16000) {
code_r0x82a7cd64:
          if (fVar1 < *(float *)(param_1 + 0x2c)) {
            *(float *)(param_1 + 0x18c) = fVar3 * fVar1;
            *(undefined4 *)(param_1 + 0x198) = 3;
            return 0;
          }
          *(float *)(param_1 + 0x18c) = fVar3 * lbl_82186E74;
          return 0;
        }
        if (iVar2 == 0x2b11) {
code_r0x82a7ce9c:
          *(float *)(param_1 + 0x18c) = fVar3 * lbl_82057B54;
          if (*(float *)(param_1 + 0x2c) < fVar4) {
            return 0;
          }
          *(undefined4 *)(param_1 + 0x198) = 3;
          return 0;
        }
        if (iVar2 != 8000) {
          if (lbl_820579A8 <= *(float *)(param_1 + 0x2c)) {
code_r0x82a7ce00:
            *(float *)(param_1 + 0x18c) = fVar3 * lbl_82021534;
            return 0;
          }
          if (lbl_8201FBC0 <= *(float *)(param_1 + 0x2c)) {
            *(float *)(param_1 + 0x18c) = fVar3 * lbl_8201FBC0;
            return 0;
          }
          goto code_r0x82a7cefc;
        }
code_r0x82a7cdb0:
        if (*(float *)(param_1 + 0x2c) <= lbl_82028814) {
code_r0x82a7cefc:
          *(float *)(param_1 + 0x18c) = fVar3 * fVar1;
          return 0;
        }
        if (*(float *)(param_1 + 0x2c) <= lbl_82021534) {
          *(float *)(param_1 + 0x18c) = fVar3 * lbl_8207F528;
          return 0;
        }
        goto code_r0x82a7ce74;
      }
      fVar1 = *(float *)(param_1 + 0x30);
joined_r0x82a7ce70:
      if (fVar1 < lbl_820A80BC) {
        *(float *)(param_1 + 0x18c) = fVar3 * lbl_820162A0;
        return 0;
      }
      goto code_r0x82a7ce74;
    }
  }
  else {
    if ((2 < *(int *)(param_1 + 0x3c)) || (48000 < iVar2)) goto code_r0x82a7ce74;
    if (0xac43 < iVar2) {
      fVar1 = *(float *)(param_1 + 0x30);
      goto joined_r0x82a7ce70;
    }
    if (iVar2 < 0x5622) {
      if (15999 < iVar2) goto code_r0x82a7cd64;
      if (0x2b10 < iVar2) goto code_r0x82a7ce9c;
      if (iVar2 < 8000) {
        if (lbl_820579A8 <= *(float *)(param_1 + 0x2c)) goto code_r0x82a7ce00;
        fVar4 = lbl_8201FBC0;
        if (*(float *)(param_1 + 0x2c) < lbl_8201FBC0) goto code_r0x82a7cefc;
        goto code_r0x82a7cd00;
      }
      goto code_r0x82a7cdb0;
    }
  }
  if (*(float *)(param_1 + 0x30) < lbl_8208ED5C) {
    fVar4 = lbl_82057B54;
    if (*(float *)(param_1 + 0x30) < lbl_8208DDB4) {
      *(float *)(param_1 + 0x18c) = fVar3 * lbl_8201FBC0;
      return 0;
    }
code_r0x82a7cd00:
    *(float *)(param_1 + 0x18c) = fVar3 * fVar4;
    return 0;
  }
code_r0x82a7ce74:
  *(undefined4 *)(param_1 + 0x28) = 0;
  return 0;
}

