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
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_82E4FE40();
extern int fn_82E50BE8();


longlong fn_82E6EFF0(int param_1,int *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  uint auStack_50 [2];
  ulonglong auStack_48 [9];
  
  if (param_2 == (int *)0x0) {
    lVar2 = -0x7fffbffd;
  }
  else {
    auStack_48[0] = 0;
    lVar2 = (**(code **)(*param_2 + 0x14))(param_2,auStack_48,0);
    if (-1 < lVar2) {
      if (auStack_48[0] < 0x100000000) {
        uVar1 = auStack_48[0] & 0xffffffff;
        lVar3 = fn_82E50BE8(uVar1,0,0,0,0);
        if (lVar3 == 0) {
          lVar2 = -0x7ff8fff2;
        }
        else {
          auStack_50[0] = 0;
          lVar2 = (**(code **)(*param_2 + 0x1c))(param_2,lVar3,uVar1,auStack_50);
          if ((-1 < lVar2) &&
             ((uVar1 != auStack_50[0] ||
              (((lVar2 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x1c))
                                   (*(int **)(param_1 + 0x2c),*(undefined8 *)(param_1 + 0x30)),
                -1 < lVar2 &&
                (lVar2 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x30))
                                   (*(int **)(param_1 + 0x2c),lVar3,uVar1,auStack_50), -1 < lVar2))
               && (uVar1 != auStack_50[0])))))) {
            lVar2 = -0x3ff2c945;
          }
          fn_82E4FE40(lVar3);
        }
      }
      else {
        lVar2 = -0x3ff2c945;
      }
    }
  }
  return lVar2;
}

