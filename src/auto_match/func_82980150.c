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
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005F78;


undefined8 fn_82980150(undefined8 param_1,uint *param_2,uint *param_3)

{
  ulonglong uVar1;
  double dVar2;
  uint uVar3;
  
  uVar3 = *param_2;
  if (uVar3 == 0) {
    uVar3 = *param_3;
    if (((uVar3 != 0) && (uVar3 != 1)) && (2 < uVar3)) {
      if (uVar3 != 3) {
        return 0xffffffff80004005;
      }
      uVar3 = 1;
      if (*(double *)(param_3 + 2) == lbl_82005710) {
        uVar3 = 0;
      }
      goto code_r0x8298031c;
    }
code_r0x82980310:
    uVar3 = (uint)(param_3[2] != 0);
  }
  else {
    if (uVar3 == 1) {
      uVar3 = *param_3;
      if (uVar3 == 0) goto code_r0x82980310;
      if ((uVar3 != 1) && (2 < uVar3)) {
        if (uVar3 != 3) {
          return 0xffffffff80004005;
        }
        dVar2 = *(double *)(param_3 + 2);
        if (dVar2 < lbl_82005710) {
          dVar2 = dVar2 - lbl_82005F78;
        }
        else {
          dVar2 = dVar2 + lbl_82005F78;
        }
        uVar3 = (uint)dVar2;
code_r0x82980270:
        param_2[2] = uVar3;
        return 0;
      }
    }
    else if (uVar3 < 3) {
      uVar3 = *param_3;
      if (uVar3 == 0) goto code_r0x82980310;
      if ((uVar3 != 1) && (2 < uVar3)) {
        if (uVar3 != 3) {
          return 0xffffffff80004005;
        }
        dVar2 = *(double *)(param_3 + 2);
        if (dVar2 < lbl_82005710) {
          dVar2 = dVar2 - lbl_82005F78;
        }
        else {
          dVar2 = dVar2 + lbl_82005F78;
        }
        uVar3 = (uint)(longlong)dVar2;
        goto code_r0x82980270;
      }
    }
    else {
      if (uVar3 == 3) {
        uVar3 = *param_3;
        if (uVar3 == 0) {
          uVar1 = (ulonglong)(int)(uint)(param_3[2] != 0);
        }
        else if (uVar3 == 1) {
          uVar1 = (ulonglong)(int)param_3[2];
        }
        else {
          if (2 < uVar3) {
            if (uVar3 != 3) {
              return 0xffffffff80004005;
            }
            dVar2 = *(double *)(param_3 + 2);
            goto code_r0x829801e0;
          }
          uVar1 = (ulonglong)param_3[2];
        }
        dVar2 = (double)(longlong)uVar1;
code_r0x829801e0:
        *(double *)(param_2 + 2) = dVar2;
        return 0;
      }
      if (uVar3 < 5) {
        if (*param_3 != 4) {
          return 0xffffffff80004005;
        }
      }
      else {
        if (uVar3 != 5) {
          return 0xffffffff80004005;
        }
        if (*param_3 != 4) {
          if (*param_3 == 5) {
            param_2[2] = param_3[2];
            param_2[3] = param_3[3];
            return 0;
          }
          return 0xffffffff80004005;
        }
        *param_2 = 4;
      }
    }
    uVar3 = param_3[2];
  }
code_r0x8298031c:
  param_2[2] = uVar3;
  return 0;
}

