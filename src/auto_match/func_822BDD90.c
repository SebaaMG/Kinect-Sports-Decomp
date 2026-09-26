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
extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_822B7900();
extern int fn_822C9BF8();
extern int fn_822DBD60();
extern int fn_8235A120();
extern int fn_823B3808();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern int fn_8265CA60();
extern int fn_8265CAA0();
extern int fn_82A1DD38();
extern int fn_82D7E470();
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_78;
extern unsigned int uStack_80;
extern unsigned int uStack_88;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int fn_822BDD90(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  undefined4 auStack_a0 [4];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_50 [80];
  
  iVar4 = 0;
  uVar2 = fn_8251F720(param_2,0);
  if (uVar2 != 0) {
    uVar3 = fn_8251FBA8(uVar2);
    iVar4 = fn_8265CA60();
    fn_82A1DD38(iVar4,uVar2,uVar3);
  }
  *(undefined4 **)(iVar4 + 0x48) = auStack_a0;
  auStack_a0[0] = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(*(int *)(iVar4 + 0x48) + 4) = *(undefined4 *)(param_1 + 0x118);
  *(int *)(*(int *)(iVar4 + 0x48) + 8) = param_1 + 0x80;
  *(int *)(*(int *)(iVar4 + 0x48) + 0xc) = param_1 + 0xc0;
  *(undefined4 *)(iVar4 + 0x4c) = *(undefined4 *)(param_1 + 0x24c);
  *(int *)(iVar4 + 0x50) = param_1;
  uVar3 = fn_8235A120();
  iVar5 = fn_822B7900(uVar3,iVar4);
  uStack_88 = CONCAT44(param_1,(((U64)(uStack_88) >> 32) & 0xFFFFFFFF));
  uStack_68 = uStack_88;
  uStack_60 = uStack_80;
  cVar6 = fn_82D7E470(auStack_70);
  if (cVar6 == '\0') {
    uStack_80 = uStack_68;
    uStack_78 = uStack_60;
  }
  uVar1 = *(undefined4 *)(iVar5 + 0x3c);
  uVar3 = fn_823B3808(auStack_50,auStack_90);
  fn_822C9BF8(uVar1,param_1 + 0x748,uVar3);
  fn_822DBD60(auStack_90);
  fn_8265CAA0(iVar4);
  if ((uVar2 & 0xffffffff) != 0) {
    fn_8251FA58(uVar2);
  }
  return iVar5;
}

