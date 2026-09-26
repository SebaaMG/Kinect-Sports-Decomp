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
extern unsigned int *auStack_90;
extern int fn_829C9BB0();
extern unsigned int lbl_832156B0;
extern unsigned int lbl_832156E0;
extern unsigned int lbl_832156E4;
extern unsigned int lbl_832156E8;
extern unsigned int lbl_832156EC;
extern unsigned int lbl_8321570C;
extern unsigned int lbl_8321573C;
extern unsigned int lbl_83215740;
extern unsigned int lbl_83215744;
extern unsigned int lbl_83215748;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_74;
extern unsigned int uStack_7c;


ulonglong fn_829C7C30(int param_1)

{
  int iVar2;
  ulonglong uVar1;
  undefined4 auStack_90 [5];
  undefined4 uStack_7c;
  uint uStack_74;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  auStack_90[0] = 0x24;
  uStack_7c = 0;
  iVar2 = fn_829C9BB0(auStack_90);
  if (-1 < iVar2) {
    iVar2 = param_1 * 0x184;
    *(uint *)(&lbl_8321570C + iVar2) =
         *(uint *)(&lbl_8321570C + iVar2) & 0xfffffff0 | uStack_74 & 0xf;
    *(undefined4 *)(&lbl_8321573C + iVar2) = uStack_44;
    *(undefined4 *)(&lbl_83215740 + iVar2) = uStack_40;
    *(undefined4 *)(&lbl_83215744 + iVar2) = uStack_3c;
    *(undefined4 *)(&lbl_83215748 + iVar2) = uStack_38;
    (&lbl_832156B0)[param_1 * 0x61] = (&lbl_832156B0)[param_1 * 0x61] & 0xfffffff0 | uStack_74 & 0xf
    ;
    (&lbl_832156E0)[param_1 * 0x61] = uStack_44;
    (&lbl_832156E4)[param_1 * 0x61] = uStack_40;
    (&lbl_832156E8)[param_1 * 0x61] = uStack_3c;
    (&lbl_832156EC)[param_1 * 0x61] = uStack_38;
  }
  uVar1 = RtlNtStatusToDosError();
  if (0 < (int)uVar1) {
    uVar1 = uVar1 & 0xffff | 0x80070000;
  }
  return uVar1;
}

