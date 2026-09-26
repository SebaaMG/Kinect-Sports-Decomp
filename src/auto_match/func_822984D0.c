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
extern int fn_82298280();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821956A4;
extern unsigned int lbl_8327F894;


undefined8 fn_822984D0(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  
  fVar3 = lbl_821956A4;
  if (*(float *)(param_1 + 0x80) < lbl_821956A4) {
    fVar2 = *(float *)(param_1 + 0x80) + lbl_8327F894;
    *(float *)(param_1 + 0x80) = fVar2;
    if (fVar3 <= fVar2) {
      *(float *)(param_1 + 0x80) = fVar3;
    }
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x5c) == 0) goto LAB_8229853c;
    bVar4 = true;
    if (*(float *)(param_1 + 0x80) < lbl_821916FC) {
      bVar4 = false;
    }
LAB_8229854c:
    if (!bVar4 && *(int *)(param_1 + 0x54) == 0) goto LAB_82298560;
  }
  else if ((iVar1 < 0xb) || (0xd < iVar1)) {
LAB_8229853c:
    bVar4 = *(int *)(param_1 + 0x48) != iVar1;
    goto LAB_8229854c;
  }
  fn_82298280(param_1);
LAB_82298560:
  *(undefined4 *)(param_1 + 0x54) = 0;
  return 0;
}

