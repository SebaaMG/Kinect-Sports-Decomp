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
extern int fn_82E73448();
extern int fn_82E73470();
extern int fn_82E75BB8();
extern int fn_82EEAFA8();


longlong fn_82E76230(int param_1,int *param_2,undefined8 param_3,int *param_4,int *param_5)

{
  int iVar1;
  longlong lVar2;
  undefined2 auStack_40 [32];
  
  if ((param_4 == (int *)0x0) || (param_5 == (int *)0x0)) {
    lVar2 = -0x7fffbffd;
  }
  else {
    lVar2 = fn_82E75BB8();
    if ((-1 < lVar2) && (*param_5 != 0)) {
      iVar1 = *param_4;
      if ((iVar1 == 0) || (*(int *)(iVar1 + 0x28) == 0)) {
        lVar2 = -0x7fff0001;
      }
      else {
        if (*(int *)(param_1 + 0x70) != 0) {
          auStack_40[0] = 1;
          lVar2 = (**(code **)(*param_2 + 0x68))(param_2,0xffffffff8214c2b0,auStack_40,2);
          if (lVar2 < 0) {
            return lVar2;
          }
          lVar2 = fn_82EEAFA8(*(undefined4 *)(param_1 + 0x70),*(undefined8 *)(iVar1 + 0x10),
                                  *(undefined1 *)(iVar1 + 0x22));
          if (lVar2 < 0) {
            return lVar2;
          }
        }
        if (*(int *)(param_1 + 0x74) != 0) {
          fn_82E73470();
          *(undefined4 *)(param_1 + 0x74) = 0;
        }
        *(int *)(param_1 + 0x74) = iVar1;
        fn_82E73448(iVar1);
      }
    }
  }
  return lVar2;
}

