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
extern unsigned int *auStack_40;
extern int fn_82E78690();
extern int fn_82EE5E28();


longlong fn_82E78FE0(int param_1,undefined4 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint auStack_40 [16];
  
  if (param_2 == (undefined4 *)0x0) {
    lVar1 = -0x7ff8ffa9;
  }
  else {
    *param_2 = 0;
    if ((ulonglong)*(uint *)(param_1 + 0x1e0) == 0) {
      lVar1 = 0;
    }
    else {
      if ((ulonglong)*(uint *)(param_1 + 0x230) <= (ulonglong)*(uint *)(param_1 + 0x234)) {
        uVar3 = (ulonglong)*(uint *)(param_1 + 0x234) - (ulonglong)*(uint *)(param_1 + 0x230);
        lVar1 = fn_82E78690(param_1 + 0x178,(ulonglong)*(uint *)(param_1 + 0x1e0) - 1,auStack_40);
        auStack_40[0] = -(uint)(lVar1 != 0) & auStack_40[0];
        if (auStack_40[0] != 0) {
          uVar2 = (ulonglong)*(uint *)(auStack_40[0] + 0x17) +
                  (ulonglong)*(uint *)(auStack_40[0] + 0x13);
          if ((uVar2 & 0xffffffff) <= (uVar3 & 0xffffffff)) {
            return 0;
          }
          uVar2 = uVar2 - uVar3;
          uVar3 = uVar2;
          if ((ulonglong)*(uint *)(param_1 + 0x230) < (uVar2 & 0xffffffff)) {
            uVar3 = (ulonglong)*(uint *)(param_1 + 0x230);
          }
          lVar1 = fn_82EE5E28(param_1 + 0x218,uVar3);
          if (lVar1 < 0) {
            return lVar1;
          }
          if ((uVar3 & 0xffffffff) < (uVar2 & 0xffffffff)) {
            lVar1 = 0x400d3a98;
          }
          *param_2 = (int)uVar3;
          return lVar1;
        }
      }
      lVar1 = -0x7fff0001;
    }
  }
  return lVar1;
}

