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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_8257A9F0();
extern int fn_8265CA20();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int lbl_82196582;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_48;
extern unsigned int uStack_60;


undefined1 * fn_8235D350(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined8 uStack_60;
  int iStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  
  uVar1 = *(uint *)(param_1 + 0x1ba8);
  uVar4 = 0;
  iVar2 = *(int *)(param_1 + 0x1ba4);
  iStack_4c = 0;
  uStack_48 = 0;
  iStack_50 = 0;
  uStack_60 = (ulonglong)(((U64)(uStack_60) >> 32) & 0xFFFFFFFF);
  if (uVar1 != 0) {
    do {
      iVar3 = uVar4 * 0x4c + iVar2;
      if ((*(int *)(iVar3 + 0x40) == param_2) &&
         (((param_3 == 0 && (*(int *)(iVar3 + 0x48) != 0)) ||
          ((param_3 == 1 && (*(int *)(iVar3 + 0x44) != 0)))))) {
        fn_8257A9F0(&iStack_50,&uStack_60);
        uVar4 = (((U64)(uStack_60) >> 0) & 0xFFFFFFFF);
      }
      uVar4 = uVar4 + 1;
      uStack_60 = CONCAT44(uVar4,(((U64)(uStack_60) >> 32) & 0xFFFFFFFF));
    } while (uVar4 < uVar1);
  }
  iVar3 = iStack_4c - iStack_50 >> 2;
  if (iVar3 == 0) {
    if (iStack_50 != 0) {
      fn_8265CA20();
    }
    puVar5 = &lbl_82196582;
  }
  else {
    if (param_4 == 0) {
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      param_5 = (int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
                     (float)(longlong)iVar3);
      uStack_60 = (ulonglong)param_5;
    }
    puVar5 = (undefined1 *)(*(int *)(param_5 * 4 + iStack_50) * 0x4c + iVar2);
    if (iStack_50 != 0) {
      fn_8265CA20();
    }
  }
  return puVar5;
}

