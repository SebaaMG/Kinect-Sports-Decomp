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
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern int fn_82520158();
extern int fn_82520780();
extern int fn_82F68CC0();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_8228A7F8(longlong param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar5;
  longlong lVar3;
  ulonglong uVar4;
  double dVar6;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  longlong alStack_48 [9];
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      dVar6 = (double)lbl_8218E8E8;
      iVar5 = fn_82520780(dVar6,0xffffffff83265a28);
      if (iVar5 == 0) {
        uVar2 = 0xffffffff821977e4;
      }
      else {
        uVar2 = 0xffffffff821977d4;
      }
      fn_82520158(uVar2,&lStack_60,0);
      iVar5 = fn_82520780(dVar6,0xffffffff83265a28);
      if (iVar5 == 0) {
        uVar2 = 0xffffffff8219780c;
      }
      else {
        uVar2 = 0xffffffff821977f8;
      }
      fn_82520158(uVar2,&lStack_58,0);
      iVar5 = fn_82520780(dVar6,0xffffffff83265a28);
      if (iVar5 == 0) {
        uVar2 = 0xffffffff82197830;
      }
      else {
        uVar2 = 0xffffffff82197820;
      }
      fn_82520158(uVar2,&lStack_50,0);
      iVar5 = fn_82520780(dVar6,0xffffffff83265a28);
      if (iVar5 != 0) goto LAB_8228a858;
    }
    else {
      fn_82520158(0xffffffff821977e4,&lStack_60,0);
      fn_82520158(0xffffffff8219780c,&lStack_58,0);
      fn_82520158(0xffffffff82197830,&lStack_50,0);
    }
    uVar2 = 0xffffffff82197858;
  }
  else {
    fn_82520158(0xffffffff821977d4,&lStack_60,0);
    fn_82520158(0xffffffff821977f8,&lStack_58,0);
    fn_82520158(0xffffffff82197820,&lStack_50,0);
LAB_8228a858:
    uVar2 = 0xffffffff82197844;
  }
  fn_82520158(uVar2,alStack_48,0);
  lVar3 = fn_8251F720(&lStack_60,0);
  dVar6 = (double)lbl_821CA460;
  if (lVar3 != 0) {
    uVar4 = fn_8251FBA8(lVar3);
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    uVar1 = (uint)((float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar6) *
                  (float)(longlong)(int)((uVar4 & 0xffffffff) / 0x24));
    lStack_60 = (longlong)(int)uVar1;
    fn_82F68CC0(param_1,(ulonglong)uVar1 * 0x24 + lVar3,0x24);
    fn_8251FA58(lVar3);
  }
  lVar3 = fn_8251F720(&lStack_58,0);
  if (lVar3 != 0) {
    uVar4 = fn_8251FBA8(lVar3);
    lStack_60 = (longlong)(int)((uVar4 & 0xffffffff) / 0x24);
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    uVar1 = (uint)((float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar6) *
                  (float)lStack_60);
    lStack_58 = (longlong)(int)uVar1;
    fn_82F68CC0(param_1 + 0x24,(ulonglong)uVar1 * 0x24 + lVar3,0x24);
    fn_8251FA58(lVar3);
  }
  lVar3 = fn_8251F720(&lStack_50,0);
  if (lVar3 != 0) {
    uVar4 = fn_8251FBA8(lVar3);
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    uVar1 = (uint)((float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar6) *
                  (float)(longlong)(int)((uVar4 & 0xffffffff) / 0x24));
    lStack_50 = (longlong)(int)uVar1;
    fn_82F68CC0(param_1 + 0x48,(ulonglong)uVar1 * 0x24 + lVar3,0x24);
    fn_8251FA58(lVar3);
  }
  lVar3 = fn_8251F720(alStack_48,0);
  if (lVar3 != 0) {
    uVar4 = fn_8251FBA8(lVar3);
    lStack_50 = (longlong)(int)((uVar4 & 0xffffffff) / 0x24);
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    uVar1 = (uint)((float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar6) *
                  (float)lStack_50);
    alStack_48[0] = (longlong)(int)uVar1;
    fn_82F68CC0(param_1 + 0x6c,(ulonglong)uVar1 * 0x24 + lVar3,0x24);
    fn_8251FA58(lVar3);
  }
  return;
}

