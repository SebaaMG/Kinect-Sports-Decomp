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
extern unsigned int *auStack_100;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern int fn_828F6FA8();
extern int fn_82936290();
extern int fn_829410A8();
extern int fn_82941178();


undefined8 fn_82942B98(int *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [160];
  
  uVar1 = fn_82941178();
  if ((((-1 < (int)uVar1) && (uVar1 = fn_829410A8(param_1,0xffffffff820348a8), -1 < (int)uVar1))
      && (uVar1 = (**(code **)(*param_1 + 0x184))(param_1,0xffffffff820347ac,3,3,3,3),
         -1 < (int)uVar1)) && (uVar1 = fn_829410A8(param_1,0xffffffff820347a8), -1 < (int)uVar1))
  {
    uVar4 = 0;
    if (param_1[0x1c6] != 0) {
      do {
        uVar1 = fn_82941178(param_1);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        fn_828F6FA8(auStack_c0,0x20,param_3,uVar4,uVar4);
        fn_828F6FA8(auStack_100,0x20,0xffffffff820347e8,uVar4);
        uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_100);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar1 = (**(code **)(*param_1 + 0x184))(param_1,auStack_c0,3,3,3,3);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
    }
    uVar1 = fn_82941178(param_1);
    if (((-1 < (int)uVar1) && (uVar1 = fn_829410A8(param_1,0xffffffff820348a8), -1 < (int)uVar1))
       && ((uVar1 = (**(code **)(*param_1 + 0x19c))(param_1,0xffffffff820348a0,7), -1 < (int)uVar1
           && (uVar1 = fn_829410A8(param_1,0xffffffff820347a8), -1 < (int)uVar1)))) {
      uVar4 = 0;
      if (param_1[0x1c6] != 0) {
        do {
          uVar1 = fn_82941178(param_1);
          if ((int)uVar1 < 0) {
            return uVar1;
          }
          fn_828F6FA8(auStack_c0,0x20,param_3,uVar4,uVar4);
          fn_828F6FA8(auStack_100,0x20,0xffffffff820348bc,uVar4);
          uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_100);
          if ((int)uVar1 < 0) {
            return uVar1;
          }
          uVar1 = (**(code **)(*param_1 + 0x184))(param_1,auStack_c0,1,1,1,1);
          if ((int)uVar1 < 0) {
            return uVar1;
          }
          uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
          if ((int)uVar1 < 0) {
            return uVar1;
          }
          uVar4 = uVar4 + 1;
        } while ((uVar4 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
      }
      uVar1 = fn_82941178(param_1);
      if (((-1 < (int)uVar1) && (uVar1 = fn_829410A8(param_1,0xffffffff820348a8), -1 < (int)uVar1)
          ) && (((uVar1 = (**(code **)(*param_1 + 0x198))(param_1,0xffffffff820348a0,0),
                 -1 < (int)uVar1 &&
                 (((uVar1 = fn_829410A8(param_1,0xffffffff820347a8), -1 < (int)uVar1 &&
                   (uVar1 = fn_82941178(param_1), -1 < (int)uVar1)) &&
                  (uVar1 = fn_829410A8(param_1,0xffffffff820348d0), -1 < (int)uVar1)))) &&
                ((uVar1 = (**(code **)(*param_1 + 0x184))(param_1,0xffffffff820348f0,0,0,0,0),
                 -1 < (int)uVar1 &&
                 (uVar1 = fn_829410A8(param_1,0xffffffff820347a8), -1 < (int)uVar1)))))) {
        uVar4 = 0;
        if (param_1[0x1c6] != 0) {
          do {
            uVar1 = fn_82941178(param_1);
            if ((int)uVar1 < 0) {
              return uVar1;
            }
            fn_828F6FA8(auStack_100,0x20,0xffffffff820347e8,uVar4);
            uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_100);
            if ((int)uVar1 < 0) {
              return uVar1;
            }
            uVar1 = (**(code **)(*param_1 + 0x1f0))(param_1,auStack_100,0xffffffff820348a0);
            if ((int)uVar1 < 0) {
              return uVar1;
            }
            uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
            if ((int)uVar1 < 0) {
              return uVar1;
            }
            uVar4 = uVar4 + 1;
          } while ((uVar4 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
        }
        uVar1 = fn_82941178(param_1);
        if (((-1 < (int)uVar1) &&
            (uVar1 = fn_829410A8(param_1,0xffffffff820348a8), -1 < (int)uVar1)) &&
           ((uVar1 = (**(code **)(*param_1 + 0x1d4))(param_1,0xffffffff820348a0,0xffffffff820348c8),
            -1 < (int)uVar1 && (uVar1 = fn_829410A8(param_1,0xffffffff820347a8), -1 < (int)uVar1))
           )) {
          uVar4 = 0;
          uVar3 = 0;
          if (param_1[0x1c6] != 0) {
            do {
              uVar1 = fn_82941178(param_1);
              if ((int)uVar1 < 0) {
                return uVar1;
              }
              fn_828F6FA8(auStack_100,0x20,0xffffffff820348bc,uVar4);
              uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_100);
              if ((int)uVar1 < 0) {
                return uVar1;
              }
              uVar1 = (**(code **)(*param_1 + 0x1f8))(param_1,auStack_100);
              if ((int)uVar1 < 0) {
                return uVar1;
              }
              uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
              if ((int)uVar1 < 0) {
                return uVar1;
              }
              uVar3 = param_1[0x1c6];
              uVar4 = uVar4 + 1;
            } while ((uVar4 & 0xffffffff) < (ulonglong)uVar3);
          }
          uVar4 = 0;
          uVar2 = 0;
          if (uVar3 != 0) {
            do {
              uVar1 = fn_82941178(param_1);
              if ((int)uVar1 < 0) {
                return uVar1;
              }
              fn_828F6FA8(auStack_100,0x20,0xffffffff820347e8,uVar4);
              uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_100);
              if ((int)uVar1 < 0) {
                return uVar1;
              }
              uVar1 = (**(code **)(*param_1 + 500))(param_1,auStack_100,0xffffffff820348a0);
              if ((int)uVar1 < 0) {
                return uVar1;
              }
              uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
              if ((int)uVar1 < 0) {
                return uVar1;
              }
              uVar2 = param_1[0x1c6];
              uVar4 = uVar4 + 1;
            } while ((uVar4 & 0xffffffff) < (ulonglong)uVar2);
          }
          uVar4 = 0;
          uVar3 = 0;
          if (uVar2 != 0) {
            do {
              uVar1 = fn_82941178(param_1);
              if ((int)uVar1 < 0) {
                return uVar1;
              }
              fn_828F6FA8(auStack_e0,0x20,0xffffffff820347e8,uVar4);
              fn_828F6FA8(auStack_100,0x20,0xffffffff820348bc,uVar4);
              uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_100);
              if ((int)uVar1 < 0) {
                return uVar1;
              }
              uVar1 = (**(code **)(*param_1 + 0x204))(param_1,auStack_e0,auStack_100);
              if ((int)uVar1 < 0) {
                return uVar1;
              }
              uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
              if ((int)uVar1 < 0) {
                return uVar1;
              }
              uVar3 = param_1[0x1c6];
              uVar4 = uVar4 + 1;
            } while ((uVar4 & 0xffffffff) < (ulonglong)uVar3);
          }
          uVar4 = 0;
          if (uVar3 != 0) {
            do {
              uVar1 = fn_82941178(param_1);
              if ((int)uVar1 < 0) {
                return uVar1;
              }
              fn_828F6FA8(auStack_100,0x20,0xffffffff820348bc,uVar4);
              uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_100);
              if ((int)uVar1 < 0) {
                return uVar1;
              }
              uVar1 = (**(code **)(*param_1 + 0x1fc))(param_1,auStack_100);
              if ((int)uVar1 < 0) {
                return uVar1;
              }
              uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
              if ((int)uVar1 < 0) {
                return uVar1;
              }
              uVar4 = uVar4 + 1;
            } while ((uVar4 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
          }
          uVar1 = fn_82941178(param_1);
          if ((((-1 < (int)uVar1) &&
               (uVar1 = fn_829410A8(param_1,0xffffffff820348a8), -1 < (int)uVar1)) &&
              (uVar1 = (**(code **)(*param_1 + 0x188))(param_1), -1 < (int)uVar1)) &&
             (uVar1 = fn_829410A8(param_1,0xffffffff820347a8), -1 < (int)uVar1)) {
            uVar4 = 0;
            if (param_1[0x1c6] != 0) {
              do {
                uVar1 = fn_82941178(param_1);
                if ((int)uVar1 < 0) {
                  return uVar1;
                }
                fn_828F6FA8(auStack_c0,0x20,param_3,uVar4,uVar4);
                fn_828F6FA8(auStack_100,0x20,0xffffffff820347e8,uVar4);
                uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_100);
                if ((int)uVar1 < 0) {
                  return uVar1;
                }
                uVar1 = (**(code **)(*param_1 + 0x184))(param_1,auStack_c0,1,1,1,1);
                if ((int)uVar1 < 0) {
                  return uVar1;
                }
                uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
                if ((int)uVar1 < 0) {
                  return uVar1;
                }
                uVar4 = uVar4 + 1;
              } while ((uVar4 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
            }
            fn_82936290(auStack_100,0x20,0xffffffff820347e8);
            uVar1 = (**(code **)(*param_1 + 0x1e4))
                              (param_1,0x73a00000,auStack_100,0xffffffff820348a0,auStack_100);
            if (-1 < (int)uVar1) {
              uVar4 = 0;
              uVar3 = 0;
              if (param_1[0x1c6] != 0) {
                do {
                  uVar1 = fn_82941178(param_1);
                  if ((int)uVar1 < 0) {
                    return uVar1;
                  }
                  fn_828F6FA8(auStack_c0,0x20,param_3,uVar4,uVar4);
                  fn_828F6FA8(auStack_e0,0x20,0xffffffff820347dc,uVar4);
                  uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_e0);
                  if ((int)uVar1 < 0) {
                    return uVar1;
                  }
                  uVar1 = (**(code **)(*param_1 + 0x1dc))(param_1,auStack_c0,1);
                  if ((int)uVar1 < 0) {
                    return uVar1;
                  }
                  uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
                  if ((int)uVar1 < 0) {
                    return uVar1;
                  }
                  uVar3 = param_1[0x1c6];
                  uVar4 = uVar4 + 1;
                } while ((uVar4 & 0xffffffff) < (ulonglong)uVar3);
              }
              uVar4 = 0;
              if (uVar3 != 0) {
                do {
                  uVar1 = fn_82941178(param_1);
                  if ((int)uVar1 < 0) {
                    return uVar1;
                  }
                  fn_828F6FA8(auStack_e0,0x20,0xffffffff820347e8,uVar4);
                  fn_828F6FA8(auStack_100,0x20,0xffffffff820348bc,uVar4);
                  uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_100);
                  if ((int)uVar1 < 0) {
                    return uVar1;
                  }
                  uVar1 = (**(code **)(*param_1 + 400))
                                    (param_1,0xffffffff820348a0,auStack_100,auStack_e0);
                  if ((int)uVar1 < 0) {
                    return uVar1;
                  }
                  uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
                  if ((int)uVar1 < 0) {
                    return uVar1;
                  }
                  uVar4 = uVar4 + 1;
                } while ((uVar4 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
              }
              uVar1 = fn_82941178(param_1);
              if ((((-1 < (int)uVar1) &&
                   (uVar1 = fn_829410A8(param_1,0xffffffff820348d0), -1 < (int)uVar1)) &&
                  ((uVar1 = (**(code **)(*param_1 + 0x184))(param_1,0xffffffff820347ac,0,1,0,0),
                   -1 < (int)uVar1 &&
                   ((uVar1 = fn_829410A8(param_1,0xffffffff820347a8), -1 < (int)uVar1 &&
                    (uVar1 = fn_82941178(param_1), -1 < (int)uVar1)))))) &&
                 ((uVar1 = fn_829410A8(param_1,0xffffffff820348e4), -1 < (int)uVar1 &&
                  ((uVar1 = (**(code **)(*param_1 + 0x184))(param_1,0xffffffff820347ac,3,3,3,3),
                   -1 < (int)uVar1 &&
                   (uVar1 = fn_829410A8(param_1,0xffffffff820347a8), -1 < (int)uVar1)))))) {
                uVar4 = 0;
                if (param_1[0x1c6] != 0) {
                  do {
                    uVar1 = fn_82941178(param_1);
                    if ((int)uVar1 < 0) {
                      return uVar1;
                    }
                    fn_828F6FA8(auStack_e0,0x20,0xffffffff820347dc,uVar4);
                    fn_828F6FA8(auStack_100,0x20,0xffffffff820347e8,uVar4);
                    uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_100);
                    if ((int)uVar1 < 0) {
                      return uVar1;
                    }
                    uVar1 = (**(code **)(*param_1 + 0x184))(param_1,auStack_e0,1,1,1,1);
                    if ((int)uVar1 < 0) {
                      return uVar1;
                    }
                    uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
                    if ((int)uVar1 < 0) {
                      return uVar1;
                    }
                    uVar4 = uVar4 + 1;
                  } while ((uVar4 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
                }
                fn_82936290(auStack_100,0x20,0xffffffff820347e8);
                uVar1 = (**(code **)(*param_1 + 0x1e4))
                                  (param_1,0x73a00000,auStack_100,0xffffffff820348a0,auStack_100);
                if (-1 < (int)uVar1) {
                  uVar4 = 0;
                  uVar3 = 0;
                  if (param_1[0x1c6] != 0) {
                    do {
                      uVar1 = fn_82941178(param_1);
                      if ((int)uVar1 < 0) {
                        return uVar1;
                      }
                      fn_828F6FA8(auStack_e0,0x20,0xffffffff820347e8,uVar4);
                      fn_828F6FA8(auStack_100,0x20,0xffffffff820348bc,uVar4);
                      uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_100);
                      if ((int)uVar1 < 0) {
                        return uVar1;
                      }
                      uVar1 = (**(code **)(*param_1 + 400))
                                        (param_1,0xffffffff820348a0,auStack_100,auStack_e0);
                      if ((int)uVar1 < 0) {
                        return uVar1;
                      }
                      uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
                      if ((int)uVar1 < 0) {
                        return uVar1;
                      }
                      uVar3 = param_1[0x1c6];
                      uVar4 = uVar4 + 1;
                    } while ((uVar4 & 0xffffffff) < (ulonglong)uVar3);
                  }
                  uVar4 = 0;
                  if (uVar3 != 0) {
                    do {
                      uVar1 = fn_82941178(param_1);
                      if ((int)uVar1 < 0) {
                        return uVar1;
                      }
                      fn_828F6FA8(auStack_e0,0x20,0xffffffff820347dc,uVar4);
                      fn_828F6FA8(auStack_100,0x20,0xffffffff820347e8,uVar4);
                      uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_e0);
                      if ((int)uVar1 < 0) {
                        return uVar1;
                      }
                      uVar1 = (**(code **)(*param_1 + 400))
                                        (param_1,0xffffffff820348a0,auStack_e0,auStack_100);
                      if ((int)uVar1 < 0) {
                        return uVar1;
                      }
                      uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
                      if ((int)uVar1 < 0) {
                        return uVar1;
                      }
                      uVar4 = uVar4 + 1;
                    } while ((uVar4 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
                  }
                  uVar1 = fn_82941178(param_1);
                  if ((((-1 < (int)uVar1) &&
                       (uVar1 = fn_829410A8(param_1,0xffffffff820348a8), -1 < (int)uVar1)) &&
                      (uVar1 = (**(code **)(*param_1 + 0x184))(param_1,0xffffffff820347ac,0,1,1,0),
                      -1 < (int)uVar1)) &&
                     (uVar1 = fn_829410A8(param_1,0xffffffff820347a8), -1 < (int)uVar1)) {
                    uVar4 = 0;
                    uVar3 = 0;
                    if (param_1[0x1c6] != 0) {
                      do {
                        uVar1 = fn_82941178(param_1);
                        if ((int)uVar1 < 0) {
                          return uVar1;
                        }
                        fn_828F6FA8(auStack_e0,0x20,0xffffffff820347dc,uVar4);
                        fn_828F6FA8(auStack_100,0x20,0xffffffff820348bc,uVar4);
                        uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_100);
                        if ((int)uVar1 < 0) {
                          return uVar1;
                        }
                        uVar1 = (**(code **)(*param_1 + 400))
                                          (param_1,auStack_100,auStack_e0,0xffffffff820348c8);
                        if ((int)uVar1 < 0) {
                          return uVar1;
                        }
                        uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
                        if ((int)uVar1 < 0) {
                          return uVar1;
                        }
                        uVar3 = param_1[0x1c6];
                        uVar4 = uVar4 + 1;
                      } while ((uVar4 & 0xffffffff) < (ulonglong)uVar3);
                    }
                    uVar4 = 0;
                    if (uVar3 != 0) {
                      do {
                        uVar1 = fn_82941178(param_1);
                        if ((int)uVar1 < 0) {
                          return uVar1;
                        }
                        fn_828F6FA8(auStack_a0,0x20,param_2,uVar4,uVar4);
                        fn_828F6FA8(auStack_100,0x20,0xffffffff820348bc,uVar4);
                        uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_a0);
                        if ((int)uVar1 < 0) {
                          return uVar1;
                        }
                        uVar1 = (**(code **)(*param_1 + 400))
                                          (param_1,0xffffffff820348dc,auStack_100,0xffffffff820348a0
                                          );
                        if ((int)uVar1 < 0) {
                          return uVar1;
                        }
                        uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
                        if ((int)uVar1 < 0) {
                          return uVar1;
                        }
                        uVar4 = uVar4 + 1;
                      } while ((uVar4 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
                    }
                    uVar1 = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar1;
}

