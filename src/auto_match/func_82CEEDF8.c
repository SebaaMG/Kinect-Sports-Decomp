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
extern int fn_82CEAC28();
extern int fn_82CEED70();


undefined1 * fn_82CEEDF8(undefined1 *param_1,ulonglong param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  undefined1 auStack_20 [8];
  
  do {
    pcVar1 = (char *)fn_82CEED70(auStack_20,param_2);
    if (*pcVar1 == '\0') {
      uVar2 = 0;
      goto LAB_82ceee44;
    }
    param_2 = fn_82CEAC28(param_2);
  } while ((param_2 & 0xffffffff) != 0);
  uVar2 = 1;
LAB_82ceee44:
  *param_1 = uVar2;
  return param_1;
}

