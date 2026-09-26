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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_1c;
extern int fn_829548C8();
extern int fn_8295D0A8();
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


undefined8 fn_8295EF88(int *param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 auStack_1c [3];
  
  uVar1 = fn_8295D0A8(param_1,1);
  if ((-1 < (int)uVar1) &&
     (uVar1 = (**(code **)(*param_1 + 0x140))
                        (param_1,*(undefined4 *)(**(int **)(param_1[0x41] + 0x10) * 4 + param_1[5]),
                         &uStack_30,auStack_1c,&uStack_20), -1 < (int)uVar1)) {
    uVar1 = (**(code **)(*param_1 + 0x144))
                      (param_1,*(undefined4 *)(param_1[0x41] + 0x10),
                       *(undefined4 *)(param_1[0x41] + 0xc),&uStack_2c,uStack_20);
    if ((-1 < (int)uVar1) &&
       ((uVar1 = (**(code **)(*param_1 + 0x138))(param_1,uStack_30,uStack_2c,auStack_1c[0]),
        -1 < (int)uVar1 &&
        (uVar1 = (**(code **)(*param_1 + 0x148))
                           (param_1,*(undefined4 *)(**(int **)(param_1[0x41] + 8) * 4 + param_1[5]),
                            &uStack_30,&uStack_24), -1 < (int)uVar1)))) {
      uVar1 = (**(code **)(*param_1 + 0x14c))
                        (param_1,*(undefined4 *)(param_1[0x41] + 8),
                         *(undefined4 *)(param_1[0x41] + 0xc),uStack_2c,&uStack_28);
      if (-1 < (int)uVar1) {
        uVar2 = (ulonglong)uStack_30;
        if ((uStack_30 & 0xf000000) == 0xb000000) {
          uStack_28 = uStack_28 | 0xc000000;
          uVar2 = (CONCAT44(uStack_30,uStack_30) & 0xfffffffffcffffff) << 0x20 |
                  (ulonglong)uStack_30 & 0xf4ffffff;
        }
        else {
          uStack_28 = uStack_28 | 0x1000000;
        }
        uVar1 = (**(code **)(*param_1 + 0x13c))(param_1,uVar2,uStack_28,uStack_24);
        if (((-1 < (int)uVar1) &&
            (uVar1 = (**(code **)(*param_1 + 0x134))(param_1), -1 < (int)uVar1)) &&
           (uVar1 = fn_829548C8(param_1), -1 < (int)uVar1)) {
          uVar1 = 0;
        }
      }
    }
  }
  return uVar1;
}

