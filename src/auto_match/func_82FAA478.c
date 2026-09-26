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
extern int fn_82FA9DC8();
extern int fn_82FAE150();
extern int fn_82FAE168();


void fn_82FAA478(int param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 0x40) != 0) && (*(int *)(param_1 + 0x38) == 0)) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x60);
    if (param_2 == '\0') {
      iVar4 = fn_82FAE168(uVar1);
      iVar4 = iVar4 - *(int *)(param_1 + 0x44);
    }
    else {
      iVar3 = fn_82FAE150();
      iVar2 = *(int *)(param_1 + 0x44);
      iVar4 = fn_82FAE168(uVar1);
      iVar4 = iVar4 + (iVar3 - iVar2);
    }
    *(int *)(param_1 + 0x34) = iVar4;
    fn_82FA9DC8(param_1,*(undefined4 *)(param_1 + 8));
  }
  return;
}

