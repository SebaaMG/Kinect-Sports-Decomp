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
extern int fn_82A2C520();


undefined8 fn_82A2E390(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_2 + 0x50);
  iVar2 = *(int *)(iVar1 + 0x18);
  if (*(char *)(param_1 + 0xce) == '\0') {
    uVar3 = 0xffffffffc0000022;
  }
  else {
    if (*(char *)(param_3 + 0x38) == '\0') {
      IoSetShareAccess();
    }
    else {
      uVar3 = IoCheckShareAccess(*(undefined4 *)(iVar1 + 4),*(undefined2 *)(iVar1 + 0xe),iVar2,
                                 param_3 + 0x38,1);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
    }
    fn_82A2C520(param_3,*(byte *)(param_3 + 0x35) & 1);
    uVar3 = 0;
    *(int *)(iVar2 + 8) = param_3;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    iVar1 = *(int *)(param_1 + 0x80);
    *(int *)(iVar2 + 0x54) = param_1 + 0x80;
    *(int *)(iVar2 + 0x50) = iVar1;
    *(int *)(iVar1 + 4) = iVar2 + 0x50;
    *(int *)(param_1 + 0x80) = iVar2 + 0x50;
    *(undefined4 *)(param_2 + 0x14) = param_4;
  }
  return uVar3;
}

