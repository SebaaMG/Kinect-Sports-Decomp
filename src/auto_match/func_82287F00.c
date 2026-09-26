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
extern unsigned int *auStack_60;
extern unsigned int *auStack_6c;
extern unsigned int *auStack_70;
extern int fn_82230300();
extern int fn_82230360();
extern int fn_8225C590();
extern int fn_8225D288();
extern int fn_8225F160();
extern int fn_8228ABB8();
extern int fn_8228AFF8();
extern int fn_8234F298();
extern int fn_823AB478();
extern int fn_8251F720();
extern int fn_8251FA58();
extern unsigned int lbl_83265988;


void fn_82287F00(int param_1,uint param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [12];
  undefined1 auStack_60 [96];
  
  uVar1 = fn_8225C590();
  fn_82230300(auStack_60,0,0);
  fn_82230360(auStack_60,0xffffffff821a9340,8);
  fn_8228AFF8(param_1,auStack_70);
  lVar2 = fn_8251F720(auStack_70,0);
  uVar3 = fn_8251F720(lVar2 + 4,0);
  fn_8225D288(uVar1,auStack_60,uVar3);
  uVar4 = fn_823AB478();
  iVar8 = param_2 * 0x40 + param_1;
  *(undefined4 *)(iVar8 + 0x6a8) = 1;
  *(undefined4 *)(iVar8 + 0x6ac) = uVar4;
  fn_8225F160();
  if ((lbl_83265988 == 0) ||
     ((*(byte *)(*(int *)(*(int *)(lbl_83265988 + 0xf0) + 8) + 8) & 0x10) == 0)) {
    uVar5 = param_2;
    if (*(int *)(*(int *)(param_1 + 0x11f0) + 0x18b8) == 1) {
      uVar5 = -((param_2 < 2) - 1);
    }
    fn_8234F298(*(int *)(param_1 + 0x11f0) + 0x234,uVar5,auStack_6c,auStack_70);
    puVar7 = auStack_70;
    puVar6 = auStack_6c;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    puVar6 = (undefined1 *)0x0;
  }
  fn_8228ABB8(param_1,param_2,uVar3,puVar6,puVar7);
  *(undefined4 *)(iVar8 + 0x6bc) = 1;
  fn_8251FA58(uVar3);
  fn_8251FA58(lVar2);
  fn_82230300(auStack_60,1,0);
  return;
}

