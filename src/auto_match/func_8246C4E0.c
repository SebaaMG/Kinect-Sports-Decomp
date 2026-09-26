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


longlong fn_8246C4E0(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if ((*(int *)(param_1 + 0x50) == 0) || ((int)*(uint *)(param_1 + 0x54) < 0)) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    uVar3 = 0;
    iVar1 = 0;
    uVar2 = (longlong)((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c)) / 0x28) - 1;
    if (uVar2 != 0) {
      do {
        if (((uVar3 & 0xffffffff) != (ulonglong)*(uint *)(param_1 + 0x2c)) &&
           ((uVar3 & 0xffffffff) != (ulonglong)*(uint *)(param_1 + 0x30))) {
          if (iVar1 == (int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
                            (float)(longlong)
                                   ((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c)) / 0x28 +
                                   -3))) {
            *(int *)(param_1 + 0x54) = (int)uVar3;
            uVar2 = uVar3 * 0x28 + (ulonglong)*(uint *)(param_1 + 0x1c);
            goto LAB_8246c5d8;
          }
          iVar1 = iVar1 + 1;
        }
        uVar3 = uVar3 + 1;
      } while ((uVar3 & 0xffffffff) < (uVar2 & 0xffffffff));
    }
    uVar2 = (ulonglong)*(uint *)(param_1 + 0x1c);
  }
  else {
    uVar2 = (ulonglong)*(uint *)(param_1 + 0x54) * 0x28 + (ulonglong)*(uint *)(param_1 + 0x1c);
  }
LAB_8246c5d8:
  return uVar2 + 8;
}

