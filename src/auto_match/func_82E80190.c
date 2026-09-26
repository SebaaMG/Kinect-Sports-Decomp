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
extern int fn_82E7E7E0();
extern int fn_82E7E900();
extern int fn_82E7ECB8();
extern int fn_82F691F0();
extern unsigned int uStack_28;
extern unsigned int uStack_30;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


longlong fn_82E80190(ushort *param_1)

{
  undefined4 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_3c = 0;
  uStack_28 = 0;
  if ((*param_1 & 0x1000) == 0) {
    if (*param_1 == 0) {
      lVar3 = -0x3ff2c917;
    }
    else {
      lVar3 = fn_82E7E900(&uStack_30,param_1);
      if (-1 < lVar3) {
        lVar3 = fn_82E7E7E0(param_1);
        if (-1 < lVar3) {
          param_1[4] = 0;
          param_1[5] = 1;
          *param_1 = (((U64)(uStack_30) >> 0) & 0xFFFF) & 0xfff | 0x1000;
          lVar3 = fn_82E7ECB8(param_1,&uStack_40);
          uVar1 = uStack_40;
          if (-1 < lVar3) {
            uVar2 = fn_82E4FE08(uStack_40);
            *(int *)(param_1 + 6) = (int)uVar2;
            if ((uVar2 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
              fn_82F691F0(uVar2,0,uVar1);
            }
            lVar3 = -0x7ff8fff2;
          }
        }
      }
    }
  }
  else {
    lVar3 = -0x3ff2c915;
  }
  fn_82E7E7E0(&uStack_30);
  return lVar3;
}

