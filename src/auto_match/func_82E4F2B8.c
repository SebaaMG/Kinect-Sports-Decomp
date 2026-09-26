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
extern int fn_82BA02A8();
extern int fn_82E4E3B8();
extern int fn_82E4E558();
extern int fn_82E4E648();
extern int fn_82E4ED78();
extern int fn_82E4F0C8();
extern int fn_82EDF428();


undefined8 fn_82E4F2B8(int *param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = *(uint *)(*param_1 + 0x10);
  if (uVar6 < 0x41595557) {
    if (uVar6 == 0x41595556) {
      iVar4 = *(int *)(param_1[1] + 0x10);
      if (((iVar4 != 0x56555949) && (iVar4 != 0x30323449)) && (iVar4 != 0x32315659)) {
        return 5;
      }
      if (param_1[0xe4f] != 2) {
        param_1[0xe5d] = (int)fn_82BA02A8;
        return 0;
      }
      param_1[0xe5d] = (int)fn_82BA02A8;
      return 0;
    }
    if (0x3231564e < uVar6) {
      if (uVar6 != 0x32315659) {
        if (uVar6 == 0x32595559) {
          iVar4 = *(int *)(param_1[1] + 0x10);
          if (((iVar4 != 0x56555949) && (iVar4 != 0x30323449)) && (iVar4 != 0x32315659)) {
            return 5;
          }
          if (param_1[0xe4f] != 2) {
            param_1[0xe5d] = (int)fn_82E4F0C8;
            return 0;
          }
          param_1[0xe5d] = (int)fn_82BA02A8;
          return 0;
        }
        if (uVar6 != 0x39555659) {
          return 5;
        }
        if (param_1[0xe4f] != 2) {
          if (param_1[0xe45] == 0) {
            param_1[0xe5e] = (int)fn_82BA02A8;
            return 0;
          }
          param_1[0xe5e] = (int)fn_82BA02A8;
          return 0;
        }
        param_1[0xe5e] = (int)fn_82BA02A8;
        return 0;
      }
      if (param_1[0xe45] != 0) {
        uVar3 = param_1[0xe42] * param_1[0xe2c];
        uVar6 = param_1[0xe41];
        iVar7 = param_1[0xe2d] * param_1[0xe2c];
        iVar5 = ((int)uVar3 >> 2) + (uint)((int)uVar3 < 0 && (uVar3 & 3) != 0);
        uVar2 = iVar7 * 5;
        iVar4 = ((int)uVar6 >> 1) + (uint)((int)uVar6 < 0 && (uVar6 & 1) != 0);
        param_1[0xe] = uVar6 + uVar3;
        param_1[0x10] = iVar4 + iVar5 + iVar7;
        param_1[0xf] = ((int)uVar2 >> 2) + (uint)((int)uVar2 < 0 && (uVar2 & 3) != 0) + iVar4 +
                       iVar5;
      }
      if ((*(int *)(param_1[1] + 0x10) != 0x56555949) && (*(int *)(param_1[1] + 0x10) != 0x30323449)
         ) {
        return 5;
      }
      if (param_1[0xe45] != 0) {
        param_1[0xe5e] = (int)fn_82E4E558;
        return 0;
      }
      goto LAB_82e4fae8;
    }
    if (uVar6 == 0x3231564e) {
      if (param_1[0xe45] != 0) {
        uVar6 = param_1[0xe42] * param_1[0xe2c];
        param_1[0xe] = param_1[0xe41] + uVar6;
        param_1[0xf] = param_1[0xe2d] * param_1[0xe2c] +
                       ((int)uVar6 >> 1) + (uint)((int)uVar6 < 0 && (uVar6 & 1) != 0) +
                       param_1[0xe41];
      }
      iVar4 = *(int *)(param_1[1] + 0x10);
      if (((iVar4 != 0x56555949) && (iVar4 != 0x30323449)) && (iVar4 != 0x32315659)) {
        return 5;
      }
      param_1[0xe5e] = (int)fn_82BA02A8;
      return 0;
    }
    if (0x30323449 < uVar6) {
      if (uVar6 != 0x3131564e) {
        return 5;
      }
      iVar4 = *(int *)(param_1[1] + 0x10);
      if (((iVar4 != 0x56555949) && (iVar4 != 0x30323449)) && (iVar4 != 0x32315659)) {
        return 5;
      }
      if (param_1[0xe4f] != 2) {
        param_1[0xe5e] = (int)fn_82BA02A8;
        return 0;
      }
      param_1[0xe5e] = (int)fn_82BA02A8;
      return 0;
    }
    if (uVar6 != 0x30323449) {
      if ((uVar6 != 0) && (uVar6 != 3)) {
        return 5;
      }
      iVar4 = *(int *)(param_1[1] + 0x10);
      if ((iVar4 != 0x56555949) && ((iVar4 != 0x30323449 && (iVar4 != 0x32315659)))) {
        return 5;
      }
      sVar1 = *(short *)(*param_1 + 0xe);
      if (sVar1 == 0x20) {
        if (param_1[0xe4f] != 2) {
          param_1[0xe5d] = (int)fn_82E4E648;
          return 0;
        }
        param_1[0xe5d] = (int)fn_82BA02A8;
        return 0;
      }
      if (sVar1 == 0x18) {
        if (param_1[0xe4f] != 2) {
          param_1[0xe5d] = (int)fn_82BA02A8;
          return 0;
        }
        param_1[0xe5d] = (int)fn_82BA02A8;
        return 0;
      }
      if (sVar1 == 0x10) {
        if (param_1[0xe4f] != 2) {
          param_1[0xe5d] = (int)fn_82BA02A8;
          return 0;
        }
        param_1[0xe5d] = (int)fn_82BA02A8;
        return 0;
      }
      if (sVar1 != 8) {
        return 5;
      }
      if (param_1[0xe4f] != 2) {
        param_1[0xe5d] = (int)fn_82BA02A8;
        return 0;
      }
      param_1[0xe5d] = (int)fn_82BA02A8;
      return 0;
    }
  }
  else {
    if (uVar6 < 0x5559565a) {
      if (uVar6 == 0x55595659) {
        iVar4 = *(int *)(param_1[1] + 0x10);
        if (((iVar4 != 0x56555949) && (iVar4 != 0x30323449)) && (iVar4 != 0x32315659)) {
          return 5;
        }
        if (param_1[0xe4f] != 2) {
          param_1[0xe5d] = (int)fn_82BA02A8;
          return 0;
        }
        param_1[0xe5d] = (int)fn_82E4ED78;
        return 0;
      }
      if (uVar6 == 0x50313459) {
        iVar4 = *(int *)(param_1[1] + 0x10);
        if (((iVar4 != 0x56555949) && (iVar4 != 0x30323449)) && (iVar4 != 0x32315659)) {
          return 5;
        }
        if (param_1[0xe4f] == 2) {
          return 5;
        }
      }
      else {
        if (uVar6 != 0x54313459) {
          if (uVar6 != 0x54323459) {
            return 5;
          }
          iVar4 = *(int *)(param_1[1] + 0x10);
          if (((iVar4 != 0x56555949) && (iVar4 != 0x30323449)) && (iVar4 != 0x32315659)) {
            return 5;
          }
          if (param_1[0xe4f] == 2) {
            return 5;
          }
          param_1[0xe5d] = (int)fn_82BA02A8;
          return 0;
        }
        iVar4 = *(int *)(param_1[1] + 0x10);
        if (((iVar4 != 0x56555949) && (iVar4 != 0x30323449)) && (iVar4 != 0x32315659)) {
          return 5;
        }
      }
      param_1[0xe5d] = (int)fn_82E4E3B8;
      return 0;
    }
    if (uVar6 == 0x56343130) {
      iVar4 = *(int *)(param_1[1] + 0x10);
      if (((iVar4 != 0x56555949) && (iVar4 != 0x30323449)) && (iVar4 != 0x32315659)) {
        return 5;
      }
      if (param_1[0xe4f] == 2) {
        return 5;
      }
      param_1[0xe5d] = (int)fn_82BA02A8;
      return 0;
    }
    if (uVar6 != 0x56555949) {
      if (uVar6 != 0x59565955) {
        return 5;
      }
      iVar4 = *(int *)(param_1[1] + 0x10);
      if (((iVar4 != 0x56555949) && (iVar4 != 0x30323449)) && (iVar4 != 0x32315659)) {
        return 5;
      }
      if (param_1[0xe4f] != 2) {
        param_1[0xe5d] = (int)fn_82BA02A8;
        return 0;
      }
      param_1[0xe5d] = (int)fn_82BA02A8;
      return 0;
    }
  }
  if (param_1[0xe45] != 0) {
    uVar3 = param_1[0xe42] * param_1[0xe2c];
    uVar6 = param_1[0xe41];
    iVar7 = param_1[0xe2d] * param_1[0xe2c];
    iVar5 = ((int)uVar3 >> 2) + (uint)((int)uVar3 < 0 && (uVar3 & 3) != 0);
    uVar2 = iVar7 * 5;
    iVar4 = ((int)uVar6 >> 1) + (uint)((int)uVar6 < 0 && (uVar6 & 1) != 0);
    param_1[0xe] = uVar6 + uVar3;
    param_1[0xf] = iVar4 + iVar5 + iVar7;
    param_1[0x10] = ((int)uVar2 >> 2) + (uint)((int)uVar2 < 0 && (uVar2 & 3) != 0) + iVar4 + iVar5;
  }
  iVar4 = *(int *)(param_1[1] + 0x10);
  if (((iVar4 != 0x30323449) && (iVar4 != 0x56555949)) && (iVar4 != 0x32315659)) {
    return 5;
  }
  if (param_1[0xe45] != 0) {
    param_1[0xe5e] = (int)fn_82E4E558;
    return 0;
  }
LAB_82e4fae8:
  param_1[0xe5e] = (int)fn_82EDF428;
  return 0;
}

