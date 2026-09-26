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
extern int fn_82E50BE8();
extern int fn_82E7BF78();
extern int fn_82EECBE8();
extern int fn_82F68CC0();


longlong fn_82EECCB0(undefined8 param_1,int param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  uint auStack_40 [16];
  
  lVar3 = 0;
  auStack_40[0] = 0;
  lVar2 = 0;
  if ((param_3 & 0xffffffff) != 0) {
    lVar2 = fn_82E7BF78(param_3,0xffff,auStack_40);
    if (lVar2 < 0) goto LAB_82eecd8c;
    lVar3 = (ulonglong)auStack_40[0] + 2;
    *(short *)(param_2 + 8) = (short)lVar3;
  }
  uVar1 = fn_82E50BE8(*(undefined2 *)(param_2 + 8),0,0,0,0);
  *(int *)(param_2 + 0xc) = (int)uVar1;
  if ((uVar1 & 0xffffffff) != 0) {
    if ((param_3 & 0xffffffff) != 0) {
      fn_82F68CC0(uVar1,param_3,lVar3);
    }
    uVar1 = fn_82E50BE8(*(undefined4 *)(param_2 + 0x10),0,0,0,0);
    *(int *)(param_2 + 0x14) = (int)uVar1;
    if ((uVar1 & 0xffffffff) != 0) {
      if ((param_4 & 0xffffffff) != 0) {
        fn_82F68CC0(uVar1,param_4,*(undefined4 *)(param_2 + 0x10));
      }
      if (-1 < (int)lVar2) {
        return lVar2;
      }
      goto LAB_82eecd8c;
    }
  }
  lVar2 = -0x7ff8fff2;
LAB_82eecd8c:
  fn_82EECBE8(param_1,param_2);
  return lVar2;
}

