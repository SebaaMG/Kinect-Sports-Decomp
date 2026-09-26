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
extern unsigned int *auStack_40;
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82EEE678();
extern int fn_82EEF368();


longlong fn_82E7BC68(int param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  ushort auStack_40 [32];
  
  auStack_40[0] = 0;
  lVar1 = fn_82EEE678(*(int *)(*(int *)(*(int *)(param_1 + 0x20) + 8) + 8) +
                            *(int *)(param_1 + 0x20) + 8,param_2,param_3,0,0,auStack_40,1);
  if (-1 < lVar1) {
    if ((ulonglong)auStack_40[0] == 0) {
      lVar1 = -0x3ff2c173;
    }
    else {
      iVar2 = fn_82E50BE8((ulonglong)auStack_40[0] << 1,0,0,0,0);
      if (iVar2 == 0) {
        lVar1 = -0x7ff8fff2;
      }
      else {
        lVar1 = fn_82EEE678(*(int *)(*(int *)(*(int *)(param_1 + 0x20) + 8) + 8) +
                                  *(int *)(param_1 + 0x20) + 8,param_2,param_3,0,iVar2,auStack_40,1)
        ;
        while (-1 < lVar1) {
          if (auStack_40[0] == 0) break;
          auStack_40[0] = auStack_40[0] - 1;
          lVar1 = fn_82EEF368(*(int *)(*(int *)(*(int *)(param_1 + 0x20) + 8) + 8) +
                                    *(int *)(param_1 + 0x20) + 8,param_2,
                                    *(undefined2 *)((uint)auStack_40[0] * 2 + iVar2),1);
        }
        fn_82E4FE40(iVar2);
      }
    }
  }
  return lVar1;
}

