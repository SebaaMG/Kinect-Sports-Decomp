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
extern unsigned int lbl_832156AC;
extern unsigned int lbl_832156B0;
extern unsigned int lbl_8321570C;


undefined8 fn_829C8918(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = KfAcquireSpinLock(0xffffffff8321506c);
  if (*(int *)(&lbl_832156AC + param_1 * 0x184) == 0) {
    fn_82F68CC0(&lbl_8321570C + param_1 * 0x184,&lbl_832156B0 + param_1 * 0x61,0x5c);
    KfReleaseSpinLock(0xffffffff8321506c,uVar1);
    fn_829C8440(param_1,1);
  }
  else {
    KfReleaseSpinLock(0xffffffff8321506c,uVar1);
  }
  return 0;
}

