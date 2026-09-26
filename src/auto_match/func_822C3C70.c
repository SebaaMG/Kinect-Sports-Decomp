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
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_822B7900();
extern int fn_822C4A30();
extern int fn_822C5DD0();
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
extern unsigned int iStack_78;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_94;


int fn_822C3C70(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar5;
  int iVar6;
  undefined8 uVar4;
  undefined1 auStack_a0 [8];
  code *pcStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [8];
  int iStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined1 auStack_60 [96];
  
  iVar5 = 0;
  uVar2 = fn_8251F720(param_2,0);
  if (uVar2 != 0) {
    uVar3 = fn_8251FBA8(uVar2);
    iVar5 = fn_8265CA60();
    fn_82A1DD38(iVar5,uVar2,uVar3);
  }
  *(undefined1 **)(iVar5 + 0x48) = auStack_90;
  *(undefined1 **)(iVar5 + 0x50) = auStack_a0;
  **(undefined4 **)(iVar5 + 0x48) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(*(int *)(iVar5 + 0x48) + 4) = *(undefined4 *)(param_1 + 0x118);
  *(int *)(*(int *)(iVar5 + 0x48) + 8) = param_1 + 0x80;
  *(int *)(*(int *)(iVar5 + 0x48) + 0xc) = param_1 + 0xc0;
  **(int **)(iVar5 + 0x50) = param_1;
  uVar3 = fn_8235A120();
  iVar6 = fn_822B7900(uVar3,iVar5);
  if (iVar6 != 0) {
    uStack_94 = 0;
    pcStack_98 = fn_822C4A30;
    iStack_78 = param_1;
    uVar3 = fn_822C5DD0(auStack_80,0x822c4a3000000000,CONCAT44(param_1,uStack_74),uStack_70);
    uVar1 = *(undefined4 *)(iVar6 + 0x3c);
    uVar4 = fn_823B3808(auStack_60,uVar3);
    fn_822C9BF8(uVar1,param_1 + 0x1c0,uVar4);
    fn_822DBD60(uVar3);
  }
  fn_8265CAA0(iVar5);
  if ((uVar2 & 0xffffffff) != 0) {
    fn_8251FA58(uVar2);
  }
  return iVar6;
}

