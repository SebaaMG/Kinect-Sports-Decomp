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
extern int fn_829410A8();
extern int fn_82941178();


undefined8 fn_82946878(int *param_1,uint param_2,int *param_3)

{
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar1;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = 0;
  uVar7 = 0xffffffff;
  uVar5 = 0xffffffff;
  if (param_2 != 0) {
    do {
      if (*param_3 != 0) {
        uVar2 = (**(code **)(*param_1 + 0x70))(param_1,*(undefined4 *)(*param_3 + 0x6c));
        uVar3 = (**(code **)(*param_1 + 0x74))(param_1,*(undefined4 *)(*param_3 + 0x6c));
        switch(uVar2) {
        case 0:
          return 1;
        case 1:
          uVar4 = 0;
          break;
        case 2:
          uVar4 = 1;
          break;
        case 3:
          uVar4 = 2;
          break;
        case 4:
          uVar4 = 3;
          break;
        case 5:
          uVar4 = 4;
          break;
        case 6:
          uVar4 = 5;
          break;
        case 7:
          uVar4 = 6;
          break;
        case 8:
          uVar4 = 7;
          break;
        case 9:
          uVar4 = 8;
          break;
        case 10:
          uVar4 = 9;
          break;
        case 0xb:
          uVar4 = 10;
          break;
        case 0xc:
          uVar4 = 0xb;
          break;
        case 0xd:
          uVar4 = 0xc;
          break;
        case 0xe:
          uVar4 = 0xd;
          break;
        default:
          return 0xffffffff80004005;
        case 0x11:
        case 0x12:
          uVar4 = 0x80000000;
        }
        if ((uVar4 < uVar7) || ((uVar4 == uVar7 && (uVar3 < uVar5)))) {
          uVar7 = uVar4;
          uVar5 = uVar3;
        }
      }
      uVar6 = uVar6 + 1;
      param_3 = param_3 + 1;
    } while (uVar6 < param_2);
  }
  uVar1 = fn_82941178(param_1);
  if ((((-1 < (int)uVar1) &&
       (uVar1 = fn_829410A8(param_1,0xffffffff820354f4,0xffffffff82035534), -1 < (int)uVar1))
      && (uVar1 = fn_82941178(param_1), -1 < (int)uVar1)) &&
     (uVar1 = fn_829410A8(param_1,0xffffffff82034870), -1 < (int)uVar1)) {
    param_1[0x182] = param_1[0x182] + 1;
    uVar1 = fn_82941178(param_1);
    if (((-1 < (int)uVar1) &&
        (uVar1 = fn_829410A8(param_1,0xffffffff820354a8), -1 < (int)uVar1)) &&
       ((uVar1 = fn_82941178(param_1), -1 < (int)uVar1 &&
        (uVar1 = fn_829410A8(param_1,0xffffffff82035430,param_1[0x1c6]), -1 < (int)uVar1)))) {
      param_1[0x182] = param_1[0x182] + -1;
      uVar1 = fn_82941178(param_1);
      if ((-1 < (int)uVar1) &&
         (uVar1 = fn_829410A8(param_1,0xffffffff82034898), -1 < (int)uVar1)) {
        uVar1 = (**(code **)(*param_1 + 0x178))(param_1);
      }
    }
  }
  return uVar1;
}

