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


undefined8 fn_828FA220(int param_1,byte *param_2,byte *param_3)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  
  pbVar4 = param_2 + 1;
  param_3[0] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  *param_3 = *param_2;
  if (*(byte **)(param_1 + 4) <= pbVar4) {
    return 1;
  }
  bVar2 = *param_2;
  if ((bVar2 == 0x23) && ((bVar3 = *pbVar4, bVar3 == 0x23 || (bVar3 == 0x40))))
  goto code_r0x828fa268;
  bVar3 = *pbVar4;
  if (bVar2 == bVar3) {
    if (bVar2 < 0x3b) {
      if ((((bVar2 != 0x3a) && (bVar2 != 0x26)) && (bVar2 != 0x2b)) && (bVar2 != 0x2d)) {
        if (bVar2 != 0x2e) {
          return 1;
        }
        param_2 = param_2 + 2;
        if (*(byte **)(param_1 + 4) <= param_2) {
          return 1;
        }
        if (*param_2 != 0x2e) {
          return 1;
        }
        param_3[1] = bVar3;
        param_3[2] = *param_2;
        return 3;
      }
      goto code_r0x828fa268;
    }
    if (bVar2 == 0x3c) {
code_r0x828fa308:
      param_3[1] = bVar3;
      if (*(byte **)(param_1 + 4) <= param_2 + 2) {
        return 2;
      }
      if (param_2[2] != 0x3d) {
        return 2;
      }
      param_3[2] = 0x3d;
      return 3;
    }
    if (bVar2 == 0x3d) goto code_r0x828fa268;
    if (bVar2 == 0x3e) goto code_r0x828fa308;
code_r0x828fa2f8:
    bVar1 = bVar2 == 0x7c;
  }
  else {
    if (bVar3 == 0x3d) {
      if (bVar2 < 0x30) {
        if ((bVar2 != 0x2f) && (bVar2 != 0x21)) {
          if (bVar2 < 0x25) {
            return 1;
          }
          if (0x26 < bVar2) {
            if (bVar2 < 0x2a) {
              return 1;
            }
            if ((0x2b < bVar2) && (bVar2 != 0x2d)) {
              return 1;
            }
          }
        }
        goto code_r0x828fa268;
      }
      if (((bVar2 == 0x3c) || (bVar2 == 0x3e)) || (bVar2 == 0x5e)) goto code_r0x828fa268;
      goto code_r0x828fa2f8;
    }
    if (bVar2 != 0x2d) {
      return 1;
    }
    bVar1 = bVar3 == 0x3e;
  }
  if (!bVar1) {
    return 1;
  }
code_r0x828fa268:
  param_3[1] = bVar3;
  return 2;
}

