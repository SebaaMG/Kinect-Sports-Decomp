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
extern int fn_82E57620();
extern int fn_82E576A8();
extern int fn_82E59EC8();
extern int fn_82EE5E28();
extern int fn_82EE5F60();


longlong fn_82F3B890(int param_1,int *param_2)

{
  longlong lVar1;
  uint *puVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    lVar1 = -0x3ff2c94a;
  }
  else if (param_2 == (int *)0x0) {
    lVar1 = -0x7ff8ffa9;
  }
  else {
    *param_2 = 0x38;
    if (0x37 < *(uint *)(param_1 + 0x40)) {
      if (*(int *)(param_1 + 0x70) != 0) {
        fn_82E4FE40();
      }
      iVar3 = param_1 + 0x28;
      *(undefined4 *)(param_1 + 0x70) = 0;
      fn_82E57620(param_1 + 0x10,iVar3);
      fn_82E576A8(param_1 + 0x20,iVar3);
      fn_82E57620(param_1 + 0x50,iVar3);
      fn_82E576A8(param_1 + 0x60,iVar3);
      fn_82E59EC8(param_1 + 0x68,iVar3);
      puVar2 = (uint *)(param_1 + 0x6c);
      fn_82E59EC8(puVar2,iVar3);
      if ((*(uint *)(param_1 + 0x4c) & 1) == 0) {
        return 0;
      }
      *param_2 = *puVar2 * 6 + *param_2;
      if (((ulonglong)*puVar2 * 6 & 0xffffffff) <= (ulonglong)*(uint *)(param_1 + 0x40)) {
        lVar1 = fn_82E50BE8((ulonglong)*puVar2 * 6,0,0,0,0);
        *(int *)(param_1 + 0x70) = (int)lVar1;
        if (lVar1 == 0) {
          lVar1 = -0x7ff8fff2;
        }
        else {
          lVar1 = fn_82EE5F60(iVar3,lVar1,(ulonglong)*puVar2 * 6);
          if ((-1 < lVar1) && (lVar1 = fn_82EE5E28(iVar3,(ulonglong)*puVar2 * 6), -1 < lVar1)) {
            return lVar1;
          }
        }
        if (*(int *)(param_1 + 0x70) != 0) {
          fn_82E4FE40();
        }
        *(undefined4 *)(param_1 + 0x70) = 0;
        return lVar1;
      }
    }
    lVar1 = -0x3ff2c94f;
  }
  return lVar1;
}

