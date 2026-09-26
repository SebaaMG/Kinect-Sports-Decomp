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
extern unsigned int *auStack_50;
extern int fn_8249ABC0();
extern int fn_8249B5F0();
extern int fn_82F4EBE8();
extern int fn_82F4EC30();
extern int fn_82F52188();
extern int fn_82F53380();
extern unsigned int lbl_821CA460;


void fn_8249F6A0(int *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar4;
  undefined8 uVar3;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int *piVar8;
  double dVar9;
  undefined1 auStack_50 [80];
  
  uVar6 = 0xffffffffffffffff;
  uVar7 = 0;
  dVar9 = (double)lbl_821CA460;
  piVar1 = param_1;
  do {
    piVar8 = piVar1 + 2;
    if (-1 < (int)uVar6) goto LAB_8249f76c;
    if ((*piVar8 == 0) && (uVar2 = fn_82F4EC30(uVar7), (uVar2 & 0xffffffff) != 0)) {
      iVar4 = fn_82F53380(uVar2,param_1 + 1,0,1);
      iVar5 = 0;
      if (iVar4 != 0) {
        iVar5 = iVar4;
      }
      *piVar8 = iVar5;
    }
    iVar5 = *piVar8;
    piVar1[3] = (int)(float)(dVar9 - (double)(*(float *)(iVar5 + 0x58) / *(float *)(iVar5 + 0x50)));
    if (*(int *)(iVar5 + 0x5c) != 0) {
      piVar1[3] = (int)(float)dVar9;
    }
    if (*(int *)(iVar5 + 0x5c) != 0) {
      uVar6 = uVar7;
    }
    uVar7 = uVar7 + 1;
    piVar1 = piVar8;
  } while ((uVar7 & 0xffffffff) < 2);
  if (-1 < (int)uVar6) {
LAB_8249f76c:
    if (param_1[7] == 0) {
      param_1[7] = 1;
      uVar3 = fn_82F4EBE8(uVar6);
      fn_82F52188(auStack_50,uVar3,1);
      uVar3 = fn_8249ABC0();
      fn_8249B5F0(uVar3,1,1,0);
    }
  }
  return;
}

