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
extern unsigned int iStack_40;


undefined8 fn_82C245B0(int param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  int iStack_40;
  int aiStack_3c [15];
  
  iStack_40 = 0;
  aiStack_3c[0] = 0;
  if (param_1 == 0) {
    uVar3 = 0xffffffff80070057;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1c);
    uVar3 = fn_82C10F40(*(undefined4 *)(iVar1 + 0x94),param_2,&iStack_40);
    if (-1 < (int)uVar3) {
      if ((*(int *)(iStack_40 + 4) == 2) && (*(int *)(iStack_40 + 0x4c) != 0)) {
        *(undefined4 *)(iStack_40 + 4) = 0;
        *(undefined4 *)(iStack_40 + 8) = 0;
        *(undefined4 *)(iStack_40 + 0x10) = 0;
        *(undefined4 *)(iStack_40 + 0x14) = 0;
        *(undefined4 *)(iStack_40 + 0x1c) = 0;
        *(undefined1 *)(iStack_40 + 0x20) = 0;
        *(undefined4 *)(iStack_40 + 0x24) = 0;
        *(undefined4 *)(iStack_40 + 0x28) = 0;
        *(undefined4 *)(iStack_40 + 0x4c) = 1;
      }
      uVar2 = *(uint *)(iStack_40 + 4);
      if (uVar2 < 4) {
        if ((uVar2 == 0) || (uVar2 == 1)) {
          *(int *)(iStack_40 + 4) = param_3;
          *(undefined4 *)(iStack_40 + 0x1c) = 0;
        }
        else {
          if (uVar2 == 2) {
            return 0xffffffff805000a1;
          }
          uVar3 = fn_82C10F40(*(undefined4 *)(iVar1 + 0x94),*(undefined1 *)(iStack_40 + 0x20),
                               aiStack_3c);
          if ((int)uVar3 < 0) {
            return uVar3;
          }
          if (param_3 == 0) {
            *(undefined4 *)(iStack_40 + 4) = 0;
            *(undefined4 *)(aiStack_3c[0] + 4) = 0;
            *(undefined4 *)(aiStack_3c[0] + 0x1c) = 0;
            *(undefined1 *)(aiStack_3c[0] + 0x20) = 0;
            *(undefined4 *)(aiStack_3c[0] + 0x24) = 0;
            *(undefined4 *)(iStack_40 + 0x1c) = 0;
            *(undefined1 *)(iStack_40 + 0x20) = 0;
            *(undefined4 *)(iStack_40 + 0x24) = 0;
          }
        }
        fn_82C24220(param_1,param_2,*(undefined4 *)(iStack_40 + 4));
      }
      else {
        uVar3 = 0xffffffff80004005;
      }
    }
  }
  return uVar3;
}

