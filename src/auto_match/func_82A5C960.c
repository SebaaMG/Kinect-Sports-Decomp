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
extern int fn_82A476E0();
extern int fn_82A4F4E0();
extern int fn_82A5C878();


undefined8 fn_82A5C960(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int aiStack_30 [12];
  
  aiStack_30[0] = 0;
  do {
    uVar3 = 0;
    while( true ) {
      iVar2 = fn_82A476E0(param_1,aiStack_30);
      iVar1 = aiStack_30[0];
      if ((iVar2 == 0) || ((int)uVar3 < 0)) {
        return uVar3;
      }
      iVar2 = fn_82A5C878(param_1 + 8,aiStack_30[0]);
      if (iVar2 != 0) break;
      uVar3 = 0xffffffff8007000e;
      if (*(int *)(iVar1 + 8) != 5) {
        fn_82A4F4E0(iVar1);
      }
    }
  } while( true );
}

