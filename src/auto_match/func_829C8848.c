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
extern int fn_829C8440();
extern int fn_82F68CC0();
extern unsigned int lbl_83214FFC;
extern unsigned int lbl_832156AC;
extern unsigned int lbl_832156B0;
extern unsigned int lbl_8321570C;


undefined8 fn_829C8848(int param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (lbl_83214FFC == 0) {
    uVar2 = 0xffffffff8000ffff;
  }
  else if ((param_2 < 2) && (param_1 == 0)) {
    uVar2 = KfAcquireSpinLock(0xffffffff8321506c);
    iVar3 = param_2 * 0x184;
    uVar1 = *(uint *)(&lbl_832156AC + iVar3);
    *(int *)(&lbl_832156AC + iVar3) = (int)((ulonglong)uVar1 - 1);
    if ((ulonglong)uVar1 - 1 == 0) {
      fn_82F68CC0(&lbl_8321570C + iVar3,&lbl_832156B0 + param_2 * 0x61,0x5c);
      KfReleaseSpinLock(0xffffffff8321506c,uVar2);
      fn_829C8440(param_2,1);
      uVar2 = 0;
    }
    else {
      KfReleaseSpinLock(0xffffffff8321506c,uVar2);
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffffff80070057;
  }
  return uVar2;
}

