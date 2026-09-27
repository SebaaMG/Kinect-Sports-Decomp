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
extern float lbl_82015610;


void fn_82E94CC8(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (int)((((0x27 - (ulonglong)*(uint *)(*(int *)(param_1 + 0x1ebc) + 0x10) & 0xffffffff) >> 3
                 ) + (ulonglong)*(uint *)(*(int *)(param_1 + 0x1ebc) + 4) & 0xffffffff) << 3);
  *(int *)(param_1 + 0x1f08) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x1f58) = 0;
    *(undefined4 *)(param_1 + 0x7778) = 0;
    return;
  }
  iVar1 = *(int *)(param_1 + 0xaf0);
  if ((((iVar1 != 1) || (iVar3 <= *(int *)(param_1 + 0x1f10))) ||
      (*(int *)(param_1 + 0x2a4) < *(int *)(param_1 + 0x7710))) ||
     ((double)(longlong)iVar3 <= *(double *)(param_1 + 0x7708))) {
    if (iVar1 != 0) goto LAB_82e94da8;
    uVar2 = (uint)(*(double *)(param_1 + 0x76e8) - *(double *)(param_1 + 0x76f8) <=
                  *(double *)(param_1 + 0x76f8) * lbl_82015610);
    *(uint *)(param_1 + 0x7734) = uVar2;
    if ((uVar2 != 0) && (*(int *)(param_1 + 0x2a0) < *(int *)(param_1 + 0x7710))) {
      iVar3 = *(int *)(param_1 + 0x777c) + -1;
      if (iVar3 < 2) {
        iVar3 = 1;
      }
      *(int *)(param_1 + 0x777c) = iVar3;
      goto LAB_82e94da8;
    }
    if ((*(int *)(param_1 + 0x1f08) <= *(int *)(param_1 + 0x1f44)) &&
       ((uVar2 != 0 || (*(int *)(param_1 + 0x2a0) < *(int *)(param_1 + 0x7710)))))
    goto LAB_82e94da8;
  }
  iVar3 = *(int *)(param_1 + 0x7778) + 1;
  *(int *)(param_1 + 0x7778) = iVar3;
  if (iVar3 <= *(int *)(param_1 + 0x777c)) {
    *(undefined4 *)(param_1 + 0x1f58) = 1;
    return;
  }
LAB_82e94da8:
  *(undefined4 *)(param_1 + 0x7778) = 0;
  *(undefined4 *)(param_1 + 0x1f58) = 0;
  *(int *)(param_1 + 0x890) = (*(int *)(param_1 + 0x1f08) >> 3) + *(int *)(param_1 + 0x890);
  *(int *)(param_1 + 0x1f10) = *(int *)(param_1 + 0x1f10) - *(int *)(param_1 + 0x1f08);
  if (((iVar1 == 0) && (*(int *)(param_1 + 0x7734) == 0)) &&
     (*(int *)(param_1 + 0x7710) <= *(int *)(param_1 + 0x2a0))) {
    *(int *)(param_1 + 0x777c) = *(int *)(param_1 + 0x777c) + 2;
  }
  return;
}

