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
extern int fn_829632A0();
extern int fn_829632F0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963A30();
extern int fn_82963D50();
extern int fn_82964628();
extern int fn_82BA02A8();
extern unsigned int lbl_82005710;


longlong fn_82950808(int *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)param_1[0x41] == 0x50000002) {
    iVar2 = fn_82963998(0x74);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = fn_829632A0();
    }
    if (iVar2 == 0) {
      lVar1 = -0x7ff8fff2;
    }
    else {
      lVar1 = fn_82963A30(iVar2,0x70800002,6,1,0);
      if ((-1 < lVar1) && (lVar1 = fn_829632F0(iVar2,param_1[0x41]), -1 < lVar1)) {
        iVar3 = 0;
        lVar1 = 4;
        **(undefined4 **)(iVar2 + 0x10) = **(undefined4 **)(param_1[0x41] + 0x10);
        do {
          *(undefined4 *)(iVar3 + *(int *)(iVar2 + 8)) =
               *(undefined4 *)(*(int *)(param_1[0x41] + 8) + iVar3);
          iVar3 = iVar3 + 4;
          lVar1 = lVar1 + -1;
        } while (lVar1 != 0);
        iVar3 = fn_82964628(lbl_82005710,param_1,param_1[0x1e],0,0);
        if (iVar3 == -1) {
          return -0x7ff8fff2;
        }
        *(int *)(*(int *)(iVar2 + 8) + 0x10) = iVar3;
        *(int *)(*(int *)(iVar2 + 8) + 0x14) = iVar3;
        iVar3 = (**(code **)(*param_1 + 0x30))(param_1,iVar2);
        if (iVar3 == 0) {
          lVar1 = fn_82963D50(param_1[0x41],iVar2);
        }
        else {
          lVar1 = 1;
        }
      }
      fn_82BA02A8(iVar2);
      fn_829639F0(iVar2);
    }
  }
  else {
    lVar1 = 1;
  }
  return lVar1;
}

