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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82563908();
extern int fn_8257D6A0();
extern int fn_8257D9B8();
extern int fn_825A4ED0();
extern int fn_825A5070();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_831D44F0;


ulonglong fn_8257D470(int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  
  if (*(int **)(param_1 + 0x8c0) == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x8c0) + 0x1c))();
  }
  if ((uVar3 & 0xffffffff) != 0) {
    puVar7 = (uint *)(param_1 + 0x1dc);
    lVar8 = 2;
    do {
      puVar2 = puVar7 + 1;
      puVar7 = puVar7 + 1;
      *puVar7 = *puVar2 | 0x4000;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    puVar7 = (uint *)(param_1 + 0x1dc);
    lVar8 = 2;
    do {
      puVar2 = puVar7 + 1;
      puVar7 = puVar7 + 1;
      *puVar7 = *puVar2 | 0x80;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    puVar7 = (uint *)(param_1 + 0x1dc);
    lVar8 = 2;
    do {
      puVar2 = puVar7 + 1;
      puVar7 = puVar7 + 1;
      *puVar7 = *puVar2 | 8;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    puVar7 = (uint *)(param_1 + 0x1dc);
    lVar8 = 2;
    do {
      puVar2 = puVar7 + 1;
      puVar7 = puVar7 + 1;
      *puVar7 = *puVar2 | 0x10;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    *(undefined4 *)(param_1 + 0xb64) = *(undefined4 *)(param_2 + 0x5c0);
    *(undefined4 *)(param_1 + 0xb68) = *(undefined4 *)(param_2 + 0x5c4);
    iVar6 = *(int *)(param_1 + 0x8c0);
    uVar4 = CONCAT44(*(undefined4 *)(param_2 + 0x5d0),lbl_821CA460);
    *(undefined8 *)(iVar6 + 0x50) = *(undefined8 *)(param_2 + 0x5c8);
    *(undefined8 *)(iVar6 + 0x58) = uVar4;
    *(int *)(*(int *)(param_2 + 0x84) + 0x3e4) = param_1;
    uVar1 = *(uint *)(param_1 + 0x890);
    uVar3 = (ulonglong)uVar1;
    if (*(int *)(uVar1 + 0xc) == 5) {
      uVar4 = fn_825A4ED0(uVar3);
      uVar3 = fn_825A5070(uVar3,uVar4);
    }
    else {
      uVar3 = (ulonglong)*(uint *)(uVar1 + 8);
    }
    if ((uVar3 & 0xffffffff) != 0) {
      uVar5 = fn_82563908((double)*(float *)(param_2 + 0x504),
                                (double)*(float *)(param_2 + 0x500),uVar3,param_1);
      *(int *)(param_1 + 0x7c4) = (int)uVar3;
      *(undefined4 *)(param_1 + 0x7c0) = uVar5;
    }
    fn_8257D6A0(param_1,*(undefined4 *)(param_2 + 0x84));
    if (*(int *)(param_1 + 0x8c0) == 0) {
      uVar4 = 0xffffffff82196288;
    }
    else {
      uVar4 = (**(code **)(**(int **)(param_1 + 0x8c0) + 0x20))();
    }
    iVar6 = fn_8257D9B8(uVar4,param_2 + 0x5bc);
    if (iVar6 != 0) {
      lbl_831D44F0 = 1;
      *(undefined4 *)(param_1 + 0xb60) = 1;
    }
    puVar7 = (uint *)(param_1 + 0x1dc);
    lVar8 = 2;
    do {
      puVar2 = puVar7 + 1;
      puVar7 = puVar7 + 1;
      *puVar7 = *puVar2 | 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    *(undefined4 *)(param_1 + 0xa20) = 1;
    *(undefined4 *)(param_1 + 0x990) = 1;
    uVar3 = 1;
    *(undefined4 *)(param_1 + 0xb0c) = 1;
    *(undefined4 *)(param_1 + 0xb74) = 0;
  }
  return uVar3;
}

