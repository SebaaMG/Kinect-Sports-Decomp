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
extern unsigned int *auStack_70;
extern int fn_823AB478();
extern int fn_8245AE18();
extern int fn_8245AF50();
extern int fn_8245AFC0();
extern int fn_8245B050();
extern int fn_8245B100();
extern int fn_8245B168();
extern int fn_8245B1F0();


bool fn_824BC468(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined1 uVar11;
  int iVar10;
  undefined4 auStack_70 [28];
  
  iVar8 = *(int *)(param_2 + 0x100);
  uVar1 = *(undefined4 *)(iVar8 + 0x8e8);
  uVar2 = *(undefined4 *)(iVar8 + 0x8e4);
  uVar3 = *(undefined4 *)(iVar8 + 0x120);
  uVar4 = *(uint *)(iVar8 + 0x8d4);
  uVar5 = *(uint *)(iVar8 + 0x8e0);
  uVar6 = *(uint *)(iVar8 + 0x8ec);
  uVar7 = *(undefined4 *)(iVar8 + 0x8d8);
  iVar8 = fn_8245AE18();
  iVar10 = -0x7fffbffb;
  iVar9 = fn_8245B1F0();
  if (iVar9 != 0) {
    fn_8245AF50(iVar8,0x20);
    if (*(int *)(iVar8 + 0x14) == 0) {
      *(undefined4 *)(iVar8 + 0x14) = 1;
    }
    uVar11 = fn_823AB478(param_2);
    fn_8245B050(iVar8,uVar11,4);
    fn_8245B050(iVar8,uVar5 & 0xff,4);
    fn_8245B050(iVar8,uVar4 & 0xff,4);
    fn_8245B050(iVar8,uVar6 & 0xff,4);
    fn_8245B100(iVar8);
    auStack_70[0] = uVar1;
    fn_8245B168(iVar8,auStack_70,4);
    auStack_70[0] = uVar2;
    fn_8245B168(iVar8,auStack_70,4);
    auStack_70[0] = uVar3;
    fn_8245B168(iVar8,auStack_70,4);
    auStack_70[0] = uVar7;
    fn_8245B168(iVar8,auStack_70,4);
    iVar10 = fn_8245AFC0(iVar8,0xffffffff824b8538,param_1);
  }
  return iVar10 == 0;
}

