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
extern unsigned int fStack_20;
extern int fn_822315A0();
extern int fn_822F9B78();
extern int fn_824CCFC8();
extern unsigned int iStack_1c;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;


double fn_822F4E20(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  double dVar4;
  float fStack_20;
  int iStack_1c;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x24);
  if (iVar2 == 0) {
    if (*(int *)(param_3 + 0x184) != 0) {
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      fStack_20 = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000);
      if ((float)((double)fStack_20 - (double)lbl_821CA460) <
          *(float *)((*(int *)(*(int *)(param_1 + 0x10) + 0x844) + 100) * 4 +
                    *(int *)(*(int *)(param_1 + 0x10) + 0x83c))) {
        return (double)lbl_821CA460;
      }
    }
    puVar3 = (undefined4 *)fn_822F9B78(&fStack_20,*(undefined4 *)(param_1 + 0x18));
    dVar4 = (double)(**(code **)(*(int *)*puVar3 + 0x14))();
    if (iStack_1c != 0) {
      fn_822315A0();
    }
  }
  else {
    if (param_2 == 0) {
      piVar1 = *(int **)(iVar2 + 0xfc);
    }
    else {
      piVar1 = *(int **)(iVar2 + 0xf8);
    }
    if ((piVar1 == (int *)0x0) || (iVar2 = fn_824CCFC8(), iVar2 == 0)) {
      dVar4 = (double)lbl_821CC160;
    }
    else {
      dVar4 = (double)(**(code **)(*piVar1 + 0x14))(piVar1);
    }
  }
  return dVar4;
}

