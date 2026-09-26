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
extern unsigned int *auStack_2c;
extern unsigned int *auStack_40;
extern int fn_82E46BE8();
extern int fn_82E59F28();
extern int fn_82E59F50();
extern int fn_82E59FA0();
extern int fn_82E5A100();
extern int fn_82E7CF08();
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;


longlong fn_82E7D7A0(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined2 auStack_40 [2];
  int *piStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 auStack_2c [11];
  
  lVar3 = 0;
  piStack_3c = (int *)0x0;
  auStack_40[0] = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  auStack_2c[0] = 0;
  if (param_3 == (int *)0x0) {
    lVar3 = -0x7fffbffd;
  }
  else {
    iVar2 = fn_82E7CF08(param_1,param_2,&piStack_3c);
    piVar1 = piStack_3c;
    if (-1 < iVar2) {
      lVar3 = fn_82E5A100(piStack_3c,auStack_40);
      if (-1 < lVar3) {
        lVar3 = fn_82E59F28(piVar1,&uStack_38);
        if (-1 < lVar3) {
          lVar3 = fn_82E59F50(piVar1,&uStack_34);
          if (-1 < lVar3) {
            lVar3 = fn_82E46BE8(piVar1,&uStack_30);
            if (-1 < lVar3) {
              lVar3 = fn_82E59FA0(piVar1,auStack_2c);
              if (-1 < lVar3) {
                lVar3 = (**(code **)(*param_3 + 0x54))(param_3,0xffffffff8214c1d0,auStack_40[0]);
                if (-1 < lVar3) {
                  lVar3 = (**(code **)(*param_3 + 0x54))(param_3,0xffffffff8214c1e0,uStack_38);
                  if (-1 < lVar3) {
                    lVar3 = (**(code **)(*param_3 + 0x54))(param_3,0xffffffff8214c1f0,uStack_34);
                    if ((-1 < lVar3) &&
                       (lVar3 = (**(code **)(*param_3 + 0x54))(param_3,0xffffffff8214c200,uStack_30)
                       , -1 < lVar3)) {
                      lVar3 = (**(code **)(*param_3 + 0x54))
                                        (param_3,0xffffffff8214c210,auStack_2c[0]);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
  }
  return lVar3;
}

