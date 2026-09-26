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
extern unsigned int *auStack_60;
extern unsigned int *auStack_6c;
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E7E7E0();
extern int fn_82E7F0F8();
extern int fn_82E7F108();
extern int fn_82E7F6C0();
extern int fn_82E80530();
extern int fn_82EEE588();
extern int fn_82EEE8D8();
extern unsigned int uStack_70;


longlong fn_82E7BD90(int param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  ushort uVar2;
  ulonglong uVar3;
  ushort uStack_70;
  short sStack_6e;
  ushort auStack_6c [6];
  undefined1 auStack_60 [96];
  
  auStack_6c[0] = 0;
  uStack_70 = 0;
  sStack_6e = 0;
  uVar3 = 0;
  lVar1 = fn_82EEE588(*(int *)(*(int *)(*(int *)(param_1 + 0x20) + 8) + 8) +
                          *(int *)(param_1 + 0x20) + 8,param_2,auStack_6c,1);
  if (-1 < lVar1) {
    uVar2 = 0;
    if (auStack_6c[0] != 0) {
      do {
        fn_82E7F0F8(auStack_60);
        if ((uVar3 & 0xffffffff) != 0) {
          fn_82E4FE40(uVar3);
        }
        uVar3 = 0;
        lVar1 = fn_82EEE8D8(*(int *)(*(int *)(*(int *)(param_1 + 0x20) + 8) + 8) +
                                  *(int *)(param_1 + 0x20) + 8,param_2,uVar2,0,&uStack_70,0,
                                  &sStack_6e,0);
        if (lVar1 < 0) {
LAB_82e7bf44:
          fn_82E7E7E0(auStack_60);
          break;
        }
        if (sStack_6e == 0) {
          uVar3 = fn_82E50BE8((ulonglong)uStack_70 << 1,0,0,0,0);
          if (uVar3 == 0) {
            fn_82E7E7E0(auStack_60);
            return -0x7ff8fff2;
          }
          lVar1 = fn_82EEE8D8(*(int *)(*(int *)(*(int *)(param_1 + 0x20) + 8) + 8) +
                                    *(int *)(param_1 + 0x20) + 8,param_2,uVar2,uVar3,&uStack_70,0,
                                    &sStack_6e,0);
          if (((lVar1 < 0) ||
              (lVar1 = fn_82E7F108(auStack_60,0x1f,uVar3,(ulonglong)uStack_70 << 1), lVar1 < 0
              )) || (lVar1 = fn_82E80530(param_3,auStack_60), lVar1 < 0)) goto LAB_82e7bf44;
        }
        fn_82E7E7E0(auStack_60);
        uVar2 = uVar2 + 1;
      } while (uVar2 < auStack_6c[0]);
    }
    if (-1 < (int)lVar1) {
      lVar1 = fn_82E7F6C0(param_3);
    }
    if ((uVar3 & 0xffffffff) != 0) {
      fn_82E4FE40(uVar3);
    }
  }
  return lVar1;
}

