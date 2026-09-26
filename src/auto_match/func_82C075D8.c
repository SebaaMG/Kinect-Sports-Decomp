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
extern unsigned int *auStack_70;
extern int fn_82C10F40();
extern int fn_82C10F68();
extern int fn_82C10FD0();
extern int fn_82C11038();
extern int fn_82C113F8();
extern int fn_82F68CC0();
extern unsigned int iStack_6c;


ulonglong fn_82C075D8(int param_1,int param_2,undefined4 *param_3,int *param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_70 [4];
  int iStack_6c;
  undefined1 *puStack_68;
  undefined4 *puStack_64;
  longlong lStack_60;
  longlong alStack_58 [11];
  
  puStack_68 = (undefined1 *)0x0;
  lStack_60 = 0;
  lVar1 = 0x7ffffffffffffff;
  alStack_58[0] = 0;
  iStack_6c = 0;
  auStack_70[0] = 0;
  lVar2 = 0;
  puStack_64 = (undefined4 *)0x0;
  if (*param_4 != 0) {
    return 0;
  }
  if (param_2 < 0xa0001) {
    if (param_2 == 0xa0000) {
      return 0;
    }
    if (param_2 < 0x20001) {
      if (param_2 == 0x20000) {
        return 0;
      }
      if (param_2 == 0) {
        *(undefined4 *)(param_1 + 0x214) = 2;
        *(undefined4 *)(param_1 + 0x210) = 1;
        return -(ulonglong)(*(int *)(param_1 + 0x21c) != 0) & 0x500006;
      }
      if (param_2 == 0x10010) {
        *(undefined4 *)(param_1 + 0x214) = 4;
        return 0;
      }
    }
    else if (param_2 == 0x20030) {
      uVar3 = fn_82C10F68(*(undefined4 *)(param_1 + 0x238),&iStack_6c,&puStack_68,auStack_70);
      if ((uVar3 & 0xffffffff) == 0x80500016) {
        uVar3 = 0xffffffff805000a7;
      }
      else if (-1 < (int)uVar3) {
        *(undefined4 *)(param_1 + 0x24c) = 0;
        do {
          if ((int)uVar3 < 0) goto LAB_82c078a8;
          if (*(int *)(puStack_68 + 4) != 0) {
            uVar3 = fn_82C10F40(*(undefined4 *)(param_1 + 0x23c),*puStack_68,&puStack_64);
            if ((int)uVar3 < 0) goto LAB_82c078a8;
            uVar3 = fn_82C113F8(*puStack_64,&lStack_60,alStack_58);
            if ((uVar3 & 0xffffffff) == 0x8050000b) {
              *(undefined4 *)(param_1 + 0x24c) = 0;
            }
            else {
              if ((int)uVar3 < 0) goto LAB_82c078a8;
              if ((longlong)(ulonglong)*(uint *)(*(int *)(param_1 + 4) + 0x14) <
                  alStack_58[0] - lStack_60) {
                *(undefined4 *)(param_1 + 0x24c) = 1;
              }
              if (lStack_60 < lVar1) {
                lVar1 = lStack_60;
              }
              if (lVar2 < alStack_58[0]) {
                lVar2 = alStack_58[0];
              }
              if ((longlong)(ulonglong)*(uint *)(*(int *)(param_1 + 4) + 0x14) < lVar2 - lVar1) {
                *(undefined4 *)(param_1 + 0x24c) = 1;
              }
            }
          }
          uVar3 = fn_82C10FD0(*(undefined4 *)(param_1 + 0x238),iStack_6c,&puStack_68,auStack_70);
        } while ((uVar3 & 0xffffffff) != 0x80500016);
        fn_82C11038(*(undefined4 *)(param_1 + 0x238),iStack_6c);
        if (*(int *)(param_1 + 0x24c) == 0) {
          return 1;
        }
        if (*(int *)(param_1 + 0x278) == 0) {
          *(undefined4 *)(param_1 + 0x278) = 1;
        }
        uVar3 = 0xffffffff80500000;
      }
      goto LAB_82c078a8;
    }
  }
  else if (param_2 < 0xb0021) {
    if (param_2 == 0xb0020) {
      *param_3 = *(undefined4 *)(param_1 + 0x26c);
      return 0;
    }
    if (param_2 == 0xb0000) {
      *(undefined2 *)((int)param_3 + 2) = *(undefined2 *)(param_1 + 0x272);
      *(undefined1 *)((int)param_3 + 1) = *(undefined1 *)(param_1 + 0x275);
      *(undefined1 *)param_3 = *(undefined1 *)(param_1 + 0x274);
      return 0;
    }
    if (param_2 == 0xb0010) {
      *(undefined2 *)param_3 = *(undefined2 *)(param_1 + 0x270);
      return 0;
    }
  }
  else if (param_2 == 0xb0030) {
    fn_82F68CC0(param_3,*(undefined4 *)(param_1 + 0x268),*(undefined4 *)(param_1 + 0x26c));
    return 0;
  }
  uVar3 = 0xffffffff805000b2;
  if (param_2 != 0x20030) {
    return 0xffffffff805000b2;
  }
LAB_82c078a8:
  if ((*(int *)(param_1 + 0x238) != 0) && (iStack_6c != 0)) {
    fn_82C11038();
  }
  return uVar3;
}

