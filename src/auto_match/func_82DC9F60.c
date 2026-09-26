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
extern int fn_82D8E8F0();
extern int fn_82D8EA98();


void fn_82DC9F60(undefined8 param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = param_2 + param_3;
  do {
    if (pcVar3 <= param_2) {
      return;
    }
    if (*param_2 == '\0') {
      iVar1 = *(int *)(param_2 + 4);
      uVar2 = *(undefined4 *)(param_2 + 8);
      fn_82D8E8F0(param_1,iVar1);
      iVar1 = *(int *)(iVar1 + 0x30);
      *(byte *)(iVar1 + 0x12) = *(byte *)(iVar1 + 0x12) | (byte)uVar2;
    }
    else {
      if (*param_2 != '\x01') {
        return;
      }
      fn_82D8EA98(param_1,*(undefined4 *)(param_2 + 4));
    }
    param_2 = param_2 + 0x10;
  } while( true );
}

