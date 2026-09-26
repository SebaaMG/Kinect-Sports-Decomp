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
extern unsigned int *auStack_3e;
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern unsigned int uStack_40;


longlong fn_82F411D0(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      int param_5)

{
  longlong lVar1;
  longlong lVar2;
  ushort uStack_40;
  undefined2 auStack_3e [31];
  
  lVar2 = 0;
  auStack_3e[0] = (undefined2)param_3;
  uStack_40 = 0;
  if (param_5 == 0) {
    lVar2 = (**(code **)(*param_1 + 0x20))(param_1,param_3,param_2,0,&uStack_40);
    if (-1 < lVar2) {
      lVar1 = fn_82E50BE8((ulonglong)uStack_40 << 1,0,0,0,0);
      if (lVar1 == 0) {
        lVar2 = -0x7ff8fff2;
      }
      else {
        lVar2 = (**(code **)(*param_1 + 0x20))(param_1,param_3,param_2,lVar1,&uStack_40);
        if ((-1 < lVar2) &&
           (lVar2 = (**(code **)(*param_1 + 0x1c))(param_1,param_3,param_2,auStack_3e), -1 < lVar2))
        {
          lVar2 = (**(code **)(*param_1 + 0x24))(param_1,lVar1,auStack_3e[0],param_4,0);
        }
        fn_82E4FE40(lVar1);
      }
    }
  }
  return lVar2;
}

