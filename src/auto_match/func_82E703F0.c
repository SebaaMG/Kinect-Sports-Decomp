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
extern unsigned int uStack_38;
extern unsigned int uStack_3c;


longlong fn_82E703F0(int *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                      undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int *piStack_40;
  uint uStack_3c;
  undefined8 uStack_38;
  longlong alStack_30 [6];
  
  piStack_40 = (int *)0x0;
  if (param_4 == (longlong *)0x0) {
    lVar3 = -0x7fffbffd;
  }
  else {
    *param_4 = 0;
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = 0xffffffffffffffff;
    }
    uStack_38 = 0;
    lVar3 = (**(code **)(*param_1 + 0x24))(param_1,param_2,&uStack_38,&piStack_40);
    if (-1 < lVar3) {
      lVar3 = fn_82E6F498(param_1,uStack_38,&uStack_3c);
      if (-1 < lVar3) {
        alStack_30[0] = 0;
        iVar1 = *piStack_40;
        uVar2 = (**(code **)(*param_1 + 0x34))(param_1);
        lVar3 = (**(code **)(iVar1 + 0x20))
                          (piStack_40,*(undefined2 *)(param_1 + 2),uVar2,alStack_30);
        if (-1 < lVar3) {
          *param_4 = (ulonglong)uStack_3c + alStack_30[0];
        }
      }
    }
    if (piStack_40 != (int *)0x0) {
      (**(code **)(*piStack_40 + 8))();
    }
  }
  return lVar3;
}

