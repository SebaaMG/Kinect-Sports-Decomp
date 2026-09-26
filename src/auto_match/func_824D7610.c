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
extern int fn_824CCFC8();
extern unsigned int lbl_821914B0;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


undefined8 fn_824D7610(int param_1,float *param_2)

{
  int iVar1;
  double dVar2;
  
  if ((*(int *)(param_1 + 0x118) != 0) && (iVar1 = fn_824CCFC8(), iVar1 != 0)) {
    dVar2 = (double)(**(code **)(**(int **)(param_1 + 0x118) + 0x14))();
    if ((*(int *)(param_1 + 0xf0) != 0) || ((double)lbl_821CC160 < dVar2)) {
      if (dVar2 < (double)lbl_821CA460) {
        dVar2 = (double)lbl_821914B0;
        if (*(int *)(param_1 + 0xf4) == 0) {
          dVar2 = (double)(float)((double)*(float *)(*(int *)(param_1 + 0x118) + 0x30) *
                                  (double)lbl_821CC160 + dVar2);
        }
        *param_2 = (float)dVar2;
        *(undefined4 *)(param_1 + 0xf0) = 0;
        *(undefined4 *)(param_1 + 0xf4) = 0;
        return 1;
      }
      *(undefined4 *)(param_1 + 0xf0) = 1;
      *(undefined4 *)(param_1 + 0xf4) = 1;
    }
  }
  return 0;
}

