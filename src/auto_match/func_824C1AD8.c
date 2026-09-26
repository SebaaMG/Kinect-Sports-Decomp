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
extern int fn_82511928();
extern int fn_825138E0();
extern int fn_8251A108();
extern unsigned int iStack_1c;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;
extern unsigned int lbl_83297810;


void fn_824C1AD8(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  ulonglong uVar6;
  float fStack_20;
  int iStack_1c;
  
  fVar5 = lbl_821CA460;
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  uVar4 = lbl_83265A28 & 0x7fffff;
  param_1[10] = lbl_821CC160;
  fStack_20 = (float)(uVar4 | 0x3f800000);
  param_1[0xb] = (int)(((float)param_1[9] - (float)param_1[8]) * (fStack_20 - fVar5) +
                      (float)param_1[8]);
  *(undefined4 *)*param_1 = 2;
  *(undefined4 *)(*param_1 + 0x2c) = 8;
  uVar6 = (ulonglong)lbl_83297810;
  uVar1 = *(undefined4 *)(param_1[1] + 8);
  if (uVar6 == 0) {
    uVar6 = fn_82511928();
  }
  fn_825138E0(&fStack_20,uVar6,uVar1);
  if (fStack_20 != 0.0) {
    piVar2 = *(int **)((int)fStack_20 + 0x18);
    iVar3 = *param_1;
    (**(code **)(*piVar2 + 4))(piVar2);
    fn_8251A108(piVar2 + 4,iVar3);
  }
  if (iStack_1c != 0) {
    fn_822315A0();
  }
  return;
}

