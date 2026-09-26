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
extern int fn_82C10B28();
extern int fn_82C27898();
extern int fn_82C27A68();
extern int fn_82C280E8();
extern int fn_82C28608();
extern int fn_82C297F8();
extern unsigned int iStack_4c;


/* WARNING: Type propagation algorithm not settling */

undefined8 fn_82C28858(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 *puStack_50;
  int iStack_4c;
  int aiStack_48 [18];
  
  iVar1 = *(int *)(param_1 + 0x2c);
  aiStack_48[0] = 0;
  puStack_50 = (undefined4 *)0x0;
  aiStack_48[2] = 0;
  iStack_4c = 0;
  aiStack_48[1] = 0;
  uVar4 = fn_82C27A68(param_1,param_2,aiStack_48);
  if (-1 < (int)uVar4) {
    if (aiStack_48[0] == 0) {
      uVar4 = 0xffffffff80500009;
    }
    else {
      if (*(int *)(param_2 + 0x1c) != 0) {
        do {
          uVar4 = fn_82C28608(param_1,param_2,aiStack_48 + 2,aiStack_48 + 1);
          if ((int)uVar4 < 0) {
            return uVar4;
          }
        } while ((int)uVar4 != 0x500001);
      }
      uVar4 = fn_82C280E8(param_1,*(undefined8 *)(param_2 + 0x10),&puStack_50,&iStack_4c);
      if (-1 < (int)uVar4) {
        if (iStack_4c == 0) {
          iStack_4c = 0;
          puStack_50 = (undefined4 *)0x0;
          uVar4 = fn_82C297F8(param_1);
          if ((int)uVar4 < 0) {
            return uVar4;
          }
        }
        puStack_50[1] = puStack_50[1] + -1;
        if (iStack_4c == 0) {
          uVar4 = 0xffffffff80500008;
        }
        else {
          uVar4 = fn_82C27898(param_1,param_2);
          if (-1 < (int)uVar4) {
            iVar2 = *(int *)(param_1 + 0x2c);
            uVar4 = 0;
            puVar3 = *(undefined4 **)(iVar2 + 0x94);
            if (*(undefined4 **)(iVar2 + 0x94) == (undefined4 *)0x0) {
              *(undefined8 *)(iVar1 + 0x30) = 0;
              *(undefined4 *)(iVar1 + 0x38) = 0;
            }
            else {
              do {
                do {
                  puStack_50 = puVar3;
                  if (puStack_50 == (undefined4 *)0x0) {
                    if ((int)uVar4 < 0) {
                      return uVar4;
                    }
                    *(undefined8 *)(iVar1 + 0x30) = 0;
                    *(undefined4 *)(iVar1 + 0x38) = 0;
                    return uVar4;
                  }
                  puVar3 = (undefined4 *)puStack_50[2];
                } while (puStack_50[1] != 1);
                uVar4 = (**(code **)(*(int *)(iVar2 + 0x4c) + 8))
                                  (*(int *)(iVar2 + 0x4c),*puStack_50);
                if ((int)uVar4 < 0) {
                  return uVar4;
                }
                if (puStack_50 == *(undefined4 **)(iVar2 + 0x94)) {
                  *(undefined4 *)(iVar2 + 0x94) = puStack_50[2];
                }
                if (puStack_50[3] != 0) {
                  *(undefined4 *)(puStack_50[3] + 8) = puStack_50[2];
                }
                if (puStack_50[2] != 0) {
                  *(undefined4 *)(puStack_50[2] + 0xc) = puStack_50[3];
                }
                uVar4 = fn_82C10B28(*(undefined4 *)(iVar2 + 0x48),0x1d,&puStack_50);
              } while (-1 < (int)uVar4);
            }
          }
        }
      }
    }
  }
  return uVar4;
}

