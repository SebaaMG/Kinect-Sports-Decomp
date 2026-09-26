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
extern int fn_82E627B8();


longlong fn_82E5D5F0(undefined4 *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int *piStack_40;
  int *piStack_3c;
  int *apiStack_38 [2];
  longlong alStack_30 [6];
  
  if ((param_1 == (undefined4 *)0x0) || (param_2 == (int *)0x0)) {
    lVar1 = -0x7ff8ffa9;
  }
  else {
    apiStack_38[0] = (int *)0x0;
    piStack_3c = (int *)0x0;
    piStack_40 = (int *)0x0;
    lVar1 = (**(code **)*param_1)(param_1,0xffffffff82154c18,apiStack_38);
    if (((-1 < lVar1) &&
        (lVar1 = (**(code **)(*apiStack_38[0] + 0x24))
                           (apiStack_38[0],0xffffffff8202e618,&piStack_3c), -1 < lVar1)) &&
       (lVar1 = (**(code **)(*piStack_3c + 0x14))(), -1 < lVar1)) {
      lVar3 = 0;
      while (iVar2 = (**(code **)(*piStack_3c + 0xc))(piStack_3c,1,&piStack_40,0), iVar2 == 0) {
        alStack_30[0] = 0;
        lVar1 = (**(code **)(*piStack_40 + 0x14))(piStack_40,0,alStack_30);
        if (lVar1 < 0) goto LAB_82e5d744;
        lVar3 = alStack_30[0] + lVar3;
        if (piStack_40 != (int *)0x0) {
          (**(code **)(*piStack_40 + 8))();
          piStack_40 = (int *)0x0;
        }
      }
      lVar1 = (**(code **)(*param_2 + 0x10))(param_2,0xffffffff82154aa8,0,&piStack_40);
      if (-1 < lVar1) {
        lVar1 = fn_82E627B8(piStack_40,lVar3);
      }
    }
LAB_82e5d744:
    if (apiStack_38[0] != (int *)0x0) {
      (**(code **)(*apiStack_38[0] + 8))();
      apiStack_38[0] = (int *)0x0;
    }
    if (piStack_3c != (int *)0x0) {
      (**(code **)(*piStack_3c + 8))();
      piStack_3c = (int *)0x0;
    }
    if (piStack_40 != (int *)0x0) {
      (**(code **)(*piStack_40 + 8))();
    }
  }
  return lVar1;
}

