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
extern int fn_82969030();
extern int fn_8296C668();
extern int fn_8296F448();
extern int fn_82971580();
extern int fn_82971B58();
extern int fn_82971ED0();
extern int fn_82973D90();
extern int fn_829740E0();
extern int fn_82974948();
extern int fn_82974DF8();
extern int fn_8297CA38();
extern int fn_8297D2E0();
extern int fn_8297E440();
extern int fn_8297E6F8();


undefined8 fn_8297EFB8(int *param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = fn_82971B58();
  if (((int)uVar1 == 0) || (-1 < (int)uVar1)) {
    uVar1 = fn_8297CA38(param_1);
    if (((int)uVar1 == 0) || (-1 < (int)uVar1)) {
      uVar1 = fn_82973D90(param_1,1);
      if (((int)uVar1 == 0) || (-1 < (int)uVar1)) {
        uVar3 = 0;
        do {
          uVar1 = fn_8296F448(param_1,1);
          iVar2 = (int)uVar1;
          if (iVar2 != 0) {
            if (iVar2 < 0) {
              return uVar1;
            }
            if (iVar2 == 1) break;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < 0x100);
        uVar1 = fn_82971ED0(param_1);
        if (((int)uVar1 == 0) || (-1 < (int)uVar1)) {
          uVar1 = fn_8297D2E0(param_1);
          if (((int)uVar1 == 0) || (-1 < (int)uVar1)) {
            uVar1 = (**(code **)(*param_1 + 0x10))(param_1);
            if (((int)uVar1 == 0) || (-1 < (int)uVar1)) {
              uVar1 = fn_82973D90(param_1,0);
              if (((int)uVar1 == 0) || (-1 < (int)uVar1)) {
                uVar1 = fn_829740E0(param_1);
                if (((int)uVar1 == 0) || (-1 < (int)uVar1)) {
                  param_1[0x37] = 1;
                  uVar1 = fn_82974948(param_1);
                  if (((int)uVar1 == 0) || (-1 < (int)uVar1)) {
                    uVar1 = fn_8297E440(param_1);
                    if (((int)uVar1 == 0) || (-1 < (int)uVar1)) {
                      uVar1 = fn_8296C668(param_1);
                      if (((int)uVar1 == 0) || (-1 < (int)uVar1)) {
                        uVar1 = (**(code **)(*param_1 + 0x14))(param_1);
                        if (((int)uVar1 == 0) || (-1 < (int)uVar1)) {
                          uVar1 = (**(code **)(*param_1 + 0x18))(param_1);
                          if (((int)uVar1 == 0) || (-1 < (int)uVar1)) {
                            uVar1 = fn_82969030(param_1);
                            if (((int)uVar1 == 0) || (-1 < (int)uVar1)) {
                              uVar1 = fn_82971580(param_1);
                              if (((int)uVar1 == 0) || (-1 < (int)uVar1)) {
                                uVar1 = fn_8297E6F8(param_1);
                                if (((int)uVar1 == 0) || (-1 < (int)uVar1)) {
                                  uVar1 = fn_82974DF8(param_1);
                                  if (((int)uVar1 == 0) || (-1 < (int)uVar1)) {
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

