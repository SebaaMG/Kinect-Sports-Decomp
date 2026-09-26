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
extern unsigned int *auStack_30;
extern int fn_822CDCF8();
extern int fn_822CF008();
extern unsigned int lbl_821914B0;
extern unsigned int lbl_821929B0;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


undefined8 fn_822E1680(int param_1)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  int in_r0;
  int iVar5;
  float afStack_40 [4];
  undefined1 auStack_30 [24];
  
  if (*(float *)(param_1 + 0x4c) < lbl_821CC160) {
    if (*(int *)(*(int *)(param_1 + 0x10) + 0x54) == 0xb) {
      iVar5 = fn_822CF008((double)lbl_821929B0,*(undefined4 *)(param_1 + 0x14));
      if (iVar5 != 0) {
        iVar5 = *(int *)(param_1 + 0x14);
        fn_822CDCF8(iVar5,auStack_30,afStack_40);
        fVar4 = lbl_821914B0;
        pfVar2 = (float *)((int)afStack_40 + in_r0 & 0xfffffff0);
        pfVar3 = (float *)(iVar5 + 0x90U & 0xfffffff0);
        fVar1 = *pfVar2 * *pfVar3 + pfVar2[1] * pfVar3[1] + pfVar2[2] * pfVar3[2] +
                pfVar2[3] * pfVar3[3];
        pfVar2 = (float *)((int)afStack_40 + in_r0 & 0xfffffff0);
        *pfVar2 = fVar1;
        pfVar2[1] = fVar1;
        pfVar2[2] = fVar1;
        pfVar2[3] = fVar1;
        if (fVar4 <= afStack_40[0]) {
          return 1;
        }
      }
    }
    else {
      iVar5 = fn_822CF008((double)lbl_821CA460,*(undefined4 *)(param_1 + 0x14));
      if (((iVar5 != 0) || (iVar5 = *(int *)(*(int *)(param_1 + 0x10) + 0x54), iVar5 == 0xc)) ||
         (iVar5 == 0xf)) {
        return 1;
      }
    }
  }
  return 0;
}

