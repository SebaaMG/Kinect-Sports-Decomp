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
extern unsigned int *auStack_48;
extern char cRam832635d8;
extern int fn_82F728D0();
extern int fn_82F73228();
extern int fn_82F73680();
extern int fn_82F75C50();
extern int fn_82F75DD0();
extern int fn_82F76E68();
extern int fn_82F78748();
extern unsigned int *lbl_832635C0;
extern unsigned int lbl_832635D0;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_70;


ulonglong * fn_82F76B80(ulonglong *param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  ulonglong *puVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  ulonglong auStack_48 [9];
  
  if ((lbl_832635D0 & 0x2000) == 0) {
    if (*lbl_832635C0 != '?') {
      if (*lbl_832635C0 == '\0') {
        fn_82F728D0(param_1,1);
        return param_1;
      }
      *(undefined1 *)((int)param_1 + 5) = 0;
      *(undefined1 *)((int)param_1 + 4) = 2;
      *(undefined4 *)param_1 = 0;
      return param_1;
    }
    pcVar1 = lbl_832635C0 + 1;
    if ((*pcVar1 == '?') && (lbl_832635C0[2] == '?')) {
      lbl_832635C0 = pcVar1;
      fn_82F76B80(auStack_48);
      cVar2 = *lbl_832635C0;
      while (uStack_50 = auStack_48[0], cVar2 != '\0') {
        lbl_832635C0 = lbl_832635C0 + 1;
        cVar2 = *lbl_832635C0;
      }
    }
    else {
      lbl_832635C0 = pcVar1;
      fn_82F75C50(&uStack_70);
      uVar6 = (((U64)(uStack_70) >> 32) & 0xFFFFFFFF);
      if (((((U64)(uStack_70) >> 0) & 0xFFFFFFFF) == 0) || (bVar4 = true, (uStack_70 & 0x400000) == 0)) {
        bVar4 = false;
      }
      uVar3 = (((U64)(uStack_70) >> 32) & 0xFFFFFFFF) >> 0x10;
      uStack_50 = uStack_70;
      if ((int)((((U64)(uStack_70) >> 32) & 0xFFFFFFFF) & 0xff000000) < 0x1000001) {
        if ((*lbl_832635C0 != '\0') && (*lbl_832635C0 != '@')) {
          fn_82F76E68(&uStack_68);
          if ((((U64)(uStack_68) >> 0) & 0xFFFFFFFF) != 0) {
            if (cRam832635d8 == '\0') {
              uStack_58 = uStack_68;
              fn_82F73680(&uStack_58,0xffffffff8214b5d8);
              uStack_60 = uStack_58;
              fn_82F73228(&uStack_60,&uStack_70);
              uStack_70 = uStack_60;
            }
            else {
              cRam832635d8 = '\0';
              uStack_60 = uStack_70;
              fn_82F73228(&uStack_60,&uStack_68);
              uStack_70 = uStack_60;
              if (*lbl_832635C0 != '@') {
                puVar5 = (ulonglong *)fn_82F76E68(&uStack_58);
                uStack_68 = *puVar5;
                uStack_60 = *puVar5;
                fn_82F73680(&uStack_60,0xffffffff8214b5d8);
                uStack_58 = uStack_60;
                fn_82F73228(&uStack_58,&uStack_70);
                uStack_70 = uStack_58;
              }
            }
            uVar6 = (((U64)(uStack_70) >> 32) & 0xFFFFFFFF);
          }
        }
        uVar7 = uVar6;
        if ((bVar4) && ((((U64)(uStack_70) >> 0) & 0xFFFFFFFF) != 0)) {
          uVar7 = uVar6 | 0x400000;
          uStack_70 = CONCAT44((((U64)(uStack_70) >> 0) & 0xFFFFFFFF),uVar6) | 0x400000;
        }
        uVar6 = uVar7;
        if ((uVar3 & 1) != 0) {
          uVar6 = uVar7 | 0x10000;
          uStack_70 = CONCAT44((((U64)(uStack_70) >> 0) & 0xFFFFFFFF),uVar7) | 0x10000;
        }
        uStack_50 = uStack_70;
        if (((((U64)(uStack_70) >> 0) & 0xFFFFFFFF) != 0) && ((uVar6 & 0x80000) == 0)) {
          cVar2 = *lbl_832635C0;
          if ((cVar2 != '\0') && (cVar2 != '@')) {
            *(undefined1 *)((int)param_1 + 5) = 0;
            *(undefined4 *)param_1 = 0;
            *(undefined1 *)((int)param_1 + 4) = 2;
            return param_1;
          }
          if (cVar2 != '\0') {
            lbl_832635C0 = lbl_832635C0 + 1;
          }
          if ((((lbl_832635D0 & 0x1000) == 0) || (bVar4)) || ((uVar6 & 0x10000) != 0)) {
            fn_82F75DD0(param_1,&uStack_70);
            return param_1;
          }
          uStack_60 = uStack_60 & 0xffff;
          fn_82F75DD0(&uStack_58,&uStack_60);
          uStack_50 = uStack_70;
        }
      }
    }
  }
  else {
    lbl_832635D0 = lbl_832635D0 & 0xffffdfff;
    fn_82F78748(&uStack_50,0);
    lbl_832635D0 = lbl_832635D0 | 0x2000;
  }
  *param_1 = uStack_50;
  return param_1;
}

