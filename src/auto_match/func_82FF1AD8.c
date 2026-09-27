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
extern int fn_82FAB9C0();
extern float lbl_82021544;
extern unsigned int lbl_832642E0;


double fn_82FF1AD8(double param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_2 + 0x38);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x4c) == 0) {
      uVar2 = fn_82FAB9C0((ulonglong)lbl_832642E0 + 0xfe0,*(undefined4 *)(iVar1 + 0xc));
      *(undefined4 *)(iVar1 + 0x4c) = uVar2;
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    if ((iVar1 != 0) &&
       (piVar3 = (int *)(-(uint)(*(byte *)(iVar1 + 0x5c) != 0xff) &
                        (uint)*(byte *)(iVar1 + 0x5c) * 0xc + iVar1 + 0x20), piVar3 != (int *)0x0))
    {
      param_1 = (double)((float)((double)*(float *)(piVar3[1] * 0xc + *piVar3 + -0xc) * param_1) *
                        lbl_82021544);
    }
  }
  return param_1;
}

