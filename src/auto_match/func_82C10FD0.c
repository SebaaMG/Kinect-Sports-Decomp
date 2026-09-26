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


undefined8 fn_82C10FD0(int param_1,undefined8 param_2,int *param_3,char *param_4)

{
  int iVar1;
  uint uVar2;
  
  *param_3 = 0;
  *param_4 = '\0';
  uVar2 = (uint)*(byte *)(param_1 + 0x200);
  while( true ) {
    if (0x7e < uVar2) {
      return 0xffffffff80500016;
    }
    iVar1 = *(int *)(uVar2 * 4 + param_1);
    if (iVar1 != 0) break;
    uVar2 = uVar2 + 1 & 0xff;
  }
  *param_3 = iVar1;
  *(char *)(param_1 + 0x200) = (char)uVar2 + '\x01';
  *param_4 = (char)uVar2;
  return 0;
}

