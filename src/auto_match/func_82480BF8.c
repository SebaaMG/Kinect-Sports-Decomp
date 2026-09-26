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
extern int fn_82250A18();
extern int fn_8247DD58();
extern int fn_8247F240();
extern int fn_824809B0();
extern int fn_82485850();
extern int fn_82485AC8();
extern int fn_82485BD8();
extern int fn_82486628();
extern int fn_8265CA20();
extern unsigned int lbl_832975B0;


void fn_82480BF8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  fn_82485850((ulonglong)*(uint *)(param_1 + 0x48),
                    (ulonglong)*(uint *)(param_1 + 0x48) + 0x634);
  fn_82485AC8(*(undefined4 *)(param_1 + 0x48));
  fn_82486628(*(undefined4 *)(param_1 + 0x48));
  iVar1 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar1 = fn_82250A18();
  }
  fn_82485BD8(*(undefined4 *)(param_1 + 0x48),*(char *)(iVar1 + 4) == '\0');
  iVar1 = 0;
  do {
    if (*(int *)(iVar1 + *(int *)(param_1 + 0x48) + 0x838) == 3) goto LAB_82480ca8;
    iVar1 = iVar1 + 0x420;
  } while (iVar1 < 0x1080);
  iVar1 = *(int *)(param_1 + 0xa4);
  if (iVar1 != 0) {
    fn_8247DD58(iVar1);
    fn_8265CA20(iVar1);
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
LAB_82480ca8:
  fn_8247F240(param_1,1);
  fn_824809B0(param_1,param_1 + 0xb0);
  iVar1 = *(int *)(param_1 + 0x48);
  if (*(int *)(iVar1 + 0x18b8) != 0) {
    if (*(int *)(iVar1 + 0x18b8) != 1) {
      uVar2 = *(undefined4 *)(param_1 + 0x38);
      goto LAB_82480cf4;
    }
    if (*(int *)(iVar1 + 0xc58) != 4) {
      uVar2 = *(undefined4 *)(param_1 + 0x34);
      goto LAB_82480cf4;
    }
  }
  uVar2 = *(undefined4 *)(param_1 + 0x30);
LAB_82480cf4:
  *(undefined4 *)(iVar1 + 0x18) = uVar2;
  return;
}

