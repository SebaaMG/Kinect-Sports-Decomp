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
extern unsigned int iStack_5c;
extern unsigned int uStack_60;


longlong fn_82E6F140(int *param_1,undefined8 param_2,undefined8 param_3,short *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uStack_60;
  int iStack_5c;
  longlong alStack_58 [11];
  
  if (param_4 == (short *)0x0) {
    lVar1 = -0x7fffbffd;
  }
  else if (*(short *)(param_1 + 2) == *param_4) {
    alStack_58[0] = 0;
    lVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_4,alStack_58);
    if (-1 < lVar1) {
      uStack_60 = 0;
      lVar1 = (**(code **)(*param_1 + 8))(param_1,&uStack_60);
      if (-1 < lVar1) {
        if (alStack_58[0] != 0) {
          uVar2 = (alStack_58[0] - 1U) / (ulonglong)uStack_60;
          trapDoubleWordImmediate(6,(ulonglong)uStack_60,0);
          if ((*(ulonglong *)(param_1 + 0x12) < uVar2 + 1) && (*(longlong *)(param_1 + 0x14) != 0))
          {
            lVar3 = uVar2 - *(ulonglong *)(param_1 + 0x12);
            uVar2 = 0;
            if (lVar3 != -1) {
              do {
                lVar1 = (**(code **)(*param_1 + 0x2c))(param_1,*(undefined8 *)(param_1 + 0x12));
                if (lVar1 < 0) {
                  return lVar1;
                }
                if ((param_1[0xe] != 0) &&
                   (lVar1 = (**(code **)(*param_1 + 0x14))(param_1), lVar1 < 0)) {
                  return lVar1;
                }
                uVar2 = uVar2 + 1;
              } while (uVar2 < lVar3 + 1U);
            }
            if ((int)lVar1 < 0) {
              return lVar1;
            }
          }
        }
        iStack_5c = 0;
        lVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3,param_4,&iStack_5c);
        if (-1 < lVar1) {
          if (iStack_5c != 0) {
            *(longlong *)(param_1 + 0x14) = *(longlong *)(param_1 + 0x14) + 1;
          }
          uVar2 = (**(code **)(*param_1 + 0x20))(param_1);
          if ((uVar2 & 0xffffffff) != 0) {
            lVar1 = fn_82E6F140(uVar2,param_2,param_3,param_4);
          }
        }
      }
    }
  }
  else {
    lVar1 = -0x3ff2c94d;
  }
  return lVar1;
}

