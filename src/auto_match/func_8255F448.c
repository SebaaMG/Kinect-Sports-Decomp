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
extern int fn_8255F7E8();
extern int fn_827F2220();
extern int fn_827F22D0();
extern int fn_827F2D60();
extern int fn_827F3DA8();
extern int fn_827F6450();
extern int fn_827F6458();
extern int fn_827F6480();
extern int fn_82F65B18();
extern unsigned int lbl_821CC160;


void fn_8255F448(int param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  bool bVar2;
  char cVar6;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 *puVar7;
  longlong lVar8;
  double dVar9;
  
  bVar2 = false;
  if ((*(int *)(param_1 + 0x110) != 0) && (cVar6 = fn_827F3DA8(), cVar6 != '\0')) {
    bVar2 = true;
  }
  cVar6 = fn_827F3DA8(param_2);
  if (cVar6 != '\0') {
    bVar2 = true;
  }
  fn_8255F7E8(param_1);
  cVar6 = fn_827F22D0(param_1);
  fVar1 = lbl_821CC160;
  if (cVar6 == '\0') {
    fVar1 = *(float *)(param_1 + 0x184);
  }
  dVar9 = (double)fVar1;
  *(float *)(param_1 + 0x188) = lbl_821CC160;
  *(int *)(param_1 + 0x110) = (int)param_2;
  *(int *)(param_1 + 0x114) = (int)param_2;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x18c) = param_4;
  if (*(int *)(param_1 + 0x1a8) == 0) {
    fn_827F6450(param_2);
  }
  fn_827F2D60(dVar9,param_1,param_2);
  *(undefined4 *)(param_1 + 0x164) = param_3;
  *(undefined4 *)(param_1 + 0x168) = 1;
  lVar3 = fn_827F6458(param_2);
  if (lVar3 != 0) {
    lVar8 = 0;
    if (0 < (int)lVar3) {
      puVar7 = (undefined4 *)(param_1 + 0x118);
      do {
        lVar4 = fn_827F6480(param_2,lVar8);
        uVar5 = fn_82F65B18(lVar4 + 10);
        lVar8 = lVar8 + 1;
        puVar7 = puVar7 + 1;
        *puVar7 = uVar5;
      } while ((int)lVar8 < (int)lVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x15c) = 1;
  if (bVar2) {
    fn_827F2220(param_1);
  }
  return;
}

