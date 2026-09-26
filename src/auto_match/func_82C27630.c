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
extern int fn_82C10A40();
extern int fn_82C1DA78();
extern int fn_82C1E4A8();
extern int fn_82C1E668();
extern int fn_82C24370();
extern int fn_82C245B0();
extern int fn_82C24748();
extern int fn_82C270E0();


undefined8 fn_82C27630(int *param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar2;
  undefined8 uVar1;
  
  if ((((*param_1 == 1) || (iVar2 = fn_82C10A40(param_1[1],0xffffffff820ed320), iVar2 != 0))
      || (iVar2 = fn_82C10A40(param_1[1],0xffffffff820ecd20), iVar2 != 0)) ||
     (iVar2 = fn_82C10A40(param_1[1],0xffffffff820ed31c), iVar2 != 0)) {
    param_3[1] = fn_82C1DA78;
    *param_3 = fn_82C24370;
    param_3[2] = fn_82C270E0;
    param_3[3] = fn_82C245B0;
    param_3[4] = fn_82C24748;
    param_3[5] = fn_82C1E4A8;
    uVar1 = 0;
    param_3[6] = fn_82C1E668;
    param_3[7] = 0;
  }
  else {
    uVar1 = 0xffffffff80500003;
  }
  return uVar1;
}

