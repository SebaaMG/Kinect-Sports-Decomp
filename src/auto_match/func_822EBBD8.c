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
extern float fRam831cd13c;
extern float fRam831cd140;
extern int iRam831cd148;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


undefined8 fn_822EBBD8(int param_1)

{
  int iVar1;
  int iVar3;
  undefined8 uVar2;
  uint uVar4;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x178);
  if ((iVar1 == 2) || (iVar1 == 1)) {
LAB_822ebcc4:
    uVar2 = 1;
  }
  else {
    if ((iRam831cd148 == 0) ||
       (iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c),
       iVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x10) + 0x2e0) + 0x34))(), iVar3 != iVar1)
       ) {
      uVar4 = (**(code **)(**(int **)(*(int *)(param_1 + 0x10) + 0x2e0) + 0x3c))();
      if (fRam831cd13c < (float)uVar4) {
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        if ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460 < fRam831cd140)
        goto LAB_822ebcc4;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

