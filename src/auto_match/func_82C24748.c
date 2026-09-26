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
extern int fn_82C10F40();
extern int fn_82C24220();


undefined8 fn_82C24748(int param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  int aiStack_48 [18];
  
  iVar1 = *(int *)(param_1 + 0x1c);
  puStack_50 = (undefined1 *)0x0;
  puStack_4c = (undefined1 *)0x0;
  aiStack_48[0] = 0;
  if (((((iVar1 == 0) || (uVar4 = param_2 & 0xff, 0x7f < uVar4)) || (uVar4 == 0)) ||
      ((uVar5 = param_3 & 0xff, 0x7f < uVar5 || (uVar5 == 0)))) || (uVar4 == uVar5)) {
    return 0xffffffff80070057;
  }
  uVar6 = fn_82C10F40(*(undefined4 *)(iVar1 + 0x94),param_3,&puStack_4c);
  if ((int)uVar6 < 0) {
    return uVar6;
  }
  uVar6 = fn_82C10F40(*(undefined4 *)(iVar1 + 0x94),param_2,&puStack_50);
  if ((int)uVar6 < 0) {
    return uVar6;
  }
  if (((*(int *)(puStack_50 + 4) == 2) || (*(int *)(puStack_50 + 4) == 0)) ||
     ((iVar2 = *(int *)(puStack_4c + 4), iVar2 == 3 || (iVar2 == 1)))) {
LAB_82c24934:
    uVar6 = 0xffffffff805000a0;
  }
  else {
    if ((iVar2 == 2) && (*(int *)(puStack_4c + 0x4c) != 0)) {
      *(undefined4 *)(puStack_4c + 4) = 0;
      *(undefined4 *)(puStack_4c + 8) = 0;
      *(undefined4 *)(puStack_4c + 0x10) = 0;
      *(undefined4 *)(puStack_4c + 0x14) = 0;
      *(undefined4 *)(puStack_4c + 0x1c) = 0;
      puStack_4c[0x20] = 0;
      *(undefined4 *)(puStack_4c + 0x24) = 0;
      *(undefined4 *)(puStack_4c + 0x28) = 0;
      *(undefined4 *)(puStack_4c + 0x4c) = 1;
      fn_82C24220(param_1,*puStack_4c,0);
    }
    if ((*(int *)(puStack_50 + 4) == 2) && (*(int *)(puStack_50 + 0x4c) != 0)) {
      *(undefined4 *)(puStack_50 + 4) = 0;
      *(undefined4 *)(puStack_50 + 8) = 0;
      *(undefined4 *)(puStack_50 + 0x10) = 0;
      *(undefined4 *)(puStack_50 + 0x14) = 0;
      *(undefined4 *)(puStack_50 + 0x1c) = 0;
      puStack_50[0x20] = 0;
      *(undefined4 *)(puStack_50 + 0x24) = 0;
      *(undefined4 *)(puStack_50 + 0x28) = 0;
      *(undefined4 *)(puStack_50 + 0x4c) = 1;
      fn_82C24220(param_1,*puStack_50,0);
    }
    uVar3 = *(uint *)(puStack_50 + 4);
    if (uVar3 < 4) {
      if (uVar3 == 1) {
        *(undefined4 *)(puStack_50 + 4) = 2;
        *(undefined4 *)(puStack_50 + 0x1c) = 1;
        puStack_50[0x20] = (char)param_3;
      }
      else {
        if ((uVar3 == 2) || (uVar3 == 0)) goto LAB_82c24934;
        *(undefined4 *)(puStack_50 + 4) = 0;
        uVar6 = fn_82C10F40(*(undefined4 *)(iVar1 + 0x94),puStack_50[0x20],aiStack_48);
        if ((int)uVar6 < 0) {
          return uVar6;
        }
        *(undefined4 *)(aiStack_48[0] + 4) = 2;
        *(undefined4 *)(aiStack_48[0] + 0x1c) = 1;
        *(char *)(aiStack_48[0] + 0x20) = (char)param_3;
        param_2 = (ulonglong)(byte)puStack_50[0x20];
        *(undefined4 *)(puStack_50 + 0x1c) = 0;
        puStack_50[0x20] = 0;
        *(undefined4 *)(puStack_50 + 0x24) = 0;
        fn_82C24220(param_1,*puStack_50,0);
      }
      uVar3 = *(uint *)(puStack_4c + 4);
      if (uVar3 < 4) {
        if (uVar3 != 1) {
          if (uVar3 == 2) {
            *(undefined4 *)(puStack_4c + 4) = 1;
            *(undefined4 *)(puStack_4c + 0x1c) = 0;
            puStack_4c[0x20] = 0;
            *(undefined4 *)(puStack_4c + 0x24) = 0;
            fn_82C24220(param_1,*puStack_4c,1);
            return uVar6;
          }
          if (uVar3 == 0) {
            *(undefined4 *)(puStack_4c + 4) = 3;
            *(undefined4 *)(puStack_4c + 0x1c) = 1;
            puStack_4c[0x20] = (char)param_2;
            return uVar6;
          }
        }
        goto LAB_82c24934;
      }
    }
    uVar6 = 0xffffffff80004005;
  }
  return uVar6;
}

