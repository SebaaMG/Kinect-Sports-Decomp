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
extern int fn_828AB870();


void fn_82248910(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar2;
  char cVar3;
  longlong lVar1;
  
  if ((param_3 == 0) && (param_4 == 1)) {
    iVar2 = (**(code **)(*param_1 + 8))();
    if (param_2 == iVar2 + 0x144) {
      iVar2 = (**(code **)(*param_1 + 8))(param_1);
      cVar3 = (**(code **)(*(int *)(iVar2 + 0x144) + 0x3c))();
      if (cVar3 == '\x01') {
        lVar1 = (**(code **)(*param_1 + 8))(param_1);
        fn_828AB870(lVar1 + 0x9c,0);
      }
    }
  }
  return;
}

