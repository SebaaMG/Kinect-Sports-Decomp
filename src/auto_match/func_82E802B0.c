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
extern unsigned int *auStack_60;
extern int fn_82E4FE08();
extern int fn_82E4FE40();
extern int fn_82E7E7E0();
extern int fn_82E7EC68();
extern int fn_82E7ECB8();
extern int fn_82F691F0();
extern unsigned int uStack_58;
extern unsigned int uStack_70;


longlong fn_82E802B0(ushort *param_1,uint param_2,ushort *param_3)

{
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uStack_70;
  int aiStack_6c [3];
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  uVar3 = (ulonglong)*param_1;
  uStack_70 = 0;
  aiStack_6c[0] = 0;
  uStack_58 = 0;
  aiStack_6c[1] = 0;
  if (((*param_1 & 0x1000) == 0) && (uVar3 != 0)) {
    lVar5 = -0x3ff2c914;
  }
  else {
    lVar5 = fn_82E7EC68(param_1,&uStack_70);
    uVar2 = uStack_70;
    if (-1 < lVar5) {
      if ((param_3 == (ushort *)0x0) || (param_1 == param_3)) {
        lVar5 = -0x7fffbffd;
      }
      else {
        uVar1 = *param_3;
        if ((((ulonglong)uVar1 == 0) ||
            ((((uVar3 & 0xffffffff) != 0 && ((uVar3 & 0xfff) != 0xc)) &&
             (((ulonglong)uVar1 & 0xfff) != (uVar3 & 0xfff))))) || (uStack_70 < param_2)) {
          lVar5 = -0x7ff8ffa9;
        }
        else {
          if ((uVar3 & 0xffffffff) == 0) {
            param_1[4] = 0;
            param_1[5] = 0;
            param_1[6] = 0;
            param_1[7] = 0;
            *param_1 = uVar1 & 0xfff | 0x1000;
          }
          lVar5 = fn_82E7ECB8(param_1,aiStack_6c);
          if (-1 < lVar5) {
            lVar4 = (longlong)(int)(uVar2 + 1) * (longlong)aiStack_6c[0];
            lVar5 = fn_82E4FE08(lVar4);
            if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
              fn_82F691F0(lVar5,0,lVar4);
            }
            lVar5 = -0x7ff8fff2;
          }
        }
      }
    }
  }
  fn_82E4FE40(0);
  fn_82E7E7E0(auStack_60);
  return lVar5;
}

