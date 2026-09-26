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
extern unsigned int *auStack_28;
extern int fn_829548C8();
extern int fn_8295D0A8();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


undefined8 fn_829A1138(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [40];
  
  uVar1 = *(uint *)param_1[0x41];
  uVar4 = fn_8295D0A8(param_1,0x42);
  if ((-1 < (int)uVar4) &&
     (uVar4 = (**(code **)(*param_1 + 0x140))
                        (param_1,*(undefined4 *)(**(int **)(param_1[0x41] + 0x10) * 4 + param_1[5]),
                         &uStack_30,0,0), -1 < (int)uVar4)) {
    uVar4 = (**(code **)(*param_1 + 0x138))(param_1,uStack_30,0xf0000,0);
    if (-1 < (int)uVar4) {
      iVar3 = (uVar1 & 0xfffff) * 4;
      iVar2 = *(int *)(param_1[0x41] + 8);
      uVar4 = (**(code **)(*param_1 + 0x148))
                        (param_1,*(undefined4 *)(*(int *)(iVar3 + iVar2) * 4 + param_1[5]),
                         &uStack_30,&uStack_2c);
      if (-1 < (int)uVar4) {
        uVar4 = (**(code **)(*param_1 + 0x14c))
                          (param_1,iVar3 + iVar2,uVar1 & 0xfffff,0xf0000,auStack_28);
        if ((-1 < (int)uVar4) &&
           (uVar4 = (**(code **)(*param_1 + 0x13c))(param_1,uStack_30,0xaf40000,uStack_2c),
           -1 < (int)uVar4)) {
          uVar4 = (**(code **)(*param_1 + 0x134))(param_1);
          if ((-1 < (int)uVar4) && (uVar4 = fn_829548C8(param_1), -1 < (int)uVar4)) {
            uVar4 = 0;
          }
        }
      }
    }
  }
  return uVar4;
}

