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
extern int fn_82F65350();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;


void fn_8254C278(double param_1,double param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(param_4 + 0x34) == 0) && (*(int *)(param_4 + 0x58) != param_5)) {
    *(float *)(param_4 + 0x44) = (float)param_1;
    *(float *)(param_4 + 0x40) = (float)param_2;
    iVar2 = (param_5 + 0xb) * 4;
    *(undefined4 *)(param_4 + 0x24) = lbl_821CC160;
    iVar3 = *(int *)(*(int *)(param_4 + 0x10) * 8 + *(int *)(param_3 + 0x18) + 4) * 0x54 +
            *(int *)(param_3 + 0xb4);
    if (0 < *(int *)(iVar2 + iVar3)) {
      iVar1 = fn_82F65350();
      iVar2 = *(int *)(iVar2 + iVar3);
      iVar2 = (iVar1 - (iVar1 / iVar2) * iVar2) + *(int *)((param_5 + 3) * 4 + iVar3);
      if (-1 < iVar2) {
        *(int *)(param_4 + 0x28) = iVar2;
        *(int *)(param_4 + 0x58) = param_5;
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        *(int *)(param_4 + 0x20) =
             (int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
                  (float)(longlong)*(int *)(iVar2 * 0x18 + *(int *)(param_3 + 0x28) + 4));
      }
    }
    *(undefined4 *)(param_4 + 0x34) = 1;
  }
  return;
}

