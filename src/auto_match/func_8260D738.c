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
extern unsigned int *auStack_1838;
extern unsigned int *auStack_1840;
extern unsigned int *auStack_1880;
extern unsigned int *auStack_c70;
extern int fn_8259A230();
extern int fn_8260D8C0();
extern int fn_8260D928();
extern int fn_82A1BB18();
extern int fn_82F6B030();
extern unsigned int lbl_82195820;
extern unsigned int lbl_82196582;
extern unsigned int lbl_832823A8;


void fn_8260D738(void)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  undefined8 auStack_1880 [4];
  longlong lStack_1860;
  undefined1 *apuStack_1850 [2];
  longlong lStack_1848;
  undefined4 auStack_1840 [2];
  undefined8 auStack_1838 [377];
  undefined8 auStack_c70 [6];
  undefined1 *apuStack_c40 [2];
  longlong alStack_c38 [391];
  
  fn_82A1BB18();
  iVar1 = fn_8259A230();
  apuStack_1850[0] = &lbl_82196582;
  puVar3 = auStack_1880;
  lVar4 = 0x20;
  do {
    puVar3[7] = 0;
    *(undefined4 *)(puVar3 + 8) = 0;
    puVar3[9] = 0xffffffffffffffff;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    *(undefined4 *)((int)puVar3 + 0x94) = 0;
    puVar3 = puVar3 + 0xc;
    *puVar3 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  apuStack_c40[0] = &lbl_82196582;
  puVar3 = auStack_c70;
  lVar4 = 0x20;
  do {
    puVar3[7] = 0;
    *(undefined4 *)(puVar3 + 8) = 0;
    puVar3[9] = 0xffffffffffffffff;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    *(undefined4 *)((int)puVar3 + 0x94) = 0;
    puVar3 = puVar3 + 0xc;
    *puVar3 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  fn_8260D8C0(apuStack_1850);
  fn_8260D928(apuStack_1850);
  lVar5 = (&lStack_1848)[iVar1 * 0xc];
  lStack_1860 = (longlong)(float)lVar5;
  fn_82A1BB18();
  iVar2 = fn_8259A230();
  auStack_1840[iVar2 * 0x18] = 0;
  auStack_1838[iVar2 * 0xc] = 0xffffffffffffffff;
  auStack_1838[iVar2 * 0xc + 1] = 0;
  (&lStack_1848)[iVar2 * 0xc] = 0;
  fn_8260D8C0(apuStack_1850);
  lVar4 = 1000;
  do {
    fn_8260D8C0(apuStack_c40);
    fn_8260D928(apuStack_c40);
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  fn_8260D928(apuStack_1850);
  lStack_1860 = (longlong)(float)(&lStack_1848)[iVar1 * 0xc];
  dVar6 = (double)fn_82F6B030((lStack_1860 - (longlong)(float)alStack_c38[iVar1 * 0xc]) -
                               (longlong)(float)lVar5);
  lbl_832823A8 = (longlong)(dVar6 * lbl_82195820);
  return;
}

