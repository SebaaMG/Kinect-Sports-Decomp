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
extern unsigned int *auStack_68;
extern int fn_828F0170();
extern int fn_82930318();
extern int fn_82930458();
extern int fn_829304E0();
extern int fn_82931D88();
extern int fn_82933088();
extern int fn_829334D8();
extern int fn_82980C18();
extern int fn_82983380();
extern int fn_8298DDE0();
extern unsigned int iStack_70;
extern unsigned int uStack_64;


int fn_8298EA48(undefined8 param_1,int param_2,ulonglong param_3,undefined8 param_4,
                 undefined4 param_5,longlong param_6)

{
  int iVar2;
  ulonglong uVar1;
  int iVar3;
  int iVar4;
  int iVar5;
  int iStack_70;
  undefined1 auStack_68 [4];
  uint uStack_64;
  
  if ((param_2 != 0) && ((param_3 & 0xffffffff) != 0)) {
    iVar5 = param_2 + 0x10;
    iVar2 = fn_828F0170(*(undefined4 *)(param_2 + 0x18),2,auStack_68);
    if (iVar2 < 0) {
      fn_82980C18(param_1,iVar5,0xbe1,0xffffffff8204f780,*(undefined4 *)(param_2 + 0x18));
    }
    else {
      if ((uStack_64 & 0xffff0000) == 0xfffe0000) {
        iStack_70 = (-(uint)(param_6 != 0) & 3) + 0x2b;
      }
      else if ((uStack_64 & 0xffff0000) == 0xffff0000) {
        iStack_70 = (-(uint)(param_6 != 0) & 3) + 0x2a;
      }
      uVar1 = fn_82930318(0x50);
      if ((uVar1 & 0xffffffff) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = fn_82933088(uVar1,0,0x22,0,0,1,iVar5);
      }
      if (iVar2 != 0) {
        uVar1 = fn_82930318(0x28);
        if ((uVar1 & 0xffffffff) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = fn_82931D88(uVar1,3,iStack_70,0,1,1,0x200);
        }
        *(int *)(iVar2 + 0x10) = iVar3;
        if (iVar3 != 0) {
          iVar3 = fn_82930458(param_2);
          *(int *)(iVar2 + 0x20) = iVar3;
          if (iVar3 != 0) {
            iVar3 = fn_8298DDE0(param_1,param_3,param_4,1);
            *(int *)(iVar2 + 0x24) = iVar3;
            if (iVar3 != 0) {
              *(undefined4 *)(iVar2 + 0x2c) = param_5;
              uVar1 = fn_82930318(0x50);
              if ((uVar1 & 0xffffffff) == 0) {
                iVar3 = 0;
              }
              else {
                iVar3 = fn_82933088(uVar1,0,0,0,0,1,iVar5);
              }
              if (iVar3 != 0) {
                uVar1 = fn_82930318(0x28);
                if ((uVar1 & 0xffffffff) == 0) {
                  iVar4 = 0;
                }
                else {
                  iVar4 = fn_82931D88(uVar1,3,iStack_70,0,1,1,0x200);
                }
                *(int *)(iVar3 + 0x10) = iVar4;
                if (iVar4 != 0) {
                  uVar1 = fn_82930318(0x14);
                  if ((uVar1 & 0xffffffff) == 0) {
                    iVar4 = 0;
                  }
                  else {
                    iVar4 = fn_829304E0(uVar1,0,0,0xffffffff8204e390);
                  }
                  *(int *)(iVar3 + 0x20) = iVar4;
                  if (iVar4 != 0) {
                    uVar1 = fn_82930318(0x40);
                    if ((uVar1 & 0xffffffff) == 0) {
                      iVar2 = 0;
                    }
                    else {
                      iVar2 = fn_829334D8(uVar1,4,iVar2,iVar5);
                    }
                    *(int *)(*(int *)(iVar3 + 0x20) + 8) = iVar2;
                    if (iVar2 != 0) {
                      fn_82983380(param_1,iVar3);
                      return iVar3;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

