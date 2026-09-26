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
#define NAN(x) ((x) != (x))
extern int fn_827F6310();
extern int fn_827F6318();
extern int fn_827F6428();
extern int fn_827F9DF8();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_82195680;
extern unsigned int lbl_82195684;
extern unsigned int lbl_821CC160;


void fn_8255FB38(void)

{
  longlong lVar1;
  int iVar3;
  undefined8 uVar2;
  double extraout_f1;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  lVar1 = fn_82F6A548();
  dVar10 = extraout_f1;
  dVar4 = (double)fn_827F6318();
  dVar5 = (double)fn_827F6428(lVar1);
  if (dVar4 != dVar5) {
    dVar6 = (double)fn_827F6310(lVar1);
    dVar8 = (double)lbl_821CC160;
    dVar9 = dVar5;
    if ((dVar6 < dVar8) || (iVar3 = fn_827F9DF8(lVar1 + 0x24), dVar9 = dVar5, iVar3 == 1)) {
      dVar7 = (double)(float)(dVar10 - (double)lbl_82195680);
      dVar6 = dVar10;
      dVar5 = dVar4;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((dVar7 < dVar8) << 2) | (uint)(NAN(dVar7) || NAN(dVar8)) << 2)) <
          0.0) {
        dVar6 = (double)lbl_82195680;
      }
    }
    else {
      dVar7 = (double)(float)(dVar10 - (double)lbl_82195684);
      dVar6 = (double)lbl_82195684;
      dVar9 = dVar4;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((dVar7 < dVar8) << 2) | (uint)(NAN(dVar7) || NAN(dVar8)) << 2)) <
          0.0) {
        dVar6 = dVar10;
      }
    }
    if (dVar9 <= dVar5) {
      if ((dVar5 <= dVar6) || (uVar2 = 0, dVar6 < dVar9)) {
        uVar2 = 1;
      }
      goto LAB_8255fc34;
    }
    if ((dVar5 <= dVar6) && (uVar2 = 1, dVar6 < dVar9)) goto LAB_8255fc34;
  }
  uVar2 = 0;
LAB_8255fc34:
  fn_82F6A594(uVar2);
  return;
}

