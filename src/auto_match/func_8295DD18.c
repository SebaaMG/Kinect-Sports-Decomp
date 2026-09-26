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
extern int fn_82963318();
extern unsigned int uStack_30;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


undefined8 fn_8295DD18(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int *piStack_40;
  int *piStack_3c;
  int *piStack_38;
  int *piStack_34;
  undefined4 uStack_30;
  undefined4 auStack_2c [11];
  
  puVar1 = (uint *)param_1[0x41];
  uVar2 = puVar1[3];
  uVar4 = *puVar1 & 0xfffff;
  fn_82963318(puVar1,0,&piStack_3c);
  fn_82963318(param_1[0x41],1,&piStack_40);
  fn_82963318(param_1[0x41],2,&piStack_38);
  fn_82963318(param_1[0x41],3,&piStack_34);
  piVar3 = *(int **)(param_1[0x41] + 0x10);
  if ((((piStack_40 == (int *)0x0) || (piStack_3c == (int *)0x0)) || (piStack_38 == (int *)0x0)) ||
     (piStack_34 == (int *)0x0)) {
    uVar5 = 0xffffffff80004005;
  }
  else {
    uVar5 = (**(code **)(*param_1 + 0x130))(param_1,0x5d);
    uVar5 = fn_8295D0A8(param_1,uVar5);
    if (-1 < (int)uVar5) {
      uVar5 = (**(code **)(*param_1 + 0x140))
                        (param_1,*(undefined4 *)(*piVar3 * 4 + param_1[5]),&uStack_50,auStack_2c,
                         &uStack_30);
      if (-1 < (int)uVar5) {
        uVar5 = (**(code **)(*param_1 + 0x144))(param_1,piVar3,uVar2,&uStack_44,uStack_30);
        if (((-1 < (int)uVar5) &&
            (uVar5 = (**(code **)(*param_1 + 0x138))(param_1,uStack_50,uStack_44,auStack_2c[0]),
            -1 < (int)uVar5)) &&
           (uVar5 = (**(code **)(*param_1 + 0x148))
                              (param_1,*(undefined4 *)(*piStack_40 * 4 + param_1[5]),&uStack_50,
                               &uStack_4c), -1 < (int)uVar5)) {
          uVar5 = (**(code **)(*param_1 + 0x14c))(param_1,piStack_40,uVar4,uStack_44,&uStack_48);
          if (((-1 < (int)uVar5) &&
              (uVar5 = (**(code **)(*param_1 + 0x13c))(param_1,uStack_50,uStack_48,uStack_4c),
              -1 < (int)uVar5)) &&
             (uVar5 = (**(code **)(*param_1 + 0x148))
                                (param_1,*(undefined4 *)(*piStack_3c * 4 + param_1[5]),&uStack_50,
                                 &uStack_4c), -1 < (int)uVar5)) {
            uVar5 = (**(code **)(*param_1 + 0x14c))(param_1,piStack_3c,uVar4,uStack_44,&uStack_48);
            if (-1 < (int)uVar5) {
              uVar5 = (**(code **)(*param_1 + 0x13c))(param_1,uStack_50,uStack_48,uStack_4c);
              if ((-1 < (int)uVar5) &&
                 (uVar5 = (**(code **)(*param_1 + 0x148))
                                    (param_1,*(undefined4 *)(*piStack_38 * 4 + param_1[5]),
                                     &uStack_50,&uStack_4c), -1 < (int)uVar5)) {
                uVar5 = (**(code **)(*param_1 + 0x14c))
                                  (param_1,piStack_38,uVar4,uStack_44,&uStack_48);
                if ((-1 < (int)uVar5) &&
                   ((uVar5 = (**(code **)(*param_1 + 0x13c))(param_1,uStack_50,uStack_48,uStack_4c),
                    -1 < (int)uVar5 &&
                    (uVar5 = (**(code **)(*param_1 + 0x148))
                                       (param_1,*(undefined4 *)(*piStack_34 * 4 + param_1[5]),
                                        &uStack_50,&uStack_4c), -1 < (int)uVar5)))) {
                  uVar5 = (**(code **)(*param_1 + 0x14c))
                                    (param_1,piStack_34,uVar4,uStack_44,&uStack_48);
                  if ((-1 < (int)uVar5) &&
                     (((uVar5 = (**(code **)(*param_1 + 0x13c))
                                          (param_1,uStack_50,uStack_48,uStack_4c), -1 < (int)uVar5
                       && (uVar5 = (**(code **)(*param_1 + 0x134))(param_1), -1 < (int)uVar5)) &&
                      (uVar5 = fn_829548C8(param_1), -1 < (int)uVar5)))) {
                    uVar5 = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar5;
}

