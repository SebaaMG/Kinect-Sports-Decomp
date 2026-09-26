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
extern int fn_82520780();
extern int fn_827F5708();
extern unsigned int lbl_821912A4;
extern unsigned int lbl_82192604;
extern unsigned int lbl_821956C4;
extern unsigned int lbl_821956C8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_824F1388(double param_1,int param_2,longlong param_3)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  int iVar6;
  
  fVar5 = lbl_821CC160;
  iVar3 = (int)param_3 + param_2;
  iVar6 = (int)((param_3 + 0x17U & 0x3fffffff) << 2);
  fVar1 = *(float *)(iVar6 + param_2);
  if (*(char *)(iVar3 + 0xb0) == '\0') {
    if (fVar1 == lbl_821CA460) {
      iVar6 = (int)((param_3 + 0x1eU & 0xffffffff) << 2);
      fVar1 = (float)((double)*(float *)(iVar6 + param_2) - param_1);
      *(float *)(iVar6 + param_2) = fVar1;
      if (fVar1 <= fVar5) {
        *(undefined4 *)((int)((param_3 + 0x25U & 0xffffffff) << 2) + param_2) = lbl_821956C4;
        *(undefined1 *)(iVar3 + 0xb0) = 1;
      }
    }
    else if ((fVar1 == lbl_821CC160) &&
            (iVar6 = fn_82520780((double)lbl_821956C8,0xffffffff83265a28), uVar4 = lbl_82192604,
            iVar6 != 0)) {
      *(undefined4 *)((int)((param_3 + 0x25U & 0xffffffff) << 2) + param_2) = lbl_821912A4;
      *(undefined4 *)((int)((param_3 + 0x1eU & 0xffffffff) << 2) + param_2) = uVar4;
      *(undefined1 *)(iVar3 + 0xb0) = 1;
      *(undefined4 *)
       (*(int *)(*(int *)(*(int *)(param_2 + 0x54) + 400) + (int)((param_3 + 1U & 0xffffffff) << 2))
       + 0x118) = 0;
    }
  }
  else {
    fVar1 = *(float *)((int)((param_3 + 0x25U & 0xffffffff) << 2) + param_2) + fVar1;
    *(float *)(iVar6 + param_2) = fVar1;
    if (fVar5 < fVar1) {
      if (lbl_821CA460 <= fVar1) {
        *(float *)(iVar6 + param_2) = lbl_821CA460;
        *(undefined1 *)(iVar3 + 0xb0) = 0;
      }
    }
    else {
      *(float *)(iVar6 + param_2) = fVar5;
      *(undefined1 *)(iVar3 + 0xb0) = 0;
      *(undefined4 *)
       (*(int *)(*(int *)(*(int *)(param_2 + 0x54) + 400) + (int)((param_3 + 1U & 0xffffffff) << 2))
       + 0x118) = 1;
    }
    uVar2 = *(uint *)(param_2 + 0xb8);
    if ((uVar2 == 0) || (fVar5 <= *(float *)(param_2 + 0xbc))) {
      fVar1 = *(float *)((int)((param_3 * 3 + (ulonglong)uVar2 & 0xffffffff) << 2) + -0x7ce3cd90);
    }
    else {
      fVar1 = *(float *)((int)((param_3 * 3 + (ulonglong)uVar2 & 0xffffffff) << 2) + -0x7ce3cd90) *
              *(float *)(param_2 + 0xbc);
    }
    if (param_3 + 1U != 0) {
      fn_827F5708((double)(*(float *)(iVar6 + param_2) * fVar1),
                   *(undefined4 *)
                    (*(int *)(*(int *)(param_2 + 0x54) + 0x198) +
                     (int)((param_3 + 1U & 0xffffffff) << 2) + -4));
    }
  }
  return;
}

