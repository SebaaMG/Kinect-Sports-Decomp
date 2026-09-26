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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_822C6B30();
extern int fn_825613E0();
extern unsigned int lbl_821CC160;
extern V16 loadVectorLeftIndexed128();


void fn_82304490(int param_1,undefined8 param_2)

{
  uint uVar1;
  float *pfVar2;
  undefined8 in_r0;
  float in_register_00010000;
  float in_ACC;
  float in_register_00010008;
  float in_vr0;
  
  if ((*(undefined4 **)(param_1 + 0x54))[1] != 0) {
    uVar1 = *(uint *)(param_1 + 0x24);
    fn_822C6B30(param_2,*(undefined4 *)(param_1 + 0x20),(ulonglong)uVar1,
                      CONCAT44(lbl_821CC160,**(undefined4 **)(param_1 + 0x54)),
                      (ulonglong)lbl_821CC160 << 0x20);
    pfVar2 = (float *)((int)in_r0 + (int)param_2 & 0xfffffff0);
    loadVectorLeftIndexed128(in_r0,(ulonglong)uVar1 + 0x40);
    in_register_00010000 = *pfVar2 * in_register_00010000;
    in_ACC = pfVar2[1] * in_ACC;
    in_register_00010008 = pfVar2[2] * in_register_00010008;
    in_vr0 = pfVar2[3] * in_vr0;
    fn_825613E0(-(double)*(float *)(uVar1 + 0x40),(double)*(float *)(uVar1 + 0x40));
    pfVar2 = (float *)(uVar1 + 0x10 & 0xfffffff0);
    *pfVar2 = in_register_00010000;
    pfVar2[1] = in_ACC;
    pfVar2[2] = in_register_00010008;
    pfVar2[3] = in_vr0;
  }
  return;
}

