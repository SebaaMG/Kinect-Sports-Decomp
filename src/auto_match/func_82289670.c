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
extern int fn_8225C590();
extern int fn_8225D388();
extern int fn_8225D8B8();
extern int fn_8225DA18();


undefined8 fn_82289670(int param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  if ((*(int *)(*(int *)(param_1 + 0x11f0) + 0x18b8) != 1) || (param_2 != 3)) {
    uVar1 = fn_8225C590();
    param_1 = param_2 * 0x40 + param_1;
    if ((*(int *)(param_1 + 0x6a8) == 1) &&
       (iVar2 = fn_8225DA18(uVar1,*(undefined4 *)(param_1 + 0x6ac)),
       *(char *)(iVar2 + 0xd8) != '\0')) {
      fn_8225D8B8(uVar1,iVar2);
      fn_8225D388(uVar1,*(undefined4 *)(param_1 + 0x6ac));
      return 1;
    }
  }
  return 0;
}

