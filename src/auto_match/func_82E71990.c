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
extern int fn_82E6F498();
extern int fn_82E70AB8();
extern int fn_82E71048();
extern int fn_82E71308();
extern unsigned int uStack_64;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


longlong fn_82E71990(int *param_1,ulonglong param_2,int param_3,undefined8 param_4,
                      longlong *param_5,undefined8 *param_6)

{
  int *piVar1;
  longlong lVar2;
  uint uStack_70;
  uint uStack_6c;
  int *piStack_68;
  undefined4 uStack_64;
  longlong alStack_60 [12];
  
  if (param_5 == (longlong *)0x0) {
    lVar2 = -0x7fffbffd;
  }
  else {
    *param_5 = 0;
    if ((param_1[0x16] == 0) || (param_1[0xb] == 0)) {
      lVar2 = -0x3ff2c945;
    }
    else {
      if (param_6 != (undefined8 *)0x0) {
        *param_6 = 0xffffffffffffffff;
      }
      uStack_6c = 0;
      piStack_68 = (int *)0x0;
      uStack_64 = 0;
      lVar2 = (**(code **)(*param_1 + 8))(param_1,&uStack_6c);
      if (-1 < lVar2) {
        if (uStack_6c == 0) {
          lVar2 = -0x3ff2c945;
        }
        else {
          alStack_60[0] = 0;
          param_2 = param_2 / uStack_6c;
          trapDoubleWordImmediate(6,(ulonglong)uStack_6c,0);
          lVar2 = fn_82E71308(param_1,param_2,param_4,alStack_60,&piStack_68,&uStack_64);
          piVar1 = piStack_68;
          if (-1 < lVar2) {
            uStack_70 = 0;
            lVar2 = fn_82E6F498(param_1,alStack_60[0],&uStack_70);
            if (-1 < lVar2) {
              if ((param_3 == 0) || ((int)param_4 != 3)) {
                alStack_60[0] = 0;
                lVar2 = (**(code **)(*piVar1 + 0x20))
                                  (piVar1,*(undefined2 *)(param_1 + 2),param_4,alStack_60);
                if (-1 < lVar2) {
                  *param_5 = (ulonglong)uStack_70 + alStack_60[0];
                  if (param_6 != (undefined8 *)0x0) {
                    lVar2 = fn_82E70AB8(param_1,param_2,(ulonglong)uStack_70,uStack_6c * 10000,
                                          param_6);
                  }
                }
              }
              else {
                lVar2 = fn_82E71048(param_1,param_2 + 1,3,uStack_64,uStack_70,param_5);
              }
            }
          }
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 8))(piVar1);
          }
        }
      }
    }
  }
  return lVar2;
}

