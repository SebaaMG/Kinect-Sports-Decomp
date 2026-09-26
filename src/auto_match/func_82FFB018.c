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
extern int fn_82FF8938();
extern int fn_82FF8988();
extern int fn_82FFAB30();
extern int fn_82FFAC60();
extern int fn_82FFAD90();
extern int fn_82FFAEF8();
extern int fn_82FFE810();
extern int fn_82FFE980();
extern int fn_82FFEA78();
extern int fn_82FFEB70();
extern int fn_82FFEC68();
extern int fn_82FFED60();
extern int fn_82FFEE58();
extern int fn_82FFEF50();
extern int fn_82FFF050();
extern int fn_8301A5D0();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int lbl_832642E0;
extern int (*lbl_83264338)();
extern unsigned int uStack_70;


/* WARNING: Type propagation algorithm not settling */

longlong fn_82FFB018(longlong param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  uint uStack_70;
  int aiStack_6c [3];
  int iStack_60;
  int iStack_5c;
  
  lVar5 = param_1 + 4;
  uStack_70 = 0;
  lVar2 = fn_82FF8938(lVar5,&uStack_70,4);
  if (((int)lVar2 == 1) && (uStack_70 != 0)) {
    cVar3 = fn_8301A5D0(param_2 + 0x34);
    lVar2 = (ulonglong)(cVar3 == '\0') + 1;
  }
  bVar1 = false;
  uVar4 = 0;
  if (uStack_70 != 0) {
    do {
      if ((int)lVar2 != 1) {
        return lVar2;
      }
      lVar2 = fn_82FF8938(lVar5,&iStack_60,8);
      if ((int)lVar2 == 1) {
        switch(iStack_60) {
        case 1:
          aiStack_6c[1] = 0;
          lVar2 = fn_82FFAB30(param_1,&iStack_60,param_2,aiStack_6c + 1,1,0);
          break;
        case 2:
          lVar2 = fn_82FFE810(param_1,&iStack_60,param_2,param_3);
          break;
        case 3:
          lVar2 = fn_82FFAD90(param_1,&iStack_60,param_2);
          break;
        case 4:
          lVar2 = fn_82FFAEF8(param_1,&iStack_60,param_2);
          break;
        case 5:
          lVar2 = fn_82FFE980(param_1,&iStack_60,param_2,(ulonglong)lbl_832642E0 + 4);
          break;
        case 6:
          lVar2 = fn_82FFEA78(param_1,&iStack_60,param_2,(ulonglong)lbl_832642E0 + 4);
          break;
        case 7:
          lVar2 = fn_82FFEC68(param_1,&iStack_60,param_2,(ulonglong)lbl_832642E0 + 4);
          break;
        case 8:
          lVar2 = fn_82FFAC60(param_1,&iStack_60,param_2);
          break;
        case 9:
          lVar2 = fn_82FFEB70(param_1,&iStack_60,param_2,(ulonglong)lbl_832642E0 + 4);
          break;
        default:
          if (lbl_83264338 == (code *)0x0) {
            if ((!bVar1) &&
               ((((iStack_60 == 10 || (iStack_60 == 0xb)) || (iStack_60 == 0xc)) ||
                (iStack_60 == 0xd)))) {
              bVar1 = true;
            }
          }
          else {
            lVar2 = (*lbl_83264338)(&iStack_60,param_2,param_3);
            if ((int)lVar2 != 3) break;
          }
          aiStack_6c[0] = 0;
          fn_82FF8988(lVar5,iStack_5c,aiStack_6c);
          if (aiStack_6c[0] != iStack_5c) {
            lVar2 = 7;
          }
          break;
        case 0xe:
          lVar2 = fn_82FFED60(param_1,&iStack_60,param_2,(ulonglong)lbl_832642E0 + 0xfe0);
          break;
        case 0xf:
          lVar2 = fn_82FFEE58(param_1,&iStack_60,param_2,(ulonglong)lbl_832642E0 + 0x1628);
          break;
        case 0x10:
          lVar2 = fn_82FFEF50(param_1,&iStack_60,param_2,(ulonglong)lbl_832642E0 + 4);
          break;
        case 0x11:
          lVar2 = fn_82FFF050(param_1,&iStack_60,param_2,param_3);
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uStack_70);
  }
  return lVar2;
}

