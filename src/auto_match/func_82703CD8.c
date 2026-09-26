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
extern int fn_8267C498();
extern int fn_826F6FA8();
extern int fn_826F90D8();
extern int fn_82700248();
extern int fn_8271DE58();
extern int fn_82F68CC0();
extern int fn_82F6A540();
extern int fn_82F6A58C();


void fn_82703CD8(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  iVar4 = fn_82F6A540();
  dVar9 = (double)*(float *)(iVar4 + 0xa0);
  iVar5 = *(int *)(iVar4 + 0x80);
  dVar8 = (double)*(float *)(iVar4 + 0xa4);
  iVar6 = *(int *)(iVar4 + 0x84);
  iVar1 = *(int *)(iVar4 + 0x88);
  iVar2 = *(int *)(iVar4 + 0x8c);
  *(uint *)(iVar4 + 0xb00) = *(uint *)(iVar4 + 0xb00) | 1;
  fn_82F68CC0(iVar4 + 0x78);
  dVar7 = (double)*(float *)(iVar4 + 200);
  dVar11 = (double)*(float *)(iVar4 + 0xcc);
  dVar12 = (double)*(float *)(iVar4 + 0xd0);
  dVar10 = (double)*(float *)(iVar4 + 0xd4);
  fn_826F90D8(iVar4);
  if ((((dVar7 != (double)*(float *)(iVar4 + 200)) || (dVar12 != (double)*(float *)(iVar4 + 0xd0)))
      || (dVar11 != (double)*(float *)(iVar4 + 0xcc))) ||
     (bVar3 = false, dVar10 != (double)*(float *)(iVar4 + 0xd4))) {
    bVar3 = true;
  }
  if (((bVar3) ||
      ((*(int *)(iVar4 + 0xc0) == 0 &&
       ((((iVar1 != *(int *)(iVar4 + 0x88) || (iVar2 != *(int *)(iVar4 + 0x8c))) ||
         ((iVar5 != *(int *)(iVar4 + 0x80) ||
          ((iVar6 != *(int *)(iVar4 + 0x84) || (dVar9 != (double)*(float *)(iVar4 + 0xa0))))))) ||
        (dVar8 != (double)*(float *)(iVar4 + 0xa4))))))) ||
     ((*(int *)(iVar4 + 0xc0) != 2 &&
      (((iVar1 != *(int *)(iVar4 + 0x88) || (iVar2 != *(int *)(iVar4 + 0x8c))) ||
       (dVar8 != (double)*(float *)(iVar4 + 0xa4))))))) {
    iVar5 = fn_826F6FA8(iVar4,0);
    if (iVar5 != 0) {
      iVar5 = fn_82700248(iVar4 + 0xa2c,4);
      if (iVar5 != 0) {
        iVar6 = fn_826F6FA8(iVar4,0);
        *(undefined4 *)(iVar5 + 4) = 4;
        if (iVar6 != 0) {
          *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 1;
        }
        if (*(int *)(iVar5 + 8) != 0) {
          fn_8267C498();
        }
        *(int *)(iVar5 + 8) = iVar6;
        if (*(int *)(iVar5 + 0xc) != 0) {
          fn_8267C498();
        }
        *(undefined4 *)(iVar5 + 0xc) = 0;
        *(code **)(iVar5 + 0x2c) = fn_8271DE58;
      }
    }
  }
  fn_82F6A58C();
  return;
}

