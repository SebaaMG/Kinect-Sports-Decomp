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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_8305D680();
extern int fn_8305D688();
extern int fn_83060380();
extern int fn_830603C0();
extern int fn_830603D0();
extern int fn_83060CB0();
extern int fn_83060CD0();
extern int fn_83066788();


undefined8 fn_83066AF0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar3;
  char cVar4;
  undefined8 uVar2;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [80];
  
  bVar1 = false;
  iVar5 = 0;
  fn_83060380(auStack_50);
  fn_83060CB0(auStack_50);
  do {
    cVar4 = fn_830603C0(auStack_50);
    if (cVar4 != '\0') {
      if (bVar1) {
        if (iVar5 < 1) {
          if (iVar5 < 0) {
            uVar2 = 2;
          }
          else {
            uVar2 = 4;
          }
        }
        else {
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 0;
      }
      return uVar2;
    }
    uVar2 = fn_830603D0(auStack_50);
    iVar3 = fn_8305D680();
    if (0 < iVar3) {
      bVar1 = true;
    }
    lVar6 = 0;
    iVar3 = fn_8305D680(uVar2);
    if (0 < iVar3) {
      do {
        fn_8305D688(uVar2,lVar6,auStack_60);
        iVar3 = fn_83066788(param_1,param_2,auStack_60);
        if (iVar3 == 1) {
          if (0 < iVar5) {
            return 3;
          }
          iVar5 = iVar5 + -1;
        }
        else if (iVar3 == 0) {
          if (iVar5 < 0) {
            return 3;
          }
          iVar5 = iVar5 + 1;
        }
        lVar6 = lVar6 + 1;
        iVar3 = fn_8305D680(uVar2);
      } while ((int)lVar6 < iVar3);
    }
    fn_83060CD0(auStack_50);
  } while( true );
}

