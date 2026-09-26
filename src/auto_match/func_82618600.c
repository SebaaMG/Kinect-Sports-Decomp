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
extern int fn_825FBB80();
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CACEC;


void fn_82618600(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  uVar1 = param_1[4];
  *param_1 = &lbl_821CACEC;
  if ((int)uVar1 < 0) {
    return;
  }
  iVar2 = *(int *)(*(int *)(*(int *)(((int)uVar1 >> 8 & 0xffU) * 4 + param_1[5]) + 4) +
                  (uVar1 & 0xff) * 4);
  if (*(int *)(iVar2 + 0x240) == 0) {
    if (*(short *)(iVar2 + 8) == *(short *)(iVar2 + 6)) {
      bVar3 = true;
      goto LAB_82618698;
    }
    if ((*(float *)(iVar2 + 0xc) == lbl_82192734) &&
       (bVar3 = true, *(short *)(iVar2 + 4) == *(short *)(iVar2 + 8))) goto LAB_82618698;
  }
  bVar3 = false;
LAB_82618698:
  if (!bVar3) {
    fn_825FBB80(*(undefined4 *)(((int)uVar1 >> 8 & 0xffU) * 4 + param_1[5]),uVar1 & 0xff);
  }
  param_1[4] = 0xffffffff;
  param_1[6] = 0;
  return;
}

