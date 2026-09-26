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
extern int fn_82642048();
extern unsigned int lbl_832978A4;
extern U64 storeWordConditionalIndexed();


undefined8 fn_82642E10(int param_1,int param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  char in_RESERVE;
  byte in_cr0;
  
  iVar3 = param_4 * 0x1a0 + param_2;
  if ((*(int *)(iVar3 + 0x28) != *(int *)(param_3 + 0x30)) ||
     (((*(ulonglong *)(iVar3 + 0x30) ^ *(ulonglong *)(param_1 + 0x31a0)) &
      *(ulonglong *)(param_3 + 0x20)) != 0 ||
      ((*(ulonglong *)(iVar3 + 0x38) ^ *(ulonglong *)(param_1 + 0x31a8)) &
      *(ulonglong *)(param_3 + 0x28)) != 0)) {
    if ((*(int *)(iVar3 + 0x40) != 0) &&
       ((uint)(*(int *)(param_1 + 0x2a9c) - *(int *)(iVar3 + 0x40)) <
        (uint)(*(int *)(param_1 + 0x2a9c) - **(int **)(param_1 + 0x2a90)))) {
      return 0;
    }
    fn_82642048(param_2,(ulonglong)
                          *(uint *)(*(int *)((param_4 + 0x70) * 8 + param_2) + param_2 + 0x368) +
                          (ulonglong)*(uint *)(param_2 + 0x20),param_3,
                  (undefined8 *)(param_1 + 0x31a0));
    if (*(int *)(param_3 + 0x30) == 0) {
      do {
        uVar1 = (ulonglong)lbl_832978A4;
        lVar2 = uVar1 + 1;
        if (in_RESERVE != '\0') {
          lbl_832978A4 = storeWordConditionalIndexed(lVar2,0,0xffffffff832978a4);
          in_cr0 = 2;
        }
      } while ((!(bool)(in_cr0 >> 1 & 1)) || ((uVar1 + 2 & 0xffffffff) < 2));
      *(int *)(param_3 + 0x30) = (int)lVar2;
    }
    *(undefined4 *)(iVar3 + 0x28) = *(undefined4 *)(param_3 + 0x30);
    *(undefined8 *)(iVar3 + 0x30) = *(undefined8 *)(param_1 + 0x31a0);
    *(undefined8 *)(iVar3 + 0x38) = *(undefined8 *)(param_1 + 0x31a8);
  }
  *(undefined8 *)(param_1 + 0x2ee8) = *(undefined8 *)(param_1 + 0x31a0);
  *(undefined8 *)(param_1 + 0x2ef0) = *(undefined8 *)(param_1 + 0x31a8);
  return 1;
}

