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
extern unsigned int *auStack_20;
extern int fn_82558B08();
extern int fn_8259A230();
extern int fn_827D55A0();
extern int fn_82A1BB18();
extern unsigned int lbl_83265A24;
extern unsigned int lbl_832767A8;
extern U64 storeWordConditionalIndexed();


undefined4 fn_825D9E50(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  char in_RESERVE;
  byte bVar3;
  byte in_cr0;
  undefined4 auStack_20 [2];
  
  if (*(int *)(param_1 + 0xb90) != 0) {
    do {
      uVar2 = (ulonglong)lbl_832767A8;
      if (in_RESERVE != '\0') {
        lbl_832767A8 = storeWordConditionalIndexed(uVar2 + 1,0,0xffffffff832767a8);
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    auStack_20[0] = 0;
    fn_827D55A0(lbl_83265A24,*(int *)(param_1 + 0xb90),auStack_20);
    fn_82A1BB18();
    iVar1 = fn_8259A230();
    bVar3 = (iVar1 == 0) << 1;
    if ((iVar1 == 0) && ((int)(uVar2 + 1) == 1)) {
      fn_82558B08();
    }
    do {
      if (in_RESERVE != '\0') {
        lbl_832767A8 = storeWordConditionalIndexed((ulonglong)lbl_832767A8 - 1,0,0xffffffff832767a8)
        ;
        bVar3 = 2;
      }
    } while (!(bool)(bVar3 >> 1 & 1));
    return auStack_20[0];
  }
  return 0;
}

