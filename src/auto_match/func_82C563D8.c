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
extern int fn_82C44D10();
extern int fn_82C53960();
extern int fn_82C56178();
extern int fn_82CBBD68();
extern int fn_82F691F0();


undefined8 fn_82C563D8(int *param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return 0xffffffff80000001;
  }
  if ((param_2 & 0xffffffff) == 0) {
    if ((param_3 & 0xffffffff) != 0) goto LAB_82c564c4;
  }
  else if ((param_3 & 0xffffffff) == 0) goto LAB_82c564c4;
  uVar1 = fn_82C53960(0x1c,0);
  if ((uVar1 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(uVar1,0,0x1c);
  }
  *param_1 = (int)uVar1;
  if (((((uVar1 & 0xffffffff) != 0) && (RtlInitializeCriticalSection(uVar1), *param_1 != 0)) &&
      (iVar2 = fn_82CBBD68(param_1 + 1,0x80), iVar2 != 0)) &&
     (((iVar2 = fn_82CBBD68(param_1 + 4,0x80), iVar2 != 0 &&
       (iVar2 = fn_82CBBD68(param_1 + 7,0x80), iVar2 != 0)) &&
      ((iVar2 = fn_82CBBD68(param_1 + 10,0x80), iVar2 != 0 &&
       (iVar2 = fn_82C44D10(param_1 + 0xd,param_2,param_3,param_1), iVar2 == 0)))))) {
    return 0;
  }
LAB_82c564c4:
  fn_82C56178(param_1);
  return 0xffffffff80000001;
}

