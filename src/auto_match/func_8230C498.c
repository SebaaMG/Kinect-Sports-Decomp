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
extern float fRam831cc4d8;
extern float fRam831cc4dc;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_82250A18();
extern int fn_822FB198();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int lbl_832975B0;


void fn_8230C498(int param_1)

{
  float fVar1;
  int iVar2;
  undefined1 auStack_30 [32];
  
  fn_82230110(auStack_30,0xffffffff821aef0c);
  fn_822FB198(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + 0x114) + 0xc0),auStack_30);
  fn_82230300(auStack_30,1,0);
  iVar2 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar2 = fn_82250A18();
  }
  fVar1 = fRam831cc4dc;
  if (*(char *)(iVar2 + 4) == '\0') {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    fVar1 = (fRam831cc4dc - fRam831cc4d8) *
            ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) + fRam831cc4d8;
  }
  *(float *)(param_1 + 0x38) = fVar1;
  *(undefined4 *)(param_1 + 0x3c) = 1;
  return;
}

