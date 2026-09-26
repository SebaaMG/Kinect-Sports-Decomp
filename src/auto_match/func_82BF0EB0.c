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
extern int fn_82BE5240();
extern int fn_82BE6590();
extern int fn_82BE66A0();
extern int fn_82BEB9B8();
extern int fn_82BF8AB8();
extern int fn_82BF8BD0();


undefined8 fn_82BF0EB0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  
  if (*(int *)(param_1 + 0x10) == 0x17) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(iVar1 + 0x28);
  }
  if (iVar7 == 0) {
    lVar3 = 0x25d;
  }
  else {
    if (iVar1 == 0) {
      pcVar8 = (char *)0x0;
    }
    else {
      pcVar8 = *(char **)(iVar1 + 0x2c);
    }
    if ((pcVar8 == (char *)0x0) || (*pcVar8 == '\0')) {
      lVar3 = 0x25b;
    }
    else {
      if (*(int *)(param_1 + 0x6c) != 0) {
        iVar1 = thunk_FUN_82be5550(0x58);
        if (iVar1 == 0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          puVar2 = (undefined4 *)fn_82BF8AB8();
        }
        if (puVar2 == (undefined4 *)0x0) {
          *(undefined4 *)(param_1 + 0x10) = 0;
          lVar3 = 0x65;
          uVar4 = 0xffffffff820eb4a8;
        }
        else {
          iVar1 = *(int *)(param_1 + 0x34);
          if (iVar1 == 0) {
            uVar6 = 0;
            uVar5 = 0;
          }
          else {
            uVar6 = *(undefined4 *)(iVar1 + 0x28);
            uVar5 = *(undefined4 *)(iVar1 + 0x2c);
          }
          iVar1 = fn_82BF8BD0(puVar2,param_1,uVar5,*(undefined4 *)(param_1 + 0x6c),uVar6);
          if (iVar1 == 0) {
            *(undefined4 *)(param_1 + 0x10) = 0;
            (**(code **)*puVar2)(puVar2,1);
            lVar3 = 0x452;
            uVar4 = 0xffffffff820eb47c;
          }
          else {
            lVar3 = fn_82BE6590(puVar2);
            if (lVar3 == 0) {
              lVar3 = fn_82BEB9B8(param_1,puVar2);
              if (lVar3 == 0) {
                *(undefined4 *)(param_1 + 0x10) = 0x16;
                return 0;
              }
              *(undefined4 *)(param_1 + 0x10) = 0;
              fn_82BE66A0(puVar2);
              (**(code **)*puVar2)(puVar2,1);
              uVar4 = 0xffffffff820eb410;
            }
            else {
              *(undefined4 *)(param_1 + 0x10) = 0;
              (**(code **)*puVar2)(puVar2,1);
              uVar4 = 0xffffffff820eb450;
            }
          }
        }
        goto LAB_82bf0f00;
      }
      lVar3 = 0x25c;
    }
  }
  uVar4 = 0xffffffff82196582;
LAB_82bf0f00:
  uVar4 = fn_82BE5240(param_1,lVar3,uVar4);
  return uVar4;
}

