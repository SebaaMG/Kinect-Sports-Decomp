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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_8305D680();
extern int fn_8305D688();
extern int fn_8305D7C0();
extern int fn_83060380();
extern int fn_830603C0();
extern int fn_830603D0();
extern int fn_83060CB0();
extern int fn_83060CD0();


void fn_8285B008(int *param_1)

{
  char cVar5;
  int iVar3;
  longlong lVar1;
  undefined8 uVar2;
  uint uVar4;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [48];
  
  fn_83060380(auStack_30);
  lVar9 = 0;
  fn_83060CB0(auStack_30);
  cVar5 = fn_830603C0(auStack_30);
  if (cVar5 == '\0') {
    do {
      fn_830603D0(auStack_30);
      iVar3 = fn_8305D680();
      if (2 < iVar3) {
        fn_830603D0(auStack_30);
        iVar3 = fn_8305D7C0();
        if (iVar3 != 3) {
          fn_830603D0(auStack_30);
          lVar1 = fn_8305D680();
          lVar9 = lVar1 + lVar9 + -2;
        }
      }
      fn_83060CD0(auStack_30);
      cVar5 = fn_830603C0(auStack_30);
    } while (cVar5 == '\0');
    if ((int)lVar9 != 0) {
      (**(code **)(*param_1 + 8))(param_1,lVar9);
      fn_83060CB0(auStack_30);
      while (cVar5 = fn_830603C0(auStack_30), cVar5 == '\0') {
        uVar2 = fn_830603D0(auStack_30);
        iVar3 = fn_8305D680();
        if (2 < iVar3) {
          uVar4 = fn_8305D7C0(uVar2);
          if (uVar4 == 0) {
            uVar7 = 0;
            uVar6 = 0xd2;
LAB_8285b11c:
            uVar8 = 0x32;
LAB_8285b120:
            (**(code **)*param_1)(param_1,uVar6,uVar7,0,uVar8);
          }
          else {
            if (uVar4 == 1) {
              uVar8 = 0x50;
              uVar7 = 0xff;
              uVar6 = 0xff;
              goto LAB_8285b120;
            }
            if (uVar4 < 3) {
              uVar7 = 0xb4;
              uVar6 = 0;
              goto LAB_8285b11c;
            }
            if (uVar4 == 3) goto LAB_8285b1b8;
          }
          fn_8305D688(uVar2,0,auStack_40);
          lVar9 = 1;
          iVar3 = fn_8305D680(uVar2);
          if (1 < iVar3 + -1) {
            do {
              fn_8305D688(uVar2,lVar9,auStack_50);
              lVar9 = lVar9 + 1;
              fn_8305D688(uVar2,lVar9,auStack_60);
              (**(code **)(*param_1 + 0x10))(param_1,auStack_40,auStack_50,auStack_60);
              iVar3 = fn_8305D680(uVar2);
            } while ((int)lVar9 < iVar3 + -1);
          }
        }
LAB_8285b1b8:
        fn_83060CD0(auStack_30);
      }
      (**(code **)(*param_1 + 0xc))(param_1);
    }
  }
  return;
}

