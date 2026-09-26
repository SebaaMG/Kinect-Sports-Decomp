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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_822773C8();
extern int fn_82277768();
extern int fn_822778E8();
extern int fn_82277B18();
extern int fn_82277D58();
extern int fn_82277E48();
extern int fn_8266F628();
extern int fn_82672C20();
extern unsigned int lbl_8219563C;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_70;


void fn_822771E8(undefined8 param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_70;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double dStack_58;
  undefined1 auStack_50 [8];
  double dStack_48;
  undefined1 auStack_40 [8];
  double dStack_38;
  undefined1 auStack_30 [48];
  
  uStack_70 = CONCAT44(lbl_8219563C,lbl_8219563C);
  uVar3 = fn_822773C8(param_2,&uStack_70);
  if ((uVar3 & 0xff) != 0) {
    uVar4 = fn_82277B18(param_2);
    uVar5 = fn_82277D58(param_2);
    uVar3 = uVar5 & 0xff & uVar4 & 0xff & uVar3 & 0xff;
  }
  if ((uVar3 & 0xff) != 0) {
    *(longlong *)(param_2 + 0xc) = uStack_70;
  }
  fn_82277768(param_1,param_2);
  fn_82277E48(param_1,param_2,uVar3);
  fn_822778E8(param_1,param_2);
  if (*(int *)(param_2 + 4) != 0) {
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_70 = (longlong)*(int *)(param_2 + 0x3c);
    dVar9 = (double)uStack_70;
    fn_82273CD8(&uStack_60,3);
    dStack_58 = dVar9;
    fn_82672C20(*(undefined4 *)(param_2 + 4),0xffffffff821a8168,&uStack_60,1);
    fn_82273C88(&uStack_60);
  }
  iVar1 = *(int *)(param_2 + 4);
  *(char *)(param_2 + 0x42) = (char)uVar3;
  if (iVar1 != 0) {
    if ((*(char *)(param_2 + 0x41) == '\0') || (bVar2 = true, (uVar3 & 0xff) == 0)) {
      bVar2 = false;
    }
    if (bVar2) {
      fn_8266F628(iVar1,0);
      puVar6 = &uStack_5c;
      lVar8 = 2;
      do {
        puVar6[3] = 0;
        puVar6 = puVar6 + 4;
        *puVar6 = 0;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      dVar9 = (double)*(float *)(param_2 + 0x24);
      fn_82273CD8(auStack_50,3);
      dVar10 = (double)*(float *)(param_2 + 0x28);
      dStack_48 = dVar9;
      fn_82273CD8(auStack_40,3);
      dStack_38 = dVar10;
      fn_82672C20(*(undefined4 *)(param_2 + 4),0xffffffff821a8150,auStack_50,2);
      puVar7 = auStack_30;
      lVar8 = 1;
      do {
        puVar7 = puVar7 + -0x10;
        fn_82273C88(puVar7);
        lVar8 = lVar8 + -1;
      } while (-1 < lVar8);
    }
    else {
      fn_8266F628(iVar1,1);
    }
  }
  return;
}

