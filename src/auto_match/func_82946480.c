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
extern int fn_828F9A60();
extern int fn_829410A8();
extern int fn_82941178();
extern int fn_82960C40();
extern int fn_82F68CC0();


longlong fn_82946480(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int *piStack_30;
  int *apiStack_2c [11];
  
  lVar3 = fn_82941178();
  if (((((-1 < (int)lVar3) &&
        (lVar3 = fn_829410A8(param_1,0xffffffff82035370), -1 < (int)lVar3)) &&
       (lVar3 = fn_82941178(param_1), -1 < (int)lVar3)) &&
      (((lVar3 = fn_829410A8(param_1,0xffffffff82035360), -1 < (int)lVar3 &&
        (lVar3 = fn_82941178(param_1), -1 < (int)lVar3)) &&
       ((lVar3 = fn_829410A8(param_1,0xffffffff82035354), -1 < (int)lVar3 &&
        ((lVar3 = fn_82941178(param_1), -1 < (int)lVar3 &&
         (lVar3 = fn_829410A8(param_1,0xffffffff82035328,param_1 + 0x7f), -1 < (int)lVar3)))))
       ))) && ((lVar3 = fn_82941178(param_1), -1 < (int)lVar3 &&
               (lVar3 = fn_829410A8(param_1,0xffffffff82034870), -1 < (int)lVar3)))) {
    param_1[0x182] = param_1[0x182] + 1;
    lVar3 = fn_82941178(param_1);
    if (((((-1 < (int)lVar3) &&
          (lVar3 = fn_829410A8(param_1,0xffffffff82035314), -1 < (int)lVar3)) &&
         (lVar3 = fn_82941178(param_1), -1 < (int)lVar3)) &&
        (((lVar3 = fn_829410A8(param_1,0xffffffff82035300), -1 < (int)lVar3 &&
          (lVar3 = fn_82941178(param_1), -1 < (int)lVar3)) &&
         (((lVar3 = fn_829410A8(param_1,0xffffffff820352e8), -1 < (int)lVar3 &&
           ((lVar3 = fn_82941178(param_1), -1 < (int)lVar3 &&
            (lVar3 = fn_829410A8(param_1,0xffffffff820352d4), -1 < (int)lVar3)))) &&
          (lVar3 = fn_82941178(param_1), -1 < (int)lVar3)))))) &&
       (((lVar3 = fn_829410A8(param_1,0xffffffff820352b8), -1 < (int)lVar3 &&
         (lVar3 = fn_82960C40(param_1,&piStack_30), -1 < (int)lVar3)) &&
        (lVar3 = (**(code **)(*param_1 + 0x180))(param_1), -1 < (int)lVar3)))) {
      param_1[0x182] = param_1[0x182] + -1;
      lVar3 = fn_829410A8(param_1,0xffffffff82034894);
      if (-1 < (int)lVar3) {
        if (piStack_30 != (int *)0x0) {
          (**(code **)(*piStack_30 + 8))();
          piStack_30 = (int *)0x0;
        }
        lVar3 = fn_828F9A60(param_1[0x180],apiStack_2c);
        if (-1 < lVar3) {
          iVar1 = param_1[0x180];
          iVar2 = param_1[0x17f];
          uVar4 = (**(code **)(*apiStack_2c[0] + 0xc))();
          fn_82F68CC0(uVar4,iVar2,iVar1);
          *param_2 = apiStack_2c[0];
        }
      }
    }
  }
  return lVar3;
}

