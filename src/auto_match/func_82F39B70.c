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
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E57738();
extern int fn_82E57820();


longlong fn_82F39B70(undefined8 param_1,short *param_2,int param_3,int *param_4)

{
  uint uVar1;
  ulonglong uVar2;
  short *psVar3;
  longlong lVar4;
  
  if (((param_2 == (short *)0x0) || (param_3 == 0)) || (param_4 == (int *)0x0)) {
    return -0x7ff8ffa9;
  }
  *param_4 = 0;
  uVar1 = *(uint *)(param_3 + 0x18);
  if (uVar1 < 4) {
    *param_4 = 4;
    lVar4 = -0x3ff2c94f;
    goto LAB_82f39c8c;
  }
  lVar4 = fn_82E57738(param_2,param_3);
  if (lVar4 < 0) {
LAB_82f39c68:
    if ((int)lVar4 != -0x3ff2c94f) goto LAB_82f39c78;
  }
  else {
    if (*param_2 == 1) {
      psVar3 = param_2 + 1;
      lVar4 = fn_82E57738(psVar3,param_3);
      if (-1 < lVar4) {
        if (*(int *)(param_2 + 2) != 0) {
          fn_82E4FE40();
        }
        param_2[2] = 0;
        param_2[3] = 0;
        if (*psVar3 != 0) {
          uVar2 = fn_82E50BE8(*psVar3,0,0,0,0);
          *(int *)(param_2 + 2) = (int)uVar2;
          if ((uVar2 & 0xffffffff) == 0) {
            lVar4 = -0x7ff8fff2;
            goto LAB_82f39c78;
          }
          lVar4 = fn_82E57820(uVar2,param_3,*psVar3);
        }
      }
      goto LAB_82f39c68;
    }
    lVar4 = -0x7fff0001;
LAB_82f39c78:
    *param_4 = uVar1 - *(int *)(param_3 + 0x18);
  }
  if (-1 < (int)lVar4) {
    return lVar4;
  }
LAB_82f39c8c:
  if (*(int *)(param_2 + 2) != 0) {
    fn_82E4FE40();
  }
  param_2[2] = 0;
  param_2[3] = 0;
  return lVar4;
}

