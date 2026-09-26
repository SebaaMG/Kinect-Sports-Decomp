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
extern int fn_826374C0();


void fn_8263A508(int param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  ulonglong uVar3;
  byte bVar4;
  
  *(int *)(param_1 + 0x3158) = param_2;
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x2940) = *(uint *)(param_1 + 0x2940) & 0xfffffff0;
    *(byte *)(param_1 + 0x2abe) = *(byte *)(param_1 + 0x2abe) & 0xdf;
    uVar3 = *(ulonglong *)(param_1 + 0x10) | 0x100;
  }
  else {
    if (*(int *)(param_1 + 0x3148) == 0) {
      fn_826374C0();
    }
    *(undefined4 *)(param_1 + 0x2888) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(param_1 + 0x2940) = *(undefined4 *)(param_2 + 0x20);
    *(byte *)(param_1 + 0x2abe) =
         ((byte)*(undefined4 *)(param_2 + 0x20) & 1) << 5 | *(byte *)(param_1 + 0x2abe) & 0xdf;
    if ((*(byte *)(param_1 + 0x2abf) & 0x20) != 0) {
      if ((*(byte *)(param_1 + 0x2abc) & 0x10) == 0) {
        if (((((*(byte *)(param_1 + 0x2abc) & 0x20) == 0) ||
             ((*(int *)(param_1 + 0x3268) != *(int *)(param_1 + 0x3148) &&
              (*(int *)(param_1 + 0x3148) != 0)))) ||
            ((*(int *)(param_1 + 0x326c) != *(int *)(param_1 + 0x314c) &&
             (*(int *)(param_1 + 0x314c) != 0)))) ||
           ((((*(int *)(param_1 + 0x3270) != *(int *)(param_1 + 0x3150) &&
              (*(int *)(param_1 + 0x3150) != 0)) ||
             ((*(int *)(param_1 + 0x3274) != *(int *)(param_1 + 0x3154) &&
              (*(int *)(param_1 + 0x3154) != 0)))) ||
            ((*(int *)(param_1 + 0x3278) != *(int *)(param_1 + 0x3158) &&
             (*(int *)(param_1 + 0x3158) != 0)))))) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        *(uint *)(param_1 + 0x2880) =
             *(int *)(param_1 + 0x3424) << 0x12 | *(uint *)(param_1 + 0x2880) & 0x3ffff;
      }
    }
    uVar3 = *(ulonglong *)(param_1 + 0x10);
    *(ulonglong *)(param_1 + 0x10) = uVar3 | 0x80000000000000;
    *(ulonglong *)(param_1 + 0x10) = uVar3 | 0x80000000000100;
    uVar3 = uVar3 | 0x80000000020100;
  }
  *(ulonglong *)(param_1 + 0x10) = uVar3;
  if ((((*(int *)(param_1 + 0x325c) == 0) && (bVar4 = *(byte *)(param_1 + 0x2abc), (bVar4 & 8) == 0)
       ) && ((bVar4 & 4) == 0)) && (*(char *)(param_1 + 0x304b) == '\0')) {
    if ((bVar4 & 0x10) == 0) {
      if (((((bVar4 & 0x20) == 0) ||
           ((*(int *)(param_1 + 0x3268) != *(int *)(param_1 + 0x3148) &&
            (*(int *)(param_1 + 0x3148) != 0)))) ||
          ((*(int *)(param_1 + 0x326c) != *(int *)(param_1 + 0x314c) &&
           (*(int *)(param_1 + 0x314c) != 0)))) ||
         ((((*(int *)(param_1 + 0x3270) != *(int *)(param_1 + 0x3150) &&
            (*(int *)(param_1 + 0x3150) != 0)) ||
           ((*(int *)(param_1 + 0x3274) != *(int *)(param_1 + 0x3154) &&
            (*(int *)(param_1 + 0x3154) != 0)))) ||
          ((*(int *)(param_1 + 0x3278) != *(int *)(param_1 + 0x3158) &&
           (*(int *)(param_1 + 0x3158) != 0)))))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
    else {
      bVar2 = true;
    }
    bVar4 = 1;
    if (bVar2) goto LAB_8263a74c;
  }
  bVar4 = 0;
LAB_8263a74c:
  uVar1 = *(uint *)(param_1 + 0x2f14);
  *(byte *)(param_1 + 0x2abc) = bVar4 | *(byte *)(param_1 + 0x2abc) & 0xfe;
  *(uint *)(param_1 + 0x2f14) = uVar1;
  *(uint *)(param_1 + 0x2934) =
       (-(uint)(*(int *)(param_1 + 0x3158) != 0) & uVar1 & 1) << 1 |
       *(uint *)(param_1 + 0x2934) & 0xfffffffd;
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  *(ulonglong *)(param_1 + 0x10) = uVar3 | 0x800;
  *(ulonglong *)(param_1 + 0x10) = uVar3 | 0x20800;
  uVar1 = *(uint *)(param_1 + 0x2f18);
  *(uint *)(param_1 + 0x2f18) = uVar1;
  *(uint *)(param_1 + 0x2934) =
       *(uint *)(param_1 + 0x2934) & 0xfffffffe |
       -(uint)(*(int *)(param_1 + 0x3158) != 0) & uVar1 & 1;
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  *(ulonglong *)(param_1 + 0x10) = uVar3 | 0x800;
  *(ulonglong *)(param_1 + 0x10) = uVar3 | 0x20800;
  return;
}

