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
extern unsigned int lbl_820FC2C8;
extern unsigned int lbl_82160788;
extern float lbl_8216CE90;
extern unsigned int lbl_8216CE98;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_82FAF650(int param_1,double *param_2)

{
  int iVar1;
  double dVar2;
  
  if (param_2 == (double *)0x0) {
    *(byte *)(param_1 + 0x98) = *(byte *)(param_1 + 0x98) & 0x7f;
    return 1;
  }
  *(byte *)(param_1 + 0x98) = *(byte *)(param_1 + 0x98) | 0x80;
  dVar2 = lbl_82160788;
  if (((((double)lbl_821AAD20 < (double)*(float *)(param_2 + 2)) &&
       (*(byte *)((int)param_2 + 0x15) != 0)) && (*(char *)((int)param_2 + 0x14) != '\0')) &&
     (lbl_82005710 < *param_2)) {
    iVar1 = (int)((lbl_820FC2C8 / (double)*(byte *)((int)param_2 + 0x15)) *
                  (lbl_8216CE98 / (double)*(float *)(param_2 + 2)) * lbl_8216CE90);
    *(int *)(param_1 + 0x88) = iVar1;
    *(uint *)(param_1 + 0x8c) = (uint)*(byte *)((int)param_2 + 0x14) * iVar1;
    *(int *)(param_1 + 0x90) = (int)(*param_2 * dVar2);
    *(int *)(param_1 + 0x94) = (int)(param_2[1] * dVar2);
    return 1;
  }
  return 0x1f;
}

