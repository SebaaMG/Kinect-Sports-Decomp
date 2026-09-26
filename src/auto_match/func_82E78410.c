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
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_82E77CC0();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int lbl_821537B8;
extern unsigned int lbl_821537C8;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


longlong fn_82E78410(undefined8 param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  int *piVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulonglong uVar7;
  undefined2 auStack_80 [2];
  int *piStack_7c;
  int *piStack_78;
  int *piStack_74;
  uint auStack_70 [4];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  if (param_2 == (int *)0x0) {
    lVar3 = -0x7fffbffd;
  }
  else {
    piStack_78 = (int *)0x0;
    piStack_7c = (int *)0x0;
    piStack_74 = (int *)0x0;
    auStack_70[0] = 0;
    lVar3 = (**(code **)(*param_2 + 0x84))(param_2,auStack_70);
    piVar4 = piStack_7c;
    if ((-1 < lVar3) && (uVar7 = 0, auStack_70[0] != 0)) {
      while( true ) {
        auStack_80[0] = 0;
        uStack_60 = lbl_8202E618;
        uStack_5c = lbl_8202E61C;
        uStack_58 = lbl_8202E620;
        uStack_54 = lbl_8202E624;
        if (piStack_78 != (int *)0x0) {
          (**(code **)(*piStack_78 + 8))();
          piStack_78 = (int *)0x0;
        }
        if (piStack_7c != (int *)0x0) {
          (**(code **)(*piStack_7c + 8))();
          piStack_7c = (int *)0x0;
        }
        if (piStack_74 != (int *)0x0) {
          (**(code **)(*piStack_74 + 8))();
          piStack_74 = (int *)0x0;
        }
        lVar3 = (**(code **)(*param_2 + 0x88))(param_2,uVar7,auStack_80,&piStack_78);
        piVar4 = piStack_7c;
        if ((lVar3 < 0) ||
           (lVar3 = (**(code **)(*piStack_78 + 0x90))(piStack_78,&piStack_7c), piVar4 = piStack_7c,
           lVar3 < 0)) goto LAB_82e78614;
        if (piStack_7c == (int *)0x0) break;
        lVar3 = (**(code **)(*piStack_7c + 0x84))(piStack_7c,&uStack_60);
        piVar4 = piStack_7c;
        if (lVar3 < 0) goto LAB_82e78614;
        pbVar5 = (byte *)&uStack_60;
        pbVar6 = &lbl_821537B8;
        do {
          bVar1 = *pbVar6;
          bVar2 = *pbVar5;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar6 = pbVar6 + 1;
          pbVar5 = pbVar5 + 1;
        } while (pbVar6 != &lbl_821537C8);
        if ((((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) &&
            ((lVar3 = (**(code **)*piStack_7c)(piStack_7c,0xffffffff821531d8,&piStack_74),
             piVar4 = piStack_7c, lVar3 < 0 ||
             (lVar3 = fn_82E77CC0(param_1,auStack_80[0],piStack_74), piVar4 = piStack_7c,
             lVar3 < 0)))) ||
           (uVar7 = uVar7 + 1, piVar4 = piStack_7c, (ulonglong)auStack_70[0] <= (uVar7 & 0xffffffff)
           )) goto LAB_82e78614;
      }
      lVar3 = -0x3ff2c945;
      piVar4 = (int *)0x0;
    }
LAB_82e78614:
    if (piStack_78 != (int *)0x0) {
      (**(code **)(*piStack_78 + 8))(piStack_78);
      piStack_78 = (int *)0x0;
      piVar4 = piStack_7c;
    }
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))();
      piStack_7c = (int *)0x0;
    }
    if (piStack_74 != (int *)0x0) {
      (**(code **)(*piStack_74 + 8))();
    }
  }
  return lVar3;
}

