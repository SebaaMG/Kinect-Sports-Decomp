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
extern int fn_82C06C18();
extern int fn_82C08290();
extern int fn_82C10F40();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;


ulonglong fn_82C08638(int *param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  int iStack_50;
  int iStack_4c;
  int aiStack_48 [18];
  
  iStack_4c = 0;
  iStack_50 = 0;
  aiStack_48[0] = 0;
  if ((param_2 & 0xff) == (param_3 & 0xff)) {
    return 0xffffffff80070057;
  }
  uVar3 = (**(code **)(*param_1 + 0x10))(*param_1,param_2,param_3);
  if ((int)uVar3 < 0) {
    return uVar3;
  }
  uVar3 = fn_82C10F40(param_1[0x8e],param_2,&iStack_4c);
  if ((int)uVar3 < 0) {
    return uVar3;
  }
  uVar3 = fn_82C10F40(param_1[0x8e],param_3,&iStack_50);
  if (((uVar3 & 0xffffffff) != 0x80500016) && ((int)uVar3 < 0)) {
    return uVar3;
  }
  if ((iStack_50 == 0) && (uVar3 = fn_82C08290(param_1,param_3,param_4), (int)uVar3 < 0)) {
    return uVar3;
  }
  uVar3 = fn_82C10F40(param_1[0x8e],param_3,&iStack_50);
  if ((int)uVar3 < 0) {
    return uVar3;
  }
  uVar2 = *(uint *)(iStack_4c + 4);
  if ((((uVar2 == 2) || (uVar2 == 0)) || (*(int *)(iStack_50 + 4) == 3)) ||
     (*(int *)(iStack_50 + 4) == 1)) {
LAB_82c08770:
    uVar3 = 0xffffffff805000a0;
  }
  else {
    if (uVar2 < 4) {
      if (uVar2 == 1) {
        *(undefined4 *)(iStack_4c + 4) = 2;
        *(undefined4 *)(iStack_4c + 0x10) = 1;
        *(char *)(iStack_4c + 0x14) = (char)param_3;
      }
      else {
        if ((uVar2 == 2) || (uVar2 == 0)) goto LAB_82c08770;
        *(undefined4 *)(iStack_4c + 4) = 0;
        uVar3 = fn_82C10F40(param_1[0x8e],*(undefined1 *)(iStack_4c + 0x14),aiStack_48);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        *(undefined4 *)(aiStack_48[0] + 4) = 2;
        *(undefined4 *)(aiStack_48[0] + 0x10) = 1;
        *(char *)(aiStack_48[0] + 0x14) = (char)param_3;
        bVar1 = *(byte *)(iStack_4c + 0x14);
        *(undefined4 *)(iStack_4c + 0x10) = 0;
        *(undefined1 *)(iStack_4c + 0x14) = 0;
        *(undefined4 *)(iStack_4c + 0x18) = 0;
        uVar3 = fn_82C06C18(param_1,param_2);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        iStack_4c = 0;
        param_2 = (ulonglong)bVar1;
      }
      uVar2 = *(uint *)(iStack_50 + 4);
      if (uVar2 < 4) {
        if (uVar2 != 1) {
          if (uVar2 == 2) {
            uVar3 = fn_82C06C18(param_1,param_3);
            if ((int)uVar3 < 0) {
              return uVar3;
            }
            iStack_50 = 0;
            uVar3 = fn_82C08290(param_1,param_3,param_4);
            if ((int)uVar3 < 0) {
              return uVar3;
            }
            uVar3 = fn_82C10F40(param_1[0x8e],param_3,&iStack_50);
            if ((int)uVar3 < 0) {
              return uVar3;
            }
            *(undefined4 *)(iStack_50 + 4) = 1;
            *(undefined4 *)(iStack_50 + 0x10) = 0;
            *(undefined1 *)(iStack_50 + 0x14) = 0;
            *(undefined4 *)(iStack_50 + 0x18) = 0;
            return uVar3;
          }
          if (uVar2 == 0) {
            *(undefined4 *)(iStack_50 + 4) = 3;
            *(undefined4 *)(iStack_50 + 0x10) = 1;
            *(char *)(iStack_50 + 0x14) = (char)param_2;
            return uVar3;
          }
        }
        goto LAB_82c08770;
      }
    }
    uVar3 = 0xffffffff80004005;
  }
  return uVar3;
}

