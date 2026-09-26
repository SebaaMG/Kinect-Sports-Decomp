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
extern int fn_825602B8();
extern int fn_82560690();
extern int fn_82560708();
extern int fn_825612B8();
extern int iRam831c1e20;
extern int iRam831c1e24;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831C1DE0;
extern unsigned int lbl_8326B430;
extern unsigned int lbl_8326B434;
extern unsigned int uRam8326b468;


void fn_825611A8(void)

{
  float fVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  ulonglong uVar7;
  int iVar8;
  double dVar9;
  
  uVar2 = fn_82560690(0);
  iVar8 = iRam831c1e20;
  puVar5 = &lbl_831C1DE0;
  iVar4 = iRam831c1e24;
  iVar3 = fn_82560708(uVar2,uVar2);
  if (iVar3 != 0) {
    iVar4 = puVar5[0x14];
    iVar8 = puVar5[0x13];
  }
  if ((iVar4 != lbl_8326B434) || (iVar8 != lbl_8326B430)) {
    uRam8326b468 = 1;
    lbl_8326B430 = iVar8;
    lbl_8326B434 = iVar4;
  }
  uVar7 = 0;
  piVar6 = (int *)0x83280b8c;
  dVar9 = (double)lbl_821CC160;
  do {
    iVar4 = fn_825602B8(uVar7);
    if (iVar4 != 0) {
      fVar1 = (float)dVar9;
      for (iVar4 = *piVar6; iVar4 != 0; iVar4 = *(int *)(iVar4 + 4)) {
        puVar5 = (undefined4 *)(iVar4 + 0xb4);
        fn_825612B8(uVar7);
        if ((*(uint *)(iVar4 + 0xa8) & 0x200) != 0) {
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0x500;
          puVar5[3] = 0x2d0;
        }
        *(float *)(iVar4 + 0x60) = fVar1;
        *(undefined4 *)(iVar4 + 0xd0) = 1;
      }
    }
    uVar7 = uVar7 + 1;
    piVar6 = piVar6 + 2;
  } while ((uVar7 & 0xffffffff) < 2);
  return;
}

