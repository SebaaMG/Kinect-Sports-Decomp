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
extern unsigned int *auStack_40;
extern unsigned int *auStack_70;
extern int fn_82E5C778();
extern int fn_82E624E8();
extern int fn_82E62528();
extern int fn_82E62570();
extern int fn_82E625B0();
extern int fn_82E625F0();
extern int fn_82E62630();
extern int fn_82E62670();
extern int fn_82E626B0();
extern int fn_82E626F0();
extern int fn_82E62730();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_48;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_68;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;


longlong fn_82E7C300(int param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int *piStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 auStack_70 [2];
  ulonglong uStack_68;
  longlong lStack_60;
  undefined8 uStack_58;
  ulonglong uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  lVar1 = 0;
  piStack_80 = (int *)0x0;
  uStack_30 = lbl_8202E618;
  uStack_68 = 0;
  uStack_2c = lbl_8202E61C;
  uStack_28 = lbl_8202E620;
  lStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  auStack_70[0] = 0;
  uStack_24 = lbl_8202E624;
  if (param_2 == (int *)0x0) {
    lVar2 = -0x7fffbffd;
  }
  else {
    lVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x10))
                      (*(int **)(param_1 + 4),0xffffffff82154aa8,0,&piStack_80);
    if (-1 < lVar2) {
      lVar2 = fn_82E625B0(piStack_80,&uStack_68);
      if (-1 < lVar2) {
        lVar2 = fn_82E62630(piStack_80,&lStack_60);
        if (-1 < lVar2) {
          if ((ulonglong)(lStack_60 * 10000) < uStack_68) {
            lVar1 = uStack_68 + lStack_60 * -10000;
          }
          lVar2 = fn_82E5C778(piStack_80,&uStack_30);
          if (-1 < lVar2) {
            lVar2 = fn_82E624E8(piStack_80,&uStack_58);
            if (-1 < lVar2) {
              lVar2 = fn_82E62528(piStack_80,auStack_40);
              if (-1 < lVar2) {
                lVar2 = fn_82E62570(piStack_80,&uStack_50);
                if (-1 < lVar2) {
                  lVar2 = fn_82E625B0(piStack_80,&uStack_68);
                  if (-1 < lVar2) {
                    lVar2 = fn_82E625F0(piStack_80,&uStack_48);
                    if (-1 < lVar2) {
                      lVar2 = fn_82E62670(piStack_80,&uStack_7c);
                      if (-1 < lVar2) {
                        lVar2 = fn_82E626B0(piStack_80,&uStack_78);
                        if (-1 < lVar2) {
                          lVar2 = fn_82E626F0(piStack_80,&uStack_74);
                          if (-1 < lVar2) {
                            lVar2 = fn_82E62730(piStack_80,auStack_70);
                            if (-1 < lVar2) {
                              lVar2 = (**(code **)(*param_2 + 0x58))
                                                (param_2,0xffffffff8214bfc0,lVar1);
                              if (-1 < lVar2) {
                                lVar2 = (**(code **)(*param_2 + 0x60))
                                                  (param_2,0xffffffff8214c040,&uStack_30);
                                if (-1 < lVar2) {
                                  lVar2 = (**(code **)(*param_2 + 0x58))
                                                    (param_2,0xffffffff8214bfd0,uStack_58);
                                  if (-1 < lVar2) {
                                    lVar2 = (**(code **)(*param_2 + 0x68))
                                                      (param_2,0xffffffff8214c050,auStack_40,8);
                                    if (-1 < lVar2) {
                                      lVar2 = (**(code **)(*param_2 + 0x54))
                                                        (param_2,0xffffffff8214c060,
                                                         uStack_50 & 0xffffffff);
                                      if (-1 < lVar2) {
                                        lVar2 = (**(code **)(*param_2 + 0x58))
                                                          (param_2,0xffffffff8214c070,uStack_68);
                                        if (-1 < lVar2) {
                                          lVar2 = (**(code **)(*param_2 + 0x58))
                                                            (param_2,0xffffffff8214c080,uStack_48);
                                          if (-1 < lVar2) {
                                            lVar2 = (**(code **)(*param_2 + 0x58))
                                                              (param_2,0xffffffff8214c090,lStack_60)
                                            ;
                                            if (-1 < lVar2) {
                                              lVar2 = (**(code **)(*param_2 + 0x54))
                                                                (param_2,0xffffffff8214c0a0,
                                                                 uStack_7c);
                                              if (-1 < lVar2) {
                                                lVar2 = (**(code **)(*param_2 + 0x54))
                                                                  (param_2,0xffffffff8214c0b0,
                                                                   uStack_78);
                                                if ((-1 < lVar2) &&
                                                   (lVar2 = (**(code **)(*param_2 + 0x54))
                                                                      (param_2,0xffffffff8214c0c0,
                                                                       uStack_74), -1 < lVar2)) {
                                                  lVar2 = (**(code **)(*param_2 + 0x54))
                                                                    (param_2,0xffffffff8214c0d0,
                                                                     auStack_70[0]);
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (piStack_80 != (int *)0x0) {
      (**(code **)(*piStack_80 + 8))();
    }
  }
  return lVar2;
}

