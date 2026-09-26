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
extern unsigned int *auStack_2c;
extern int fn_829548C8();
extern int fn_8295D0A8();
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


undefined8 fn_8295F6B0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 auStack_2c [11];
  
  uVar4 = 0;
  uVar1 = *(uint *)param_1[0x41];
  uVar5 = (ulonglong)uVar1;
  uVar2 = uVar1 & 0xfffff;
  if (uVar5 == 0x70500003) {
    uVar4 = 0x18;
  }
  else if (uVar5 - 0x70600003 == 0) {
    uVar4 = 0x17;
  }
  else if ((uVar5 - 0x70600003 & 0xffffffff) == 1) {
    uVar4 = 0x15;
  }
  else if ((uVar5 - 0x70700003 & 0xffffffff) == 0) {
    uVar4 = 0x16;
  }
  else if ((uVar5 - 0x70700003 & 0xffffffff) == 1) {
    uVar4 = 0x14;
  }
  uVar4 = fn_8295D0A8(param_1,uVar4);
  if ((-1 < (int)uVar4) &&
     (uVar4 = (**(code **)(*param_1 + 0x140))
                        (param_1,*(undefined4 *)(**(int **)(param_1[0x41] + 0x10) * 4 + param_1[5]),
                         &uStack_3c,auStack_2c,&uStack_30), -1 < (int)uVar4)) {
    uVar4 = (**(code **)(*param_1 + 0x144))
                      (param_1,*(undefined4 *)(param_1[0x41] + 0x10),
                       *(undefined4 *)(param_1[0x41] + 0xc),&uStack_40,uStack_30);
    if ((-1 < (int)uVar4) &&
       (uVar4 = (**(code **)(*param_1 + 0x138))(param_1,uStack_3c,uStack_40,auStack_2c[0]),
       -1 < (int)uVar4)) {
      uStack_40 = 0x70000;
      if (uVar2 != 3) {
        uStack_40 = 0xf0000;
      }
      uVar4 = (**(code **)(*param_1 + 0x148))
                        (param_1,*(undefined4 *)(**(int **)(param_1[0x41] + 8) * 4 + param_1[5]),
                         &uStack_3c,&uStack_38);
      if ((-1 < (int)uVar4) &&
         (uVar4 = (**(code **)(*param_1 + 0x14c))
                            (param_1,*(undefined4 *)(param_1[0x41] + 8),uVar2,uStack_40,&uStack_34),
         -1 < (int)uVar4)) {
        uVar4 = (**(code **)(*param_1 + 0x13c))(param_1,uStack_3c,uStack_34,uStack_38);
        if (-1 < (int)uVar4) {
          iVar3 = (uVar1 & 0xfffff) * 4;
          uVar4 = (**(code **)(*param_1 + 0x148))
                            (param_1,*(undefined4 *)
                                      (*(int *)(*(int *)(param_1[0x41] + 8) + iVar3) * 4 +
                                      param_1[5]),&uStack_3c,&uStack_38);
          if ((-1 < (int)uVar4) &&
             (uVar4 = (**(code **)(*param_1 + 0x14c))
                                (param_1,*(int *)(param_1[0x41] + 8) + iVar3,uVar2,uStack_40,
                                 &uStack_34), -1 < (int)uVar4)) {
            uVar4 = (**(code **)(*param_1 + 0x13c))(param_1,uStack_3c,uStack_34,uStack_38);
            if ((-1 < (int)uVar4) &&
               ((uVar4 = (**(code **)(*param_1 + 0x134))(param_1), -1 < (int)uVar4 &&
                (uVar4 = fn_829548C8(param_1), -1 < (int)uVar4)))) {
              uVar4 = 0;
            }
          }
        }
      }
    }
  }
  return uVar4;
}

