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
extern int fn_82AA1BA8();


void fn_82AA1C18(int param_1,int param_2,int param_3)

{
  int iVar1;
  ushort uVar2;
  char *pcVar3;
  
  iVar1 = 0;
  pcVar3 = (char *)(param_2 + -1);
  do {
    if (param_3 == 0) {
      return;
    }
    pcVar3 = pcVar3 + 1;
    param_3 = param_3 + -1;
    if (*pcVar3 == '\n') {
LAB_82aa1c70:
      iVar1 = fn_82AA1BA8(param_1);
    }
    else {
      *(char *)((uint)*(ushort *)(param_1 + 8) + param_1 + 0x10) = *pcVar3;
      uVar2 = *(short *)(param_1 + 8) + 1;
      *(ushort *)(param_1 + 8) = uVar2;
      if (0x1fe < uVar2) goto LAB_82aa1c70;
    }
    if (iVar1 < 0) {
      return;
    }
  } while( true );
}

