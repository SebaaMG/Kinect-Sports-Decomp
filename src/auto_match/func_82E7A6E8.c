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
extern int fn_82E49060();
extern int fn_82E76EB0();
extern int fn_82E79C08();
extern int fn_82E79F10();
extern int fn_82E7A3B8();


longlong fn_82E7A6E8(int param_1,undefined4 *param_2)

{
  longlong lVar1;
  ushort uVar2;
  int *apiStack_30 [12];
  
  if (param_2 == (undefined4 *)0x0) {
    lVar1 = -0x7ff8ffa9;
  }
  else {
    uVar2 = 0;
    *param_2 = 0;
    if (*(int *)(param_1 + 0x148) == 0) {
      lVar1 = -0x3ff2c94a;
    }
    else {
      apiStack_30[0] = (int *)0x0;
      lVar1 = fn_82E49060(apiStack_30);
      if ((-1 < lVar1) && (lVar1 = fn_82E79C08(param_1,apiStack_30[0]), -1 < lVar1)) {
        if ((uint)*(ushort *)(param_1 + 0x146) == *(uint *)(param_1 + 0x1e0)) {
          if (*(ushort *)(param_1 + 0x146) != 0) {
            do {
              lVar1 = fn_82E79F10(param_1,uVar2,apiStack_30[0]);
              if ((lVar1 < 0) || (lVar1 = fn_82E7A3B8(param_1,uVar2,apiStack_30[0]), lVar1 < 0))
              goto LAB_82e7a770;
              uVar2 = uVar2 + 1;
            } while (uVar2 < *(ushort *)(param_1 + 0x146));
          }
          lVar1 = fn_82E76EB0(param_1,apiStack_30[0]);
          if (-1 < lVar1) {
            *param_2 = apiStack_30[0];
            return lVar1;
          }
        }
        else {
          lVar1 = -0x7fff0001;
        }
      }
LAB_82e7a770:
      if (apiStack_30[0] != (int *)0x0) {
        (**(code **)(*apiStack_30[0] + 8))();
      }
    }
  }
  return lVar1;
}

