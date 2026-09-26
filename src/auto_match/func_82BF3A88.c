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
extern unsigned int *auStack_30;
extern int fn_82BF3608();
extern int fn_82BFA8D8();
extern int fn_82BFABC8();


undefined8 fn_82BF3A88(char *param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  undefined1 auStack_30 [48];
  
  fn_82BFA8D8(auStack_30);
  if ((((param_1 != (char *)0x0) && (*param_1 != '\0')) && ((param_2 & 0xffffffff) != 0)) &&
     ((param_3 & 0xffffffff) != 0)) {
    iVar1 = fn_82BF3608(param_1,param_2,param_3);
    if (iVar1 != 0) {
      fn_82BFABC8(auStack_30);
      return 1;
    }
  }
  fn_82BFABC8(auStack_30);
  return 0;
}

