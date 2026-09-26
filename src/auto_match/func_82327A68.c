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
extern int fn_822BEFF8();
extern int fn_822C72E0();
extern int fn_82327178();
extern unsigned int uStack_1c;


void fn_82327A68(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar2;
  char cVar3;
  longlong lVar1;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  if ((param_3 == 0) && (param_4 == 1)) {
    iVar2 = (**(code **)(*param_1 + 8))();
    if (param_2 == iVar2 + 0x33c) {
      iVar2 = (**(code **)(*param_1 + 8))(param_1);
      cVar3 = (**(code **)(*(int *)(iVar2 + 0x33c) + 0x3c))();
      if (((cVar3 == '\0') && (iVar2 = param_1[0x2f], iVar2 != 0)) && (*(int *)(iVar2 + 0x788) == 2)
         ) {
        fn_822C72E0(*(undefined4 *)(*(int *)(iVar2 + 0x114) + 0x20),0xffffffff821acc94);
      }
    }
    else {
      iVar2 = (**(code **)(*param_1 + 8))(param_1);
      if (param_2 == iVar2 + 0x448) {
        uStack_1c = 0;
        auStack_20[0] = 0;
        lVar1 = (**(code **)(*param_1 + 8))(param_1);
        fn_82327178(lVar1 + 0x448,&uStack_1c,auStack_20);
        if (param_1[0x2f] != 0) {
          fn_822BEFF8(param_1[0x2f],uStack_1c,auStack_20[0]);
        }
      }
    }
  }
  return;
}

