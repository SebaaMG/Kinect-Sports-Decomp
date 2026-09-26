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
extern int fn_82E4FE08();
extern int fn_82E7ECB8();
extern int fn_82F691F0();


longlong fn_82E7F478(ushort *param_1,ushort param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int aiStack_30 [12];
  
  aiStack_30[0] = 0;
  if (*param_1 == 0) {
    *(int *)(param_1 + 4) = (int)param_3;
    *param_1 = param_2 | 0x1000;
    lVar2 = fn_82E7ECB8(param_1,aiStack_30);
    if (-1 < lVar2) {
      uVar3 = (longlong)aiStack_30[0] * (longlong)(int)param_3;
      if ((uVar3 & 0xffffffff) < (param_3 & 0xffffffff)) {
        lVar2 = -0x7fff0001;
      }
      else {
        uVar1 = fn_82E4FE08(uVar3);
        *(int *)(param_1 + 6) = (int)uVar1;
        if ((uVar1 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(uVar1,0,uVar3);
        }
        lVar2 = -0x7ff8fff2;
      }
    }
  }
  else {
    lVar2 = -0x3ff2c916;
  }
  return lVar2;
}

