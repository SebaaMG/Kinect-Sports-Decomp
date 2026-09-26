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
extern int fn_82EDF428();


undefined8 fn_82F45228(int *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  iVar2 = param_1[1];
  iVar3 = *(int *)(iVar2 + 0x10);
  if ((iVar3 == 0) || (bVar5 = false, iVar3 == 3)) {
    bVar5 = true;
  }
  uVar4 = *(uint *)(*param_1 + 0x10);
  if (uVar4 < 0x3231565a) {
    if ((uVar4 != 0x32315659) && (uVar4 != 0x30323449)) {
      if (uVar4 != 0x31313450) {
        return 3;
      }
      if (!bVar5) {
        if (iVar3 == 0x3131564e) {
          param_1[0xe5e] = (int)fn_82BA02A8;
          return 0;
        }
        if (iVar3 == 0x55595659) {
          param_1[0xe5f] = (int)fn_82BA02A8;
          return 0;
        }
        if (iVar3 == 0x59565955) {
          param_1[0xe5f] = (int)fn_82BA02A8;
          return 0;
        }
        if (iVar3 != 0x32595559) {
          if (((iVar3 != 0x56555949) && (iVar3 != 0x30323449)) && (iVar3 != 0x32315659)) {
            return 5;
          }
          if (param_1[0xe4f] == 2) {
            return 5;
          }
          param_1[0xe5e] = (int)fn_82BA02A8;
          return 0;
        }
        param_1[0xe5f] = (int)fn_82BA02A8;
        return 0;
      }
      sVar1 = *(short *)(iVar2 + 0xe);
      if (sVar1 == 0x20) {
        param_1[0xe5f] = (int)fn_82BA02A8;
        return 0;
      }
      if (sVar1 == 0x18) {
        param_1[0xe5f] = (int)fn_82BA02A8;
        return 0;
      }
      if (sVar1 == 0x10) {
        param_1[0xe5f] = (int)fn_82BA02A8;
        return 0;
      }
      if (sVar1 != 8) {
        return 5;
      }
      param_1[0xe5f] = (int)fn_82BA02A8;
      return 0;
    }
  }
  else if (uVar4 != 0x56555949) {
    return 3;
  }
  if (bVar5) {
    sVar1 = *(short *)(iVar2 + 0xe);
    if (sVar1 == 0x20) {
      if (param_1[0xe4f] != 2) {
        param_1[0xe5f] = (int)fn_82BA02A8;
        return 0;
      }
      param_1[0xe5f] = (int)fn_82BA02A8;
      return 0;
    }
    if (sVar1 == 0x18) {
      if (param_1[0xe4f] != 2) {
        param_1[0xe5f] = (int)fn_82BA02A8;
        return 0;
      }
      param_1[0xe5f] = (int)fn_82BA02A8;
      return 0;
    }
    if (sVar1 == 0x10) {
      if (param_1[0xe4f] != 2) {
        param_1[0xe5f] = (int)fn_82BA02A8;
        return 0;
      }
      param_1[0xe5f] = (int)fn_82BA02A8;
      return 0;
    }
    if (sVar1 == 8) {
      if (param_1[0xe4f] != 2) {
        param_1[0xe5f] = (int)fn_82BA02A8;
        return 0;
      }
      param_1[0xe5f] = (int)fn_82BA02A8;
      return 0;
    }
  }
  else {
    if (iVar3 == 0x55595659) {
      if (param_1[0xe4f] != 2) {
        param_1[0xe5f] = (int)fn_82BA02A8;
        return 0;
      }
      param_1[0xe5f] = (int)fn_82BA02A8;
      return 0;
    }
    if (iVar3 == 0x59565955) {
      if (param_1[0xe4f] != 2) {
        param_1[0xe5f] = (int)fn_82BA02A8;
        return 0;
      }
      param_1[0xe5f] = (int)fn_82BA02A8;
      return 0;
    }
    if (iVar3 == 0x32595559) {
      if (param_1[0xe4f] != 2) {
        param_1[0xe5f] = (int)fn_82BA02A8;
        return 0;
      }
      param_1[0xe5f] = (int)fn_82BA02A8;
      return 0;
    }
    if (iVar3 == 0x41595556) {
      if (param_1[0xe4f] != 2) {
        param_1[0xe5f] = (int)fn_82BA02A8;
        return 0;
      }
      param_1[0xe5f] = (int)fn_82BA02A8;
      return 0;
    }
    if (iVar3 == 0x56343130) {
      if (param_1[0xe4f] != 2) {
        param_1[0xe5f] = (int)fn_82BA02A8;
        return 0;
      }
    }
    else {
      if (iVar3 == 0x3231564e) {
        param_1[0xe5e] = (int)fn_82BA02A8;
        return 0;
      }
      if (iVar3 == 0x3131564e) {
        if (param_1[0xe4f] != 2) {
          param_1[0xe5e] = (int)fn_82BA02A8;
          return 0;
        }
        param_1[0xe5e] = (int)fn_82BA02A8;
        return 0;
      }
      if (((iVar3 == 0x30323449) || (iVar3 == 0x56555949)) || (iVar3 == 0x32315659)) {
        param_1[0xe5e] = (int)fn_82EDF428;
        return 0;
      }
    }
  }
  return 5;
}

