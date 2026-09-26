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
extern int fn_829C81E8();
extern int fn_829C9BA0();
extern int fn_82F68CC0();
extern int iRam832159dc;
extern unsigned int lbl_83215690;
extern unsigned int lbl_832156AC;
extern unsigned int lbl_8321570C;
extern unsigned int lbl_8321582C;
extern unsigned int lbl_832159B4;
extern unsigned int lbl_832159C8;
extern unsigned int lbl_83215A2C;
extern unsigned int lbl_83215A30;


ulonglong fn_829C8440(int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar2 = KfAcquireSpinLock(0xffffffff8321506c);
  if (param_2 != 0) {
    *(undefined4 *)(&lbl_8321582C + param_1 * 0x184) = 1;
  }
  iVar4 = param_1 * 0x184;
  if ((((*(int *)(&lbl_8321582C + iVar4) == 0) || (*(int *)(&lbl_832156AC + iVar4) != 0)) ||
      (param_1 != lbl_83215690)) || (lbl_83215A30 != 0)) {
    KfReleaseSpinLock(0xffffffff8321506c,uVar2);
    uVar3 = 0;
  }
  else {
    iVar1 = *(int *)(iVar4 + -0x7cdea7d8);
    *(undefined4 *)(&lbl_8321582C + iVar4) = 0;
    fn_82F68CC0(iVar1 * 0x5c + iVar4 + -0x7cdea898,&lbl_8321570C + iVar4,0x5c);
    lbl_83215A30 = 1;
    KfReleaseSpinLock(0xffffffff8321506c,uVar2);
    lbl_832159B4 = 0x23;
    lbl_832159C8 = fn_829C81E8;
    lbl_83215A2C = param_1;
    fn_82F68CC0(0xffffffff832159d0,&lbl_8321570C + iVar4,0x5c);
    iRam832159dc = -iRam832159dc;
    uVar2 = fn_829C9BA0(0xffffffff832159b4);
    if ((int)uVar2 == 0x103) {
      uVar2 = 0;
    }
    else if ((int)uVar2 < 0) {
      *(undefined4 *)(&lbl_8321582C + iVar4) = 1;
      lbl_83215A30 = 0;
    }
    uVar3 = RtlNtStatusToDosError(uVar2);
    if (0 < (int)uVar3) {
      uVar3 = uVar3 & 0xffff | 0x80070000;
    }
  }
  return uVar3;
}

