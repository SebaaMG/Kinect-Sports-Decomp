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
extern int fn_8280A580();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_8226C410(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x44)) {
    iVar4 = 0;
    dVar6 = (double)lbl_821CA460;
    do {
      iVar2 = iVar4 + *(int *)(param_1 + 0x40);
      if ((*(uint *)(iVar2 + 0xe4) & *(uint *)(param_2 + 0x18)) != 0) {
        dVar5 = (double)fn_8280A580((double)*(float *)(iVar2 + 0xc0));
        *(float *)(iVar4 + *(int *)(param_1 + 0x40) + 0xc0) = (float)dVar5;
        iVar2 = iVar4 + *(int *)(param_1 + 0x40);
        *(float *)(iVar2 + 0xe8) = *(float *)(iVar2 + 0xc0) + *(float *)(param_2 + 0x14);
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        *(float *)(iVar4 + *(int *)(param_1 + 0x40) + 0xc4) =
             (float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar6) *
             *(float *)(param_2 + 0xc);
        iVar2 = iVar4 + *(int *)(param_1 + 0x40);
        fVar1 = *(float *)(iVar2 + 0xc4);
        *(float *)(iVar2 + 0xc4) = fVar1 * fVar1;
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        *(float *)(iVar4 + *(int *)(param_1 + 0x40) + 200) =
             (float)((double)(float)(dVar6 - (double)*(float *)(param_2 + 0x10)) *
                     (double)(float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar6)
                    + (double)*(float *)(param_2 + 0x10));
        *(undefined1 *)(iVar4 + *(int *)(param_1 + 0x40) + 0xe0) = 0;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xf0;
    } while (iVar3 < *(int *)(param_1 + 0x44));
  }
  return;
}

