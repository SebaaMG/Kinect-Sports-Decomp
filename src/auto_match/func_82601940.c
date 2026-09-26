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
extern int fn_82535298();
extern int fn_82536288();
extern int fn_826243F0();
extern int iRam8326b900;
extern int iRam8328229c;


void fn_82601940(int param_1,int *param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  bool bVar2;
  int aiStack_30 [12];
  
  piVar1 = param_2 + 0x9f;
  if (param_4 == 0) {
    piVar1 = param_2 + 0x9e;
  }
  if (piVar1 == (int *)0x0) {
    bVar2 = false;
  }
  else {
    bVar2 = *piVar1 != 0;
  }
  if ((bVar2) && (5 < (uint)(iRam8326b900 - iRam8328229c))) {
    aiStack_30[0] = *piVar1;
    aiStack_30[0] =
         fn_82535298(aiStack_30,*(undefined4 *)(param_1 + 0x84c),0xffffffff83296bc0,
                           0xffffffff83296bd0);
    fn_82536288(aiStack_30);
    iRam8328229c = iRam8326b900;
  }
  if (param_2[0xa0] != 0) {
    fn_826243F0(*(undefined4 *)(*param_2 + 0x1c),param_2 + 0xa0,param_3);
  }
  return;
}

