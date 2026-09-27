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
extern unsigned int *auStack_44;
extern unsigned int *auStack_60;
extern unsigned int *auStack_84;
extern unsigned int *auStack_a0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822C1730();
extern int fn_822CCD18();
extern int fn_82A81CC0();
extern float lbl_82192604;
extern unsigned int lbl_821AD4A8;
extern unsigned int lbl_821AD4B4;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_822CFB50(int param_1)

{
  undefined *puVar1;
  int iVar2;
  char cVar4;
  undefined1 *puVar3;
  ulonglong uVar5;
  undefined1 auStack_a0 [28];
  undefined1 auStack_84 [36];
  undefined1 auStack_60 [28];
  undefined1 auStack_44 [68];
  
  iVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 0x8c0) + 0x60))();
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x170);
  if ((iVar2 == 0) || (cVar4 = fn_82A81CC0(), cVar4 != '\x02')) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    iVar2 = (int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * lbl_82192604);
    fn_822CCD18(*(undefined4 *)(param_1 + 0x18),0xffffffff821acbd0,(&lbl_821AD4B4)[iVar2]
                 );
    if (uVar5 == 0) {
      return;
    }
    puVar1 = (&lbl_821AD4B4)[iVar2];
    fn_82230110(auStack_60,0xffffffff821acbd0);
    fn_82230110(auStack_44,puVar1);
    fn_822C1730(uVar5 + 0x54,auStack_60);
    fn_82230300(auStack_44,1,0);
    puVar3 = auStack_60;
  }
  else {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    iVar2 = (int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * lbl_82192604);
    fn_822CCD18(*(undefined4 *)(param_1 + 0x18),0xffffffff821acbd0,
                  (&lbl_821AD4A8)[iVar2]);
    if (uVar5 == 0) {
      return;
    }
    puVar1 = (&lbl_821AD4A8)[iVar2];
    fn_82230110(auStack_a0,0xffffffff821acbd0);
    fn_82230110(auStack_84,puVar1);
    fn_822C1730(uVar5 + 0x54,auStack_a0);
    fn_82230300(auStack_84,1,0);
    puVar3 = auStack_a0;
  }
  fn_82230300(puVar3,1,0);
  return;
}

