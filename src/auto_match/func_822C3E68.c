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
extern int fn_822CCD18();
extern int fn_82A81CC0();
extern float lbl_82191FC4;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_831CDCB0;
extern unsigned int lbl_83265A28;


void fn_822C3E68(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  char cVar4;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x14) + 0x8c0);
  if (((piVar1 == (int *)0x0) || (iVar3 = (**(code **)(*piVar1 + 0x60))(), iVar3 == 0)) ||
     (cVar4 = fn_82A81CC0(), cVar4 != '\x02')) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    fVar2 = ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * lbl_82191FC4;
  }
  else {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    fVar2 = ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * lbl_82191FC4 +
            lbl_82191FC4;
  }
  *(int *)(param_1 + 0x208) = (int)fVar2;
  fn_822CCD18(*(undefined4 *)(param_1 + 0x18),0xffffffff821ace60,
                    (&lbl_831CDCB0)[(int)fVar2]);
  return;
}

