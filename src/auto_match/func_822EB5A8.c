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
extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_82230360();
extern int fn_822BD338();
extern int fn_822C1928();
extern int fn_822E5340();
extern int fn_822E53F8();
extern int fn_822EB910();
extern int fn_822EC5A0();
extern unsigned int lbl_831CD138;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern V16 vectorSubtractFloatingPoint();


void fn_822EB5A8(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar3;
  char cVar5;
  int iVar4;
  byte bVar6;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 in_vr12 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [64];
  
  if (*(int *)(*(int *)(param_1 + 0xc) + 0x24) == 0) {
    *(undefined4 *)(param_1 + 0x24) = lbl_831CD138;
    fn_82230360(param_1 + 0x28,0xffffffff82196582,0);
    iVar3 = fn_822C1928((ulonglong)*(uint *)(*(int *)(*(int *)(param_1 + 0xc) + 0x114) + 0x20)
                              + 4,0xffffffff821adee8,0,0xb);
    bVar6 = (iVar3 == -1) << 1;
    if (iVar3 == -1) {
      fn_822EB910(param_1);
    }
    cVar5 = fn_822BD338(param_1 + 0x28,0xffffffff82196582);
    if (cVar5 == '\0') {
      *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x27c) = 1;
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x27c) = 0;
      iVar4 = fn_822EC5A0(auStack_70,param_1);
      iVar3 = *(int *)(param_1 + 0xc);
      puVar1 = (undefined4 *)(in_r0 + iVar4 & 0xfffffff0);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      vectorSubtractFloatingPoint(in_vs45,in_vs32);
      loadVectorLeftIndexed128(0xffffffff82192950,0x60);
      vectorRotateLeftImmediateMaskInsert128
                (*(undefined1 (*) [16])(in_r0 + iVar3 + 0x290 & 0xfffffff0),in_vr12,1,0);
      if (!(bool)(bVar6 >> 1 & 1)) {
        puVar2 = (undefined4 *)(in_r0 + iVar3 + 0x290 & 0xfffffff0);
        *puVar2 = *puVar1;
        puVar2[1] = uVar7;
        puVar2[2] = uVar8;
        puVar2[3] = uVar9;
        *(undefined4 *)(iVar3 + 0x2a4) = 0;
        *(undefined4 *)(iVar3 + 0x2a8) = 0;
      }
    }
    *(undefined4 *)(param_1 + 0x44) = 0;
    fn_82230110(auStack_60,0xffffffff821aded8);
    fn_822E5340(*(undefined4 *)(param_1 + 0xc),auStack_60);
    fn_82230300(auStack_60,1,0);
    fn_82230110(auStack_40,0xffffffff821adec4);
    fn_822E53F8(*(undefined4 *)(param_1 + 0xc),auStack_40);
    fn_82230300(auStack_40,1,0);
  }
  return;
}

